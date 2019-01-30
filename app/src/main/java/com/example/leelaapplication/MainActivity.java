package com.example.leelaapplication;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class MainActivity extends AppCompatActivity {
    final String TAG = "LEELA-TEST";
    private String weightFilename = "./";
    Leela leela;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        copyFile("elf-v1.gz");

        // Example of a call to a native method
        TextView tv = findViewById(R.id.sample_text);
        leela = new Leela(weightFilename);
        tv.setText(leela.stringFromJNI());
    }

    public void onStart(View v) {
        // TODO Auto-generated method stub
        Log.i(TAG, "onStart");
        leela.startMonitor();
    }
    public void onStop(View v) {
        // TODO Auto-generated method stub
        Log.i(TAG, "onStop");
        //leela.StopEngine();
    }
    public void onSend(View v) {
        // TODO Auto-generated method stub
        Log.i(TAG, "onSend");
        EditText et = findViewById(R.id.sample_text);
        String cmd = et.getText().toString();
        if(!cmd.isEmpty()) {
            leela.sendCmd(cmd);
        }
    }
    public void onClearBoard(View v) {
        // TODO Auto-generated method stub
        Log.i(TAG, "onClearBoard");
        leela.clearBoard();
    }


    private void copyFile(final String f) {
        InputStream in;
        try {
            final File of = new File(getDir("leela", MODE_PRIVATE), f);
            weightFilename = of.getAbsolutePath();
            if (of.exists()) return;

            String assetFileName = f + ".mp3";
            in = getAssets().open(assetFileName);
            int inSize = in.available();
            if (inSize <= 0) return;

            final OutputStream out = new FileOutputStream(of);

            final byte b[] = new byte[65535];
            int sz = 0;
            while ((sz = in.read(b)) > 0) {
                out.write(b, 0, sz);
            }
            of.setReadable(true);
            in.close();
            out.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }


}
