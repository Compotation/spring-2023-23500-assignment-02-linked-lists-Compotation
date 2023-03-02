#include <iostream>
#include <utility>
#include "Node.h"

Node::Node() : next(nullptr)
{
}

Node::Node(std::string data, Node *next){
  this->data = std::move(data);
  this->next = next;
  
}

Node::Node(std::string data){
  this->data = std::move(data);
  this->next = nullptr;
}

void Node::setData(std::string data){
  this->data = std::move(data);
}

void Node::setNext(Node *next){
  this->next = next;
}

std::string Node::getData(){
  return this->data;
}

Node *Node::getNext(){
  return this->next;
}




