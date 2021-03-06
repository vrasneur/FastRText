// Content of this file is added to each source of Fasttext to change some behaviours

#ifndef R_COMPLIANCY
#define R_COMPLIANCY

#include <Rcpp.h>
#include <stdexcept>

#define exit(param) throw std::runtime_error("Exit code: " + std::to_string(param));
#define cerr cout

#endif //R_COMPLIANCY
