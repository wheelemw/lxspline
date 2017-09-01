// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// SADMVN
double SADMVN(arma::mat M, arma::mat C);
RcppExport SEXP lxspline_SADMVN(SEXP MSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(SADMVN(M, C));
    return rcpp_result_gen;
END_RCPP
}
// BivNProb
double BivNProb(NumericVector mean, NumericVector cv);
RcppExport SEXP lxspline_BivNProb(SEXP meanSEXP, SEXP cvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cv(cvSEXP);
    rcpp_result_gen = Rcpp::wrap(BivNProb(mean, cv));
    return rcpp_result_gen;
END_RCPP
}
// TriNProb
double TriNProb(NumericVector mean, NumericVector cv);
RcppExport SEXP lxspline_TriNProb(SEXP meanSEXP, SEXP cvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cv(cvSEXP);
    rcpp_result_gen = Rcpp::wrap(TriNProb(mean, cv));
    return rcpp_result_gen;
END_RCPP
}
// Tnorm
NumericVector Tnorm(NumericVector mean, NumericVector sd);
RcppExport SEXP lxspline_Tnorm(SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(Tnorm(mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// TnormV
NumericVector TnormV(NumericVector mean, NumericVector sd);
RcppExport SEXP lxspline_TnormV(SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(TnormV(mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// sampleBetas
NumericVector sampleBetas(NumericVector ttY, NumericVector ttX, NumericVector tbetas, NumericVector LAM, NumericVector intLAM, NumericVector p, NumericVector tau);
RcppExport SEXP lxspline_sampleBetas(SEXP ttYSEXP, SEXP ttXSEXP, SEXP tbetasSEXP, SEXP LAMSEXP, SEXP intLAMSEXP, SEXP pSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ttY(ttYSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ttX(ttXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbetas(tbetasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LAM(LAMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intLAM(intLAMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(sampleBetas(ttY, ttX, tbetas, LAM, intLAM, p, tau));
    return rcpp_result_gen;
END_RCPP
}
// sinsertBeta
List sinsertBeta(NumericVector tY, NumericVector Xidx, NumericVector ctau, NumericVector tp, NumericVector lam);
RcppExport SEXP lxspline_sinsertBeta(SEXP tYSEXP, SEXP XidxSEXP, SEXP ctauSEXP, SEXP tpSEXP, SEXP lamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tY(tYSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Xidx(XidxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ctau(ctauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tp(tpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lam(lamSEXP);
    rcpp_result_gen = Rcpp::wrap(sinsertBeta(tY, Xidx, ctau, tp, lam));
    return rcpp_result_gen;
END_RCPP
}
// sdeleteBeta
List sdeleteBeta(NumericVector tY, NumericVector Xidx, NumericVector ctau, NumericVector tp, NumericVector lam);
RcppExport SEXP lxspline_sdeleteBeta(SEXP tYSEXP, SEXP XidxSEXP, SEXP ctauSEXP, SEXP tpSEXP, SEXP lamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tY(tYSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Xidx(XidxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ctau(ctauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tp(tpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lam(lamSEXP);
    rcpp_result_gen = Rcpp::wrap(sdeleteBeta(tY, Xidx, ctau, tp, lam));
    return rcpp_result_gen;
END_RCPP
}
// shapesplineInsert
NumericVector shapesplineInsert(NumericVector k, NumericVector tp, NumericVector txi, NumericVector tdeg, NumericVector tCBX, NumericVector tpos);
RcppExport SEXP lxspline_shapesplineInsert(SEXP kSEXP, SEXP tpSEXP, SEXP txiSEXP, SEXP tdegSEXP, SEXP tCBXSEXP, SEXP tposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tp(tpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type txi(txiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tdeg(tdegSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tCBX(tCBXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tpos(tposSEXP);
    rcpp_result_gen = Rcpp::wrap(shapesplineInsert(k, tp, txi, tdeg, tCBX, tpos));
    return rcpp_result_gen;
END_RCPP
}
// shapesplineDelete
NumericVector shapesplineDelete(NumericVector k, NumericVector tp, NumericVector txi, NumericVector tdeg, NumericVector tCBX, NumericVector tpos);
RcppExport SEXP lxspline_shapesplineDelete(SEXP kSEXP, SEXP tpSEXP, SEXP txiSEXP, SEXP tdegSEXP, SEXP tCBXSEXP, SEXP tposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tp(tpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type txi(txiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tdeg(tdegSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tCBX(tCBXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tpos(tposSEXP);
    rcpp_result_gen = Rcpp::wrap(shapesplineDelete(k, tp, txi, tdeg, tCBX, tpos));
    return rcpp_result_gen;
END_RCPP
}
// rtmvn
NumericVector rtmvn(NumericVector tMean, NumericVector tVar);
RcppExport SEXP lxspline_rtmvn(SEXP tMeanSEXP, SEXP tVarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tMean(tMeanSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tVar(tVarSEXP);
    rcpp_result_gen = Rcpp::wrap(rtmvn(tMean, tVar));
    return rcpp_result_gen;
END_RCPP
}
// qcopy
SEXP qcopy(SEXP a, SEXP b, SEXP c, SEXP d);
RcppExport SEXP lxspline_qcopy(SEXP aSEXP, SEXP bSEXP, SEXP cSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type a(aSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    Rcpp::traits::input_parameter< SEXP >::type c(cSEXP);
    Rcpp::traits::input_parameter< SEXP >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(qcopy(a, b, c, d));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP lxspline_BivNProb(SEXP, SEXP);
RcppExport SEXP lxspline_qcopy(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP lxspline_rtmvn(SEXP, SEXP);
RcppExport SEXP lxspline_SADMVN(SEXP, SEXP);
RcppExport SEXP lxspline_sampleBetas(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP lxspline_sdeleteBeta(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP lxspline_shapesplineDelete(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP lxspline_shapesplineInsert(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP lxspline_sinsertBeta(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP lxspline_Tnorm(SEXP, SEXP);
RcppExport SEXP lxspline_TriNProb(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"lxspline_SADMVN", (DL_FUNC) &lxspline_SADMVN, 2},
    {"lxspline_BivNProb", (DL_FUNC) &lxspline_BivNProb, 2},
    {"lxspline_TriNProb", (DL_FUNC) &lxspline_TriNProb, 2},
    {"lxspline_Tnorm", (DL_FUNC) &lxspline_Tnorm, 2},
    {"lxspline_TnormV", (DL_FUNC) &lxspline_TnormV, 2},
    {"lxspline_sampleBetas", (DL_FUNC) &lxspline_sampleBetas, 7},
    {"lxspline_sinsertBeta", (DL_FUNC) &lxspline_sinsertBeta, 5},
    {"lxspline_sdeleteBeta", (DL_FUNC) &lxspline_sdeleteBeta, 5},
    {"lxspline_shapesplineInsert", (DL_FUNC) &lxspline_shapesplineInsert, 6},
    {"lxspline_shapesplineDelete", (DL_FUNC) &lxspline_shapesplineDelete, 6},
    {"lxspline_rtmvn", (DL_FUNC) &lxspline_rtmvn, 2},
    {"lxspline_qcopy", (DL_FUNC) &lxspline_qcopy, 4},
    {"lxspline_BivNProb",          (DL_FUNC) &lxspline_BivNProb,          2},
    {"lxspline_qcopy",             (DL_FUNC) &lxspline_qcopy,             4},
    {"lxspline_rtmvn",             (DL_FUNC) &lxspline_rtmvn,             2},
    {"lxspline_SADMVN",            (DL_FUNC) &lxspline_SADMVN,            2},
    {"lxspline_sampleBetas",       (DL_FUNC) &lxspline_sampleBetas,       7},
    {"lxspline_sdeleteBeta",       (DL_FUNC) &lxspline_sdeleteBeta,       5},
    {"lxspline_shapesplineDelete", (DL_FUNC) &lxspline_shapesplineDelete, 6},
    {"lxspline_shapesplineInsert", (DL_FUNC) &lxspline_shapesplineInsert, 6},
    {"lxspline_sinsertBeta",       (DL_FUNC) &lxspline_sinsertBeta,       5},
    {"lxspline_Tnorm",             (DL_FUNC) &lxspline_Tnorm,             2},
    {"lxspline_TriNProb",          (DL_FUNC) &lxspline_TriNProb,          2},
    {NULL, NULL, 0}
};

RcppExport void R_initlxspline(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
