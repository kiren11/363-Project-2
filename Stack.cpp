// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Stack.h"
#include <stdexcept> //exceptions
#include <iostream> //cout, cin

//default constructor
template <typename T>
Stack <T>::Stack (void)
: max_size_(10), cur_size_(10)
{   
    //create new array 
    this->data_ = new T[10];
}

//copy constructor
template <typename T>
Stack <T>::Stack (const Stack & stack)
{
    this->end = stack.end;
    this->max_size_ = stack.max_size_;
    this->cur_size_ = stack.cur_size_;

    this->data_ = new T[stack.cur_size_];

    for (int i = 0; i < max_size_; i++)
    {
      this->data_[i] = stack[i];
    }

   this->data_.top = stack.top;
}

//destructor
template <typename T>
Stack <T>::~Stack (void)
{   
    //destructor doesnt delete when it goes out of scope?
    delete [] this->data_;
}   

//assignment operator
template <typename T>
const Stack<T> & Stack<T>:: operator = (const Stack & rhs) {
    
    //self assignment check
    if (this == &rhs)
    {
        return *this;
    }

    if(this->max_size_ < rhs.size())
    {
        delete [] this->data_;

        this->data_ = new T[rhs.size()];
    }

    this->cur_size_ = rhs.size();
    this->max_size_ = rhs.size();

    for(size_t i = 0; (i < this->cur_size_); i++)
    {
       this->data_[i] = rhs.data_[i];
    }
}

//push value to stack
template <typename T>
void Stack<T>::push (T element)
{   
    //only push if there is space
    if (top >= (this->max_size_ - 1))
    {
        return false;
    } else {    
        
        //element is pushed
        this->data_[++this->top] = element;
        return true;
    }
    
    //need to resize and make bigger
    this->data_.resize(cur_size_ + 1);
}

//pop value off of stack
template <typename T>
void Stack<T>::pop (void)
{   
    //check if stack is empty - otherwise throw exception
    try {
        if(is_empty()) {
            throw Stack<T>::empty_exception("Stack is empty, no top");
        }
    } catch (const std::exception& msg) {
        std::cout<<"Stack is empty, no top"<<std::endl;
    }

    //otherwise pop
    top--;
}

//clear items from array
template <typename T>
void Stack<T>::clear (void)
{   
    //pop until stack is empty
    while(top != -1)
    {
        this->data_.pop();
    }
}
