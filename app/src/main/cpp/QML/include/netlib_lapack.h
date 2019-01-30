void cbbcsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const qml_long *m, const qml_long *p, const qml_long *q, float *theta, float *phi, QML_SINGLE_COMPLEX *u1, const qml_long *ldu1, QML_SINGLE_COMPLEX *u2, const qml_long *ldu2, QML_SINGLE_COMPLEX *v1t, const qml_long *ldv1t, QML_SINGLE_COMPLEX *v2t, const qml_long *ldv2t, float *b11d, float *b11e, float *b12d, float *b12e, float *b21d, float *b21e, float *b22d, float *b22e, float *rwork, const qml_long *lrwork, qml_long *info);

void cgbbrd(const char *vect, const qml_long *m, const qml_long *n, const qml_long *ncc, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *d, float *e, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *pt, const qml_long *ldpt, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgbcon(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgbequ(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void cgbequb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void cgbrfs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgbsv(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cgbsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, char *equed, float *r, float *c, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgbtf2(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void cgbtrf(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void cgbtrs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cgebak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *scale, const qml_long *m, QML_SINGLE_COMPLEX *v, const qml_long *ldv, qml_long *info);

void cgebal(const char *job, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ilo, qml_long *ihi, float *scale, qml_long *info);

void cgebd2(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *d, float *e, QML_SINGLE_COMPLEX *tauq, QML_SINGLE_COMPLEX *taup, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgebrd(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *d, float *e, QML_SINGLE_COMPLEX *tauq, QML_SINGLE_COMPLEX *taup, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgecon(const char *norm, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgeequ(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void cgeequb(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void cgees(const char *jobvs, const char *sort, void *select, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *sdim, QML_SINGLE_COMPLEX *w, QML_SINGLE_COMPLEX *vs, const qml_long *ldvs, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_int *bwork, qml_long *info);

void cgeesx(const char *jobvs, const char *sort, void *select, const char *sense, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *sdim, QML_SINGLE_COMPLEX *w, QML_SINGLE_COMPLEX *vs, const qml_long *ldvs, float *rconde, float *rcondv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_int *bwork, qml_long *info);

void cgeev(const char *jobvl, const char *jobvr, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *w, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cgeevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *w, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, float *scale, float *abnrm, float *rconde, float *rcondv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cgehd2(const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgehrd(const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgejsv(const char *joba, const char *jobu, const char *jobv, const char *jobr, const char *jobt, const char *jobp, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *sva, QML_SINGLE_COMPLEX *u, const qml_long *ldu, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *cwork, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, qml_long *info);

void cgelq2(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgelqf(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgels(const char *trans, const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgelsd(const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, float *s, const float *rcond, qml_long *rank, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *iwork, qml_long *info);

void cgelss(const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, float *s, const float *rcond, qml_long *rank, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cgelsy(const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *jpvt, const float *rcond, qml_long *rank, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cgemqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *nb, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgeql2(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgeqlf(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgeqr2p(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgeqrfp(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgeqrt(const qml_long *m, const qml_long *n, const qml_long *nb, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgeqrt2(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *t, const qml_long *ldt, qml_long *info);

void cgeqrt3(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *t, const qml_long *ldt, qml_long *info);

void cgerfs(const char *trans, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgerq2(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgerqf(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgesc2(const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *rhs, qml_long *ipiv, qml_long *jpiv, float *scale);

void cgesdd(const char *jobz, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, QML_SINGLE_COMPLEX *u, const qml_long *ldu, QML_SINGLE_COMPLEX *vt, const qml_long *ldvt, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *iwork, qml_long *info);

void cgesvd(const char *jobu, const char *jobvt, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, QML_SINGLE_COMPLEX *u, const qml_long *ldu, QML_SINGLE_COMPLEX *vt, const qml_long *ldvt, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cgesvj(const char *joba, const char *jobu, const char *jobv, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *sva, const qml_long *mv, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *cwork, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *info);

void cgesvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, char *equed, float *r, float *c, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgetc2(const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *jpiv, qml_long *info);

void cggbak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *lscale, float *rscale, const qml_long *m, QML_SINGLE_COMPLEX *v, const qml_long *ldv, qml_long *info);

void cggbal(const char *job, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *ilo, qml_long *ihi, float *lscale, float *rscale, float *work, qml_long *info);

void cgges(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *sdim, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *vsl, const qml_long *ldvsl, QML_SINGLE_COMPLEX *vsr, const qml_long *ldvsr, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_int *bwork, qml_long *info);

void cgges3(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *sdim, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *vsl, const qml_long *ldvsl, QML_SINGLE_COMPLEX *vsr, const qml_long *ldvsr, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_int *bwork, qml_long *info);

void cggesx(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const char *sense, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *sdim, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *vsl, const qml_long *ldvsl, QML_SINGLE_COMPLEX *vsr, const qml_long *ldvsr, float *rconde, float *rcondv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *iwork, const qml_long *liwork, qml_int *bwork, qml_long *info);

void cggev(const char *jobvl, const char *jobvr, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cggev3(const char *jobvl, const char *jobvr, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cggevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, float *lscale, float *rscale, float *abnrm, float *bbnrm, float *rconde, float *rcondv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *iwork, qml_int *bwork, qml_long *info);

void cggglm(const qml_long *n, const qml_long *m, const qml_long *p, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *x, QML_SINGLE_COMPLEX *y, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgghd3(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgghrd(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *info);

void cgglse(const qml_long *m, const qml_long *n, const qml_long *p, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *c, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *x, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cggqrf(const qml_long *n, const qml_long *m, const qml_long *p, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *taua, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *taub, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cggrqf(const qml_long *m, const qml_long *p, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *taua, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *taub, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cggsvd3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *n, const qml_long *p, qml_long *k, qml_long *l, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, float *alpha, float *beta, QML_SINGLE_COMPLEX *u, const qml_long *ldu, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *iwork, qml_long *info);

void cggsvp3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, const float *tola, const float *tolb, qml_long *k, qml_long *l, QML_SINGLE_COMPLEX *u, const qml_long *ldu, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *q, const qml_long *ldq, qml_long *iwork, float *rwork, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgsvj0(const char *jobv, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *d, float *sva, const qml_long *mv, QML_SINGLE_COMPLEX *v, const qml_long *ldv, const float *eps, const float *sfmin, const float *tol, const qml_long *nsweep, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgsvj1(const char *jobv, const qml_long *m, const qml_long *n, const qml_long *n1, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *d, float *sva, const qml_long *mv, QML_SINGLE_COMPLEX *v, const qml_long *ldv, const float *eps, const float *sfmin, const float *tol, const qml_long *nsweep, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cgtcon(const char *norm, const qml_long *n, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *du2, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, qml_long *info);

void cgtrfs(const char *trans, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *dlf, QML_SINGLE_COMPLEX *df, QML_SINGLE_COMPLEX *duf, QML_SINGLE_COMPLEX *du2, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgtsv(const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cgtsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *dlf, QML_SINGLE_COMPLEX *df, QML_SINGLE_COMPLEX *duf, QML_SINGLE_COMPLEX *du2, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cgttrf(const qml_long *n, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *du2, qml_long *ipiv, qml_long *info);

void cgttrs(const char *trans, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *du2, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cgtts2(const qml_long *itrans, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *du2, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb);

void chbev(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chbevd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void chbevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *q, const qml_long *ldq, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void chbgst(const char *vect, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *bb, const qml_long *ldbb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chbgv(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *bb, const qml_long *ldbb, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chbgvd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *bb, const qml_long *ldbb, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void chbgvx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *bb, const qml_long *ldbb, QML_SINGLE_COMPLEX *q, const qml_long *ldq, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void chbtrd(const char *vect, const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *d, float *e, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *work, qml_long *info);

void checon(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, qml_long *info);

void checon_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, qml_long *info);

void cheequb(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, float *scond, float *amax, QML_SINGLE_COMPLEX *work, qml_long *info);

void cheev(const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *w, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cheevd(const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *w, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void cheevr(const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *isuppz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void cheevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void chegs2(const qml_long *itype, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void chegst(const qml_long *itype, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void chegv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, float *w, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void chegvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, float *w, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void chegvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void cherfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chesv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void chesv_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void chesvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void cheswapr(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, const qml_long *i1, const qml_long *i2);

void chetf2(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void chetf2_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void chetrf(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void chetrf_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void chetri(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, qml_long *info);

void chetri2(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void chetri2x(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *nb, qml_long *info);

void chetri_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, qml_long *info);

void chetrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void chetrs2(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, qml_long *info);

void chetrs_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void chfrk(const char *transr, const char *uplo, const char *trans, const qml_long *n, const qml_long *k, const float *alpha, QML_SINGLE_COMPLEX *a, const qml_long *lda, const float *beta, QML_SINGLE_COMPLEX *c);

void chgeqz(const char *job, const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *h, const qml_long *ldh, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

char chla_transtype(const qml_long *trans);

void chpcon(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, qml_long *info);

void chpev(const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chpevd(const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void chpevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void chpgst(const qml_long *itype, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *bp, qml_long *info);

void chpgv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *bp, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chpgvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *bp, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void chpgvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *bp, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void chprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *afp, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chpsv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void chpsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *afp, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void chptrd(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *d, float *e, QML_SINGLE_COMPLEX *tau, qml_long *info);

void chptrf(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, qml_long *info);

void chptri(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, QML_SINGLE_COMPLEX *work, qml_long *info);

void chptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void chsein(const char *side, const char *eigsrc, const char *initv, qml_int *select, const qml_long *n, QML_SINGLE_COMPLEX *h, const qml_long *ldh, QML_SINGLE_COMPLEX *w, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *ifaill, qml_long *ifailr, qml_long *info);

void chseqr(const char *job, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *h, const qml_long *ldh, QML_SINGLE_COMPLEX *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void clabrd(const qml_long *m, const qml_long *n, const qml_long *nb, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *d, float *e, QML_SINGLE_COMPLEX *tauq, QML_SINGLE_COMPLEX *taup, QML_SINGLE_COMPLEX *x, const qml_long *ldx, QML_SINGLE_COMPLEX *y, const qml_long *ldy);

void clacn2(const qml_long *n, QML_SINGLE_COMPLEX *v, QML_SINGLE_COMPLEX *x, float *est, qml_long *kase, qml_long *isave);

void clacon(const qml_long *n, QML_SINGLE_COMPLEX *v, QML_SINGLE_COMPLEX *x, float *est, qml_long *kase);

void clacp2(const char *uplo, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb);

void clacrm(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *b, const qml_long *ldb, QML_SINGLE_COMPLEX *c, const qml_long *ldc, float *rwork);

void clacrt(const qml_long *n, QML_SINGLE_COMPLEX *cx, const qml_long *incx, QML_SINGLE_COMPLEX *cy, const qml_long *incy, const QML_SINGLE_COMPLEX *c, const QML_SINGLE_COMPLEX *s);

void claed0(const qml_long *qsiz, const qml_long *n, float *d, float *e, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *qstore, const qml_long *ldqs, float *rwork, qml_long *iwork, qml_long *info);

void claed7(const qml_long *n, const qml_long *cutpnt, const qml_long *qsiz, const qml_long *tlvls, const qml_long *curlvl, const qml_long *curpbm, float *d, QML_SINGLE_COMPLEX *q, const qml_long *ldq, float *rho, qml_long *indxq, float *qstore, qml_long *qptr, qml_long *prmptr, qml_long *perm, qml_long *givptr, qml_long *givcol, float *givnum, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *iwork, qml_long *info);

void claed8(qml_long *k, const qml_long *n, const qml_long *qsiz, QML_SINGLE_COMPLEX *q, const qml_long *ldq, float *d, float *rho, const qml_long *cutpnt, float *z, float *dlamda, QML_SINGLE_COMPLEX *q2, const qml_long *ldq2, float *w, qml_long *indxp, qml_long *indx, qml_long *indxq, qml_long *perm, qml_long *givptr, qml_long *givcol, float *givnum, qml_long *info);

void claein(qml_int *rightv, qml_int *noinit, const qml_long *n, QML_SINGLE_COMPLEX *h, const qml_long *ldh, const QML_SINGLE_COMPLEX *w, QML_SINGLE_COMPLEX *v, QML_SINGLE_COMPLEX *b, const qml_long *ldb, float *rwork, const float *eps3, const float *smlnum, qml_long *info);

void claesy(const QML_SINGLE_COMPLEX *a, const QML_SINGLE_COMPLEX *b, const QML_SINGLE_COMPLEX *c, QML_SINGLE_COMPLEX *rt1, QML_SINGLE_COMPLEX *rt2, QML_SINGLE_COMPLEX *evscal, QML_SINGLE_COMPLEX *cs1, QML_SINGLE_COMPLEX *sn1);

void clag2z(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *sa, const qml_long *ldsa, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void cla_gbamv(const qml_long *trans, const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, const float *alpha, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *x, const qml_long *incx, const float *beta, float *y, const qml_long *incy);

float cla_gbrcond_c(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, float *c, qml_int *capply, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_gbrcond_x(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, QML_SINGLE_COMPLEX *x, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_gbrpvgrw(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *ncols, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *afb, const qml_long *ldafb);

void cla_geamv(const qml_long *trans, const qml_long *m, const qml_long *n, const float *alpha, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *x, const qml_long *incx, const float *beta, float *y, const qml_long *incy);

float cla_gercond_c(const char *trans, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, float *c, qml_int *capply, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_gercond_x(const char *trans, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *x, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_gerpvgrw(const qml_long *n, const qml_long *ncols, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf);

void clags2(qml_int *upper, const float *a1, const QML_SINGLE_COMPLEX *a2, const float *a3, const float *b1, const QML_SINGLE_COMPLEX *b2, const float *b3, float *csu, QML_SINGLE_COMPLEX *snu, float *csv, QML_SINGLE_COMPLEX *snv, float *csq, QML_SINGLE_COMPLEX *snq);

void clagtm(const char *trans, const qml_long *n, const qml_long *nrhs, const float *alpha, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du, QML_SINGLE_COMPLEX *x, const qml_long *ldx, const float *beta, QML_SINGLE_COMPLEX *b, const qml_long *ldb);

void cla_heamv(const qml_long *uplo, const qml_long *n, const float *alpha, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *x, const qml_long *incx, const float *beta, float *y, const qml_long *incy);

void clahef(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

void clahef_rook(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

float cla_hercond_c(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, float *c, qml_int *capply, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_hercond_x(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *x, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_herpvgrw(const char *uplo, const qml_long *n, const qml_long *info, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, float *work);

void clahqr(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *h, const qml_long *ldh, QML_SINGLE_COMPLEX *w, const qml_long *iloz, const qml_long *ihiz, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *info);

void clahr2(const qml_long *n, const qml_long *k, const qml_long *nb, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *y, const qml_long *ldy);

void claic1(const qml_long *job, const qml_long *j, QML_SINGLE_COMPLEX *x, const float *sest, QML_SINGLE_COMPLEX *w, const QML_SINGLE_COMPLEX *gamma, float *sestpr, QML_SINGLE_COMPLEX *s, QML_SINGLE_COMPLEX *c);

void cla_lin_berr(const qml_long *n, const qml_long *nz, const qml_long *nrhs, QML_SINGLE_COMPLEX *res, float *ayb, float *berr);

void clals0(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, const qml_long *nrhs, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *bx, const qml_long *ldbx, qml_long *perm, const qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, float *givnum, const qml_long *ldgnum, float *poles, float *difl, float *difr, float *z, const qml_long *k, const float *c, const float *s, float *rwork, qml_long *info);

void clalsa(const qml_long *icompq, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *bx, const qml_long *ldbx, float *u, const qml_long *ldu, float *vt, qml_long *k, float *difl, float *difr, float *z, float *poles, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, qml_long *perm, float *givnum, float *c, float *s, float *rwork, qml_long *iwork, qml_long *info);

void clalsd(const char *uplo, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, float *d, float *e, QML_SINGLE_COMPLEX *b, const qml_long *ldb, const float *rcond, qml_long *rank, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *iwork, qml_long *info);

float clangb(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *work);

float clangt(const char *norm, const qml_long *n, QML_SINGLE_COMPLEX *dl, QML_SINGLE_COMPLEX *d, QML_SINGLE_COMPLEX *du);

float clanhb(const char *norm, const char *uplo, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *work);

float clanhe(const char *norm, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *work);

float clanhf(const char *norm, const char *transr, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, float *work);

float clanhp(const char *norm, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *work);

float clanhs(const char *norm, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *work);

float clanht(const char *norm, const qml_long *n, float *d, QML_SINGLE_COMPLEX *e);

float clansb(const char *norm, const char *uplo, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *work);

float clansp(const char *norm, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *work);

float clansy(const char *norm, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *work);

float clantb(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *work);

float clantp(const char *norm, const char *uplo, const char *diag, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *work);

float clantr(const char *norm, const char *uplo, const char *diag, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *work);

void clapll(const qml_long *n, QML_SINGLE_COMPLEX *x, const qml_long *incx, QML_SINGLE_COMPLEX *y, const qml_long *incy, float *ssmin);

void clapmr(qml_int *forwrd, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *x, const qml_long *ldx, qml_long *k);

void clapmt(qml_int *forwrd, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *x, const qml_long *ldx, qml_long *k);

float cla_porcond_c(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, float *c, qml_int *capply, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_porcond_x(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, QML_SINGLE_COMPLEX *x, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_porpvgrw(const char *uplo, const qml_long *ncols, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, float *work);

void claqgb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *r, float *c, const float *rowcnd, const float *colcnd, const float *amax, char *equed);

void claqge(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *r, float *c, const float *rowcnd, const float *colcnd, const float *amax, char *equed);

void claqhb(const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *s, const float *scond, const float *amax, char *equed);

void claqhe(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, const float *scond, const float *amax, char *equed);

void claqhp(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *s, const float *scond, const float *amax, char *equed);

void claqr0(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *h, const qml_long *ldh, QML_SINGLE_COMPLEX *w, const qml_long *iloz, const qml_long *ihiz, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void claqr1(const qml_long *n, QML_SINGLE_COMPLEX *h, const qml_long *ldh, const QML_SINGLE_COMPLEX *s1, const QML_SINGLE_COMPLEX *s2, QML_SINGLE_COMPLEX *v);

void claqr2(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, QML_SINGLE_COMPLEX *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *ns, qml_long *nd, QML_SINGLE_COMPLEX *sh, QML_SINGLE_COMPLEX *v, const qml_long *ldv, const qml_long *nh, QML_SINGLE_COMPLEX *t, const qml_long *ldt, const qml_long *nv, QML_SINGLE_COMPLEX *wv, const qml_long *ldwv, QML_SINGLE_COMPLEX *work, const qml_long *lwork);

void claqr3(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, QML_SINGLE_COMPLEX *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *ns, qml_long *nd, QML_SINGLE_COMPLEX *sh, QML_SINGLE_COMPLEX *v, const qml_long *ldv, const qml_long *nh, QML_SINGLE_COMPLEX *t, const qml_long *ldt, const qml_long *nv, QML_SINGLE_COMPLEX *wv, const qml_long *ldwv, QML_SINGLE_COMPLEX *work, const qml_long *lwork);

void claqr4(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *h, const qml_long *ldh, QML_SINGLE_COMPLEX *w, const qml_long *iloz, const qml_long *ihiz, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void claqr5(qml_int *wantt, qml_int *wantz, const qml_long *kacc22, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nshfts, QML_SINGLE_COMPLEX *s, QML_SINGLE_COMPLEX *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *u, const qml_long *ldu, const qml_long *nv, QML_SINGLE_COMPLEX *wv, const qml_long *ldwv, const qml_long *nh, QML_SINGLE_COMPLEX *wh, const qml_long *ldwh);

void claqsb(const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *s, const float *scond, const float *amax, char *equed);

void claqsp(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *s, const float *scond, const float *amax, char *equed);

void claqsy(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, const float *scond, const float *amax, char *equed);

void clar1v(const qml_long *n, const qml_long *b1, const qml_long *bn, const float *lambda, float *d, float *l, float *ld, float *lld, const float *pivmin, const float *gaptol, QML_SINGLE_COMPLEX *z, qml_int *wantnc, qml_long *negcnt, float *ztz, float *mingma, qml_long *r, qml_long *isuppz, float *nrminv, float *resid, float *rqcorr, float *work);

void clar2v(const qml_long *n, QML_SINGLE_COMPLEX *x, QML_SINGLE_COMPLEX *y, QML_SINGLE_COMPLEX *z, const qml_long *incx, float *c, QML_SINGLE_COMPLEX *s, const qml_long *incc);

void clarcm(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *c, const qml_long *ldc, float *rwork);

void clarfgp(const qml_long *n, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *x, const qml_long *incx, QML_SINGLE_COMPLEX *tau);

void clarfx(const char *side, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *v, const QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work);

void clargv(const qml_long *n, QML_SINGLE_COMPLEX *x, const qml_long *incx, QML_SINGLE_COMPLEX *y, const qml_long *incy, float *c, const qml_long *incc);

void clarnv(const qml_long *idist, qml_long *iseed, const qml_long *n, QML_SINGLE_COMPLEX *x);

void clarrv(const qml_long *n, const float *vl, const float *vu, float *d, float *l, const float *pivmin, qml_long *isplit, const qml_long *m, const qml_long *dol, const qml_long *dou, const float *minrgp, float *rtol1, float *rtol2, float *w, float *werr, float *wgap, qml_long *iblock, qml_long *indexw, float *gers, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *isuppz, float *work, qml_long *iwork, qml_long *info);

void clarscl2(const qml_long *m, const qml_long *n, float *d, QML_SINGLE_COMPLEX *x, const qml_long *ldx);

void clartv(const qml_long *n, QML_SINGLE_COMPLEX *x, const qml_long *incx, QML_SINGLE_COMPLEX *y, const qml_long *incy, float *c, QML_SINGLE_COMPLEX *s, const qml_long *incc);

void clarz(const char *side, const qml_long *m, const qml_long *n, const qml_long *l, QML_SINGLE_COMPLEX *v, const qml_long *incv, const QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work);

void clarzb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *ldwork);

void clarzt(const char *direct, const char *storev, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *t, const qml_long *ldt);

void clascl2(const qml_long *m, const qml_long *n, float *d, QML_SINGLE_COMPLEX *x, const qml_long *ldx);

void cla_syamv(const qml_long *uplo, const qml_long *n, const float *alpha, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *x, const qml_long *incx, const float *beta, float *y, const qml_long *incy);

void clasyf(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

void clasyf_rook(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

float cla_syrcond_c(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, float *c, qml_int *capply, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_syrcond_x(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *x, qml_long *info, QML_SINGLE_COMPLEX *work, float *rwork);

float cla_syrpvgrw(const char *uplo, const qml_long *n, const qml_long *info, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, float *work);

void clatbs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *x, float *scale, float *cnorm, qml_long *info);

void clatdf(const qml_long *ijob, const qml_long *n, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *rhs, float *rdsum, float *rdscal, qml_long *ipiv, qml_long *jpiv);

void clatps(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *x, float *scale, float *cnorm, qml_long *info);

void clatrs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *x, float *scale, float *cnorm, qml_long *info);

void clatrz(const qml_long *m, const qml_long *n, const qml_long *l, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work);

void clauu2(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void clauum(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void cla_wwaddw(const qml_long *n, QML_SINGLE_COMPLEX *x, QML_SINGLE_COMPLEX *y, QML_SINGLE_COMPLEX *w);

void cpbcon(const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cpbequ(const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *s, float *scond, float *amax, qml_long *info);

void cpbrfs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *afb, const qml_long *ldafb, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cpbstf(const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *info);

void cpbsv(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cpbsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *afb, const qml_long *ldafb, char *equed, float *s, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cpbtf2(const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *info);

void cpbtrf(const char *uplo, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, qml_long *info);

void cpbtrs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cpftrf(const char *transr, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, qml_long *info);

void cpftri(const char *transr, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, qml_long *info);

void cpftrs(const char *transr, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cpocon(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cpoequ(const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, float *scond, float *amax, qml_long *info);

void cpoequb(const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, float *scond, float *amax, qml_long *info);

void cporfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cposvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, char *equed, float *s, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cpotri(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void cppcon(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cppequ(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *s, float *scond, float *amax, qml_long *info);

void cpprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *afp, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cppsv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cppsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *afp, char *equed, float *s, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cpptrf(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *info);

void cpptri(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *info);

void cpptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cpstf2(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *piv, qml_long *rank, const float *tol, float *work, qml_long *info);

void cpstrf(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *piv, qml_long *rank, const float *tol, float *work, qml_long *info);

void cptcon(const qml_long *n, float *d, QML_SINGLE_COMPLEX *e, const float *anorm, float *rcond, float *rwork, qml_long *info);

void cpteqr(const char *compz, const qml_long *n, float *d, float *e, QML_SINGLE_COMPLEX *z, const qml_long *ldz, float *work, qml_long *info);

void cptrfs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *d, QML_SINGLE_COMPLEX *e, float *df, QML_SINGLE_COMPLEX *ef, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cptsv(const qml_long *n, const qml_long *nrhs, float *d, QML_SINGLE_COMPLEX *e, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cptsvx(const char *fact, const qml_long *n, const qml_long *nrhs, float *d, QML_SINGLE_COMPLEX *e, float *df, QML_SINGLE_COMPLEX *ef, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cpttrf(const qml_long *n, float *d, QML_SINGLE_COMPLEX *e, qml_long *info);

void cpttrs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *d, QML_SINGLE_COMPLEX *e, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cptts2(const qml_long *iuplo, const qml_long *n, const qml_long *nrhs, float *d, QML_SINGLE_COMPLEX *e, QML_SINGLE_COMPLEX *b, const qml_long *ldb);

void cspcon(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, qml_long *info);

void cspmv(const char *uplo, const qml_long *n, const QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *x, const qml_long *incx, const QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *y, const qml_long *incy);

void cspr(const char *uplo, const qml_long *n, const QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *x, const qml_long *incx, QML_SINGLE_COMPLEX *ap);

void csprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *afp, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void cspsv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void cspsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *afp, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void csptrf(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, qml_long *info);

void csptri(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, QML_SINGLE_COMPLEX *work, qml_long *info);

void csptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void csrscl(const qml_long *n, const float *sa, QML_SINGLE_COMPLEX *sx, const qml_long *incx);

void cstedc(const char *compz, const qml_long *n, float *d, float *e, QML_SINGLE_COMPLEX *z, const qml_long *ldz, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void cstegr(const char *jobz, const char *range, const qml_long *n, float *d, float *e, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *isuppz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void cstein(const qml_long *n, float *d, float *e, const qml_long *m, float *w, qml_long *iblock, qml_long *isplit, QML_SINGLE_COMPLEX *z, const qml_long *ldz, float *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void cstemr(const char *jobz, const char *range, const qml_long *n, float *d, float *e, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, qml_long *m, float *w, QML_SINGLE_COMPLEX *z, const qml_long *ldz, const qml_long *nzc, qml_long *isuppz, qml_int *tryrac, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void csteqr(const char *compz, const qml_long *n, float *d, float *e, QML_SINGLE_COMPLEX *z, const qml_long *ldz, float *work, qml_long *info);

void csycon(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, qml_long *info);

void csycon_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const float *anorm, float *rcond, QML_SINGLE_COMPLEX *work, qml_long *info);

void csyconv(const char *uplo, const char *way, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *e, qml_long *info);

void csyequb(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *s, float *scond, float *amax, QML_SINGLE_COMPLEX *work, qml_long *info);

void csymv(const char *uplo, const qml_long *n, const QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *x, const qml_long *incx, const QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *y, const qml_long *incy);

void csyr(const char *uplo, const qml_long *n, const QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *x, const qml_long *incx, QML_SINGLE_COMPLEX *a, const qml_long *lda);

void csyrfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void csysv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void csysv_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void csysvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, qml_long *info);

void csyswapr(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, const qml_long *i1, const qml_long *i2);

void csytf2(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void csytf2_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void csytrf(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void csytrf_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void csytri(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, qml_long *info);

void csytri2(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void csytri2x(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, const qml_long *nb, qml_long *info);

void csytri_rook(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *work, qml_long *info);

void csytrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void csytrs2(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, qml_long *info);

void csytrs_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void ctbcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *kd, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctbrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctbtrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_SINGLE_COMPLEX *ab, const qml_long *ldab, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void ctfsm(const char *transr, const char *side, const char *uplo, const char *trans, const char *diag, const qml_long *m, const qml_long *n, const QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *a, QML_SINGLE_COMPLEX *b, const qml_long *ldb);

void ctftri(const char *transr, const char *uplo, const char *diag, const qml_long *n, QML_SINGLE_COMPLEX *a, qml_long *info);

void ctfttp(const char *transr, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *arf, QML_SINGLE_COMPLEX *ap, qml_long *info);

void ctfttr(const char *transr, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *arf, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void ctgevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, QML_SINGLE_COMPLEX *s, const qml_long *lds, QML_SINGLE_COMPLEX *p, const qml_long *ldp, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctgex2(qml_int *wantq, qml_int *wantz, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *z, const qml_long *ldz, const qml_long *j1, qml_long *info);

void ctgexc(qml_int *wantq, qml_int *wantz, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *z, const qml_long *ldz, const qml_long *ifst, qml_long *ilst, qml_long *info);

void ctgsen(const qml_long *ijob, qml_int *wantq, qml_int *wantz, qml_int *select, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *alpha, QML_SINGLE_COMPLEX *beta, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *z, const qml_long *ldz, qml_long *m, float *pl, float *pr, float *dif, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ctgsja(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, const qml_long *k, const qml_long *l, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, const float *tola, const float *tolb, float *alpha, float *beta, QML_SINGLE_COMPLEX *u, const qml_long *ldu, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *work, qml_long *ncycle, qml_long *info);

void ctgsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, float *s, float *dif, const qml_long *mm, qml_long *m, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void ctgsy2(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *d, const qml_long *ldd, QML_SINGLE_COMPLEX *e, const qml_long *lde, QML_SINGLE_COMPLEX *f, const qml_long *ldf, float *scale, float *rdsum, float *rdscal, qml_long *info);

void ctgsyl(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *d, const qml_long *ldd, QML_SINGLE_COMPLEX *e, const qml_long *lde, QML_SINGLE_COMPLEX *f, const qml_long *ldf, float *scale, float *dif, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void ctpcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, QML_SINGLE_COMPLEX *ap, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctpmqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, const qml_long *nb, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, qml_long *info);

void ctpqrt(const qml_long *m, const qml_long *n, const qml_long *l, const qml_long *nb, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *work, qml_long *info);

void ctpqrt2(const qml_long *m, const qml_long *n, const qml_long *l, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *t, const qml_long *ldt, qml_long *info);

void ctprfb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_SINGLE_COMPLEX *v, const qml_long *ldv, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *work, const qml_long *ldwork);

void ctprfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctptri(const char *uplo, const char *diag, const qml_long *n, QML_SINGLE_COMPLEX *ap, qml_long *info);

void ctptrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void ctpttf(const char *transr, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *arf, qml_long *info);

void ctpttr(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void ctrcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, float *rcond, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctrevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctrexc(const char *compq, const qml_long *n, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *q, const qml_long *ldq, const qml_long *ifst, const qml_long *ilst, qml_long *info);

void ctrrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *x, const qml_long *ldx, float *ferr, float *berr, QML_SINGLE_COMPLEX *work, float *rwork, qml_long *info);

void ctrsen(const char *job, const char *compq, qml_int *select, const qml_long *n, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *w, qml_long *m, float *s, float *sep, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void ctrsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, QML_SINGLE_COMPLEX *t, const qml_long *ldt, QML_SINGLE_COMPLEX *vl, const qml_long *ldvl, QML_SINGLE_COMPLEX *vr, const qml_long *ldvr, float *s, float *sep, const qml_long *mm, qml_long *m, QML_SINGLE_COMPLEX *work, const qml_long *ldwork, float *rwork, qml_long *info);

void ctrsyl(const char *trana, const char *tranb, const qml_long *isgn, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *b, const qml_long *ldb, QML_SINGLE_COMPLEX *c, const qml_long *ldc, float *scale, qml_long *info);

void ctrttf(const char *transr, const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *arf, qml_long *info);

void ctrttp(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *ap, qml_long *info);

void ctzrzf(const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunbdb(const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, QML_SINGLE_COMPLEX *x11, const qml_long *ldx11, QML_SINGLE_COMPLEX *x12, const qml_long *ldx12, QML_SINGLE_COMPLEX *x21, const qml_long *ldx21, QML_SINGLE_COMPLEX *x22, const qml_long *ldx22, float *theta, float *phi, QML_SINGLE_COMPLEX *taup1, QML_SINGLE_COMPLEX *taup2, QML_SINGLE_COMPLEX *tauq1, QML_SINGLE_COMPLEX *tauq2, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunbdb1(const qml_long *m, const qml_long *p, const qml_long *q, QML_SINGLE_COMPLEX *x11, const qml_long *ldx11, QML_SINGLE_COMPLEX *x21, const qml_long *ldx21, float *theta, float *phi, QML_SINGLE_COMPLEX *taup1, QML_SINGLE_COMPLEX *taup2, QML_SINGLE_COMPLEX *tauq1, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunbdb2(const qml_long *m, const qml_long *p, const qml_long *q, QML_SINGLE_COMPLEX *x11, const qml_long *ldx11, QML_SINGLE_COMPLEX *x21, const qml_long *ldx21, float *theta, float *phi, QML_SINGLE_COMPLEX *taup1, QML_SINGLE_COMPLEX *taup2, QML_SINGLE_COMPLEX *tauq1, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunbdb3(const qml_long *m, const qml_long *p, const qml_long *q, QML_SINGLE_COMPLEX *x11, const qml_long *ldx11, QML_SINGLE_COMPLEX *x21, const qml_long *ldx21, float *theta, float *phi, QML_SINGLE_COMPLEX *taup1, QML_SINGLE_COMPLEX *taup2, QML_SINGLE_COMPLEX *tauq1, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunbdb4(const qml_long *m, const qml_long *p, const qml_long *q, QML_SINGLE_COMPLEX *x11, const qml_long *ldx11, QML_SINGLE_COMPLEX *x21, const qml_long *ldx21, float *theta, float *phi, QML_SINGLE_COMPLEX *taup1, QML_SINGLE_COMPLEX *taup2, QML_SINGLE_COMPLEX *tauq1, QML_SINGLE_COMPLEX *phantom, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunbdb5(const qml_long *m1, const qml_long *m2, const qml_long *n, QML_SINGLE_COMPLEX *x1, const qml_long *incx1, QML_SINGLE_COMPLEX *x2, const qml_long *incx2, QML_SINGLE_COMPLEX *q1, const qml_long *ldq1, QML_SINGLE_COMPLEX *q2, const qml_long *ldq2, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunbdb6(const qml_long *m1, const qml_long *m2, const qml_long *n, QML_SINGLE_COMPLEX *x1, const qml_long *incx1, QML_SINGLE_COMPLEX *x2, const qml_long *incx2, QML_SINGLE_COMPLEX *q1, const qml_long *ldq1, QML_SINGLE_COMPLEX *q2, const qml_long *ldq2, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cuncsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, QML_SINGLE_COMPLEX *x11, const qml_long *ldx11, QML_SINGLE_COMPLEX *x12, const qml_long *ldx12, QML_SINGLE_COMPLEX *x21, const qml_long *ldx21, QML_SINGLE_COMPLEX *x22, const qml_long *ldx22, float *theta, QML_SINGLE_COMPLEX *u1, const qml_long *ldu1, QML_SINGLE_COMPLEX *u2, const qml_long *ldu2, QML_SINGLE_COMPLEX *v1t, const qml_long *ldv1t, QML_SINGLE_COMPLEX *v2t, const qml_long *ldv2t, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, qml_long *info);

void cuncsd2by1(const char *jobu1, const char *jobu2, const char *jobv1t, const qml_long *m, const qml_long *p, const qml_long *q, QML_SINGLE_COMPLEX *x11, const qml_long *ldx11, QML_SINGLE_COMPLEX *x21, const qml_long *ldx21, float *theta, QML_SINGLE_COMPLEX *u1, const qml_long *ldu1, QML_SINGLE_COMPLEX *u2, const qml_long *ldu2, QML_SINGLE_COMPLEX *v1t, const qml_long *ldv1t, QML_SINGLE_COMPLEX *work, const qml_long *lwork, float *rwork, const qml_long *lrwork, qml_long *iwork, qml_long *info);

void cung2l(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cung2r(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cungbr(const char *vect, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunghr(const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cungl2(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cunglq(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cungql(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cungqr(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cungr2(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, qml_long *info);

void cungrq(const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cungtr(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunm22(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *n1, const qml_long *n2, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunm2l(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, qml_long *info);

void cunmbr(const char *vect, const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunmhr(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunml2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, qml_long *info);

void cunmlq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunmql(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunmr2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, qml_long *info);

void cunmr3(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, qml_long *info);

void cunmrq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunmrz(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cunmtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void cupgtr(const char *uplo, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *q, const qml_long *ldq, QML_SINGLE_COMPLEX *work, qml_long *info);

void cupmtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, QML_SINGLE_COMPLEX *ap, QML_SINGLE_COMPLEX *tau, QML_SINGLE_COMPLEX *c, const qml_long *ldc, QML_SINGLE_COMPLEX *work, qml_long *info);

void dbbcsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const qml_long *m, const qml_long *p, const qml_long *q, double *theta, double *phi, double *u1, const qml_long *ldu1, double *u2, const qml_long *ldu2, double *v1t, const qml_long *ldv1t, double *v2t, const qml_long *ldv2t, double *b11d, double *b11e, double *b12d, double *b12e, double *b21d, double *b21e, double *b22d, double *b22e, double *work, const qml_long *lwork, qml_long *info);

void dbdsdc(const char *uplo, const char *compq, const qml_long *n, double *d, double *e, double *u, const qml_long *ldu, double *vt, const qml_long *ldvt, double *q, qml_long *iq, double *work, qml_long *iwork, qml_long *info);

void ddisna(const char *job, const qml_long *m, const qml_long *n, double *d, double *sep, qml_long *info);

void dgbbrd(const char *vect, const qml_long *m, const qml_long *n, const qml_long *ncc, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, double *d, double *e, double *q, const qml_long *ldq, double *pt, const qml_long *ldpt, double *c, const qml_long *ldc, double *work, qml_long *info);

void dgbcon(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, qml_long *ipiv, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dgbequ(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void dgbequb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void dgbrfs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, double *ab, const qml_long *ldab, double *afb, const qml_long *ldafb, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dgbsv(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, double *ab, const qml_long *ldab, qml_long *ipiv, double *b, const qml_long *ldb, qml_long *info);

void dgbsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, double *ab, const qml_long *ldab, double *afb, const qml_long *ldafb, qml_long *ipiv, char *equed, double *r, double *c, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dgbtf2(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void dgbtrf(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void dgbtrs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, double *ab, const qml_long *ldab, qml_long *ipiv, double *b, const qml_long *ldb, qml_long *info);

void dgebak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *scale, const qml_long *m, double *v, const qml_long *ldv, qml_long *info);

void dgebal(const char *job, const qml_long *n, double *a, const qml_long *lda, qml_long *ilo, qml_long *ihi, double *scale, qml_long *info);

void dgebd2(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *d, double *e, double *tauq, double *taup, double *work, qml_long *info);

void dgebrd(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *d, double *e, double *tauq, double *taup, double *work, const qml_long *lwork, qml_long *info);

void dgecon(const char *norm, const qml_long *n, double *a, const qml_long *lda, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dgeequ(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void dgeequb(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void dgees(const char *jobvs, const char *sort, void *select, const qml_long *n, double *a, const qml_long *lda, qml_long *sdim, double *wr, double *wi, double *vs, const qml_long *ldvs, double *work, const qml_long *lwork, qml_int *bwork, qml_long *info);

void dgeesx(const char *jobvs, const char *sort, void *select, const char *sense, const qml_long *n, double *a, const qml_long *lda, qml_long *sdim, double *wr, double *wi, double *vs, const qml_long *ldvs, double *rconde, double *rcondv, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_int *bwork, qml_long *info);

void dgeev(const char *jobvl, const char *jobvr, const qml_long *n, double *a, const qml_long *lda, double *wr, double *wi, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, double *work, const qml_long *lwork, qml_long *info);

void dgeevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, double *a, const qml_long *lda, double *wr, double *wi, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, double *scale, double *abnrm, double *rconde, double *rcondv, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dgehd2(const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dgehrd(const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dgejsv(const char *joba, const char *jobu, const char *jobv, const char *jobr, const char *jobt, const char *jobp, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *sva, double *u, const qml_long *ldu, double *v, const qml_long *ldv, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dgelq2(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dgelqf(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dgels(const char *trans, const qml_long *m, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *work, const qml_long *lwork, qml_long *info);

void dgelsd(const qml_long *m, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *s, const double *rcond, qml_long *rank, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dgelss(const qml_long *m, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *s, const double *rcond, qml_long *rank, double *work, const qml_long *lwork, qml_long *info);

void dgelsy(const qml_long *m, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *b, const qml_long *ldb, qml_long *jpvt, const double *rcond, qml_long *rank, double *work, const qml_long *lwork, qml_long *info);

void dgemqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *nb, double *v, const qml_long *ldv, double *t, const qml_long *ldt, double *c, const qml_long *ldc, double *work, qml_long *info);

void dgeql2(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dgeqlf(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dgeqr2p(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dgeqrfp(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dgeqrt(const qml_long *m, const qml_long *n, const qml_long *nb, double *a, const qml_long *lda, double *t, const qml_long *ldt, double *work, qml_long *info);

void dgeqrt2(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *t, const qml_long *ldt, qml_long *info);

void dgeqrt3(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *t, const qml_long *ldt, qml_long *info);

void dgerfs(const char *trans, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *af, const qml_long *ldaf, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dgerq2(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dgerqf(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dgesc2(const qml_long *n, double *a, const qml_long *lda, double *rhs, qml_long *ipiv, qml_long *jpiv, double *scale);

void dgesdd(const char *jobz, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *s, double *u, const qml_long *ldu, double *vt, const qml_long *ldvt, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dgesvd(const char *jobu, const char *jobvt, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *s, double *u, const qml_long *ldu, double *vt, const qml_long *ldvt, double *work, const qml_long *lwork, qml_long *info);

void dgesvj(const char *joba, const char *jobu, const char *jobv, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *sva, const qml_long *mv, double *v, const qml_long *ldv, double *work, const qml_long *lwork, qml_long *info);

void dgesvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *af, const qml_long *ldaf, qml_long *ipiv, char *equed, double *r, double *c, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dgetc2(const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, qml_long *jpiv, qml_long *info);

void dggbak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *lscale, double *rscale, const qml_long *m, double *v, const qml_long *ldv, qml_long *info);

void dggbal(const char *job, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, qml_long *ilo, qml_long *ihi, double *lscale, double *rscale, double *work, qml_long *info);

void dgges(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, qml_long *sdim, double *alphar, double *alphai, double *beta, double *vsl, const qml_long *ldvsl, double *vsr, const qml_long *ldvsr, double *work, const qml_long *lwork, qml_int *bwork, qml_long *info);

void dgges3(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, qml_long *sdim, double *alphar, double *alphai, double *beta, double *vsl, const qml_long *ldvsl, double *vsr, const qml_long *ldvsr, double *work, const qml_long *lwork, qml_int *bwork, qml_long *info);

void dggesx(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const char *sense, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, qml_long *sdim, double *alphar, double *alphai, double *beta, double *vsl, const qml_long *ldvsl, double *vsr, const qml_long *ldvsr, double *rconde, double *rcondv, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_int *bwork, qml_long *info);

void dggev(const char *jobvl, const char *jobvr, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *alphar, double *alphai, double *beta, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, double *work, const qml_long *lwork, qml_long *info);

void dggev3(const char *jobvl, const char *jobvr, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *alphar, double *alphai, double *beta, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, double *work, const qml_long *lwork, qml_long *info);

void dggevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *alphar, double *alphai, double *beta, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, double *lscale, double *rscale, double *abnrm, double *bbnrm, double *rconde, double *rcondv, double *work, const qml_long *lwork, qml_long *iwork, qml_int *bwork, qml_long *info);

void dggglm(const qml_long *n, const qml_long *m, const qml_long *p, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *d, double *x, double *y, double *work, const qml_long *lwork, qml_long *info);

void dgghd3(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *q, const qml_long *ldq, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *info);

void dgghrd(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *q, const qml_long *ldq, double *z, const qml_long *ldz, qml_long *info);

void dgglse(const qml_long *m, const qml_long *n, const qml_long *p, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *c, double *d, double *x, double *work, const qml_long *lwork, qml_long *info);

void dggqrf(const qml_long *n, const qml_long *m, const qml_long *p, double *a, const qml_long *lda, double *taua, double *b, const qml_long *ldb, double *taub, double *work, const qml_long *lwork, qml_long *info);

void dggrqf(const qml_long *m, const qml_long *p, const qml_long *n, double *a, const qml_long *lda, double *taua, double *b, const qml_long *ldb, double *taub, double *work, const qml_long *lwork, qml_long *info);

void dggsvd3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *n, const qml_long *p, qml_long *k, qml_long *l, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *alpha, double *beta, double *u, const qml_long *ldu, double *v, const qml_long *ldv, double *q, const qml_long *ldq, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dggsvp3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, const double *tola, const double *tolb, qml_long *k, qml_long *l, double *u, const qml_long *ldu, double *v, const qml_long *ldv, double *q, const qml_long *ldq, qml_long *iwork, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dgsvj0(const char *jobv, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *d, double *sva, const qml_long *mv, double *v, const qml_long *ldv, const double *eps, const double *sfmin, const double *tol, const qml_long *nsweep, double *work, const qml_long *lwork, qml_long *info);

void dgsvj1(const char *jobv, const qml_long *m, const qml_long *n, const qml_long *n1, double *a, const qml_long *lda, double *d, double *sva, const qml_long *mv, double *v, const qml_long *ldv, const double *eps, const double *sfmin, const double *tol, const qml_long *nsweep, double *work, const qml_long *lwork, qml_long *info);

void dgtcon(const char *norm, const qml_long *n, double *dl, double *d, double *du, double *du2, qml_long *ipiv, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dgtrfs(const char *trans, const qml_long *n, const qml_long *nrhs, double *dl, double *d, double *du, double *dlf, double *df, double *duf, double *du2, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dgtsv(const qml_long *n, const qml_long *nrhs, double *dl, double *d, double *du, double *b, const qml_long *ldb, qml_long *info);

void dgtsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, double *dl, double *d, double *du, double *dlf, double *df, double *duf, double *du2, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dgttrf(const qml_long *n, double *dl, double *d, double *du, double *du2, qml_long *ipiv, qml_long *info);

void dgttrs(const char *trans, const qml_long *n, const qml_long *nrhs, double *dl, double *d, double *du, double *du2, qml_long *ipiv, double *b, const qml_long *ldb, qml_long *info);

void dgtts2(const qml_long *itrans, const qml_long *n, const qml_long *nrhs, double *dl, double *d, double *du, double *du2, qml_long *ipiv, double *b, const qml_long *ldb);

void dhgeqz(const char *job, const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *h, const qml_long *ldh, double *t, const qml_long *ldt, double *alphar, double *alphai, double *beta, double *q, const qml_long *ldq, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *info);

void dhsein(const char *side, const char *eigsrc, const char *initv, qml_int *select, const qml_long *n, double *h, const qml_long *ldh, double *wr, double *wi, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, double *work, qml_long *ifaill, qml_long *ifailr, qml_long *info);

void dhseqr(const char *job, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *h, const qml_long *ldh, double *wr, double *wi, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *info);

qml_int disnan(const double *din);

void dlabad(double *small, double *large);

void dlabrd(const qml_long *m, const qml_long *n, const qml_long *nb, double *a, const qml_long *lda, double *d, double *e, double *tauq, double *taup, double *x, const qml_long *ldx, double *y, const qml_long *ldy);

void dlacn2(const qml_long *n, double *v, double *x, qml_long *isgn, double *est, qml_long *kase, qml_long *isave);

void dlacon(const qml_long *n, double *v, double *x, qml_long *isgn, double *est, qml_long *kase);

void dlaebz(const qml_long *ijob, const qml_long *nitmax, const qml_long *n, const qml_long *mmax, const qml_long *minp, const qml_long *nbmin, const double *abstol, const double *reltol, const double *pivmin, double *d, double *e, double *e2, qml_long *nval, double *ab, double *c, qml_long *mout, qml_long *nab, double *work, qml_long *iwork, qml_long *info);

void dlaed0(const qml_long *icompq, const qml_long *qsiz, const qml_long *n, double *d, double *e, double *q, const qml_long *ldq, double *qstore, const qml_long *ldqs, double *work, qml_long *iwork, qml_long *info);

void dlaed1(const qml_long *n, double *d, double *q, const qml_long *ldq, qml_long *indxq, double *rho, const qml_long *cutpnt, double *work, qml_long *iwork, qml_long *info);

void dlaed2(qml_long *k, const qml_long *n, const qml_long *n1, double *d, double *q, const qml_long *ldq, qml_long *indxq, double *rho, double *z, double *dlamda, double *w, double *q2, qml_long *indx, qml_long *indxc, qml_long *indxp, qml_long *coltyp, qml_long *info);

void dlaed3(const qml_long *k, const qml_long *n, const qml_long *n1, double *d, double *q, const qml_long *ldq, const double *rho, double *dlamda, double *q2, qml_long *indx, qml_long *ctot, double *w, double *s, qml_long *info);

void dlaed4(const qml_long *n, const qml_long *i, double *d, double *z, double *delta, const double *rho, double *dlam, qml_long *info);

void dlaed5(const qml_long *i, double *d, double *z, double *delta, const double *rho, double *dlam);

void dlaed6(const qml_long *kniter, qml_int *orgati, const double *rho, double *d, double *z, const double *finit, double *tau, qml_long *info);

void dlaed7(const qml_long *icompq, const qml_long *n, const qml_long *qsiz, const qml_long *tlvls, const qml_long *curlvl, const qml_long *curpbm, double *d, double *q, const qml_long *ldq, qml_long *indxq, double *rho, const qml_long *cutpnt, double *qstore, qml_long *qptr, qml_long *prmptr, qml_long *perm, qml_long *givptr, qml_long *givcol, double *givnum, double *work, qml_long *iwork, qml_long *info);

void dlaed8(const qml_long *icompq, qml_long *k, const qml_long *n, const qml_long *qsiz, double *d, double *q, const qml_long *ldq, qml_long *indxq, double *rho, const qml_long *cutpnt, double *z, double *dlamda, double *q2, const qml_long *ldq2, double *w, qml_long *perm, qml_long *givptr, qml_long *givcol, double *givnum, qml_long *indxp, qml_long *indx, qml_long *info);

void dlaed9(const qml_long *k, const qml_long *kstart, const qml_long *kstop, const qml_long *n, double *d, double *q, const qml_long *ldq, const double *rho, double *dlamda, double *w, double *s, const qml_long *lds, qml_long *info);

void dlaeda(const qml_long *n, const qml_long *tlvls, const qml_long *curlvl, const qml_long *curpbm, qml_long *prmptr, qml_long *perm, qml_long *givptr, qml_long *givcol, double *givnum, double *q, qml_long *qptr, double *z, double *ztemp, qml_long *info);

void dlaein(qml_int *rightv, qml_int *noinit, const qml_long *n, double *h, const qml_long *ldh, const double *wr, const double *wi, double *vr, double *vi, double *b, const qml_long *ldb, double *work, const double *eps3, const double *smlnum, const double *bignum, qml_long *info);

void dlaexc(qml_int *wantq, const qml_long *n, double *t, const qml_long *ldt, double *q, const qml_long *ldq, const qml_long *j1, const qml_long *n1, const qml_long *n2, double *work, qml_long *info);

void dlag2(double *a, const qml_long *lda, double *b, const qml_long *ldb, const double *safmin, double *scale1, double *scale2, double *wr1, double *wr2, double *wi);

void dlag2s(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, float *sa, const qml_long *ldsa, qml_long *info);

void dla_gbamv(const qml_long *trans, const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, const double *alpha, double *ab, const qml_long *ldab, double *x, const qml_long *incx, const double *beta, double *y, const qml_long *incy);

double dla_gbrcond(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, double *afb, const qml_long *ldafb, qml_long *ipiv, const qml_long *cmode, double *c, qml_long *info, double *work, qml_long *iwork);

double dla_gbrpvgrw(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *ncols, double *ab, const qml_long *ldab, double *afb, const qml_long *ldafb);

void dla_geamv(const qml_long *trans, const qml_long *m, const qml_long *n, const double *alpha, double *a, const qml_long *lda, double *x, const qml_long *incx, const double *beta, double *y, const qml_long *incy);

double dla_gercond(const char *trans, const qml_long *n, double *a, const qml_long *lda, double *af, const qml_long *ldaf, qml_long *ipiv, const qml_long *cmode, double *c, qml_long *info, double *work, qml_long *iwork);

double dla_gerpvgrw(const qml_long *n, const qml_long *ncols, double *a, const qml_long *lda, double *af, const qml_long *ldaf);

void dlags2(qml_int *upper, const double *a1, const double *a2, const double *a3, const double *b1, const double *b2, const double *b3, double *csu, double *snu, double *csv, double *snv, double *csq, double *snq);

void dlagtf(const qml_long *n, double *a, const double *lambda, double *b, double *c, const double *tol, double *d, qml_long *in, qml_long *info);

void dlagtm(const char *trans, const qml_long *n, const qml_long *nrhs, const double *alpha, double *dl, double *d, double *du, double *x, const qml_long *ldx, const double *beta, double *b, const qml_long *ldb);

void dlagts(const qml_long *job, const qml_long *n, double *a, double *b, double *c, double *d, qml_long *in, double *y, double *tol, qml_long *info);

void dlagv2(double *a, const qml_long *lda, double *b, const qml_long *ldb, double *alphar, double *alphai, double *beta, double *csl, double *snl, double *csr, double *snr);

void dlahqr(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *h, const qml_long *ldh, double *wr, double *wi, const qml_long *iloz, const qml_long *ihiz, double *z, const qml_long *ldz, qml_long *info);

void dlahr2(const qml_long *n, const qml_long *k, const qml_long *nb, double *a, const qml_long *lda, double *tau, double *t, const qml_long *ldt, double *y, const qml_long *ldy);

void dlaic1(const qml_long *job, const qml_long *j, double *x, const double *sest, double *w, const double *gamma, double *sestpr, double *s, double *c);

qml_int dlaisnan(const double *din1, const double *din2);

void dla_lin_berr(const qml_long *n, const qml_long *nz, const qml_long *nrhs, double *res, double *ayb, double *berr);

void dlaln2(qml_int *ltrans, const qml_long *na, const qml_long *nw, const double *smin, const double *ca, double *a, const qml_long *lda, const double *d1, const double *d2, double *b, const qml_long *ldb, const double *wr, const double *wi, double *x, const qml_long *ldx, double *scale, double *xnorm, qml_long *info);

void dlals0(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, const qml_long *nrhs, double *b, const qml_long *ldb, double *bx, const qml_long *ldbx, qml_long *perm, const qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, double *givnum, const qml_long *ldgnum, double *poles, double *difl, double *difr, double *z, const qml_long *k, const double *c, const double *s, double *work, qml_long *info);

void dlalsa(const qml_long *icompq, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, double *b, const qml_long *ldb, double *bx, const qml_long *ldbx, double *u, const qml_long *ldu, double *vt, qml_long *k, double *difl, double *difr, double *z, double *poles, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, qml_long *perm, double *givnum, double *c, double *s, double *work, qml_long *iwork, qml_long *info);

void dlalsd(const char *uplo, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, double *d, double *e, double *b, const qml_long *ldb, const double *rcond, qml_long *rank, double *work, qml_long *iwork, qml_long *info);

double dlamch(const char *cmach);

void dlamrg(const qml_long *n1, const qml_long *n2, double *a, const qml_long *dtrd1, const qml_long *dtrd2, qml_long *index);

qml_long dlaneg(const qml_long *n, double *d, double *lld, const double *sigma, const double *pivmin, const qml_long *r);

double dlangb(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, double *work);

double dlangt(const char *norm, const qml_long *n, double *dl, double *d, double *du);

double dlanhs(const char *norm, const qml_long *n, double *a, const qml_long *lda, double *work);

double dlansb(const char *norm, const char *uplo, const qml_long *n, const qml_long *k, double *ab, const qml_long *ldab, double *work);

double dlansf(const char *norm, const char *transr, const char *uplo, const qml_long *n, double *a, double *work);

double dlansp(const char *norm, const char *uplo, const qml_long *n, double *ap, double *work);

double dlanst(const char *norm, const qml_long *n, double *d, double *e);

double dlansy(const char *norm, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *work);

double dlantb(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *k, double *ab, const qml_long *ldab, double *work);

double dlantp(const char *norm, const char *uplo, const char *diag, const qml_long *n, double *ap, double *work);

double dlantr(const char *norm, const char *uplo, const char *diag, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *work);

void dlanv2(double *a, double *b, double *c, double *d, double *rt1r, double *rt1i, double *rt2r, double *rt2i, double *cs, double *sn);

void dlapll(const qml_long *n, double *x, const qml_long *incx, double *y, const qml_long *incy, double *ssmin);

void dlapmr(qml_int *forwrd, const qml_long *m, const qml_long *n, double *x, const qml_long *ldx, qml_long *k);

void dlapmt(qml_int *forwrd, const qml_long *m, const qml_long *n, double *x, const qml_long *ldx, qml_long *k);

double dla_porcond(const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *af, const qml_long *ldaf, const qml_long *cmode, double *c, qml_long *info, double *work, qml_long *iwork);

double dla_porpvgrw(const char *uplo, const qml_long *ncols, double *a, const qml_long *lda, double *af, const qml_long *ldaf, double *work);

void dlaqgb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, double *ab, const qml_long *ldab, double *r, double *c, const double *rowcnd, const double *colcnd, const double *amax, char *equed);

void dlaqge(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *r, double *c, const double *rowcnd, const double *colcnd, const double *amax, char *equed);

void dlaqr0(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *h, const qml_long *ldh, double *wr, double *wi, const qml_long *iloz, const qml_long *ihiz, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *info);

void dlaqr1(const qml_long *n, double *h, const qml_long *ldh, const double *sr1, const double *si1, const double *sr2, const double *si2, double *v);

void dlaqr2(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, double *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, double *z, const qml_long *ldz, qml_long *ns, qml_long *nd, double *sr, double *si, double *v, const qml_long *ldv, const qml_long *nh, double *t, const qml_long *ldt, const qml_long *nv, double *wv, const qml_long *ldwv, double *work, const qml_long *lwork);

void dlaqr3(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, double *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, double *z, const qml_long *ldz, qml_long *ns, qml_long *nd, double *sr, double *si, double *v, const qml_long *ldv, const qml_long *nh, double *t, const qml_long *ldt, const qml_long *nv, double *wv, const qml_long *ldwv, double *work, const qml_long *lwork);

void dlaqr4(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *h, const qml_long *ldh, double *wr, double *wi, const qml_long *iloz, const qml_long *ihiz, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *info);

void dlaqr5(qml_int *wantt, qml_int *wantz, const qml_long *kacc22, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nshfts, double *sr, double *si, double *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, double *z, const qml_long *ldz, double *v, const qml_long *ldv, double *u, const qml_long *ldu, const qml_long *nv, double *wv, const qml_long *ldwv, const qml_long *nh, double *wh, const qml_long *ldwh);

void dlaqsb(const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *s, const double *scond, const double *amax, char *equed);

void dlaqsp(const char *uplo, const qml_long *n, double *ap, double *s, const double *scond, const double *amax, char *equed);

void dlaqsy(const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *s, const double *scond, const double *amax, char *equed);

void dlaqtr(qml_int *ltran, qml_int *lreal, const qml_long *n, double *t, const qml_long *ldt, double *b, const double *w, double *scale, double *x, double *work, qml_long *info);

void dlar1v(const qml_long *n, const qml_long *b1, const qml_long *bn, const double *lambda, double *d, double *l, double *ld, double *lld, const double *pivmin, const double *gaptol, double *z, qml_int *wantnc, qml_long *negcnt, double *ztz, double *mingma, qml_long *r, qml_long *isuppz, double *nrminv, double *resid, double *rqcorr, double *work);

void dlar2v(const qml_long *n, double *x, double *y, double *z, const qml_long *incx, double *c, double *s, const qml_long *incc);

void dlarfgp(const qml_long *n, double *alpha, double *x, const qml_long *incx, double *tau);

void dlarfx(const char *side, const qml_long *m, const qml_long *n, double *v, const double *tau, double *c, const qml_long *ldc, double *work);

void dlargv(const qml_long *n, double *x, const qml_long *incx, double *y, const qml_long *incy, double *c, const qml_long *incc);

void dlarnv(const qml_long *idist, qml_long *iseed, const qml_long *n, double *x);

void dlarra(const qml_long *n, double *d, double *e, double *e2, const double *spltol, const double *tnrm, qml_long *nsplit, qml_long *isplit, qml_long *info);

void dlarrb(const qml_long *n, double *d, double *lld, const qml_long *ifirst, const qml_long *ilast, const double *rtol1, const double *rtol2, const qml_long *offset, double *w, double *wgap, double *werr, double *work, qml_long *iwork, const double *pivmin, const double *spdiam, const qml_long *twist, qml_long *info);

void dlarrc(const char *jobt, const qml_long *n, const double *vl, const double *vu, double *d, double *e, const double *pivmin, qml_long *eigcnt, qml_long *lcnt, qml_long *rcnt, qml_long *info);

void dlarrd(const char *range, const char *order, const qml_long *n, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, double *gers, const double *reltol, double *d, double *e, double *e2, const double *pivmin, const qml_long *nsplit, qml_long *isplit, qml_long *m, double *w, double *werr, double *wl, double *wu, qml_long *iblock, qml_long *indexw, double *work, qml_long *iwork, qml_long *info);

void dlarre(const char *range, const qml_long *n, double *vl, double *vu, const qml_long *il, const qml_long *iu, double *d, double *e, double *e2, const double *rtol1, const double *rtol2, const double *spltol, qml_long *nsplit, qml_long *isplit, qml_long *m, double *w, double *werr, double *wgap, qml_long *iblock, qml_long *indexw, double *gers, double *pivmin, double *work, qml_long *iwork, qml_long *info);

void dlarrf(const qml_long *n, double *d, double *l, double *ld, const qml_long *clstrt, const qml_long *clend, double *w, double *wgap, double *werr, const double *spdiam, const double *clgapl, const double *clgapr, const double *pivmin, double *sigma, double *dplus, double *lplus, double *work, qml_long *info);

void dlarrj(const qml_long *n, double *d, double *e2, const qml_long *ifirst, const qml_long *ilast, const double *rtol, const qml_long *offset, double *w, double *werr, double *work, qml_long *iwork, const double *pivmin, const double *spdiam, qml_long *info);

void dlarrk(const qml_long *n, const qml_long *iw, const double *gl, const double *gu, double *d, double *e2, const double *pivmin, const double *reltol, double *w, double *werr, qml_long *info);

void dlarrr(const qml_long *n, double *d, double *e, qml_long *info);

void dlarrv(const qml_long *n, const double *vl, const double *vu, double *d, double *l, const double *pivmin, qml_long *isplit, const qml_long *m, const qml_long *dol, const qml_long *dou, const double *minrgp, double *rtol1, double *rtol2, double *w, double *werr, double *wgap, qml_long *iblock, qml_long *indexw, double *gers, double *z, const qml_long *ldz, qml_long *isuppz, double *work, qml_long *iwork, qml_long *info);

void dlarscl2(const qml_long *m, const qml_long *n, double *d, double *x, const qml_long *ldx);

void dlartgp(const double *f, const double *g, double *cs, double *sn, double *r);

void dlartgs(const double *x, const double *y, const double *sigma, double *cs, double *sn);

void dlartv(const qml_long *n, double *x, const qml_long *incx, double *y, const qml_long *incy, double *c, double *s, const qml_long *incc);

void dlaruv(qml_long *iseed, const qml_long *n, double *x);

void dlarz(const char *side, const qml_long *m, const qml_long *n, const qml_long *l, double *v, const qml_long *incv, const double *tau, double *c, const qml_long *ldc, double *work);

void dlarzb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, double *v, const qml_long *ldv, double *t, const qml_long *ldt, double *c, const qml_long *ldc, double *work, const qml_long *ldwork);

void dlarzt(const char *direct, const char *storev, const qml_long *n, const qml_long *k, double *v, const qml_long *ldv, double *tau, double *t, const qml_long *ldt);

void dlascl2(const qml_long *m, const qml_long *n, double *d, double *x, const qml_long *ldx);

void dlasd0(const qml_long *n, const qml_long *sqre, double *d, double *e, double *u, const qml_long *ldu, double *vt, const qml_long *ldvt, const qml_long *smlsiz, qml_long *iwork, double *work, qml_long *info);

void dlasd1(const qml_long *nl, const qml_long *nr, const qml_long *sqre, double *d, double *alpha, double *beta, double *u, const qml_long *ldu, double *vt, const qml_long *ldvt, qml_long *idxq, qml_long *iwork, double *work, qml_long *info);

void dlasd2(const qml_long *nl, const qml_long *nr, const qml_long *sqre, qml_long *k, double *d, double *z, const double *alpha, const double *beta, double *u, const qml_long *ldu, double *vt, const qml_long *ldvt, double *dsigma, double *u2, const qml_long *ldu2, double *vt2, const qml_long *ldvt2, qml_long *idxp, qml_long *idx, qml_long *idxc, qml_long *idxq, qml_long *coltyp, qml_long *info);

void dlasd3(const qml_long *nl, const qml_long *nr, const qml_long *sqre, const qml_long *k, double *d, double *q, const qml_long *ldq, double *dsigma, double *u, const qml_long *ldu, double *u2, const qml_long *ldu2, double *vt, const qml_long *ldvt, double *vt2, const qml_long *ldvt2, qml_long *idxc, qml_long *ctot, double *z, qml_long *info);

void dlasd4(const qml_long *n, const qml_long *i, double *d, double *z, double *delta, const double *rho, double *sigma, double *work, qml_long *info);

void dlasd5(const qml_long *i, double *d, double *z, double *delta, const double *rho, double *dsigma, double *work);

void dlasd6(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, double *d, double *vf, double *vl, double *alpha, double *beta, qml_long *idxq, qml_long *perm, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, double *givnum, const qml_long *ldgnum, double *poles, double *difl, double *difr, double *z, qml_long *k, double *c, double *s, double *work, qml_long *iwork, qml_long *info);

void dlasd7(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, qml_long *k, double *d, double *z, double *zw, double *vf, double *vfw, double *vl, double *vlw, const double *alpha, const double *beta, double *dsigma, qml_long *idx, qml_long *idxp, qml_long *idxq, qml_long *perm, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, double *givnum, const qml_long *ldgnum, double *c, double *s, qml_long *info);

void dlasd8(const qml_long *icompq, const qml_long *k, double *d, double *z, double *vf, double *vl, double *difl, double *difr, const qml_long *lddifr, double *dsigma, double *work, qml_long *info);

void dlasda(const qml_long *icompq, const qml_long *smlsiz, const qml_long *n, const qml_long *sqre, double *d, double *e, double *u, const qml_long *ldu, double *vt, qml_long *k, double *difl, double *difr, double *z, double *poles, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, qml_long *perm, double *givnum, double *c, double *s, double *work, qml_long *iwork, qml_long *info);

void dlasdq(const char *uplo, const qml_long *sqre, const qml_long *n, const qml_long *ncvt, const qml_long *nru, const qml_long *ncc, double *d, double *e, double *vt, const qml_long *ldvt, double *u, const qml_long *ldu, double *c, const qml_long *ldc, double *work, qml_long *info);

void dlasdt(const qml_long *n, qml_long *lvl, qml_long *nd, qml_long *inode, qml_long *ndiml, qml_long *ndimr, const qml_long *msub);

void dlasy2(qml_int *ltranl, qml_int *ltranr, const qml_long *isgn, const qml_long *n1, const qml_long *n2, double *tl, const qml_long *ldtl, double *tr, const qml_long *ldtr, double *b, const qml_long *ldb, double *scale, double *x, const qml_long *ldx, double *xnorm, qml_long *info);

void dla_syamv(const qml_long *uplo, const qml_long *n, const double *alpha, double *a, const qml_long *lda, double *x, const qml_long *incx, const double *beta, double *y, const qml_long *incy);

void dlasyf(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, double *a, const qml_long *lda, qml_long *ipiv, double *w, const qml_long *ldw, qml_long *info);

void dlasyf_rook(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, double *a, const qml_long *lda, qml_long *ipiv, double *w, const qml_long *ldw, qml_long *info);

double dla_syrcond(const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *af, const qml_long *ldaf, qml_long *ipiv, const qml_long *cmode, double *c, qml_long *info, double *work, qml_long *iwork);

double dla_syrpvgrw(const char *uplo, const qml_long *n, const qml_long *info, double *a, const qml_long *lda, double *af, const qml_long *ldaf, qml_long *ipiv, double *work);

void dlat2s(const char *uplo, const qml_long *n, double *a, const qml_long *lda, float *sa, const qml_long *ldsa, qml_long *info);

void dlatbs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *x, double *scale, double *cnorm, qml_long *info);

void dlatdf(const qml_long *ijob, const qml_long *n, double *z, const qml_long *ldz, double *rhs, double *rdsum, double *rdscal, qml_long *ipiv, qml_long *jpiv);

void dlatps(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, double *ap, double *x, double *scale, double *cnorm, qml_long *info);

void dlatrs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, double *a, const qml_long *lda, double *x, double *scale, double *cnorm, qml_long *info);

void dlatrz(const qml_long *m, const qml_long *n, const qml_long *l, double *a, const qml_long *lda, double *tau, double *work);

void dlauu2(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *info);

void dlauum(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *info);

void dla_wwaddw(const qml_long *n, double *x, double *y, double *w);

void dopgtr(const char *uplo, const qml_long *n, double *ap, double *tau, double *q, const qml_long *ldq, double *work, qml_long *info);

void dopmtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, double *ap, double *tau, double *c, const qml_long *ldc, double *work, qml_long *info);

void dorbdb(const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, double *x11, const qml_long *ldx11, double *x12, const qml_long *ldx12, double *x21, const qml_long *ldx21, double *x22, const qml_long *ldx22, double *theta, double *phi, double *taup1, double *taup2, double *tauq1, double *tauq2, double *work, const qml_long *lwork, qml_long *info);

void dorbdb1(const qml_long *m, const qml_long *p, const qml_long *q, double *x11, const qml_long *ldx11, double *x21, const qml_long *ldx21, double *theta, double *phi, double *taup1, double *taup2, double *tauq1, double *work, const qml_long *lwork, qml_long *info);

void dorbdb2(const qml_long *m, const qml_long *p, const qml_long *q, double *x11, const qml_long *ldx11, double *x21, const qml_long *ldx21, double *theta, double *phi, double *taup1, double *taup2, double *tauq1, double *work, const qml_long *lwork, qml_long *info);

void dorbdb3(const qml_long *m, const qml_long *p, const qml_long *q, double *x11, const qml_long *ldx11, double *x21, const qml_long *ldx21, double *theta, double *phi, double *taup1, double *taup2, double *tauq1, double *work, const qml_long *lwork, qml_long *info);

void dorbdb4(const qml_long *m, const qml_long *p, const qml_long *q, double *x11, const qml_long *ldx11, double *x21, const qml_long *ldx21, double *theta, double *phi, double *taup1, double *taup2, double *tauq1, double *phantom, double *work, const qml_long *lwork, qml_long *info);

void dorbdb5(const qml_long *m1, const qml_long *m2, const qml_long *n, double *x1, const qml_long *incx1, double *x2, const qml_long *incx2, double *q1, const qml_long *ldq1, double *q2, const qml_long *ldq2, double *work, const qml_long *lwork, qml_long *info);

void dorbdb6(const qml_long *m1, const qml_long *m2, const qml_long *n, double *x1, const qml_long *incx1, double *x2, const qml_long *incx2, double *q1, const qml_long *ldq1, double *q2, const qml_long *ldq2, double *work, const qml_long *lwork, qml_long *info);

void dorcsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, double *x11, const qml_long *ldx11, double *x12, const qml_long *ldx12, double *x21, const qml_long *ldx21, double *x22, const qml_long *ldx22, double *theta, double *u1, const qml_long *ldu1, double *u2, const qml_long *ldu2, double *v1t, const qml_long *ldv1t, double *v2t, const qml_long *ldv2t, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dorcsd2by1(const char *jobu1, const char *jobu2, const char *jobv1t, const qml_long *m, const qml_long *p, const qml_long *q, double *x11, const qml_long *ldx11, double *x21, const qml_long *ldx21, double *theta, double *u1, const qml_long *ldu1, double *u2, const qml_long *ldu2, double *v1t, const qml_long *ldv1t, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dorg2l(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dorg2r(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dorgbr(const char *vect, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dorghr(const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dorgl2(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dorglq(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dorgql(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dorgqr(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dorgr2(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, qml_long *info);

void dorgrq(const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dorgtr(const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

void dorm22(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *n1, const qml_long *n2, double *q, const qml_long *ldq, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dorm2l(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, qml_long *info);

void dormbr(const char *vect, const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dormhr(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dorml2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, qml_long *info);

void dormlq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dormql(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dormr2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, qml_long *info);

void dormr3(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, qml_long *info);

void dormrq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dormrz(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dormtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *c, const qml_long *ldc, double *work, const qml_long *lwork, qml_long *info);

void dpbcon(const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dpbequ(const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *s, double *scond, double *amax, qml_long *info);

void dpbrfs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, double *ab, const qml_long *ldab, double *afb, const qml_long *ldafb, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dpbstf(const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, qml_long *info);

void dpbsv(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, double *ab, const qml_long *ldab, double *b, const qml_long *ldb, qml_long *info);

void dpbsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, double *ab, const qml_long *ldab, double *afb, const qml_long *ldafb, char *equed, double *s, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dpbtf2(const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, qml_long *info);

void dpbtrf(const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, qml_long *info);

void dpbtrs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, double *ab, const qml_long *ldab, double *b, const qml_long *ldb, qml_long *info);

void dpftrf(const char *transr, const char *uplo, const qml_long *n, double *a, qml_long *info);

void dpftri(const char *transr, const char *uplo, const qml_long *n, double *a, qml_long *info);

void dpftrs(const char *transr, const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, double *b, const qml_long *ldb, qml_long *info);

void dpocon(const char *uplo, const qml_long *n, double *a, const qml_long *lda, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dpoequ(const qml_long *n, double *a, const qml_long *lda, double *s, double *scond, double *amax, qml_long *info);

void dpoequb(const qml_long *n, double *a, const qml_long *lda, double *s, double *scond, double *amax, qml_long *info);

void dporfs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *af, const qml_long *ldaf, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dposvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *af, const qml_long *ldaf, char *equed, double *s, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dpotri(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *info);

void dppcon(const char *uplo, const qml_long *n, double *ap, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dppequ(const char *uplo, const qml_long *n, double *ap, double *s, double *scond, double *amax, qml_long *info);

void dpprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, double *afp, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dppsv(const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, double *b, const qml_long *ldb, qml_long *info);

void dppsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, double *afp, char *equed, double *s, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dpptrf(const char *uplo, const qml_long *n, double *ap, qml_long *info);

void dpptri(const char *uplo, const qml_long *n, double *ap, qml_long *info);

void dpptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, double *b, const qml_long *ldb, qml_long *info);

void dpstf2(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *piv, qml_long *rank, const double *tol, double *work, qml_long *info);

void dpstrf(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *piv, qml_long *rank, const double *tol, double *work, qml_long *info);

void dptcon(const qml_long *n, double *d, double *e, const double *anorm, double *rcond, double *work, qml_long *info);

void dpteqr(const char *compz, const qml_long *n, double *d, double *e, double *z, const qml_long *ldz, double *work, qml_long *info);

void dptrfs(const qml_long *n, const qml_long *nrhs, double *d, double *e, double *df, double *ef, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *info);

void dptsv(const qml_long *n, const qml_long *nrhs, double *d, double *e, double *b, const qml_long *ldb, qml_long *info);

void dptsvx(const char *fact, const qml_long *n, const qml_long *nrhs, double *d, double *e, double *df, double *ef, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *info);

void dpttrf(const qml_long *n, double *d, double *e, qml_long *info);

void dpttrs(const qml_long *n, const qml_long *nrhs, double *d, double *e, double *b, const qml_long *ldb, qml_long *info);

void dptts2(const qml_long *n, const qml_long *nrhs, double *d, double *e, double *b, const qml_long *ldb);

void drscl(const qml_long *n, const double *sa, double *sx, const qml_long *incx);

void dsbev(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *w, double *z, const qml_long *ldz, double *work, qml_long *info);

void dsbevd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *w, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dsbevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *q, const qml_long *ldq, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, double *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void dsbgst(const char *vect, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, double *ab, const qml_long *ldab, double *bb, const qml_long *ldbb, double *x, const qml_long *ldx, double *work, qml_long *info);

void dsbgv(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, double *ab, const qml_long *ldab, double *bb, const qml_long *ldbb, double *w, double *z, const qml_long *ldz, double *work, qml_long *info);

void dsbgvd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, double *ab, const qml_long *ldab, double *bb, const qml_long *ldbb, double *w, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dsbgvx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, double *ab, const qml_long *ldab, double *bb, const qml_long *ldbb, double *q, const qml_long *ldq, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, double *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void dsbtrd(const char *vect, const char *uplo, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *d, double *e, double *q, const qml_long *ldq, double *work, qml_long *info);

void dsfrk(const char *transr, const char *uplo, const char *trans, const qml_long *n, const qml_long *k, const double *alpha, double *a, const qml_long *lda, const double *beta, double *c);

void dsgesv(const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *work, float *swork, qml_long *iter, qml_long *info);

void dspcon(const char *uplo, const qml_long *n, double *ap, qml_long *ipiv, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dspev(const char *jobz, const char *uplo, const qml_long *n, double *ap, double *w, double *z, const qml_long *ldz, double *work, qml_long *info);

void dspevd(const char *jobz, const char *uplo, const qml_long *n, double *ap, double *w, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dspevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, double *ap, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, double *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void dspgst(const qml_long *itype, const char *uplo, const qml_long *n, double *ap, double *bp, qml_long *info);

void dspgv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, double *ap, double *bp, double *w, double *z, const qml_long *ldz, double *work, qml_long *info);

void dspgvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, double *ap, double *bp, double *w, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dspgvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, double *ap, double *bp, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, double *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void dsposv(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *work, float *swork, qml_long *iter, qml_long *info);

void dsprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, double *afp, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dspsv(const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, qml_long *ipiv, double *b, const qml_long *ldb, qml_long *info);

void dspsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, double *afp, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dsptrd(const char *uplo, const qml_long *n, double *ap, double *d, double *e, double *tau, qml_long *info);

void dsptrf(const char *uplo, const qml_long *n, double *ap, qml_long *ipiv, qml_long *info);

void dsptri(const char *uplo, const qml_long *n, double *ap, qml_long *ipiv, double *work, qml_long *info);

void dsptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *ap, qml_long *ipiv, double *b, const qml_long *ldb, qml_long *info);

void dstebz(const char *range, const char *order, const qml_long *n, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, double *d, double *e, qml_long *m, qml_long *nsplit, double *w, qml_long *iblock, qml_long *isplit, double *work, qml_long *iwork, qml_long *info);

void dstedc(const char *compz, const qml_long *n, double *d, double *e, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dstegr(const char *jobz, const char *range, const qml_long *n, double *d, double *e, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, qml_long *isuppz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dstein(const qml_long *n, double *d, double *e, const qml_long *m, double *w, qml_long *iblock, qml_long *isplit, double *z, const qml_long *ldz, double *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void dstemr(const char *jobz, const char *range, const qml_long *n, double *d, double *e, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, qml_long *m, double *w, double *z, const qml_long *ldz, const qml_long *nzc, qml_long *isuppz, qml_int *tryrac, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dsteqr(const char *compz, const qml_long *n, double *d, double *e, double *z, const qml_long *ldz, double *work, qml_long *info);

void dsterf(const qml_long *n, double *d, double *e, qml_long *info);

void dstev(const char *jobz, const qml_long *n, double *d, double *e, double *z, const qml_long *ldz, double *work, qml_long *info);

void dstevd(const char *jobz, const qml_long *n, double *d, double *e, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dstevr(const char *jobz, const char *range, const qml_long *n, double *d, double *e, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, qml_long *isuppz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dstevx(const char *jobz, const char *range, const qml_long *n, double *d, double *e, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, double *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void dsycon(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dsycon_rook(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, const double *anorm, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dsyconv(const char *uplo, const char *way, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, double *e, qml_long *info);

void dsyequb(const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *s, double *scond, double *amax, double *work, qml_long *info);

void dsyev(const char *jobz, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *w, double *work, const qml_long *lwork, qml_long *info);

void dsyevd(const char *jobz, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *w, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dsyevr(const char *jobz, const char *range, const char *uplo, const qml_long *n, double *a, const qml_long *lda, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, qml_long *isuppz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dsyevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, double *a, const qml_long *lda, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void dsygs2(const qml_long *itype, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, qml_long *info);

void dsygst(const qml_long *itype, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, qml_long *info);

void dsygv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *w, double *work, const qml_long *lwork, qml_long *info);

void dsygvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *w, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dsygvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, double *z, const qml_long *ldz, double *work, const qml_long *lwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void dsyrfs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *af, const qml_long *ldaf, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dsysv(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, qml_long *ipiv, double *b, const qml_long *ldb, double *work, const qml_long *lwork, qml_long *info);

void dsysv_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, qml_long *ipiv, double *b, const qml_long *ldb, double *work, const qml_long *lwork, qml_long *info);

void dsysvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *af, const qml_long *ldaf, qml_long *ipiv, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dsyswapr(const char *uplo, const qml_long *n, double *a, const qml_long *lda, const qml_long *i1, const qml_long *i2);

void dsytf2(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void dsytf2_rook(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void dsytrf(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, double *work, const qml_long *lwork, qml_long *info);

void dsytrf_rook(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, double *work, const qml_long *lwork, qml_long *info);

void dsytri(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, double *work, qml_long *info);

void dsytri2(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, double *work, const qml_long *lwork, qml_long *info);

void dsytri2x(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, double *work, const qml_long *nb, qml_long *info);

void dsytri_rook(const char *uplo, const qml_long *n, double *a, const qml_long *lda, qml_long *ipiv, double *work, qml_long *info);

void dsytrs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, qml_long *ipiv, double *b, const qml_long *ldb, qml_long *info);

void dsytrs2(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, qml_long *ipiv, double *b, const qml_long *ldb, double *work, qml_long *info);

void dsytrs_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, qml_long *ipiv, double *b, const qml_long *ldb, qml_long *info);

void dtbcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *kd, double *ab, const qml_long *ldab, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dtbrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, double *ab, const qml_long *ldab, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dtbtrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, double *ab, const qml_long *ldab, double *b, const qml_long *ldb, qml_long *info);

void dtfsm(const char *transr, const char *side, const char *uplo, const char *trans, const char *diag, const qml_long *m, const qml_long *n, const double *alpha, double *a, double *b, const qml_long *ldb);

void dtftri(const char *transr, const char *uplo, const char *diag, const qml_long *n, double *a, qml_long *info);

void dtfttp(const char *transr, const char *uplo, const qml_long *n, double *arf, double *ap, qml_long *info);

void dtfttr(const char *transr, const char *uplo, const qml_long *n, double *arf, double *a, const qml_long *lda, qml_long *info);

void dtgevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, double *s, const qml_long *lds, double *p, const qml_long *ldp, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, double *work, qml_long *info);

void dtgex2(qml_int *wantq, qml_int *wantz, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *q, const qml_long *ldq, double *z, const qml_long *ldz, const qml_long *j1, const qml_long *n1, const qml_long *n2, double *work, const qml_long *lwork, qml_long *info);

void dtgexc(qml_int *wantq, qml_int *wantz, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *q, const qml_long *ldq, double *z, const qml_long *ldz, qml_long *ifst, qml_long *ilst, double *work, const qml_long *lwork, qml_long *info);

void dtgsen(const qml_long *ijob, qml_int *wantq, qml_int *wantz, qml_int *select, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *alphar, double *alphai, double *beta, double *q, const qml_long *ldq, double *z, const qml_long *ldz, qml_long *m, double *pl, double *pr, double *dif, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dtgsja(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, const qml_long *k, const qml_long *l, double *a, const qml_long *lda, double *b, const qml_long *ldb, const double *tola, const double *tolb, double *alpha, double *beta, double *u, const qml_long *ldu, double *v, const qml_long *ldv, double *q, const qml_long *ldq, double *work, qml_long *ncycle, qml_long *info);

void dtgsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, double *s, double *dif, const qml_long *mm, qml_long *m, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dtgsy2(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *c, const qml_long *ldc, double *d, const qml_long *ldd, double *e, const qml_long *lde, double *f, const qml_long *ldf, double *scale, double *rdsum, double *rdscal, qml_long *iwork, qml_long *pq, qml_long *info);

void dtgsyl(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *c, const qml_long *ldc, double *d, const qml_long *ldd, double *e, const qml_long *lde, double *f, const qml_long *ldf, double *scale, double *dif, double *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void dtpcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, double *ap, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dtpmqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, const qml_long *nb, double *v, const qml_long *ldv, double *t, const qml_long *ldt, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *work, qml_long *info);

void dtpqrt(const qml_long *m, const qml_long *n, const qml_long *l, const qml_long *nb, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *t, const qml_long *ldt, double *work, qml_long *info);

void dtpqrt2(const qml_long *m, const qml_long *n, const qml_long *l, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *t, const qml_long *ldt, qml_long *info);

void dtprfb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, double *v, const qml_long *ldv, double *t, const qml_long *ldt, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *work, const qml_long *ldwork);

void dtprfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, double *ap, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dtptri(const char *uplo, const char *diag, const qml_long *n, double *ap, qml_long *info);

void dtptrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, double *ap, double *b, const qml_long *ldb, qml_long *info);

void dtpttf(const char *transr, const char *uplo, const qml_long *n, double *ap, double *arf, qml_long *info);

void dtpttr(const char *uplo, const qml_long *n, double *ap, double *a, const qml_long *lda, qml_long *info);

void dtrcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, double *a, const qml_long *lda, double *rcond, double *work, qml_long *iwork, qml_long *info);

void dtrevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, double *t, const qml_long *ldt, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, double *work, qml_long *info);

void dtrexc(const char *compq, const qml_long *n, double *t, const qml_long *ldt, double *q, const qml_long *ldq, qml_long *ifst, qml_long *ilst, double *work, qml_long *info);

void dtrrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *x, const qml_long *ldx, double *ferr, double *berr, double *work, qml_long *iwork, qml_long *info);

void dtrsen(const char *job, const char *compq, qml_int *select, const qml_long *n, double *t, const qml_long *ldt, double *q, const qml_long *ldq, double *wr, double *wi, qml_long *m, double *s, double *sep, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void dtrsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, double *t, const qml_long *ldt, double *vl, const qml_long *ldvl, double *vr, const qml_long *ldvr, double *s, double *sep, const qml_long *mm, qml_long *m, double *work, const qml_long *ldwork, qml_long *iwork, qml_long *info);

void dtrsyl(const char *trana, const char *tranb, const qml_long *isgn, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *b, const qml_long *ldb, double *c, const qml_long *ldc, double *scale, qml_long *info);

void dtrttf(const char *transr, const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *arf, qml_long *info);

void dtrttp(const char *uplo, const qml_long *n, double *a, const qml_long *lda, double *ap, qml_long *info);

void dtzrzf(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, double *tau, double *work, const qml_long *lwork, qml_long *info);

double dzsum1(const qml_long *n, QML_DOUBLE_COMPLEX *cx, const qml_long *incx);

qml_long icmax1(const qml_long *n, QML_SINGLE_COMPLEX *cx, const qml_long *incx);

qml_long iladiag(const char *diag);

qml_long ilaenv(const qml_long *ispec, const char *name, const char *opts, const qml_long *n1, const qml_long *n2, const qml_long *n3, const qml_long *n4);

qml_long ilaprec(const char *prec);

qml_long ilatrans(const char *trans);

qml_long ilauplo(const char *uplo);

void ilaver(qml_long *vers_major, qml_long *vers_minor, qml_long *vers_patch);

qml_long izmax1(const qml_long *n, QML_DOUBLE_COMPLEX *zx, const qml_long *incx);

qml_int lsamen(const qml_long *n, const char *ca, const char *cb);

void sbbcsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const qml_long *m, const qml_long *p, const qml_long *q, float *theta, float *phi, float *u1, const qml_long *ldu1, float *u2, const qml_long *ldu2, float *v1t, const qml_long *ldv1t, float *v2t, const qml_long *ldv2t, float *b11d, float *b11e, float *b12d, float *b12e, float *b21d, float *b21e, float *b22d, float *b22e, float *work, const qml_long *lwork, qml_long *info);

void sbdsdc(const char *uplo, const char *compq, const qml_long *n, float *d, float *e, float *u, const qml_long *ldu, float *vt, const qml_long *ldvt, float *q, qml_long *iq, float *work, qml_long *iwork, qml_long *info);

float scsum1(const qml_long *n, QML_SINGLE_COMPLEX *cx, const qml_long *incx);

void sdisna(const char *job, const qml_long *m, const qml_long *n, float *d, float *sep, qml_long *info);

void sgbbrd(const char *vect, const qml_long *m, const qml_long *n, const qml_long *ncc, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, float *d, float *e, float *q, const qml_long *ldq, float *pt, const qml_long *ldpt, float *c, const qml_long *ldc, float *work, qml_long *info);

void sgbcon(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, qml_long *ipiv, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void sgbequ(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void sgbequb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void sgbrfs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, float *ab, const qml_long *ldab, float *afb, const qml_long *ldafb, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sgbsv(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, float *ab, const qml_long *ldab, qml_long *ipiv, float *b, const qml_long *ldb, qml_long *info);

void sgbsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, float *ab, const qml_long *ldab, float *afb, const qml_long *ldafb, qml_long *ipiv, char *equed, float *r, float *c, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sgbtf2(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void sgbtrf(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void sgbtrs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, float *ab, const qml_long *ldab, qml_long *ipiv, float *b, const qml_long *ldb, qml_long *info);

void sgebak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *scale, const qml_long *m, float *v, const qml_long *ldv, qml_long *info);

void sgebal(const char *job, const qml_long *n, float *a, const qml_long *lda, qml_long *ilo, qml_long *ihi, float *scale, qml_long *info);

void sgebd2(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *d, float *e, float *tauq, float *taup, float *work, qml_long *info);

void sgebrd(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *d, float *e, float *tauq, float *taup, float *work, const qml_long *lwork, qml_long *info);

void sgecon(const char *norm, const qml_long *n, float *a, const qml_long *lda, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void sgeequ(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void sgeequb(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *r, float *c, float *rowcnd, float *colcnd, float *amax, qml_long *info);

void sgees(const char *jobvs, const char *sort, void *select, const qml_long *n, float *a, const qml_long *lda, qml_long *sdim, float *wr, float *wi, float *vs, const qml_long *ldvs, float *work, const qml_long *lwork, qml_int *bwork, qml_long *info);

void sgeesx(const char *jobvs, const char *sort, void *select, const char *sense, const qml_long *n, float *a, const qml_long *lda, qml_long *sdim, float *wr, float *wi, float *vs, const qml_long *ldvs, float *rconde, float *rcondv, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_int *bwork, qml_long *info);

void sgeev(const char *jobvl, const char *jobvr, const qml_long *n, float *a, const qml_long *lda, float *wr, float *wi, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, float *work, const qml_long *lwork, qml_long *info);

void sgeevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, float *a, const qml_long *lda, float *wr, float *wi, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, float *scale, float *abnrm, float *rconde, float *rcondv, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void sgehd2(const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sgehrd(const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sgejsv(const char *joba, const char *jobu, const char *jobv, const char *jobr, const char *jobt, const char *jobp, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *sva, float *u, const qml_long *ldu, float *v, const qml_long *ldv, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void sgelq2(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sgelqf(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sgels(const char *trans, const qml_long *m, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *work, const qml_long *lwork, qml_long *info);

void sgelsd(const qml_long *m, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *s, const float *rcond, qml_long *rank, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void sgelss(const qml_long *m, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *s, const float *rcond, qml_long *rank, float *work, const qml_long *lwork, qml_long *info);

void sgelsy(const qml_long *m, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *b, const qml_long *ldb, qml_long *jpvt, const float *rcond, qml_long *rank, float *work, const qml_long *lwork, qml_long *info);

void sgemqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *nb, float *v, const qml_long *ldv, float *t, const qml_long *ldt, float *c, const qml_long *ldc, float *work, qml_long *info);

void sgeql2(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sgeqlf(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sgeqr2p(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sgeqrfp(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sgeqrt(const qml_long *m, const qml_long *n, const qml_long *nb, float *a, const qml_long *lda, float *t, const qml_long *ldt, float *work, qml_long *info);

void sgeqrt2(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *t, const qml_long *ldt, qml_long *info);

void sgeqrt3(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *t, const qml_long *ldt, qml_long *info);

void sgerfs(const char *trans, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *af, const qml_long *ldaf, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sgerq2(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sgerqf(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sgesc2(const qml_long *n, float *a, const qml_long *lda, float *rhs, qml_long *ipiv, qml_long *jpiv, float *scale);

void sgesdd(const char *jobz, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *s, float *u, const qml_long *ldu, float *vt, const qml_long *ldvt, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void sgesvd(const char *jobu, const char *jobvt, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *s, float *u, const qml_long *ldu, float *vt, const qml_long *ldvt, float *work, const qml_long *lwork, qml_long *info);

void sgesvj(const char *joba, const char *jobu, const char *jobv, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *sva, const qml_long *mv, float *v, const qml_long *ldv, float *work, const qml_long *lwork, qml_long *info);

void sgesvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *af, const qml_long *ldaf, qml_long *ipiv, char *equed, float *r, float *c, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sgetc2(const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, qml_long *jpiv, qml_long *info);

void sggbak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *lscale, float *rscale, const qml_long *m, float *v, const qml_long *ldv, qml_long *info);

void sggbal(const char *job, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, qml_long *ilo, qml_long *ihi, float *lscale, float *rscale, float *work, qml_long *info);

void sgges(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, qml_long *sdim, float *alphar, float *alphai, float *beta, float *vsl, const qml_long *ldvsl, float *vsr, const qml_long *ldvsr, float *work, const qml_long *lwork, qml_int *bwork, qml_long *info);

void sgges3(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, qml_long *sdim, float *alphar, float *alphai, float *beta, float *vsl, const qml_long *ldvsl, float *vsr, const qml_long *ldvsr, float *work, const qml_long *lwork, qml_int *bwork, qml_long *info);

void sggesx(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const char *sense, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, qml_long *sdim, float *alphar, float *alphai, float *beta, float *vsl, const qml_long *ldvsl, float *vsr, const qml_long *ldvsr, float *rconde, float *rcondv, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_int *bwork, qml_long *info);

void sggev(const char *jobvl, const char *jobvr, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *alphar, float *alphai, float *beta, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, float *work, const qml_long *lwork, qml_long *info);

void sggev3(const char *jobvl, const char *jobvr, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *alphar, float *alphai, float *beta, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, float *work, const qml_long *lwork, qml_long *info);

void sggevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *alphar, float *alphai, float *beta, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, float *lscale, float *rscale, float *abnrm, float *bbnrm, float *rconde, float *rcondv, float *work, const qml_long *lwork, qml_long *iwork, qml_int *bwork, qml_long *info);

void sggglm(const qml_long *n, const qml_long *m, const qml_long *p, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *d, float *x, float *y, float *work, const qml_long *lwork, qml_long *info);

void sgghd3(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *q, const qml_long *ldq, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *info);

void sgghrd(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *q, const qml_long *ldq, float *z, const qml_long *ldz, qml_long *info);

void sgglse(const qml_long *m, const qml_long *n, const qml_long *p, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *c, float *d, float *x, float *work, const qml_long *lwork, qml_long *info);

void sggqrf(const qml_long *n, const qml_long *m, const qml_long *p, float *a, const qml_long *lda, float *taua, float *b, const qml_long *ldb, float *taub, float *work, const qml_long *lwork, qml_long *info);

void sggrqf(const qml_long *m, const qml_long *p, const qml_long *n, float *a, const qml_long *lda, float *taua, float *b, const qml_long *ldb, float *taub, float *work, const qml_long *lwork, qml_long *info);

void sggsvd3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *n, const qml_long *p, qml_long *k, qml_long *l, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *alpha, float *beta, float *u, const qml_long *ldu, float *v, const qml_long *ldv, float *q, const qml_long *ldq, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void sggsvp3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, const float *tola, const float *tolb, qml_long *k, qml_long *l, float *u, const qml_long *ldu, float *v, const qml_long *ldv, float *q, const qml_long *ldq, qml_long *iwork, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sgsvj0(const char *jobv, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *d, float *sva, const qml_long *mv, float *v, const qml_long *ldv, const float *eps, const float *sfmin, const float *tol, const qml_long *nsweep, float *work, const qml_long *lwork, qml_long *info);

void sgsvj1(const char *jobv, const qml_long *m, const qml_long *n, const qml_long *n1, float *a, const qml_long *lda, float *d, float *sva, const qml_long *mv, float *v, const qml_long *ldv, const float *eps, const float *sfmin, const float *tol, const qml_long *nsweep, float *work, const qml_long *lwork, qml_long *info);

void sgtcon(const char *norm, const qml_long *n, float *dl, float *d, float *du, float *du2, qml_long *ipiv, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void sgtrfs(const char *trans, const qml_long *n, const qml_long *nrhs, float *dl, float *d, float *du, float *dlf, float *df, float *duf, float *du2, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sgtsv(const qml_long *n, const qml_long *nrhs, float *dl, float *d, float *du, float *b, const qml_long *ldb, qml_long *info);

void sgtsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, float *dl, float *d, float *du, float *dlf, float *df, float *duf, float *du2, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sgttrf(const qml_long *n, float *dl, float *d, float *du, float *du2, qml_long *ipiv, qml_long *info);

void sgttrs(const char *trans, const qml_long *n, const qml_long *nrhs, float *dl, float *d, float *du, float *du2, qml_long *ipiv, float *b, const qml_long *ldb, qml_long *info);

void sgtts2(const qml_long *itrans, const qml_long *n, const qml_long *nrhs, float *dl, float *d, float *du, float *du2, qml_long *ipiv, float *b, const qml_long *ldb);

void shgeqz(const char *job, const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *h, const qml_long *ldh, float *t, const qml_long *ldt, float *alphar, float *alphai, float *beta, float *q, const qml_long *ldq, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *info);

void shsein(const char *side, const char *eigsrc, const char *initv, qml_int *select, const qml_long *n, float *h, const qml_long *ldh, float *wr, float *wi, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, float *work, qml_long *ifaill, qml_long *ifailr, qml_long *info);

void shseqr(const char *job, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *h, const qml_long *ldh, float *wr, float *wi, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *info);

qml_int sisnan(const float *sin);

void slabad(float *small, float *large);

void slabrd(const qml_long *m, const qml_long *n, const qml_long *nb, float *a, const qml_long *lda, float *d, float *e, float *tauq, float *taup, float *x, const qml_long *ldx, float *y, const qml_long *ldy);

void slacn2(const qml_long *n, float *v, float *x, qml_long *isgn, float *est, qml_long *kase, qml_long *isave);

void slacon(const qml_long *n, float *v, float *x, qml_long *isgn, float *est, qml_long *kase);

void slaebz(const qml_long *ijob, const qml_long *nitmax, const qml_long *n, const qml_long *mmax, const qml_long *minp, const qml_long *nbmin, const float *abstol, const float *reltol, const float *pivmin, float *d, float *e, float *e2, qml_long *nval, float *ab, float *c, qml_long *mout, qml_long *nab, float *work, qml_long *iwork, qml_long *info);

void slaed0(const qml_long *icompq, const qml_long *qsiz, const qml_long *n, float *d, float *e, float *q, const qml_long *ldq, float *qstore, const qml_long *ldqs, float *work, qml_long *iwork, qml_long *info);

void slaed1(const qml_long *n, float *d, float *q, const qml_long *ldq, qml_long *indxq, float *rho, const qml_long *cutpnt, float *work, qml_long *iwork, qml_long *info);

void slaed2(qml_long *k, const qml_long *n, const qml_long *n1, float *d, float *q, const qml_long *ldq, qml_long *indxq, float *rho, float *z, float *dlamda, float *w, float *q2, qml_long *indx, qml_long *indxc, qml_long *indxp, qml_long *coltyp, qml_long *info);

void slaed3(const qml_long *k, const qml_long *n, const qml_long *n1, float *d, float *q, const qml_long *ldq, const float *rho, float *dlamda, float *q2, qml_long *indx, qml_long *ctot, float *w, float *s, qml_long *info);

void slaed4(const qml_long *n, const qml_long *i, float *d, float *z, float *delta, const float *rho, float *dlam, qml_long *info);

void slaed5(const qml_long *i, float *d, float *z, float *delta, const float *rho, float *dlam);

void slaed6(const qml_long *kniter, qml_int *orgati, const float *rho, float *d, float *z, const float *finit, float *tau, qml_long *info);

void slaed7(const qml_long *icompq, const qml_long *n, const qml_long *qsiz, const qml_long *tlvls, const qml_long *curlvl, const qml_long *curpbm, float *d, float *q, const qml_long *ldq, qml_long *indxq, float *rho, const qml_long *cutpnt, float *qstore, qml_long *qptr, qml_long *prmptr, qml_long *perm, qml_long *givptr, qml_long *givcol, float *givnum, float *work, qml_long *iwork, qml_long *info);

void slaed8(const qml_long *icompq, qml_long *k, const qml_long *n, const qml_long *qsiz, float *d, float *q, const qml_long *ldq, qml_long *indxq, float *rho, const qml_long *cutpnt, float *z, float *dlamda, float *q2, const qml_long *ldq2, float *w, qml_long *perm, qml_long *givptr, qml_long *givcol, float *givnum, qml_long *indxp, qml_long *indx, qml_long *info);

void slaed9(const qml_long *k, const qml_long *kstart, const qml_long *kstop, const qml_long *n, float *d, float *q, const qml_long *ldq, const float *rho, float *dlamda, float *w, float *s, const qml_long *lds, qml_long *info);

void slaeda(const qml_long *n, const qml_long *tlvls, const qml_long *curlvl, const qml_long *curpbm, qml_long *prmptr, qml_long *perm, qml_long *givptr, qml_long *givcol, float *givnum, float *q, qml_long *qptr, float *z, float *ztemp, qml_long *info);

void slaein(qml_int *rightv, qml_int *noinit, const qml_long *n, float *h, const qml_long *ldh, const float *wr, const float *wi, float *vr, float *vi, float *b, const qml_long *ldb, float *work, const float *eps3, const float *smlnum, const float *bignum, qml_long *info);

void slaexc(qml_int *wantq, const qml_long *n, float *t, const qml_long *ldt, float *q, const qml_long *ldq, const qml_long *j1, const qml_long *n1, const qml_long *n2, float *work, qml_long *info);

void slag2(float *a, const qml_long *lda, float *b, const qml_long *ldb, const float *safmin, float *scale1, float *scale2, float *wr1, float *wr2, float *wi);

void slag2d(const qml_long *m, const qml_long *n, float *sa, const qml_long *ldsa, double *a, const qml_long *lda, qml_long *info);

void sla_gbamv(const qml_long *trans, const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, const float *alpha, float *ab, const qml_long *ldab, float *x, const qml_long *incx, const float *beta, float *y, const qml_long *incy);

float sla_gbrcond(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, float *afb, const qml_long *ldafb, qml_long *ipiv, const qml_long *cmode, float *c, qml_long *info, float *work, qml_long *iwork);

float sla_gbrpvgrw(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *ncols, float *ab, const qml_long *ldab, float *afb, const qml_long *ldafb);

void sla_geamv(const qml_long *trans, const qml_long *m, const qml_long *n, const float *alpha, float *a, const qml_long *lda, float *x, const qml_long *incx, const float *beta, float *y, const qml_long *incy);

float sla_gercond(const char *trans, const qml_long *n, float *a, const qml_long *lda, float *af, const qml_long *ldaf, qml_long *ipiv, const qml_long *cmode, float *c, qml_long *info, float *work, qml_long *iwork);

float sla_gerpvgrw(const qml_long *n, const qml_long *ncols, float *a, const qml_long *lda, float *af, const qml_long *ldaf);

void slags2(qml_int *upper, const float *a1, const float *a2, const float *a3, const float *b1, const float *b2, const float *b3, float *csu, float *snu, float *csv, float *snv, float *csq, float *snq);

void slagtf(const qml_long *n, float *a, const float *lambda, float *b, float *c, const float *tol, float *d, qml_long *in, qml_long *info);

void slagtm(const char *trans, const qml_long *n, const qml_long *nrhs, const float *alpha, float *dl, float *d, float *du, float *x, const qml_long *ldx, const float *beta, float *b, const qml_long *ldb);

void slagts(const qml_long *job, const qml_long *n, float *a, float *b, float *c, float *d, qml_long *in, float *y, float *tol, qml_long *info);

void slagv2(float *a, const qml_long *lda, float *b, const qml_long *ldb, float *alphar, float *alphai, float *beta, float *csl, float *snl, float *csr, float *snr);

void slahqr(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *h, const qml_long *ldh, float *wr, float *wi, const qml_long *iloz, const qml_long *ihiz, float *z, const qml_long *ldz, qml_long *info);

void slahr2(const qml_long *n, const qml_long *k, const qml_long *nb, float *a, const qml_long *lda, float *tau, float *t, const qml_long *ldt, float *y, const qml_long *ldy);

void slaic1(const qml_long *job, const qml_long *j, float *x, const float *sest, float *w, const float *gamma, float *sestpr, float *s, float *c);

qml_int slaisnan(const float *sin1, const float *sin2);

void sla_lin_berr(const qml_long *n, const qml_long *nz, const qml_long *nrhs, float *res, float *ayb, float *berr);

void slaln2(qml_int *ltrans, const qml_long *na, const qml_long *nw, const float *smin, const float *ca, float *a, const qml_long *lda, const float *d1, const float *d2, float *b, const qml_long *ldb, const float *wr, const float *wi, float *x, const qml_long *ldx, float *scale, float *xnorm, qml_long *info);

void slals0(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, const qml_long *nrhs, float *b, const qml_long *ldb, float *bx, const qml_long *ldbx, qml_long *perm, const qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, float *givnum, const qml_long *ldgnum, float *poles, float *difl, float *difr, float *z, const qml_long *k, const float *c, const float *s, float *work, qml_long *info);

void slalsa(const qml_long *icompq, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, float *b, const qml_long *ldb, float *bx, const qml_long *ldbx, float *u, const qml_long *ldu, float *vt, qml_long *k, float *difl, float *difr, float *z, float *poles, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, qml_long *perm, float *givnum, float *c, float *s, float *work, qml_long *iwork, qml_long *info);

void slalsd(const char *uplo, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, float *d, float *e, float *b, const qml_long *ldb, const float *rcond, qml_long *rank, float *work, qml_long *iwork, qml_long *info);

float slamch(const char *cmach);

void slamrg(const qml_long *n1, const qml_long *n2, float *a, const qml_long *strd1, const qml_long *strd2, qml_long *index);

qml_long slaneg(const qml_long *n, float *d, float *lld, const float *sigma, const float *pivmin, const qml_long *r);

float slangb(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, float *work);

float slangt(const char *norm, const qml_long *n, float *dl, float *d, float *du);

float slanhs(const char *norm, const qml_long *n, float *a, const qml_long *lda, float *work);

float slansb(const char *norm, const char *uplo, const qml_long *n, const qml_long *k, float *ab, const qml_long *ldab, float *work);

float slansf(const char *norm, const char *transr, const char *uplo, const qml_long *n, float *a, float *work);

float slansp(const char *norm, const char *uplo, const qml_long *n, float *ap, float *work);

float slanst(const char *norm, const qml_long *n, float *d, float *e);

float slansy(const char *norm, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *work);

float slantb(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *k, float *ab, const qml_long *ldab, float *work);

float slantp(const char *norm, const char *uplo, const char *diag, const qml_long *n, float *ap, float *work);

float slantr(const char *norm, const char *uplo, const char *diag, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *work);

void slanv2(float *a, float *b, float *c, float *d, float *rt1r, float *rt1i, float *rt2r, float *rt2i, float *cs, float *sn);

void slapll(const qml_long *n, float *x, const qml_long *incx, float *y, const qml_long *incy, float *ssmin);

void slapmr(qml_int *forwrd, const qml_long *m, const qml_long *n, float *x, const qml_long *ldx, qml_long *k);

void slapmt(qml_int *forwrd, const qml_long *m, const qml_long *n, float *x, const qml_long *ldx, qml_long *k);

float sla_porcond(const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *af, const qml_long *ldaf, const qml_long *cmode, float *c, qml_long *info, float *work, qml_long *iwork);

float sla_porpvgrw(const char *uplo, const qml_long *ncols, float *a, const qml_long *lda, float *af, const qml_long *ldaf, float *work);

void slaqgb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, float *ab, const qml_long *ldab, float *r, float *c, const float *rowcnd, const float *colcnd, const float *amax, char *equed);

void slaqge(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *r, float *c, const float *rowcnd, const float *colcnd, const float *amax, char *equed);

void slaqr0(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *h, const qml_long *ldh, float *wr, float *wi, const qml_long *iloz, const qml_long *ihiz, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *info);

void slaqr1(const qml_long *n, float *h, const qml_long *ldh, const float *sr1, const float *si1, const float *sr2, const float *si2, float *v);

void slaqr2(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, float *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, float *z, const qml_long *ldz, qml_long *ns, qml_long *nd, float *sr, float *si, float *v, const qml_long *ldv, const qml_long *nh, float *t, const qml_long *ldt, const qml_long *nv, float *wv, const qml_long *ldwv, float *work, const qml_long *lwork);

void slaqr3(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, float *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, float *z, const qml_long *ldz, qml_long *ns, qml_long *nd, float *sr, float *si, float *v, const qml_long *ldv, const qml_long *nh, float *t, const qml_long *ldt, const qml_long *nv, float *wv, const qml_long *ldwv, float *work, const qml_long *lwork);

void slaqr4(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *h, const qml_long *ldh, float *wr, float *wi, const qml_long *iloz, const qml_long *ihiz, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *info);

void slaqr5(qml_int *wantt, qml_int *wantz, const qml_long *kacc22, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nshfts, float *sr, float *si, float *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, float *z, const qml_long *ldz, float *v, const qml_long *ldv, float *u, const qml_long *ldu, const qml_long *nv, float *wv, const qml_long *ldwv, const qml_long *nh, float *wh, const qml_long *ldwh);

void slaqsb(const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *s, const float *scond, const float *amax, char *equed);

void slaqsp(const char *uplo, const qml_long *n, float *ap, float *s, const float *scond, const float *amax, char *equed);

void slaqsy(const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *s, const float *scond, const float *amax, char *equed);

void slaqtr(qml_int *ltran, qml_int *lreal, const qml_long *n, float *t, const qml_long *ldt, float *b, const float *w, float *scale, float *x, float *work, qml_long *info);

void slar1v(const qml_long *n, const qml_long *b1, const qml_long *bn, const float *lambda, float *d, float *l, float *ld, float *lld, const float *pivmin, const float *gaptol, float *z, qml_int *wantnc, qml_long *negcnt, float *ztz, float *mingma, qml_long *r, qml_long *isuppz, float *nrminv, float *resid, float *rqcorr, float *work);

void slar2v(const qml_long *n, float *x, float *y, float *z, const qml_long *incx, float *c, float *s, const qml_long *incc);

void slarfgp(const qml_long *n, float *alpha, float *x, const qml_long *incx, float *tau);

void slarfx(const char *side, const qml_long *m, const qml_long *n, float *v, const float *tau, float *c, const qml_long *ldc, float *work);

void slargv(const qml_long *n, float *x, const qml_long *incx, float *y, const qml_long *incy, float *c, const qml_long *incc);

void slarnv(const qml_long *idist, qml_long *iseed, const qml_long *n, float *x);

void slarra(const qml_long *n, float *d, float *e, float *e2, const float *spltol, const float *tnrm, qml_long *nsplit, qml_long *isplit, qml_long *info);

void slarrb(const qml_long *n, float *d, float *lld, const qml_long *ifirst, const qml_long *ilast, const float *rtol1, const float *rtol2, const qml_long *offset, float *w, float *wgap, float *werr, float *work, qml_long *iwork, const float *pivmin, const float *spdiam, const qml_long *twist, qml_long *info);

void slarrc(const char *jobt, const qml_long *n, const float *vl, const float *vu, float *d, float *e, const float *pivmin, qml_long *eigcnt, qml_long *lcnt, qml_long *rcnt, qml_long *info);

void slarrd(const char *range, const char *order, const qml_long *n, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, float *gers, const float *reltol, float *d, float *e, float *e2, const float *pivmin, const qml_long *nsplit, qml_long *isplit, qml_long *m, float *w, float *werr, float *wl, float *wu, qml_long *iblock, qml_long *indexw, float *work, qml_long *iwork, qml_long *info);

void slarre(const char *range, const qml_long *n, float *vl, float *vu, const qml_long *il, const qml_long *iu, float *d, float *e, float *e2, const float *rtol1, const float *rtol2, const float *spltol, qml_long *nsplit, qml_long *isplit, qml_long *m, float *w, float *werr, float *wgap, qml_long *iblock, qml_long *indexw, float *gers, float *pivmin, float *work, qml_long *iwork, qml_long *info);

void slarrf(const qml_long *n, float *d, float *l, float *ld, const qml_long *clstrt, const qml_long *clend, float *w, float *wgap, float *werr, const float *spdiam, const float *clgapl, const float *clgapr, const float *pivmin, float *sigma, float *dplus, float *lplus, float *work, qml_long *info);

void slarrj(const qml_long *n, float *d, float *e2, const qml_long *ifirst, const qml_long *ilast, const float *rtol, const qml_long *offset, float *w, float *werr, float *work, qml_long *iwork, const float *pivmin, const float *spdiam, qml_long *info);

void slarrk(const qml_long *n, const qml_long *iw, const float *gl, const float *gu, float *d, float *e2, const float *pivmin, const float *reltol, float *w, float *werr, qml_long *info);

void slarrr(const qml_long *n, float *d, float *e, qml_long *info);

void slarrv(const qml_long *n, const float *vl, const float *vu, float *d, float *l, const float *pivmin, qml_long *isplit, const qml_long *m, const qml_long *dol, const qml_long *dou, const float *minrgp, float *rtol1, float *rtol2, float *w, float *werr, float *wgap, qml_long *iblock, qml_long *indexw, float *gers, float *z, const qml_long *ldz, qml_long *isuppz, float *work, qml_long *iwork, qml_long *info);

void slarscl2(const qml_long *m, const qml_long *n, float *d, float *x, const qml_long *ldx);

void slartgp(const float *f, const float *g, float *cs, float *sn, float *r);

void slartgs(const float *x, const float *y, const float *sigma, float *cs, float *sn);

void slartv(const qml_long *n, float *x, const qml_long *incx, float *y, const qml_long *incy, float *c, float *s, const qml_long *incc);

void slaruv(qml_long *iseed, const qml_long *n, float *x);

void slarz(const char *side, const qml_long *m, const qml_long *n, const qml_long *l, float *v, const qml_long *incv, const float *tau, float *c, const qml_long *ldc, float *work);

void slarzb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, float *v, const qml_long *ldv, float *t, const qml_long *ldt, float *c, const qml_long *ldc, float *work, const qml_long *ldwork);

void slarzt(const char *direct, const char *storev, const qml_long *n, const qml_long *k, float *v, const qml_long *ldv, float *tau, float *t, const qml_long *ldt);

void slascl2(const qml_long *m, const qml_long *n, float *d, float *x, const qml_long *ldx);

void slasd0(const qml_long *n, const qml_long *sqre, float *d, float *e, float *u, const qml_long *ldu, float *vt, const qml_long *ldvt, const qml_long *smlsiz, qml_long *iwork, float *work, qml_long *info);

void slasd1(const qml_long *nl, const qml_long *nr, const qml_long *sqre, float *d, float *alpha, float *beta, float *u, const qml_long *ldu, float *vt, const qml_long *ldvt, qml_long *idxq, qml_long *iwork, float *work, qml_long *info);

void slasd2(const qml_long *nl, const qml_long *nr, const qml_long *sqre, qml_long *k, float *d, float *z, const float *alpha, const float *beta, float *u, const qml_long *ldu, float *vt, const qml_long *ldvt, float *dsigma, float *u2, const qml_long *ldu2, float *vt2, const qml_long *ldvt2, qml_long *idxp, qml_long *idx, qml_long *idxc, qml_long *idxq, qml_long *coltyp, qml_long *info);

void slasd3(const qml_long *nl, const qml_long *nr, const qml_long *sqre, const qml_long *k, float *d, float *q, const qml_long *ldq, float *dsigma, float *u, const qml_long *ldu, float *u2, const qml_long *ldu2, float *vt, const qml_long *ldvt, float *vt2, const qml_long *ldvt2, qml_long *idxc, qml_long *ctot, float *z, qml_long *info);

void slasd4(const qml_long *n, const qml_long *i, float *d, float *z, float *delta, const float *rho, float *sigma, float *work, qml_long *info);

void slasd5(const qml_long *i, float *d, float *z, float *delta, const float *rho, float *dsigma, float *work);

void slasd6(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, float *d, float *vf, float *vl, float *alpha, float *beta, qml_long *idxq, qml_long *perm, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, float *givnum, const qml_long *ldgnum, float *poles, float *difl, float *difr, float *z, qml_long *k, float *c, float *s, float *work, qml_long *iwork, qml_long *info);

void slasd7(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, qml_long *k, float *d, float *z, float *zw, float *vf, float *vfw, float *vl, float *vlw, const float *alpha, const float *beta, float *dsigma, qml_long *idx, qml_long *idxp, qml_long *idxq, qml_long *perm, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, float *givnum, const qml_long *ldgnum, float *c, float *s, qml_long *info);

void slasd8(const qml_long *icompq, const qml_long *k, float *d, float *z, float *vf, float *vl, float *difl, float *difr, const qml_long *lddifr, float *dsigma, float *work, qml_long *info);

void slasda(const qml_long *icompq, const qml_long *smlsiz, const qml_long *n, const qml_long *sqre, float *d, float *e, float *u, const qml_long *ldu, float *vt, qml_long *k, float *difl, float *difr, float *z, float *poles, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, qml_long *perm, float *givnum, float *c, float *s, float *work, qml_long *iwork, qml_long *info);

void slasdq(const char *uplo, const qml_long *sqre, const qml_long *n, const qml_long *ncvt, const qml_long *nru, const qml_long *ncc, float *d, float *e, float *vt, const qml_long *ldvt, float *u, const qml_long *ldu, float *c, const qml_long *ldc, float *work, qml_long *info);

void slasdt(const qml_long *n, qml_long *lvl, qml_long *nd, qml_long *inode, qml_long *ndiml, qml_long *ndimr, const qml_long *msub);

void slasy2(qml_int *ltranl, qml_int *ltranr, const qml_long *isgn, const qml_long *n1, const qml_long *n2, float *tl, const qml_long *ldtl, float *tr, const qml_long *ldtr, float *b, const qml_long *ldb, float *scale, float *x, const qml_long *ldx, float *xnorm, qml_long *info);

void sla_syamv(const qml_long *uplo, const qml_long *n, const float *alpha, float *a, const qml_long *lda, float *x, const qml_long *incx, const float *beta, float *y, const qml_long *incy);

void slasyf(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, float *a, const qml_long *lda, qml_long *ipiv, float *w, const qml_long *ldw, qml_long *info);

void slasyf_rook(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, float *a, const qml_long *lda, qml_long *ipiv, float *w, const qml_long *ldw, qml_long *info);

float sla_syrcond(const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *af, const qml_long *ldaf, qml_long *ipiv, const qml_long *cmode, float *c, qml_long *info, float *work, qml_long *iwork);

float sla_syrpvgrw(const char *uplo, const qml_long *n, const qml_long *info, float *a, const qml_long *lda, float *af, const qml_long *ldaf, qml_long *ipiv, float *work);

void slatbs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *x, float *scale, float *cnorm, qml_long *info);

void slatdf(const qml_long *ijob, const qml_long *n, float *z, const qml_long *ldz, float *rhs, float *rdsum, float *rdscal, qml_long *ipiv, qml_long *jpiv);

void slatps(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, float *ap, float *x, float *scale, float *cnorm, qml_long *info);

void slatrs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, float *a, const qml_long *lda, float *x, float *scale, float *cnorm, qml_long *info);

void slatrz(const qml_long *m, const qml_long *n, const qml_long *l, float *a, const qml_long *lda, float *tau, float *work);

void slauu2(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *info);

void slauum(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *info);

void sla_wwaddw(const qml_long *n, float *x, float *y, float *w);

void sopgtr(const char *uplo, const qml_long *n, float *ap, float *tau, float *q, const qml_long *ldq, float *work, qml_long *info);

void sopmtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, float *ap, float *tau, float *c, const qml_long *ldc, float *work, qml_long *info);

void sorbdb(const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, float *x11, const qml_long *ldx11, float *x12, const qml_long *ldx12, float *x21, const qml_long *ldx21, float *x22, const qml_long *ldx22, float *theta, float *phi, float *taup1, float *taup2, float *tauq1, float *tauq2, float *work, const qml_long *lwork, qml_long *info);

void sorbdb1(const qml_long *m, const qml_long *p, const qml_long *q, float *x11, const qml_long *ldx11, float *x21, const qml_long *ldx21, float *theta, float *phi, float *taup1, float *taup2, float *tauq1, float *work, const qml_long *lwork, qml_long *info);

void sorbdb2(const qml_long *m, const qml_long *p, const qml_long *q, float *x11, const qml_long *ldx11, float *x21, const qml_long *ldx21, float *theta, float *phi, float *taup1, float *taup2, float *tauq1, float *work, const qml_long *lwork, qml_long *info);

void sorbdb3(const qml_long *m, const qml_long *p, const qml_long *q, float *x11, const qml_long *ldx11, float *x21, const qml_long *ldx21, float *theta, float *phi, float *taup1, float *taup2, float *tauq1, float *work, const qml_long *lwork, qml_long *info);

void sorbdb4(const qml_long *m, const qml_long *p, const qml_long *q, float *x11, const qml_long *ldx11, float *x21, const qml_long *ldx21, float *theta, float *phi, float *taup1, float *taup2, float *tauq1, float *phantom, float *work, const qml_long *lwork, qml_long *info);

void sorbdb5(const qml_long *m1, const qml_long *m2, const qml_long *n, float *x1, const qml_long *incx1, float *x2, const qml_long *incx2, float *q1, const qml_long *ldq1, float *q2, const qml_long *ldq2, float *work, const qml_long *lwork, qml_long *info);

void sorbdb6(const qml_long *m1, const qml_long *m2, const qml_long *n, float *x1, const qml_long *incx1, float *x2, const qml_long *incx2, float *q1, const qml_long *ldq1, float *q2, const qml_long *ldq2, float *work, const qml_long *lwork, qml_long *info);

void sorcsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, float *x11, const qml_long *ldx11, float *x12, const qml_long *ldx12, float *x21, const qml_long *ldx21, float *x22, const qml_long *ldx22, float *theta, float *u1, const qml_long *ldu1, float *u2, const qml_long *ldu2, float *v1t, const qml_long *ldv1t, float *v2t, const qml_long *ldv2t, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void sorcsd2by1(const char *jobu1, const char *jobu2, const char *jobv1t, const qml_long *m, const qml_long *p, const qml_long *q, float *x11, const qml_long *ldx11, float *x21, const qml_long *ldx21, float *theta, float *u1, const qml_long *ldu1, float *u2, const qml_long *ldu2, float *v1t, const qml_long *ldv1t, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void sorg2l(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sorg2r(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sorgbr(const char *vect, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sorghr(const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sorgl2(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sorglq(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sorgql(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sorgqr(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sorgr2(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, qml_long *info);

void sorgrq(const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sorgtr(const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void sorm22(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *n1, const qml_long *n2, float *q, const qml_long *ldq, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void sorm2l(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, qml_long *info);

void sormbr(const char *vect, const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void sormhr(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *ilo, const qml_long *ihi, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void sorml2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, qml_long *info);

void sormlq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void sormql(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void sormr2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, qml_long *info);

void sormr3(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, qml_long *info);

void sormrq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void sormrz(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void sormtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *c, const qml_long *ldc, float *work, const qml_long *lwork, qml_long *info);

void spbcon(const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void spbequ(const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *s, float *scond, float *amax, qml_long *info);

void spbrfs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, float *ab, const qml_long *ldab, float *afb, const qml_long *ldafb, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void spbstf(const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, qml_long *info);

void spbsv(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, float *ab, const qml_long *ldab, float *b, const qml_long *ldb, qml_long *info);

void spbsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, float *ab, const qml_long *ldab, float *afb, const qml_long *ldafb, char *equed, float *s, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void spbtf2(const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, qml_long *info);

void spbtrf(const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, qml_long *info);

void spbtrs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, float *ab, const qml_long *ldab, float *b, const qml_long *ldb, qml_long *info);

void spftrf(const char *transr, const char *uplo, const qml_long *n, float *a, qml_long *info);

void spftri(const char *transr, const char *uplo, const qml_long *n, float *a, qml_long *info);

void spftrs(const char *transr, const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, float *b, const qml_long *ldb, qml_long *info);

void spocon(const char *uplo, const qml_long *n, float *a, const qml_long *lda, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void spoequ(const qml_long *n, float *a, const qml_long *lda, float *s, float *scond, float *amax, qml_long *info);

void spoequb(const qml_long *n, float *a, const qml_long *lda, float *s, float *scond, float *amax, qml_long *info);

void sporfs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *af, const qml_long *ldaf, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sposvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *af, const qml_long *ldaf, char *equed, float *s, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void spotri(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *info);

void sppcon(const char *uplo, const qml_long *n, float *ap, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void sppequ(const char *uplo, const qml_long *n, float *ap, float *s, float *scond, float *amax, qml_long *info);

void spprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, float *afp, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sppsv(const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, float *b, const qml_long *ldb, qml_long *info);

void sppsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, float *afp, char *equed, float *s, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void spptrf(const char *uplo, const qml_long *n, float *ap, qml_long *info);

void spptri(const char *uplo, const qml_long *n, float *ap, qml_long *info);

void spptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, float *b, const qml_long *ldb, qml_long *info);

void spstf2(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *piv, qml_long *rank, const float *tol, float *work, qml_long *info);

void spstrf(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *piv, qml_long *rank, const float *tol, float *work, qml_long *info);

void sptcon(const qml_long *n, float *d, float *e, const float *anorm, float *rcond, float *work, qml_long *info);

void spteqr(const char *compz, const qml_long *n, float *d, float *e, float *z, const qml_long *ldz, float *work, qml_long *info);

void sptrfs(const qml_long *n, const qml_long *nrhs, float *d, float *e, float *df, float *ef, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *info);

void sptsv(const qml_long *n, const qml_long *nrhs, float *d, float *e, float *b, const qml_long *ldb, qml_long *info);

void sptsvx(const char *fact, const qml_long *n, const qml_long *nrhs, float *d, float *e, float *df, float *ef, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *info);

void spttrf(const qml_long *n, float *d, float *e, qml_long *info);

void spttrs(const qml_long *n, const qml_long *nrhs, float *d, float *e, float *b, const qml_long *ldb, qml_long *info);

void sptts2(const qml_long *n, const qml_long *nrhs, float *d, float *e, float *b, const qml_long *ldb);

void srscl(const qml_long *n, const float *sa, float *sx, const qml_long *incx);

void ssbev(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *w, float *z, const qml_long *ldz, float *work, qml_long *info);

void ssbevd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *w, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ssbevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *q, const qml_long *ldq, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, float *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void ssbgst(const char *vect, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, float *ab, const qml_long *ldab, float *bb, const qml_long *ldbb, float *x, const qml_long *ldx, float *work, qml_long *info);

void ssbgv(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, float *ab, const qml_long *ldab, float *bb, const qml_long *ldbb, float *w, float *z, const qml_long *ldz, float *work, qml_long *info);

void ssbgvd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, float *ab, const qml_long *ldab, float *bb, const qml_long *ldbb, float *w, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ssbgvx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, float *ab, const qml_long *ldab, float *bb, const qml_long *ldbb, float *q, const qml_long *ldq, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, float *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void ssbtrd(const char *vect, const char *uplo, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *d, float *e, float *q, const qml_long *ldq, float *work, qml_long *info);

void ssfrk(const char *transr, const char *uplo, const char *trans, const qml_long *n, const qml_long *k, const float *alpha, float *a, const qml_long *lda, const float *beta, float *c);

void sspcon(const char *uplo, const qml_long *n, float *ap, qml_long *ipiv, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void sspev(const char *jobz, const char *uplo, const qml_long *n, float *ap, float *w, float *z, const qml_long *ldz, float *work, qml_long *info);

void sspevd(const char *jobz, const char *uplo, const qml_long *n, float *ap, float *w, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void sspevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, float *ap, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, float *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void sspgst(const qml_long *itype, const char *uplo, const qml_long *n, float *ap, float *bp, qml_long *info);

void sspgv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, float *ap, float *bp, float *w, float *z, const qml_long *ldz, float *work, qml_long *info);

void sspgvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, float *ap, float *bp, float *w, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void sspgvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, float *ap, float *bp, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, float *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void ssprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, float *afp, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void sspsv(const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, qml_long *ipiv, float *b, const qml_long *ldb, qml_long *info);

void sspsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, float *afp, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void ssptrd(const char *uplo, const qml_long *n, float *ap, float *d, float *e, float *tau, qml_long *info);

void ssptrf(const char *uplo, const qml_long *n, float *ap, qml_long *ipiv, qml_long *info);

void ssptri(const char *uplo, const qml_long *n, float *ap, qml_long *ipiv, float *work, qml_long *info);

void ssptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *ap, qml_long *ipiv, float *b, const qml_long *ldb, qml_long *info);

void sstebz(const char *range, const char *order, const qml_long *n, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, float *d, float *e, qml_long *m, qml_long *nsplit, float *w, qml_long *iblock, qml_long *isplit, float *work, qml_long *iwork, qml_long *info);

void sstedc(const char *compz, const qml_long *n, float *d, float *e, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void sstegr(const char *jobz, const char *range, const qml_long *n, float *d, float *e, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, qml_long *isuppz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void sstein(const qml_long *n, float *d, float *e, const qml_long *m, float *w, qml_long *iblock, qml_long *isplit, float *z, const qml_long *ldz, float *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void sstemr(const char *jobz, const char *range, const qml_long *n, float *d, float *e, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, qml_long *m, float *w, float *z, const qml_long *ldz, const qml_long *nzc, qml_long *isuppz, qml_int *tryrac, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ssteqr(const char *compz, const qml_long *n, float *d, float *e, float *z, const qml_long *ldz, float *work, qml_long *info);

void ssterf(const qml_long *n, float *d, float *e, qml_long *info);

void sstev(const char *jobz, const qml_long *n, float *d, float *e, float *z, const qml_long *ldz, float *work, qml_long *info);

void sstevd(const char *jobz, const qml_long *n, float *d, float *e, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void sstevr(const char *jobz, const char *range, const qml_long *n, float *d, float *e, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, qml_long *isuppz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void sstevx(const char *jobz, const char *range, const qml_long *n, float *d, float *e, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, float *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void ssycon(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void ssycon_rook(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, const float *anorm, float *rcond, float *work, qml_long *iwork, qml_long *info);

void ssyconv(const char *uplo, const char *way, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, float *e, qml_long *info);

void ssyequb(const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *s, float *scond, float *amax, float *work, qml_long *info);

void ssyev(const char *jobz, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *w, float *work, const qml_long *lwork, qml_long *info);

void ssyevd(const char *jobz, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *w, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ssyevr(const char *jobz, const char *range, const char *uplo, const qml_long *n, float *a, const qml_long *lda, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, qml_long *isuppz, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ssyevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, float *a, const qml_long *lda, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void ssygs2(const qml_long *itype, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, qml_long *info);

void ssygst(const qml_long *itype, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, qml_long *info);

void ssygv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *w, float *work, const qml_long *lwork, qml_long *info);

void ssygvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *w, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ssygvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, const float *vl, const float *vu, const qml_long *il, const qml_long *iu, const float *abstol, qml_long *m, float *w, float *z, const qml_long *ldz, float *work, const qml_long *lwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void ssyrfs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *af, const qml_long *ldaf, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void ssysv(const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, qml_long *ipiv, float *b, const qml_long *ldb, float *work, const qml_long *lwork, qml_long *info);

void ssysv_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, qml_long *ipiv, float *b, const qml_long *ldb, float *work, const qml_long *lwork, qml_long *info);

void ssysvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *af, const qml_long *ldaf, qml_long *ipiv, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *rcond, float *ferr, float *berr, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void ssyswapr(const char *uplo, const qml_long *n, float *a, const qml_long *lda, const qml_long *i1, const qml_long *i2);

void ssytf2(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void ssytf2_rook(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void ssytrf(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, float *work, const qml_long *lwork, qml_long *info);

void ssytrf_rook(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, float *work, const qml_long *lwork, qml_long *info);

void ssytri(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, float *work, qml_long *info);

void ssytri2(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, float *work, const qml_long *lwork, qml_long *info);

void ssytri2x(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, float *work, const qml_long *nb, qml_long *info);

void ssytri_rook(const char *uplo, const qml_long *n, float *a, const qml_long *lda, qml_long *ipiv, float *work, qml_long *info);

void ssytrs(const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, qml_long *ipiv, float *b, const qml_long *ldb, qml_long *info);

void ssytrs2(const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, qml_long *ipiv, float *b, const qml_long *ldb, float *work, qml_long *info);

void ssytrs_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, qml_long *ipiv, float *b, const qml_long *ldb, qml_long *info);

void stbcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *kd, float *ab, const qml_long *ldab, float *rcond, float *work, qml_long *iwork, qml_long *info);

void stbrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, float *ab, const qml_long *ldab, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void stbtrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, float *ab, const qml_long *ldab, float *b, const qml_long *ldb, qml_long *info);

void stfsm(const char *transr, const char *side, const char *uplo, const char *trans, const char *diag, const qml_long *m, const qml_long *n, const float *alpha, float *a, float *b, const qml_long *ldb);

void stftri(const char *transr, const char *uplo, const char *diag, const qml_long *n, float *a, qml_long *info);

void stfttp(const char *transr, const char *uplo, const qml_long *n, float *arf, float *ap, qml_long *info);

void stfttr(const char *transr, const char *uplo, const qml_long *n, float *arf, float *a, const qml_long *lda, qml_long *info);

void stgevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, float *s, const qml_long *lds, float *p, const qml_long *ldp, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, float *work, qml_long *info);

void stgex2(qml_int *wantq, qml_int *wantz, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *q, const qml_long *ldq, float *z, const qml_long *ldz, const qml_long *j1, const qml_long *n1, const qml_long *n2, float *work, const qml_long *lwork, qml_long *info);

void stgexc(qml_int *wantq, qml_int *wantz, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *q, const qml_long *ldq, float *z, const qml_long *ldz, qml_long *ifst, qml_long *ilst, float *work, const qml_long *lwork, qml_long *info);

void stgsen(const qml_long *ijob, qml_int *wantq, qml_int *wantz, qml_int *select, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *alphar, float *alphai, float *beta, float *q, const qml_long *ldq, float *z, const qml_long *ldz, qml_long *m, float *pl, float *pr, float *dif, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void stgsja(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, const qml_long *k, const qml_long *l, float *a, const qml_long *lda, float *b, const qml_long *ldb, const float *tola, const float *tolb, float *alpha, float *beta, float *u, const qml_long *ldu, float *v, const qml_long *ldv, float *q, const qml_long *ldq, float *work, qml_long *ncycle, qml_long *info);

void stgsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, float *s, float *dif, const qml_long *mm, qml_long *m, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void stgsy2(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *c, const qml_long *ldc, float *d, const qml_long *ldd, float *e, const qml_long *lde, float *f, const qml_long *ldf, float *scale, float *rdsum, float *rdscal, qml_long *iwork, qml_long *pq, qml_long *info);

void stgsyl(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *c, const qml_long *ldc, float *d, const qml_long *ldd, float *e, const qml_long *lde, float *f, const qml_long *ldf, float *scale, float *dif, float *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void stpcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, float *ap, float *rcond, float *work, qml_long *iwork, qml_long *info);

void stpmqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, const qml_long *nb, float *v, const qml_long *ldv, float *t, const qml_long *ldt, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *work, qml_long *info);

void stpqrt(const qml_long *m, const qml_long *n, const qml_long *l, const qml_long *nb, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *t, const qml_long *ldt, float *work, qml_long *info);

void stpqrt2(const qml_long *m, const qml_long *n, const qml_long *l, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *t, const qml_long *ldt, qml_long *info);

void stprfb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, float *v, const qml_long *ldv, float *t, const qml_long *ldt, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *work, const qml_long *ldwork);

void stprfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, float *ap, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void stptri(const char *uplo, const char *diag, const qml_long *n, float *ap, qml_long *info);

void stptrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, float *ap, float *b, const qml_long *ldb, qml_long *info);

void stpttf(const char *transr, const char *uplo, const qml_long *n, float *ap, float *arf, qml_long *info);

void stpttr(const char *uplo, const qml_long *n, float *ap, float *a, const qml_long *lda, qml_long *info);

void strcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, float *a, const qml_long *lda, float *rcond, float *work, qml_long *iwork, qml_long *info);

void strevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, float *t, const qml_long *ldt, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, float *work, qml_long *info);

void strexc(const char *compq, const qml_long *n, float *t, const qml_long *ldt, float *q, const qml_long *ldq, qml_long *ifst, qml_long *ilst, float *work, qml_long *info);

void strrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *x, const qml_long *ldx, float *ferr, float *berr, float *work, qml_long *iwork, qml_long *info);

void strsen(const char *job, const char *compq, qml_int *select, const qml_long *n, float *t, const qml_long *ldt, float *q, const qml_long *ldq, float *wr, float *wi, qml_long *m, float *s, float *sep, float *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void strsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, float *t, const qml_long *ldt, float *vl, const qml_long *ldvl, float *vr, const qml_long *ldvr, float *s, float *sep, const qml_long *mm, qml_long *m, float *work, const qml_long *ldwork, qml_long *iwork, qml_long *info);

void strsyl(const char *trana, const char *tranb, const qml_long *isgn, const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *b, const qml_long *ldb, float *c, const qml_long *ldc, float *scale, qml_long *info);

void strttf(const char *transr, const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *arf, qml_long *info);

void strttp(const char *uplo, const qml_long *n, float *a, const qml_long *lda, float *ap, qml_long *info);

void stzrzf(const qml_long *m, const qml_long *n, float *a, const qml_long *lda, float *tau, float *work, const qml_long *lwork, qml_long *info);

void zbbcsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const qml_long *m, const qml_long *p, const qml_long *q, double *theta, double *phi, QML_DOUBLE_COMPLEX *u1, const qml_long *ldu1, QML_DOUBLE_COMPLEX *u2, const qml_long *ldu2, QML_DOUBLE_COMPLEX *v1t, const qml_long *ldv1t, QML_DOUBLE_COMPLEX *v2t, const qml_long *ldv2t, double *b11d, double *b11e, double *b12d, double *b12e, double *b21d, double *b21e, double *b22d, double *b22e, double *rwork, const qml_long *lrwork, qml_long *info);

void zcgesv(const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, QML_DOUBLE_COMPLEX *work, QML_SINGLE_COMPLEX *swork, double *rwork, qml_long *iter, qml_long *info);

void zcposv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, QML_DOUBLE_COMPLEX *work, QML_SINGLE_COMPLEX *swork, double *rwork, qml_long *iter, qml_long *info);

void zdrscl(const qml_long *n, const double *sa, QML_DOUBLE_COMPLEX *sx, const qml_long *incx);

void zgbbrd(const char *vect, const qml_long *m, const qml_long *n, const qml_long *ncc, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *d, double *e, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *pt, const qml_long *ldpt, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgbcon(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgbequ(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void zgbequb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void zgbrfs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgbsv(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zgbsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, char *equed, double *r, double *c, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgbtf2(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void zgbtrf(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, qml_long *info);

void zgbtrs(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zgebak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *scale, const qml_long *m, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, qml_long *info);

void zgebal(const char *job, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ilo, qml_long *ihi, double *scale, qml_long *info);

void zgebd2(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *d, double *e, QML_DOUBLE_COMPLEX *tauq, QML_DOUBLE_COMPLEX *taup, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgebrd(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *d, double *e, QML_DOUBLE_COMPLEX *tauq, QML_DOUBLE_COMPLEX *taup, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgecon(const char *norm, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgeequ(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void zgeequb(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *r, double *c, double *rowcnd, double *colcnd, double *amax, qml_long *info);

void zgees(const char *jobvs, const char *sort, void *select, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *sdim, QML_DOUBLE_COMPLEX *w, QML_DOUBLE_COMPLEX *vs, const qml_long *ldvs, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_int *bwork, qml_long *info);

void zgeesx(const char *jobvs, const char *sort, void *select, const char *sense, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *sdim, QML_DOUBLE_COMPLEX *w, QML_DOUBLE_COMPLEX *vs, const qml_long *ldvs, double *rconde, double *rcondv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_int *bwork, qml_long *info);

void zgeev(const char *jobvl, const char *jobvr, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *w, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zgeevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *w, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, double *scale, double *abnrm, double *rconde, double *rcondv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zgehd2(const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgehrd(const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgejsv(const char *joba, const char *jobu, const char *jobv, const char *jobr, const char *jobt, const char *jobp, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *sva, QML_DOUBLE_COMPLEX *u, const qml_long *ldu, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *cwork, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, qml_long *info);

void zgelq2(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgelqf(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgels(const char *trans, const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgelsd(const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, double *s, const double *rcond, qml_long *rank, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *iwork, qml_long *info);

void zgelss(const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, double *s, const double *rcond, qml_long *rank, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zgelsy(const qml_long *m, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *jpvt, const double *rcond, qml_long *rank, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zgemqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *nb, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgeql2(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgeqlf(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgeqr2p(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgeqrfp(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgeqrt(const qml_long *m, const qml_long *n, const qml_long *nb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgeqrt2(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, qml_long *info);

void zgeqrt3(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, qml_long *info);

void zgerfs(const char *trans, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgerq2(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgerqf(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgesc2(const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *rhs, qml_long *ipiv, qml_long *jpiv, double *scale);

void zgesdd(const char *jobz, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, QML_DOUBLE_COMPLEX *u, const qml_long *ldu, QML_DOUBLE_COMPLEX *vt, const qml_long *ldvt, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *iwork, qml_long *info);

void zgesvd(const char *jobu, const char *jobvt, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, QML_DOUBLE_COMPLEX *u, const qml_long *ldu, QML_DOUBLE_COMPLEX *vt, const qml_long *ldvt, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zgesvj(const char *joba, const char *jobu, const char *jobv, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *sva, const qml_long *mv, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *cwork, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *info);

void zgesvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, char *equed, double *r, double *c, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgetc2(const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *jpiv, qml_long *info);

void zggbak(const char *job, const char *side, const qml_long *n, const qml_long *ilo, const qml_long *ihi, double *lscale, double *rscale, const qml_long *m, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, qml_long *info);

void zggbal(const char *job, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *ilo, qml_long *ihi, double *lscale, double *rscale, double *work, qml_long *info);

void zgges(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *sdim, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *vsl, const qml_long *ldvsl, QML_DOUBLE_COMPLEX *vsr, const qml_long *ldvsr, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_int *bwork, qml_long *info);

void zgges3(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *sdim, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *vsl, const qml_long *ldvsl, QML_DOUBLE_COMPLEX *vsr, const qml_long *ldvsr, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_int *bwork, qml_long *info);

void zggesx(const char *jobvsl, const char *jobvsr, const char *sort, void *selctg, const char *sense, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *sdim, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *vsl, const qml_long *ldvsl, QML_DOUBLE_COMPLEX *vsr, const qml_long *ldvsr, double *rconde, double *rcondv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *iwork, const qml_long *liwork, qml_int *bwork, qml_long *info);

void zggev(const char *jobvl, const char *jobvr, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zggev3(const char *jobvl, const char *jobvr, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zggevx(const char *balanc, const char *jobvl, const char *jobvr, const char *sense, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, qml_long *ilo, qml_long *ihi, double *lscale, double *rscale, double *abnrm, double *bbnrm, double *rconde, double *rcondv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *iwork, qml_int *bwork, qml_long *info);

void zggglm(const qml_long *n, const qml_long *m, const qml_long *p, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *x, QML_DOUBLE_COMPLEX *y, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgghd3(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgghrd(const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *info);

void zgglse(const qml_long *m, const qml_long *n, const qml_long *p, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *c, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *x, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zggqrf(const qml_long *n, const qml_long *m, const qml_long *p, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *taua, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *taub, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zggrqf(const qml_long *m, const qml_long *p, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *taua, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *taub, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zggsvd3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *n, const qml_long *p, qml_long *k, qml_long *l, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, double *alpha, double *beta, QML_DOUBLE_COMPLEX *u, const qml_long *ldu, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *iwork, qml_long *info);

void zggsvp3(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, const double *tola, const double *tolb, qml_long *k, qml_long *l, QML_DOUBLE_COMPLEX *u, const qml_long *ldu, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, qml_long *iwork, double *rwork, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgsvj0(const char *jobv, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *d, double *sva, const qml_long *mv, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, const double *eps, const double *sfmin, const double *tol, const qml_long *nsweep, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgsvj1(const char *jobv, const qml_long *m, const qml_long *n, const qml_long *n1, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *d, double *sva, const qml_long *mv, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, const double *eps, const double *sfmin, const double *tol, const qml_long *nsweep, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zgtcon(const char *norm, const qml_long *n, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *du2, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zgtrfs(const char *trans, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *dlf, QML_DOUBLE_COMPLEX *df, QML_DOUBLE_COMPLEX *duf, QML_DOUBLE_COMPLEX *du2, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgtsv(const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zgtsvx(const char *fact, const char *trans, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *dlf, QML_DOUBLE_COMPLEX *df, QML_DOUBLE_COMPLEX *duf, QML_DOUBLE_COMPLEX *du2, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zgttrf(const qml_long *n, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *du2, qml_long *ipiv, qml_long *info);

void zgttrs(const char *trans, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *du2, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zgtts2(const qml_long *itrans, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *du2, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb);

void zhbev(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhbevd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zhbevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void zhbgst(const char *vect, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *bb, const qml_long *ldbb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhbgv(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *bb, const qml_long *ldbb, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhbgvd(const char *jobz, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *bb, const qml_long *ldbb, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zhbgvx(const char *jobz, const char *range, const char *uplo, const qml_long *n, const qml_long *ka, const qml_long *kb, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *bb, const qml_long *ldbb, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void zhbtrd(const char *vect, const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *d, double *e, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zhecon(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zhecon_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zheequb(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, double *scond, double *amax, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zheev(const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *w, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zheevd(const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *w, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zheevr(const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *isuppz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zheevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void zhegs2(const qml_long *itype, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zhegst(const qml_long *itype, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zhegv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, double *w, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zhegvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, double *w, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zhegvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void zherfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhesv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zhesv_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zhesvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zheswapr(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, const qml_long *i1, const qml_long *i2);

void zhetf2(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void zhetf2_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void zhetrf(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zhetrf_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zhetri(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zhetri2(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zhetri2x(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *nb, qml_long *info);

void zhetri_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zhetrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zhetrs2(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zhetrs_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zhfrk(const char *transr, const char *uplo, const char *trans, const qml_long *n, const qml_long *k, const double *alpha, QML_DOUBLE_COMPLEX *a, const qml_long *lda, const double *beta, QML_DOUBLE_COMPLEX *c);

void zhgeqz(const char *job, const char *compq, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zhpcon(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zhpev(const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhpevd(const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zhpevx(const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void zhpgst(const qml_long *itype, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *bp, qml_long *info);

void zhpgv(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *bp, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhpgvd(const qml_long *itype, const char *jobz, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *bp, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zhpgvx(const qml_long *itype, const char *jobz, const char *range, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *bp, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *iwork, qml_long *ifail, qml_long *info);

void zhprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *afp, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhpsv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zhpsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *afp, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zhptrd(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *d, double *e, QML_DOUBLE_COMPLEX *tau, qml_long *info);

void zhptrf(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, qml_long *info);

void zhptri(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zhptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zhsein(const char *side, const char *eigsrc, const char *initv, qml_int *select, const qml_long *n, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, QML_DOUBLE_COMPLEX *w, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *ifaill, qml_long *ifailr, qml_long *info);

void zhseqr(const char *job, const char *compz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, QML_DOUBLE_COMPLEX *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zlabrd(const qml_long *m, const qml_long *n, const qml_long *nb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *d, double *e, QML_DOUBLE_COMPLEX *tauq, QML_DOUBLE_COMPLEX *taup, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, QML_DOUBLE_COMPLEX *y, const qml_long *ldy);

void zlacn2(const qml_long *n, QML_DOUBLE_COMPLEX *v, QML_DOUBLE_COMPLEX *x, double *est, qml_long *kase, qml_long *isave);

void zlacon(const qml_long *n, QML_DOUBLE_COMPLEX *v, QML_DOUBLE_COMPLEX *x, double *est, qml_long *kase);

void zlacp2(const char *uplo, const qml_long *m, const qml_long *n, double *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb);

void zlacrm(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, double *rwork);

void zlacrt(const qml_long *n, QML_DOUBLE_COMPLEX *cx, const qml_long *incx, QML_DOUBLE_COMPLEX *cy, const qml_long *incy, const QML_DOUBLE_COMPLEX *c, const QML_DOUBLE_COMPLEX *s);

void zlaed0(const qml_long *qsiz, const qml_long *n, double *d, double *e, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *qstore, const qml_long *ldqs, double *rwork, qml_long *iwork, qml_long *info);

void zlaed7(const qml_long *n, const qml_long *cutpnt, const qml_long *qsiz, const qml_long *tlvls, const qml_long *curlvl, const qml_long *curpbm, double *d, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, double *rho, qml_long *indxq, double *qstore, qml_long *qptr, qml_long *prmptr, qml_long *perm, qml_long *givptr, qml_long *givcol, double *givnum, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *iwork, qml_long *info);

void zlaed8(qml_long *k, const qml_long *n, const qml_long *qsiz, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, double *d, double *rho, const qml_long *cutpnt, double *z, double *dlamda, QML_DOUBLE_COMPLEX *q2, const qml_long *ldq2, double *w, qml_long *indxp, qml_long *indx, qml_long *indxq, qml_long *perm, qml_long *givptr, qml_long *givcol, double *givnum, qml_long *info);

void zlaein(qml_int *rightv, qml_int *noinit, const qml_long *n, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, const QML_DOUBLE_COMPLEX *w, QML_DOUBLE_COMPLEX *v, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, double *rwork, const double *eps3, const double *smlnum, qml_long *info);

void zlaesy(const QML_DOUBLE_COMPLEX *a, const QML_DOUBLE_COMPLEX *b, const QML_DOUBLE_COMPLEX *c, QML_DOUBLE_COMPLEX *rt1, QML_DOUBLE_COMPLEX *rt2, QML_DOUBLE_COMPLEX *evscal, QML_DOUBLE_COMPLEX *cs1, QML_DOUBLE_COMPLEX *sn1);

void zlag2c(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *sa, const qml_long *ldsa, qml_long *info);

void zla_gbamv(const qml_long *trans, const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, const double *alpha, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *x, const qml_long *incx, const double *beta, double *y, const qml_long *incy);

double zla_gbrcond_c(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, double *c, qml_int *capply, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_gbrcond_x(const char *trans, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *afb, const qml_long *ldafb, qml_long *ipiv, QML_DOUBLE_COMPLEX *x, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_gbrpvgrw(const qml_long *n, const qml_long *kl, const qml_long *ku, const qml_long *ncols, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *afb, const qml_long *ldafb);

void zla_geamv(const qml_long *trans, const qml_long *m, const qml_long *n, const double *alpha, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *x, const qml_long *incx, const double *beta, double *y, const qml_long *incy);

double zla_gercond_c(const char *trans, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, double *c, qml_int *capply, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_gercond_x(const char *trans, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *x, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_gerpvgrw(const qml_long *n, const qml_long *ncols, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf);

void zlags2(qml_int *upper, const double *a1, const QML_DOUBLE_COMPLEX *a2, const double *a3, const double *b1, const QML_DOUBLE_COMPLEX *b2, const double *b3, double *csu, QML_DOUBLE_COMPLEX *snu, double *csv, QML_DOUBLE_COMPLEX *snv, double *csq, QML_DOUBLE_COMPLEX *snq);

void zlagtm(const char *trans, const qml_long *n, const qml_long *nrhs, const double *alpha, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, const double *beta, QML_DOUBLE_COMPLEX *b, const qml_long *ldb);

void zla_heamv(const qml_long *uplo, const qml_long *n, const double *alpha, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *x, const qml_long *incx, const double *beta, double *y, const qml_long *incy);

void zlahef(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

void zlahef_rook(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

double zla_hercond_c(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, double *c, qml_int *capply, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_hercond_x(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *x, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_herpvgrw(const char *uplo, const qml_long *n, const qml_long *info, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, double *work);

void zlahqr(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, QML_DOUBLE_COMPLEX *w, const qml_long *iloz, const qml_long *ihiz, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *info);

void zlahr2(const qml_long *n, const qml_long *k, const qml_long *nb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *y, const qml_long *ldy);

void zlaic1(const qml_long *job, const qml_long *j, QML_DOUBLE_COMPLEX *x, const double *sest, QML_DOUBLE_COMPLEX *w, const QML_DOUBLE_COMPLEX *gamma, double *sestpr, QML_DOUBLE_COMPLEX *s, QML_DOUBLE_COMPLEX *c);

void zla_lin_berr(const qml_long *n, const qml_long *nz, const qml_long *nrhs, QML_DOUBLE_COMPLEX *res, double *ayb, double *berr);

void zlals0(const qml_long *icompq, const qml_long *nl, const qml_long *nr, const qml_long *sqre, const qml_long *nrhs, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *bx, const qml_long *ldbx, qml_long *perm, const qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, double *givnum, const qml_long *ldgnum, double *poles, double *difl, double *difr, double *z, const qml_long *k, const double *c, const double *s, double *rwork, qml_long *info);

void zlalsa(const qml_long *icompq, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *bx, const qml_long *ldbx, double *u, const qml_long *ldu, double *vt, qml_long *k, double *difl, double *difr, double *z, double *poles, qml_long *givptr, qml_long *givcol, const qml_long *ldgcol, qml_long *perm, double *givnum, double *c, double *s, double *rwork, qml_long *iwork, qml_long *info);

void zlalsd(const char *uplo, const qml_long *smlsiz, const qml_long *n, const qml_long *nrhs, double *d, double *e, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, const double *rcond, qml_long *rank, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *iwork, qml_long *info);

double zlangb(const char *norm, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *work);

double zlangt(const char *norm, const qml_long *n, QML_DOUBLE_COMPLEX *dl, QML_DOUBLE_COMPLEX *d, QML_DOUBLE_COMPLEX *du);

double zlanhb(const char *norm, const char *uplo, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *work);

double zlanhe(const char *norm, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *work);

double zlanhf(const char *norm, const char *transr, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, double *work);

double zlanhp(const char *norm, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *work);

double zlanhs(const char *norm, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *work);

double zlanht(const char *norm, const qml_long *n, double *d, QML_DOUBLE_COMPLEX *e);

double zlansb(const char *norm, const char *uplo, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *work);

double zlansp(const char *norm, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *work);

double zlansy(const char *norm, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *work);

double zlantb(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *work);

double zlantp(const char *norm, const char *uplo, const char *diag, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *work);

double zlantr(const char *norm, const char *uplo, const char *diag, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *work);

void zlapll(const qml_long *n, QML_DOUBLE_COMPLEX *x, const qml_long *incx, QML_DOUBLE_COMPLEX *y, const qml_long *incy, double *ssmin);

void zlapmr(qml_int *forwrd, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, qml_long *k);

void zlapmt(qml_int *forwrd, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, qml_long *k);

double zla_porcond_c(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, double *c, qml_int *capply, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_porcond_x(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, QML_DOUBLE_COMPLEX *x, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_porpvgrw(const char *uplo, const qml_long *ncols, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, double *work);

void zlaqgb(const qml_long *m, const qml_long *n, const qml_long *kl, const qml_long *ku, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *r, double *c, const double *rowcnd, const double *colcnd, const double *amax, char *equed);

void zlaqge(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *r, double *c, const double *rowcnd, const double *colcnd, const double *amax, char *equed);

void zlaqhb(const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *s, const double *scond, const double *amax, char *equed);

void zlaqhe(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, const double *scond, const double *amax, char *equed);

void zlaqhp(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *s, const double *scond, const double *amax, char *equed);

void zlaqr0(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, QML_DOUBLE_COMPLEX *w, const qml_long *iloz, const qml_long *ihiz, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zlaqr1(const qml_long *n, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, const QML_DOUBLE_COMPLEX *s1, const QML_DOUBLE_COMPLEX *s2, QML_DOUBLE_COMPLEX *v);

void zlaqr2(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *ns, qml_long *nd, QML_DOUBLE_COMPLEX *sh, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, const qml_long *nh, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, const qml_long *nv, QML_DOUBLE_COMPLEX *wv, const qml_long *ldwv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork);

void zlaqr3(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nw, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *ns, qml_long *nd, QML_DOUBLE_COMPLEX *sh, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, const qml_long *nh, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, const qml_long *nv, QML_DOUBLE_COMPLEX *wv, const qml_long *ldwv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork);

void zlaqr4(qml_int *wantt, qml_int *wantz, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, QML_DOUBLE_COMPLEX *w, const qml_long *iloz, const qml_long *ihiz, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zlaqr5(qml_int *wantt, qml_int *wantz, const qml_long *kacc22, const qml_long *n, const qml_long *ktop, const qml_long *kbot, const qml_long *nshfts, QML_DOUBLE_COMPLEX *s, QML_DOUBLE_COMPLEX *h, const qml_long *ldh, const qml_long *iloz, const qml_long *ihiz, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *u, const qml_long *ldu, const qml_long *nv, QML_DOUBLE_COMPLEX *wv, const qml_long *ldwv, const qml_long *nh, QML_DOUBLE_COMPLEX *wh, const qml_long *ldwh);

void zlaqsb(const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *s, const double *scond, const double *amax, char *equed);

void zlaqsp(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *s, const double *scond, const double *amax, char *equed);

void zlaqsy(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, const double *scond, const double *amax, char *equed);

void zlar1v(const qml_long *n, const qml_long *b1, const qml_long *bn, const double *lambda, double *d, double *l, double *ld, double *lld, const double *pivmin, const double *gaptol, QML_DOUBLE_COMPLEX *z, qml_int *wantnc, qml_long *negcnt, double *ztz, double *mingma, qml_long *r, qml_long *isuppz, double *nrminv, double *resid, double *rqcorr, double *work);

void zlar2v(const qml_long *n, QML_DOUBLE_COMPLEX *x, QML_DOUBLE_COMPLEX *y, QML_DOUBLE_COMPLEX *z, const qml_long *incx, double *c, QML_DOUBLE_COMPLEX *s, const qml_long *incc);

void zlarcm(const qml_long *m, const qml_long *n, double *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, double *rwork);

void zlarfgp(const qml_long *n, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *x, const qml_long *incx, QML_DOUBLE_COMPLEX *tau);

void zlarfx(const char *side, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *v, const QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work);

void zlargv(const qml_long *n, QML_DOUBLE_COMPLEX *x, const qml_long *incx, QML_DOUBLE_COMPLEX *y, const qml_long *incy, double *c, const qml_long *incc);

void zlarnv(const qml_long *idist, qml_long *iseed, const qml_long *n, QML_DOUBLE_COMPLEX *x);

void zlarrv(const qml_long *n, const double *vl, const double *vu, double *d, double *l, const double *pivmin, qml_long *isplit, const qml_long *m, const qml_long *dol, const qml_long *dou, const double *minrgp, double *rtol1, double *rtol2, double *w, double *werr, double *wgap, qml_long *iblock, qml_long *indexw, double *gers, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *isuppz, double *work, qml_long *iwork, qml_long *info);

void zlarscl2(const qml_long *m, const qml_long *n, double *d, QML_DOUBLE_COMPLEX *x, const qml_long *ldx);

void zlartv(const qml_long *n, QML_DOUBLE_COMPLEX *x, const qml_long *incx, QML_DOUBLE_COMPLEX *y, const qml_long *incy, double *c, QML_DOUBLE_COMPLEX *s, const qml_long *incc);

void zlarz(const char *side, const qml_long *m, const qml_long *n, const qml_long *l, QML_DOUBLE_COMPLEX *v, const qml_long *incv, const QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work);

void zlarzb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *ldwork);

void zlarzt(const char *direct, const char *storev, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *t, const qml_long *ldt);

void zlascl2(const qml_long *m, const qml_long *n, double *d, QML_DOUBLE_COMPLEX *x, const qml_long *ldx);

void zla_syamv(const qml_long *uplo, const qml_long *n, const double *alpha, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *x, const qml_long *incx, const double *beta, double *y, const qml_long *incy);

void zlasyf(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

void zlasyf_rook(const char *uplo, const qml_long *n, const qml_long *nb, qml_long *kb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *w, const qml_long *ldw, qml_long *info);

double zla_syrcond_c(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, double *c, qml_int *capply, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_syrcond_x(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *x, qml_long *info, QML_DOUBLE_COMPLEX *work, double *rwork);

double zla_syrpvgrw(const char *uplo, const qml_long *n, const qml_long *info, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, double *work);

void zlat2c(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_SINGLE_COMPLEX *sa, const qml_long *ldsa, qml_long *info);

void zlatbs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *x, double *scale, double *cnorm, qml_long *info);

void zlatdf(const qml_long *ijob, const qml_long *n, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *rhs, double *rdsum, double *rdscal, qml_long *ipiv, qml_long *jpiv);

void zlatps(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *x, double *scale, double *cnorm, qml_long *info);

void zlatrs(const char *uplo, const char *trans, const char *diag, const char *normin, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *x, double *scale, double *cnorm, qml_long *info);

void zlatrz(const qml_long *m, const qml_long *n, const qml_long *l, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work);

void zlauu2(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void zlauum(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void zla_wwaddw(const qml_long *n, QML_DOUBLE_COMPLEX *x, QML_DOUBLE_COMPLEX *y, QML_DOUBLE_COMPLEX *w);

void zpbcon(const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zpbequ(const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *s, double *scond, double *amax, qml_long *info);

void zpbrfs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *afb, const qml_long *ldafb, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zpbstf(const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *info);

void zpbsv(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zpbsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *afb, const qml_long *ldafb, char *equed, double *s, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zpbtf2(const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *info);

void zpbtrf(const char *uplo, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, qml_long *info);

void zpbtrs(const char *uplo, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zpftrf(const char *transr, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, qml_long *info);

void zpftri(const char *transr, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, qml_long *info);

void zpftrs(const char *transr, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zpocon(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zpoequ(const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, double *scond, double *amax, qml_long *info);

void zpoequb(const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, double *scond, double *amax, qml_long *info);

void zporfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zposvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, char *equed, double *s, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zpotri(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void zppcon(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zppequ(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *s, double *scond, double *amax, qml_long *info);

void zpprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *afp, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zppsv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zppsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *afp, char *equed, double *s, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zpptrf(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *info);

void zpptri(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *info);

void zpptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zpstf2(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *piv, qml_long *rank, const double *tol, double *work, qml_long *info);

void zpstrf(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *piv, qml_long *rank, const double *tol, double *work, qml_long *info);

void zptcon(const qml_long *n, double *d, QML_DOUBLE_COMPLEX *e, const double *anorm, double *rcond, double *rwork, qml_long *info);

void zpteqr(const char *compz, const qml_long *n, double *d, double *e, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, double *work, qml_long *info);

void zptrfs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *d, QML_DOUBLE_COMPLEX *e, double *df, QML_DOUBLE_COMPLEX *ef, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zptsv(const qml_long *n, const qml_long *nrhs, double *d, QML_DOUBLE_COMPLEX *e, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zptsvx(const char *fact, const qml_long *n, const qml_long *nrhs, double *d, QML_DOUBLE_COMPLEX *e, double *df, QML_DOUBLE_COMPLEX *ef, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zpttrf(const qml_long *n, double *d, QML_DOUBLE_COMPLEX *e, qml_long *info);

void zpttrs(const char *uplo, const qml_long *n, const qml_long *nrhs, double *d, QML_DOUBLE_COMPLEX *e, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zptts2(const qml_long *iuplo, const qml_long *n, const qml_long *nrhs, double *d, QML_DOUBLE_COMPLEX *e, QML_DOUBLE_COMPLEX *b, const qml_long *ldb);

void zspcon(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zspmv(const char *uplo, const qml_long *n, const QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *x, const qml_long *incx, const QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *y, const qml_long *incy);

void zspr(const char *uplo, const qml_long *n, const QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *x, const qml_long *incx, QML_DOUBLE_COMPLEX *ap);

void zsprfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *afp, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zspsv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zspsvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *afp, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zsptrf(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, qml_long *info);

void zsptri(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zsptrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zstedc(const char *compz, const qml_long *n, double *d, double *e, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zstegr(const char *jobz, const char *range, const qml_long *n, double *d, double *e, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, const double *abstol, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *isuppz, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zstein(const qml_long *n, double *d, double *e, const qml_long *m, double *w, qml_long *iblock, qml_long *isplit, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, double *work, qml_long *iwork, qml_long *ifail, qml_long *info);

void zstemr(const char *jobz, const char *range, const qml_long *n, double *d, double *e, const double *vl, const double *vu, const qml_long *il, const qml_long *iu, qml_long *m, double *w, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, const qml_long *nzc, qml_long *isuppz, qml_int *tryrac, double *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void zsteqr(const char *compz, const qml_long *n, double *d, double *e, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, double *work, qml_long *info);

void zsycon(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zsycon_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, const double *anorm, double *rcond, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zsyconv(const char *uplo, const char *way, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *e, qml_long *info);

void zsyequb(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *s, double *scond, double *amax, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zsymv(const char *uplo, const qml_long *n, const QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *x, const qml_long *incx, const QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *y, const qml_long *incy);

void zsyr(const char *uplo, const qml_long *n, const QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *x, const qml_long *incx, QML_DOUBLE_COMPLEX *a, const qml_long *lda);

void zsyrfs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void zsysv(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zsysv_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zsysvx(const char *fact, const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *af, const qml_long *ldaf, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *rcond, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, qml_long *info);

void zsyswapr(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, const qml_long *i1, const qml_long *i2);

void zsytf2(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void zsytf2_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, qml_long *info);

void zsytrf(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zsytrf_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zsytri(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zsytri2(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zsytri2x(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, const qml_long *nb, qml_long *info);

void zsytri_rook(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zsytrs(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void zsytrs2(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zsytrs_rook(const char *uplo, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *ipiv, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void ztbcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, const qml_long *kd, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztbrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztbtrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *kd, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ab, const qml_long *ldab, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void ztfsm(const char *transr, const char *side, const char *uplo, const char *trans, const char *diag, const qml_long *m, const qml_long *n, const QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *a, QML_DOUBLE_COMPLEX *b, const qml_long *ldb);

void ztftri(const char *transr, const char *uplo, const char *diag, const qml_long *n, QML_DOUBLE_COMPLEX *a, qml_long *info);

void ztfttp(const char *transr, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *arf, QML_DOUBLE_COMPLEX *ap, qml_long *info);

void ztfttr(const char *transr, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *arf, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void ztgevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, QML_DOUBLE_COMPLEX *s, const qml_long *lds, QML_DOUBLE_COMPLEX *p, const qml_long *ldp, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztgex2(qml_int *wantq, qml_int *wantz, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, const qml_long *j1, qml_long *info);

void ztgexc(qml_int *wantq, qml_int *wantz, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, const qml_long *ifst, qml_long *ilst, qml_long *info);

void ztgsen(const qml_long *ijob, qml_int *wantq, qml_int *wantz, qml_int *select, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *alpha, QML_DOUBLE_COMPLEX *beta, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *z, const qml_long *ldz, qml_long *m, double *pl, double *pr, double *dif, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *iwork, const qml_long *liwork, qml_long *info);

void ztgsja(const char *jobu, const char *jobv, const char *jobq, const qml_long *m, const qml_long *p, const qml_long *n, const qml_long *k, const qml_long *l, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, const double *tola, const double *tolb, double *alpha, double *beta, QML_DOUBLE_COMPLEX *u, const qml_long *ldu, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *work, qml_long *ncycle, qml_long *info);

void ztgsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, double *s, double *dif, const qml_long *mm, qml_long *m, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void ztgsy2(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *d, const qml_long *ldd, QML_DOUBLE_COMPLEX *e, const qml_long *lde, QML_DOUBLE_COMPLEX *f, const qml_long *ldf, double *scale, double *rdsum, double *rdscal, qml_long *info);

void ztgsyl(const char *trans, const qml_long *ijob, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *d, const qml_long *ldd, QML_DOUBLE_COMPLEX *e, const qml_long *lde, QML_DOUBLE_COMPLEX *f, const qml_long *ldf, double *scale, double *dif, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *iwork, qml_long *info);

void ztpcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, QML_DOUBLE_COMPLEX *ap, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztpmqrt(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, const qml_long *nb, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, qml_long *info);

void ztpqrt(const qml_long *m, const qml_long *n, const qml_long *l, const qml_long *nb, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *work, qml_long *info);

void ztpqrt2(const qml_long *m, const qml_long *n, const qml_long *l, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, qml_long *info);

void ztprfb(const char *side, const char *trans, const char *direct, const char *storev, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_DOUBLE_COMPLEX *v, const qml_long *ldv, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *work, const qml_long *ldwork);

void ztprfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztptri(const char *uplo, const char *diag, const qml_long *n, QML_DOUBLE_COMPLEX *ap, qml_long *info);

void ztptrs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, qml_long *info);

void ztpttf(const char *transr, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *arf, qml_long *info);

void ztpttr(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *a, const qml_long *lda, qml_long *info);

void ztrcon(const char *norm, const char *uplo, const char *diag, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, double *rcond, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztrevc(const char *side, const char *howmny, qml_int *select, const qml_long *n, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, const qml_long *mm, qml_long *m, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztrexc(const char *compq, const qml_long *n, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, const qml_long *ifst, const qml_long *ilst, qml_long *info);

void ztrrfs(const char *uplo, const char *trans, const char *diag, const qml_long *n, const qml_long *nrhs, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *x, const qml_long *ldx, double *ferr, double *berr, QML_DOUBLE_COMPLEX *work, double *rwork, qml_long *info);

void ztrsen(const char *job, const char *compq, qml_int *select, const qml_long *n, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *w, qml_long *m, double *s, double *sep, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void ztrsna(const char *job, const char *howmny, qml_int *select, const qml_long *n, QML_DOUBLE_COMPLEX *t, const qml_long *ldt, QML_DOUBLE_COMPLEX *vl, const qml_long *ldvl, QML_DOUBLE_COMPLEX *vr, const qml_long *ldvr, double *s, double *sep, const qml_long *mm, qml_long *m, QML_DOUBLE_COMPLEX *work, const qml_long *ldwork, double *rwork, qml_long *info);

void ztrsyl(const char *trana, const char *tranb, const qml_long *isgn, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *b, const qml_long *ldb, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, double *scale, qml_long *info);

void ztrttf(const char *transr, const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *arf, qml_long *info);

void ztrttp(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *ap, qml_long *info);

void ztzrzf(const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunbdb(const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, QML_DOUBLE_COMPLEX *x11, const qml_long *ldx11, QML_DOUBLE_COMPLEX *x12, const qml_long *ldx12, QML_DOUBLE_COMPLEX *x21, const qml_long *ldx21, QML_DOUBLE_COMPLEX *x22, const qml_long *ldx22, double *theta, double *phi, QML_DOUBLE_COMPLEX *taup1, QML_DOUBLE_COMPLEX *taup2, QML_DOUBLE_COMPLEX *tauq1, QML_DOUBLE_COMPLEX *tauq2, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunbdb1(const qml_long *m, const qml_long *p, const qml_long *q, QML_DOUBLE_COMPLEX *x11, const qml_long *ldx11, QML_DOUBLE_COMPLEX *x21, const qml_long *ldx21, double *theta, double *phi, QML_DOUBLE_COMPLEX *taup1, QML_DOUBLE_COMPLEX *taup2, QML_DOUBLE_COMPLEX *tauq1, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunbdb2(const qml_long *m, const qml_long *p, const qml_long *q, QML_DOUBLE_COMPLEX *x11, const qml_long *ldx11, QML_DOUBLE_COMPLEX *x21, const qml_long *ldx21, double *theta, double *phi, QML_DOUBLE_COMPLEX *taup1, QML_DOUBLE_COMPLEX *taup2, QML_DOUBLE_COMPLEX *tauq1, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunbdb3(const qml_long *m, const qml_long *p, const qml_long *q, QML_DOUBLE_COMPLEX *x11, const qml_long *ldx11, QML_DOUBLE_COMPLEX *x21, const qml_long *ldx21, double *theta, double *phi, QML_DOUBLE_COMPLEX *taup1, QML_DOUBLE_COMPLEX *taup2, QML_DOUBLE_COMPLEX *tauq1, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunbdb4(const qml_long *m, const qml_long *p, const qml_long *q, QML_DOUBLE_COMPLEX *x11, const qml_long *ldx11, QML_DOUBLE_COMPLEX *x21, const qml_long *ldx21, double *theta, double *phi, QML_DOUBLE_COMPLEX *taup1, QML_DOUBLE_COMPLEX *taup2, QML_DOUBLE_COMPLEX *tauq1, QML_DOUBLE_COMPLEX *phantom, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunbdb5(const qml_long *m1, const qml_long *m2, const qml_long *n, QML_DOUBLE_COMPLEX *x1, const qml_long *incx1, QML_DOUBLE_COMPLEX *x2, const qml_long *incx2, QML_DOUBLE_COMPLEX *q1, const qml_long *ldq1, QML_DOUBLE_COMPLEX *q2, const qml_long *ldq2, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunbdb6(const qml_long *m1, const qml_long *m2, const qml_long *n, QML_DOUBLE_COMPLEX *x1, const qml_long *incx1, QML_DOUBLE_COMPLEX *x2, const qml_long *incx2, QML_DOUBLE_COMPLEX *q1, const qml_long *ldq1, QML_DOUBLE_COMPLEX *q2, const qml_long *ldq2, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zuncsd(const char *jobu1, const char *jobu2, const char *jobv1t, const char *jobv2t, const char *trans, const char *signs, const qml_long *m, const qml_long *p, const qml_long *q, QML_DOUBLE_COMPLEX *x11, const qml_long *ldx11, QML_DOUBLE_COMPLEX *x12, const qml_long *ldx12, QML_DOUBLE_COMPLEX *x21, const qml_long *ldx21, QML_DOUBLE_COMPLEX *x22, const qml_long *ldx22, double *theta, QML_DOUBLE_COMPLEX *u1, const qml_long *ldu1, QML_DOUBLE_COMPLEX *u2, const qml_long *ldu2, QML_DOUBLE_COMPLEX *v1t, const qml_long *ldv1t, QML_DOUBLE_COMPLEX *v2t, const qml_long *ldv2t, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, qml_long *info);

void zuncsd2by1(const char *jobu1, const char *jobu2, const char *jobv1t, const qml_long *m, const qml_long *p, const qml_long *q, QML_DOUBLE_COMPLEX *x11, const qml_long *ldx11, QML_DOUBLE_COMPLEX *x21, const qml_long *ldx21, double *theta, QML_DOUBLE_COMPLEX *u1, const qml_long *ldu1, QML_DOUBLE_COMPLEX *u2, const qml_long *ldu2, QML_DOUBLE_COMPLEX *v1t, const qml_long *ldv1t, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, double *rwork, const qml_long *lrwork, qml_long *iwork, qml_long *info);

void zung2l(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zung2r(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zungbr(const char *vect, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunghr(const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zungl2(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zunglq(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zungql(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zungqr(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zungr2(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zungrq(const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zungtr(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunm22(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *n1, const qml_long *n2, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunm2l(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zunmbr(const char *vect, const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunmhr(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *ilo, const qml_long *ihi, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunml2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zunmlq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunmql(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunmr2(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zunmr3(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zunmrq(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunmrz(const char *side, const char *trans, const qml_long *m, const qml_long *n, const qml_long *k, const qml_long *l, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zunmtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *a, const qml_long *lda, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, const qml_long *lwork, qml_long *info);

void zupgtr(const char *uplo, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *q, const qml_long *ldq, QML_DOUBLE_COMPLEX *work, qml_long *info);

void zupmtr(const char *side, const char *uplo, const char *trans, const qml_long *m, const qml_long *n, QML_DOUBLE_COMPLEX *ap, QML_DOUBLE_COMPLEX *tau, QML_DOUBLE_COMPLEX *c, const qml_long *ldc, QML_DOUBLE_COMPLEX *work, qml_long *info);


