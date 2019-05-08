/*
Author: Negedu Paul
EECS - Lab 2
last modified: 2/14/2019
*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"
#include <stdexcept> //For runtime_error
class LinkedList
{
     private:
     Node* m_front;
     int m_length;
     //private helper methods
     void addfront(int entry);
     void removefront();

     public:
     LinkedList();//constructor
     /**
     * @pre Node class is well defined
     * @post intial member varibles
     * @param NONE
     **/

     LinkedList(const LinkedList& original);//copy constructor
     /**
     * @pre NONE
     * @post making deep copy of original object
     * @param original:  object of Linkedlist
     **/

     ~LinkedList();//destructor
     /**
     * @pre Existing object of LinkedList
     * @post freeing up dynamically allocates memory
     **/

     LinkedList& operator=(const LinkedList& original);//operator overload
     /**
     * @pre two objects are of the same type.
     * @post making deep copy.
     * @param original:  well defined object
     **/

     bool isEmpty() const;
     /**
     * @pre well defined object
     * @post find out if objects have any elements
     **/

     int getLength() const;
     /**
     * @pre The position is between 1 and the list's length
     * @post find how many elements are in the class
     **/

     void insert(int position, int entry);
     /**
     * @pre The position is between 1 and the list's length
     * @post The entry is inserted at desired position
     * @param position:  1<= position <= length
     * @param newEntry: A new entry to put in the list
     * @throw std::runtime_error if the position is invalid.
     **/

     void remove(int position);
     /**
     * @pre The position is between 1 and the list's length
     * @post The entry at the given position is delted
     * @param position:  1<= position <= length
     * @throw std::runtime_error if the position is invalid.
     **/

     void clear();
     /**
     * @pre NONE
     * @post Deleting all nodes in list
     **/

     int getEntry(int position) const;
     /**
     * @pre The position is between 1 and the list's length
     * @post The entry at the given position is returned
     * @param position:  1<= position <= length
     **/

     void replace(int position, int newEntry);
     /**
     * @pre The position is between 1 and the list's length
     * @post The entry at the given position is replaced with the new entry
     * @param position:  1<= position <= length
     * @param newEntry: A new entry to put in the list
     * @throw std::runtime_error if the position is invalid.
     **/
     
};
#endif
