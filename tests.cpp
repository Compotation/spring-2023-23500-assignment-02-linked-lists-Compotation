#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "List.h"

TEST_CASE("contains") {
  List *l = new List();
  l->insert("hello");
  CHECK(l->contains("hello"));
  CHECK_FALSE(l->contains("a"));
}

TEST_CASE("remove") {
  List *l = new List();
  l->insert("!");
  l->insert("world");
  l->insert("hello");
  l->remove(0);
  CHECK_EQ(l->toString(), "world-->!-->nullptr");
}
