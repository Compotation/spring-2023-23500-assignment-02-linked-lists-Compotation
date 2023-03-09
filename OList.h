#pragma once

#include <iostream>
#include "Node.h"

class OList {
private:
  Node *head;
public:
  OList();

  ~OList();

  void insert(std::string data);

  void insert(int loc, std::string data); //0 indexed
  int length();

  std::string toString(); // for testing purposes

  /*
    Try to complete for Monday:
    
    get()
    and think about the remove and 
    other insert routine
    
    -------------------
    ~List();
    
  void remove(int loc);

  std::string get(int loc);
  bool contains();
  int length(); // the # of elements

  */



  bool contains(const std::string &item);

  void remove(int loc);
};
