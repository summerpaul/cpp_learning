/**
 * @Author: Xia Yunkai
 * @Date:   2023-07-30 17:47:23
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-07-30 17:56:31
 */
#include <iostream>

using namespace std;
// 基础1:顶层const与底层const
// const int * const p = new int (10);
// 底层const    顶层const

// 《C++ Primer》 p58 当执行对象拷贝操作时，常量的顶层const不受什么影响，而底层const必须一致

// const int a = 10; 顶层const ，修饰的变量不能改变
// const int &ra = 10;  底层const
// 1. 应用不是对象且进行拷贝；不满足上述原则
// 2.

int main(int argc, char const *argv[]) {
  const int a = 10;

  int b = a;

  const int *const p = new int(10);

  int *p1 = p;  // const int * 不能用于初始int *

  int *const p2 = p;  // const int * 类型不能用于初始化int * const 类型的实体

  const int *p3 = p;

  const int *const p4 = p;

  int *p4 = &a;

  return 0;
}
