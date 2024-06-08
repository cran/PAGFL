// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bspline_system
arma::mat bspline_system(arma::vec& x, const unsigned int& d, const arma::vec& knots, bool intercept);
RcppExport SEXP _PAGFL_bspline_system(SEXP xSEXP, SEXP dSEXP, SEXP knotsSEXP, SEXP interceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type knots(knotsSEXP);
    Rcpp::traits::input_parameter< bool >::type intercept(interceptSEXP);
    rcpp_result_gen = Rcpp::wrap(bspline_system(x, d, knots, intercept));
    return rcpp_result_gen;
END_RCPP
}
// demeanIndVec
arma::vec demeanIndVec(arma::vec x, unsigned int N, arma::uvec i_index);
RcppExport SEXP _PAGFL_demeanIndVec(SEXP xSEXP, SEXP NSEXP, SEXP i_indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type i_index(i_indexSEXP);
    rcpp_result_gen = Rcpp::wrap(demeanIndVec(x, N, i_index));
    return rcpp_result_gen;
END_RCPP
}
// buildDiagX_block_dense
arma::mat buildDiagX_block_dense(const arma::mat& X, const unsigned int& N, arma::uvec& i_index, const arma::uvec& groups);
RcppExport SEXP _PAGFL_buildDiagX_block_dense(SEXP XSEXP, SEXP NSEXP, SEXP i_indexSEXP, SEXP groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type i_index(i_indexSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(buildDiagX_block_dense(X, N, i_index, groups));
    return rcpp_result_gen;
END_RCPP
}
// pagfl_routine
Rcpp::List pagfl_routine(arma::vec& y, arma::mat& X, const std::string& method, arma::mat& Z, arma::uvec& i_index, const arma::uvec& t_index, const unsigned int& N, const bool& bias_correc, const arma::vec& lambda_vec, const double& kappa, const double& min_group_frac, const unsigned int& max_iter, const double& tol_convergence, const double& tol_group, const double& varrho, const double& rho, const bool& parallel);
RcppExport SEXP _PAGFL_pagfl_routine(SEXP ySEXP, SEXP XSEXP, SEXP methodSEXP, SEXP ZSEXP, SEXP i_indexSEXP, SEXP t_indexSEXP, SEXP NSEXP, SEXP bias_correcSEXP, SEXP lambda_vecSEXP, SEXP kappaSEXP, SEXP min_group_fracSEXP, SEXP max_iterSEXP, SEXP tol_convergenceSEXP, SEXP tol_groupSEXP, SEXP varrhoSEXP, SEXP rhoSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type i_index(i_indexSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type t_index(t_indexSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bias_correc(bias_correcSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda_vec(lambda_vecSEXP);
    Rcpp::traits::input_parameter< const double& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const double& >::type min_group_frac(min_group_fracSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol_convergence(tol_convergenceSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol_group(tol_groupSEXP);
    Rcpp::traits::input_parameter< const double& >::type varrho(varrhoSEXP);
    Rcpp::traits::input_parameter< const double& >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(pagfl_routine(y, X, method, Z, i_index, t_index, N, bias_correc, lambda_vec, kappa, min_group_frac, max_iter, tol_convergence, tol_group, varrho, rho, parallel));
    return rcpp_result_gen;
END_RCPP
}
// tv_pagfl_routine
Rcpp::List tv_pagfl_routine(arma::vec& y, arma::mat& X, arma::mat& X_const, const unsigned int& d, const unsigned int& M, arma::uvec& i_index, const arma::uvec& t_index, const unsigned int& N, const unsigned int& p_const, const arma::vec& lambda_vec, const double& kappa, const double& min_group_frac, const unsigned int& max_iter, const double& tol_convergence, const double& tol_group, const double& varrho, const double& rho, const bool& parallel);
RcppExport SEXP _PAGFL_tv_pagfl_routine(SEXP ySEXP, SEXP XSEXP, SEXP X_constSEXP, SEXP dSEXP, SEXP MSEXP, SEXP i_indexSEXP, SEXP t_indexSEXP, SEXP NSEXP, SEXP p_constSEXP, SEXP lambda_vecSEXP, SEXP kappaSEXP, SEXP min_group_fracSEXP, SEXP max_iterSEXP, SEXP tol_convergenceSEXP, SEXP tol_groupSEXP, SEXP varrhoSEXP, SEXP rhoSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X_const(X_constSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type i_index(i_indexSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type t_index(t_indexSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type p_const(p_constSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lambda_vec(lambda_vecSEXP);
    Rcpp::traits::input_parameter< const double& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const double& >::type min_group_frac(min_group_fracSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol_convergence(tol_convergenceSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol_group(tol_groupSEXP);
    Rcpp::traits::input_parameter< const double& >::type varrho(varrhoSEXP);
    Rcpp::traits::input_parameter< const double& >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const bool& >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(tv_pagfl_routine(y, X, X_const, d, M, i_index, t_index, N, p_const, lambda_vec, kappa, min_group_frac, max_iter, tol_convergence, tol_group, varrho, rho, parallel));
    return rcpp_result_gen;
END_RCPP
}
// getTVAlpha
arma::cube getTVAlpha(const arma::mat& xi, const unsigned int& K_hat, const unsigned int& p, const unsigned int& n_periods, const arma::mat& B);
RcppExport SEXP _PAGFL_getTVAlpha(SEXP xiSEXP, SEXP K_hatSEXP, SEXP pSEXP, SEXP n_periodsSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type K_hat(K_hatSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type n_periods(n_periodsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(getTVAlpha(xi, K_hat, p, n_periods, B));
    return rcpp_result_gen;
END_RCPP
}
// delete_missing_t
arma::cube delete_missing_t(const arma::uvec& i_index, const arma::uvec& t_index, const unsigned int& K_hat, const arma::vec& groups_hat, arma::cube& alpha_hat);
RcppExport SEXP _PAGFL_delete_missing_t(SEXP i_indexSEXP, SEXP t_indexSEXP, SEXP K_hatSEXP, SEXP groups_hatSEXP, SEXP alpha_hatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type i_index(i_indexSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type t_index(t_indexSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type K_hat(K_hatSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type groups_hat(groups_hatSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type alpha_hat(alpha_hatSEXP);
    rcpp_result_gen = Rcpp::wrap(delete_missing_t(i_index, t_index, K_hat, groups_hat, alpha_hat));
    return rcpp_result_gen;
END_RCPP
}
// fitMeasures
arma::vec fitMeasures(unsigned int& N, const unsigned int& k, const arma::vec& residuals, arma::vec& y, arma::uvec& i_index, const std::string& method);
RcppExport SEXP _PAGFL_fitMeasures(SEXP NSEXP, SEXP kSEXP, SEXP residualsSEXP, SEXP ySEXP, SEXP i_indexSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type i_index(i_indexSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(fitMeasures(N, k, residuals, y, i_index, method));
    return rcpp_result_gen;
END_RCPP
}
// getFE
arma::vec getFE(const arma::vec& y, const arma::uvec& i_index, const unsigned int& N, const std::string& method);
RcppExport SEXP _PAGFL_getFE(SEXP ySEXP, SEXP i_indexSEXP, SEXP NSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i_index(i_indexSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(getFE(y, i_index, N, method));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PAGFL_bspline_system", (DL_FUNC) &_PAGFL_bspline_system, 4},
    {"_PAGFL_demeanIndVec", (DL_FUNC) &_PAGFL_demeanIndVec, 3},
    {"_PAGFL_buildDiagX_block_dense", (DL_FUNC) &_PAGFL_buildDiagX_block_dense, 4},
    {"_PAGFL_pagfl_routine", (DL_FUNC) &_PAGFL_pagfl_routine, 17},
    {"_PAGFL_tv_pagfl_routine", (DL_FUNC) &_PAGFL_tv_pagfl_routine, 18},
    {"_PAGFL_getTVAlpha", (DL_FUNC) &_PAGFL_getTVAlpha, 5},
    {"_PAGFL_delete_missing_t", (DL_FUNC) &_PAGFL_delete_missing_t, 5},
    {"_PAGFL_fitMeasures", (DL_FUNC) &_PAGFL_fitMeasures, 6},
    {"_PAGFL_getFE", (DL_FUNC) &_PAGFL_getFE, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_PAGFL(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
