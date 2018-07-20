#include <chrono>
#include <iostream>

#define TEST_NUM 1000000

#define NOTHING() do{} while(0);

#define ONCE(some) do {some;} while(0);

#define TEST_FUN1(op1, fun_name) {int count = 0;                                              \
                                  auto start = std::chrono::high_resolution_clock::now();      \
                                  do {op1;} while (++count < TEST_NUM);                         \
                                  auto end =std::chrono::high_resolution_clock::now();           \
                                  std::chrono::duration<double,std::nano> elapsed = end - start;  \
                                  std::cout << fun_name << " use: " << elapsed.count() / TEST_NUM << "  nanoseconds" << std::endl;  \
                                 }

#define TEST_FUN2(op1, op2, fun_name) {int count = 0;                                              \
                                       auto start = std::chrono::high_resolution_clock::now();      \
                                       do {op1; op2;} while (++count < TEST_NUM);                    \
                                       auto end =std::chrono::high_resolution_clock::now();           \
                                       std::chrono::duration<double,std::nano> elapsed = end - start;  \
                                       std::cout << fun_name << " use: " << elapsed.count() / TEST_NUM << "  nanoseconds" << std::endl;  \
                                       }


