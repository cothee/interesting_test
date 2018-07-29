# real_performance_test
  some performance test(in c/c++) result which we should know in the system software development

## 1. test about smart pointer
| operation | optimization level | time(nanoseconds) |
| ------------- |:-------------:| -----:|
| new shared_ptr| O0|102.5|
| new unique_ptr| O0|76.9|
| new raw_ptr| O0|28.6|
| malloc| O0|23.6|
| copy shared_ptr| O0|17.3|
| new weak_ptr from shared_ptr| O0|17.4|
| new shared_ptr| O1|53.1|
| new unique_ptr| O1|26.1|
| new raw_ptr| O1|25.6|
| malloc| O1|0.31|
| copy shared_ptr| O1|0.31|
| new weak_ptr from shared_ptr| O1|0.31|
| new shared_ptr| O2|52.9|
| new unique_ptr| O2|25.5|
| new raw_ptr| O2|25.6|
| malloc| O2|4.2e-06|
| copy shared_ptr| O2|3.9e-06|
| new weak_ptr from shared_ptr| O2|2.9e-06|
| mutex lock&unlock| O0|14.43|
| lock_guard lock&unlock| O0|20.61|
| mutex lock&unlock| O1|0.63|
| lock_guard lock&unlock| O1|0.61|
| mutex lock&unlock| O2|0.61|
| lock_guard lock&unlock| O2|0.65|


