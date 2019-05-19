// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cvll_mr
Rcpp::List cvll_mr(arma::dmat& x, arma::vec& y, int n_row);
RcppExport SEXP _modeLLtest_cvll_mr(SEXP xSEXP, SEXP ySEXP, SEXP n_rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::dmat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n_row(n_rowSEXP);
    rcpp_result_gen = Rcpp::wrap(cvll_mr(x, y, n_row));
    return rcpp_result_gen;
END_RCPP
}
// cvll_ols
Rcpp::List cvll_ols(arma::dmat& x, arma::mat& y, int n_row, int n_col);
RcppExport SEXP _modeLLtest_cvll_ols(SEXP xSEXP, SEXP ySEXP, SEXP n_rowSEXP, SEXP n_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::dmat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n_row(n_rowSEXP);
    Rcpp::traits::input_parameter< int >::type n_col(n_colSEXP);
    rcpp_result_gen = Rcpp::wrap(cvll_ols(x, y, n_row, n_col));
    return rcpp_result_gen;
END_RCPP
}
// cvll_rlm_m
Rcpp::List cvll_rlm_m(arma::dmat& x, arma::colvec& y, int n_row, int n_col);
RcppExport SEXP _modeLLtest_cvll_rlm_m(SEXP xSEXP, SEXP ySEXP, SEXP n_rowSEXP, SEXP n_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::dmat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n_row(n_rowSEXP);
    Rcpp::traits::input_parameter< int >::type n_col(n_colSEXP);
    rcpp_result_gen = Rcpp::wrap(cvll_rlm_m(x, y, n_row, n_col));
    return rcpp_result_gen;
END_RCPP
}
// cvll_rlm_mm
Rcpp::List cvll_rlm_mm(arma::dmat& x, arma::colvec& y, int n_row, int n_col);
RcppExport SEXP _modeLLtest_cvll_rlm_mm(SEXP xSEXP, SEXP ySEXP, SEXP n_rowSEXP, SEXP n_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::dmat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n_row(n_rowSEXP);
    Rcpp::traits::input_parameter< int >::type n_col(n_colSEXP);
    rcpp_result_gen = Rcpp::wrap(cvll_rlm_mm(x, y, n_row, n_col));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_modeLLtest_cvll_mr", (DL_FUNC) &_modeLLtest_cvll_mr, 3},
    {"_modeLLtest_cvll_ols", (DL_FUNC) &_modeLLtest_cvll_ols, 4},
    {"_modeLLtest_cvll_rlm_m", (DL_FUNC) &_modeLLtest_cvll_rlm_m, 4},
    {"_modeLLtest_cvll_rlm_mm", (DL_FUNC) &_modeLLtest_cvll_rlm_mm, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_modeLLtest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
