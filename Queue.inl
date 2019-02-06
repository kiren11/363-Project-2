// -*- C++ -*-
// $Id: Queue.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

#include <stdexcept>
#include <iostream> //cin and cout

//size
template <typename T>
inline
size_t Queue <T>::size (void) const
{
    return this->cur_size_;
}

// is_empty
template <typename T>
inline
bool Queue <T>::is_empty (void) const
{
    //return if the size of queue is 0
    return (size() == 0);
}
