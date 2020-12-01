
/* this is a hack to generate libsvm with both sparse and dense
   methods in the same binary*/

#define _DENSE_FP64
#undef  _DENSE_BF16
#include "svm.cpp"
#undef  _DENSE_FP64
#define _DENSE_BF16
#include "svm.cpp"
#undef  _DENSE_FP64
#undef  _DENSE_BF16
#include "svm.cpp"
