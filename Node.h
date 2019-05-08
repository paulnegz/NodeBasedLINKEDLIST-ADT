/*
Author: Negedu Paul
EECS - Lab 2
last modified: 2/14/2019
*/
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
using namespace std;
class Node
{
private:
	int m_entry;
	Node* m_next;

public:
	//two constructors overlaoded
	Node();
	/**
	* @pre NONE
	* @post initializing entry to zero and next pointer to nullptr
	**/
	Node(int value);
	/**
	* @pre NONE
	* @post The node is populated with value
	* @param value: interger
	**/
	//SETTERs
  void setEntry(int value);
	/**
	* @pre object of node class has been created.
	* @post The entry is replaced with the value
	* @param value:  interger
	**/

	void setNext(Node* next);
	/**
	* @pre object of node class has been created.
	* @post The node points to next node pointer
	* @param value:  interger
	**/

	//GETTERS
	int getEntry()const;
	/**
	* @pre object of node class has been created.
	* @post value is returned
	**/

	Node* getNext()const;
	/**
	* @pre object of node class has been created.
	* @post pointer to the next node is created
	**/

};
#endif
