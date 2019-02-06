// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Queue.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

//default constructor
template <typename T>
Queue<T>::Queue (void)
{
    this->data_  = new T[10];
}

//copy constructor
template <typename T>
Queue<T>::Queue (const Queue & s)
{
    this->data_  = new T[10];

    for(int i = 0; i < this->max_size_; i++)
    {
      this->data_[i] = s[i];
    }
}

//destructor
template <typename T>
Queue<T>::~Queue (void)
{   
    //destructor not deleting when object goes out of scope?
    delete [] this->data_;
}

//enqueue - add elements to the queue
template <typename T>
void Queue<T>::enqueue (T element)
{   
    //add element to end_ of queue
    this->end_ = (this->end_ + 1) % this->max_size_;
    this->data_[this->end_] = element;

    //update current size
    this->cur_size_++;
}

//dequeue - take elements off of queue
template <typename T>
void Queue<T>::dequeue (void)
{   
    if(!is_empty()) 
    {
        //remove element from front of queue 
        
        this->cur_size_--;
    } else {
        
    }
}

//clear all elements from queue
template <typename T>
void Queue<T>::clear (void)
{   
    //if there are elements in queue, keep dequeueing
    while(!is_empty())
    {
        this->data_.dequeue();
    }
}
