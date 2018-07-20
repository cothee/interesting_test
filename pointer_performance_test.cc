#include <iostream>
#include <memory>
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

void test_shared() {
  TEST_FUN1(std::shared_ptr<Node> ptr(new Node(1,2,3)), "new shared_ptr");
}

void test_unique() {
  TEST_FUN1(std::unique_ptr<Node> ptr(new Node(1,2,3)), "new unique_ptr");
}

void test_raw() {
    TEST_FUN2(Node* n = new Node(1,2,3), delete n, "new raw_pointer");
}

void copy_shared() {
  std::shared_ptr<Node> ptr_ori;
  TEST_FUN1(auto ptr = ptr_ori, "copy shared_ptr");
}

void copy_weaked() {
  std::shared_ptr<Node> ptr_ori;
  TEST_FUN1(std::weak_ptr<Node> ptr = ptr_ori, "copy weak_ptr from shared_ptr");
}

int main() {
  test_shared();
  test_unique();
  test_raw();
  copy_shared();
  copy_weaked();
}


