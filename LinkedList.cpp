/*
Author: Negedu Paul
EECS - Lab 2
*/
using namespace std;
#include <iostream>
#include"LinkedList.h"
#include <stdexcept>

LinkedList::LinkedList() //constructor
{
    m_front=nullptr;
    m_length=0;
}

LinkedList::LinkedList(const LinkedList& original)//copy constructor
{
    m_front=nullptr;
    m_length=0;
    for (int i=1; i<=original.getLength();i++)
  {
    this->addfront( original.getEntry(original.getLength()-i) );
  }
}

LinkedList::~LinkedList() //destructor
{
  clear();
  m_front=nullptr;
}

LinkedList& LinkedList::operator=(const LinkedList& original)
{

  this->clear();
  for (int i=0; i<original.getLength();i++)
{
  this->addfront(original.getEntry(original.getLength()-i-1));
}
  return (*this);
}

bool LinkedList::isEmpty() const
{
    if (m_length==0)
        {return true;}
    else
        {return false;}
}


int LinkedList::getLength() const
{
    return m_length;
}


void LinkedList::insert(int position, int entry)
{
    if (position < 0 || position > m_length)
    {
        throw(runtime_error("Invalid Index to insert"));
    }
    else if (m_length == 0 || position == 0)
    {
        addfront(entry);

    }
    else
    {
        Node* store = new Node(entry);
        Node* temp = m_front;//starting search at the front of linkedlist
        for (int i=1;i<position;i++)
        {
            temp=temp->getNext();//getting position before insertion point
        }
        store->setNext(temp->getNext());
        temp->setNext(store);
        m_length++;
    }
}


void LinkedList::remove(int position)
{
    if (position < 0 || position > m_length-1)
    {
        throw(runtime_error("Invalid Index to remove"));
    }
    else if(position==0)
    {
        removefront();
    }
    else
    {
        Node *temp = m_front; //starting search at the front of linkedlist
        for (int i =1 ; i < position; i++)
        {
            temp = temp->getNext(); //getting position before deletion point
        }
        Node* NodeToDelete= temp->getNext();
        temp->setNext(  NodeToDelete->getNext() );

        delete NodeToDelete;
        NodeToDelete = nullptr;
        m_length--;
    }
}


void LinkedList::clear()
{
    while (m_length>0)
    {
        removefront();
    }
}


int LinkedList::getEntry(int position) const
{
    if (position < 0 || position > m_length - 1)
    {
        throw(runtime_error("Invalid Index to get"));
    }
    else
    {
        Node *temp = m_front; //starting search at the front of linkedlist
        for (int i = 0; i < position; i++)
        {
            temp = temp->getNext(); //getting position point
        }
        return temp->getEntry();
    }
}


void LinkedList::replace(int position, int newEntry)
{

    if (position < 0 || position > m_length - 1)
    {
        throw(runtime_error("Invalid Index to replace"));
    }
    else
    {
        Node *temp = m_front; //starting search at the front of linkedlist
        for (int i = 0; i < position; i++)
        {
            temp = temp->getNext(); //getting position point
        }
        temp->setEntry(newEntry);
    }
}


void LinkedList::addfront(int entry)
{
    Node* temp=new Node(entry);
    temp->setNext(m_front);
    m_front=temp;
    temp=nullptr;
    m_length++;

}


void LinkedList::removefront()
{
    Node* temp = m_front->getNext();
    delete m_front;
    m_front=temp;
    temp=nullptr;
    m_length--;

}
