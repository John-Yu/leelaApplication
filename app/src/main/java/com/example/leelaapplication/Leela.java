package com.example.leelaapplication;


import android.util.Log;

import java.util.concurrent.TimeUnit;

public class Leela {
    final String TAG = "LEELA-TEST";
    public  boolean isLoad = false;
    private stdoutListen sListener = null;
    private  boolean isThinking = false;

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    public Leela(final String weightFile) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                // TODO Auto-generated method stub
                StartEngine(weightFile);
                isLoad = true;
            }
        }).start();
    }
    public void startMonitor() {
        if(sListener != null) {
            sListener.interrupt();
        }
        sListener = new stdoutListen();
        sListener.start();
    }
    public void sendCmd(String cmd) {
        if(!isLoad) return;
        SendGTP(cmd);
    }

    public void clearBoard() {
        sendCmd("clear_board");
    }

    public void genMove(String color) {
        String cmd = "genmove " + color;
        while(isThinking) {
            try {
                TimeUnit.MILLISECONDS.sleep(4);
            }
            catch (InterruptedException e) {
                e.printStackTrace();
            }
        };
        isThinking = true;
        sendCmd(cmd);
        isThinking = false;
    }

    private class stdoutListen extends Thread {
        @Override
        public void run() {
            super.run();
            while(!isInterrupted()){
                try {
                    String sout = getStdoutFromJNI();
                    if(sout.isEmpty()) {
                        Thread.sleep(10);
                        continue;
                    }
                    Log.i(TAG,sout);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    Log.i(TAG,Thread.currentThread().getName()+"InterruptedException");
                    break;
                }
            }
        }
    }
    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
    private native String getStdoutFromJNI();
    private native int StartEngine(String weight);
    private native int SendGTP(String cmd);
}
