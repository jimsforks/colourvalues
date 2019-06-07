#include <Rcpp.h>

//#include "colourvalues/colours.hpp"
//#include "colourvalues/colours/colours_hex.hpp"
#include "colourvalues/api.hpp"


// -----------------------------------------------------------------------------
// return HEX

// [[Rcpp::export]]
Rcpp::StringVector rcpp_colour_values_hex(
    SEXP x,
    SEXP palette,
    Rcpp::NumericVector& alpha,
    std::string na_colour = "#808080",
    bool include_alpha = true,
    bool format = false,
    std::string format_type = "numeric",
    int digits = 2,
    bool summary = false,
    int n_summaries = 0
  ) {
  return colourvalues::api::colour_values_hex(
    x, palette, alpha, na_colour, include_alpha, format, format_type, digits, summary, n_summaries
  );
}

// [[Rcpp::export]]
Rcpp::StringVector rcpp_colour_num_value_string_palette_hex(
    Rcpp::NumericVector x,
    std::string palette,
    std::string na_colour,
    Rcpp::NumericVector alpha,
    bool include_alpha ) {
  Rcpp::NumericVector x2 = Rcpp::clone(x);
  return colourvalues::colours_hex::colour_value_hex( x2, palette, na_colour, alpha, include_alpha );
}

// [[Rcpp::export]]
Rcpp::List rcpp_colour_num_value_string_palette_summary_hex(
    Rcpp::NumericVector x,
    std::string palette,
    std::string na_colour,
    Rcpp::NumericVector alpha,
    bool include_alpha,
    int n_summaries,
    bool format = false,
    std::string format_type = "",
    int digits = 2) {
  Rcpp::NumericVector x2 = Rcpp::clone(x);
  return colourvalues::colours_hex::colour_value_hex( x2, palette, na_colour, alpha, include_alpha, n_summaries, format, format_type, digits );
}


// [[Rcpp::export]]
Rcpp::StringVector rcpp_colour_num_value_rgb_palette_hex(
    Rcpp::NumericVector x,
    Rcpp::NumericMatrix palette,
    std::string na_colour,
    bool include_alpha ) {
  Rcpp::NumericVector x2 = Rcpp::clone(x);
  return colourvalues::colours_hex::colour_value_hex( x2, palette, na_colour, include_alpha );
}

// [[Rcpp::export]]
Rcpp::List rcpp_colour_num_value_rgb_palette_summary_hex(
    Rcpp::NumericVector x,
    Rcpp::NumericMatrix palette,
    std::string na_colour,
    bool include_alpha,
    int n_summaries,
    bool format = false,
    std::string format_type = "",
    int digits = 2 ) {
  Rcpp::NumericVector x2 = Rcpp::clone(x);
  return colourvalues::colours_hex::colour_value_hex( x2, palette, na_colour, include_alpha, n_summaries, format, format_type, digits );
}


// [[Rcpp::export]]
Rcpp::StringVector rcpp_colour_str_value_string_palette_hex(
    Rcpp::StringVector x,
    std::string palette,
    std::string na_colour,
    Rcpp::NumericVector alpha,
    bool include_alpha ) {
  return colourvalues::colours_hex::colour_value_hex( x, palette, na_colour, alpha, include_alpha );
}

// [[Rcpp::export]]
Rcpp::List rcpp_colour_str_value_string_palette_summary_hex(
    Rcpp::StringVector x,
    std::string palette,
    std::string na_colour,
    Rcpp::NumericVector alpha,
    bool include_alpha,
    bool summary) {
  return colourvalues::colours_hex::colour_value_hex( x, palette, na_colour, alpha, include_alpha, summary );
}

// [[Rcpp::export]]
Rcpp::StringVector rcpp_colour_str_value_rgb_palette_hex(
    Rcpp::StringVector x,
    Rcpp::NumericMatrix palette,
    std::string na_colour,
    bool include_alpha ) {
  return colourvalues::colours_hex::colour_value_hex( x, palette, na_colour, include_alpha );
}

// [[Rcpp::export]]
Rcpp::List rcpp_colour_str_value_rgb_palette_summary_hex(
    Rcpp::StringVector x,
    Rcpp::NumericMatrix palette,
    std::string na_colour,
    bool include_alpha,
    bool summary) {
  return colourvalues::colours_hex::colour_value_hex( x, palette, na_colour, include_alpha, summary );
}


