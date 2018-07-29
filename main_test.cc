#include <iostream>
#include <memory>
#include <mutex>

#include "test.h"

struct Node {
  int a;
  int b;
  int c;
  Node(int m, int n, int p) {
    a = m;
    b = n;
    c = p;
  }
};


/*smart pointer related*/
void test_shared() {
  TEST_FUN1(std::shared_ptr<Node> ptr(new Node(1,2,3)), "new shared_ptr");
}

void test_unique() {
  TEST_FUN1(std::unique_ptr<Node> ptr(new Node(1,2,3)), "new unique_ptr");
}

void test_raw() {
    TEST_FUN2(Node* n = new Node(1,2,3), delete n, "new raw_pointer");
}

void test_malloc() {
    Node* p;
    TEST_FUN2(p = (Node*)malloc(sizeof(Node)), free(p), "malloc & free");
}

void copy_shared() {
  std::shared_ptr<Node> ptr_ori;
  TEST_FUN1(auto ptr = ptr_ori, "copy shared_ptr");
}

void copy_weaked() {
  std::shared_ptr<Node> ptr_ori;
  TEST_FUN1(std::weak_ptr<Node> ptr = ptr_ori, "copy weak_ptr from shared_ptr");
}

/*thread related funs*/
void test_mutex() {
  std::mutex mtx;
  TEST_FUN2(mtx.lock(), mtx.unlock(), "mutex lock & unlock");
}

void test_lock_guard() {
  std::mutex mtx;
  TEST_FUN1(std::lock_guard<std::mutex> lock(mtx), "lock_guard for lock & unlock");
}

int main() {

  /*smart pointer related case*/
  test_shared();
  test_unique();
  test_raw();
  test_malloc();
  copy_shared();
  copy_weaked();

  /*thread related case*/
  test_mutex();
  test_lock_guard();
}


