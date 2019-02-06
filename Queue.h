// -*- C++ -*-

//==============================================================================
/**
 * @file       Queue.h
 *
 * $Id: Queue.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _Queue_H_
#define _Queue_H_

#include <exception>
#include <iostream>

/**
 * @class Queue
 *
 * Basic Queue for arbitrary elements.
 */
template <typename T>
class Queue
{
public:
  /// Type definition of the type.
  typedef T type;

  /**
   * @class empty_exception
   *
   * Exception thrown to indicate the Queue is empty.
   */
  class empty_exception : public std::exception
  {
  public:
    /// Default constructor.
    empty_exception (void)
      : std::logic_error () { 

        //if queue is empty throw error
        if(is_empty())
        {
          std::cout<<"Cannot pop empty stack"<<std::endl;
        }
      }

    /**
     * Initializing constructor.
     *
     * @param[in]      msg         Error message.
     */
    empty_exception (const char * msg)
      : std::logic_error (msg) { 
          std::cout<<msg<<std::endl;
      }
  };

  /// Default constructor.
  Queue (void);

  /// Copy constructor.
  Queue (const Queue & s);

  /// Destructor.
  ~Queue (void);

  /**
   * Push a new \a element onto the Queue. The element is inserted
   * before all the other elements in the list.
   *
   * @param[in]      element       Element to add to the list
   */
  void enqueue (T element);

  /**
   * Remove the first element from the queue.
   *
   * @exception      empty_exception    The Queue is empty.
   */
  void dequeue (void);

   /**
   * Test if the Queue is empty
   *
   * @retval         true          The Queue is empty
   * @retval         false         The Queue is not empty
   */
  bool is_empty (void) const;

  /**
   * Retrieve the current size of the Queue.
   *
   * @return          The current size
   */
  size_t size (void) const;

  /**
   * Retrieve the maximum size of the Queue.
   *
   * @return          The maximum size
   */
  size_t max_size (void) const;

  /// Remove all elements from the Queue.
  void clear (void);

private:
  // COMMENT You are to use the Array class from assignnment 1, and
  // not C arrays. Unfortunately, I cannot review your assignment since
  // you did not follow the assignment requirements.
  // RESPONSE - instead of making a new pointer on accident, I made an array pointer

  Array<T> data_;

  //points to front of queue
  int start_;

  //points to end of queue
  int end_;

  // Current size of the array.
  size_t cur_size_;

  /// Maximum size of the array.
  size_t max_size_;

};

#include "Queue.inl"
#include "Queue.cpp"

#endif   // !defined _QUEUE_H_
