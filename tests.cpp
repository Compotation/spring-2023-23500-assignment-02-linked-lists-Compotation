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

TEST_CASE("get") {
  auto *l = new OList();
  l->insert("!");
  l->insert("world");
  l->insert("hello");
  CHECK_EQ(l->get(0), "hello");
  CHECK_EQ(l->get(2), "!");
}

TEST_CASE("reverse") {
  auto *l = new OList();
  l->insert("hello");
  l->insert("world");
  l->insert("!");
  l->reverse();
  CHECK_EQ(l->toString(), "hello-->world-->!-->nullptr");

  auto *l2 = new OList();
  l2->insert("hello");
  l2->insert("world");
  l2->insert("!");
  l2->insert("no");
  l2->reverse();
  CHECK_EQ(l2->toString(), "hello-->world-->!-->no-->nullptr");

  auto *l3 = new OList();
  l3->reverse();
  CHECK_EQ(l3->toString(), "nullptr");

  auto *l4 = new OList();
  l4->insert("hi");
  CHECK_EQ(l4->toString(), "hi-->nullptr");

  auto *l5 = new OList();
  l5->insert("hi");
  l5->insert("me");
  CHECK_EQ(l5->toString(), "me-->hi-->nullptr");
}

TEST_CASE("destructor") {
  auto *l = new OList();
  l->insert("hello");
  delete l;
}