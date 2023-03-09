#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "List.h"
#include "OList.h"

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

TEST_CASE("toString") {
  auto *l = new OList();
  l->insert("!");
  l->insert("world");
  l->insert("hello");
  CHECK_EQ(l->toString(), "hello-->world-->!-->nullptr");

  auto *l2 = new OList();
  l2->insert("2");
  l2->insert(" ");
  l2->insert("!");
  CHECK_EQ(l2->toString(), "!--> -->2-->nullptr");

  auto *l3 = new OList();
  CHECK_EQ(l3->toString(), "nullptr");
}