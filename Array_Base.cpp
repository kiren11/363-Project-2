// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array_Base.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout


//default constructor
template <typename T>
Array_Base<T>::Array_Base(void)
: max_size_(10), cur_size_(10)
{
    this->data_  = new T[10];
}

//default constructor of size length
template <typename T>
Array_Base<T>::Array_Base(size_t length)
: max_size_(length), cur_size_(length)
{
   this->data_ = new T[length];
}

//constructor - array of size length, fill with char
template <typename T>
Array_Base<T>::Array_Base(size_t length, T fill)
: max_size_(length), cur_size_(length)
{
    this->data_ = new T[length];
    
    for(int i = 0; i < length; i++) 
    {   
        this->data_[i] = fill;
    }
}

//copy constructor
template <typename T>
Array_Base<T>::Array_Base(const Array_Base & array)
:max_size_(max_size_), cur_size_(cur_size_)
{
    this->data_ = new T[this->cur_size_];

    for(int i = 0; i < this->max_size_; i++)
    {
      this->data_[i] = array[i];
    }
}

//destructor
template <typename T>
Array_Base<T>::~Array_Base(void)
{
    delete [] data_;
}

