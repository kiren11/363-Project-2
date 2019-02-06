// -*- C++ -*-
// $Id: Stack.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

#include <stdexcept>
#include <iostream> //cin and cout

//size
template <typename T>
inline
size_t Stack <T>::size (void) const
{
    return this->cur_size_;
}

//top
template <typename T>
inline
T Stack <T>::top (void) const
{
    return this->data_[top];

    //exception handling - if stack is empty - no top exists
    try {
        if(is_empty()) {
            throw Stack<T>::empty_exception("Stack is empty, no top");
        }
    } catch (const std::exception&msg) {
        std::cout<<"Stack is empty, no top"<<std::endl;
    }
}

// is_empty
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
    return top == -1;
}
