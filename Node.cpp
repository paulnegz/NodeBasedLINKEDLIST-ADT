/*
Author: Negedu Paul
EECS - Lab 2
last modified: 2/14/2019
*/
using namespace std;
#include "Node.h"
//constructors

Node::Node()
{
  m_entry = 0;
  m_next = nullptr;
}

Node::Node(int value)
{
  m_entry=value;
  m_next=nullptr;
}
//setters

void Node::setEntry(int value)
{
  m_entry=value;
}

void Node::setNext(Node* next)
{
  m_next=next;
}
//getters

int Node::getEntry() const
{
  return m_entry;
}

Node* Node::getNext() const
{
  return m_next;
}
