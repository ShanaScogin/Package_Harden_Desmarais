//[[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

arma::colvec vecrlmm(Rcpp::List a) {
  int size = a.size();
  arma::colvec a1(size);
  for (int i = 0; i < size; i++) {
    a1[i] = a[i];
  }
  return a1;
}

Rcpp::List rlm_m(arma::dmat &x, arma::vec &y) {
    Rcpp::Environment pkg = Rcpp::Environment::global_env();
    Rcpp::Function f = pkg["rlm_m"];
    return f(x, y);
  }

// [[Rcpp::export]]
Rcpp::List cvll_rlm_m(arma::dmat &x, arma::colvec &y, int n_row, int n_col) {

  int n = n_row - 1;
  arma::dmat yv;
  arma::dmat xv;
  arma::rowvec rowyi;
  arma::rowvec rowxi;
  Rcpp::List rlm;
  arma::colvec coef;
  arma::colvec resid;
  double sig2;
  Rcpp::List cvll_rlm(n_row);

  for (int i = 0; i < n_row; i++) {
    yv = y.row(i); // define obs i before change y
    rowyi = y.row(i);
    y.shed_row(i); // leaves out observation i
    xv = x.row(i); // define obs i before change x
    rowxi = x.row(i);
    x.shed_row(i); // leaves out observation i but changes x
    rlm = rlm_m(x, y);
    coef = vecrlmm(rlm("coefficients"));
    resid = vecrlmm(rlm("residuals")); // residuals
    sig2 = arma::as_scalar( arma::trans(resid) * resid /  (n - n_col) ); // SE of est
    cvll_rlm[i] = log(arma::normpdf(yv - xv * coef, 0, sig2));
    y.insert_rows(i, rowyi); // add y back in
    x.insert_rows(i, rowxi); // add x back in
  }

  return cvll_rlm;
}