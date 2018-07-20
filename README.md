# real_performance_test
  some performance test(in c/c++) result which we should know in the system software development

## test about smart pointer
| operation | level | time(nanoseconds) |
| ------------- |:-------------:| -----:|
| new shared_ptr| O0|111.7|
| new unique_ptr| O0|78.5|
| new raw_ptr| O0|29.0|
| copy shared_ptr| O0|17.7|
| new weak_ptr from shared_ptr| O0|17.9|
| new shared_ptr| O1|55.4|
| new unique_ptr| O1|27.0|
| new raw_ptr| O1|26.3|
| copy shared_ptr| O1|0.33|
| new weak_ptr from shared_ptr| O1|0.33|
| new shared_ptr| O2|61.0|
| new unique_ptr| O2|26.1|
| new raw_ptr| O2|26.1|
| copy shared_ptr| O2|4.7e-05|
| new weak_ptr from shared_ptr| O2|4.3e-05|