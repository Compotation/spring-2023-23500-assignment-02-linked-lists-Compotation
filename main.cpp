#include <iostream>
#include "List.h"
#include "OList.h"

int main() {
  List *l = new List();
  l->insert(0, "hello");
  l->insert(1, "world");
  l->insert(2, "this");
  l->insert(3, "is");
  l->insert(4, "me");
  std::cout << l->toString() << " " << l->length() << "\n";
  l->remove(3);
  std::cout << l->toString() << " " << l->length() << "\n";
  delete l;
  std::cout << "finished\n";
  auto *l2 = new OList();
  l2->insert("hello");
  l2->insert("world");
  l2->insert("!");
  l2->reverse();

//  l->insert(0,"a");
//  std::cout << "bool: " << l->contains("ab") << "\n";
//  std::cout << l->toString() << " " << l->length() << "\n";
//  l->insert(0,"b");
//  l->insert(0,"c");
//  l->insert(0,"d");
//  try {
//    l->insert(10,"x");
//  } catch (std::exception e){
//    std::cout << "Insert x didn't work\n";
//  }
//  std::cout << l->toString() << "\n";
//  l->insert(2,"inserted at 2");
//  std::cout << l->toString() << "\n";
//  l->insert(5,"inserted at end");
//  std::cout << l->toString() << " " << l->length() << "\n";
//  return 0;
}
