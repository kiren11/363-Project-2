   // -*- C++ -*-
// $Id: Stack.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _STACK_H_
#define _STACK_H_

#include <exception> //exception handling

/**
 * @class Stack
 *
 * Basic stack for arbitrary elements.
 */
template <typename T>
class Stack
{
public:
  /// Type definition of the type.
  typedef T type;

  /**
   * @class empty_exception
   *
   * Exception thrown to indicate the stack is empty.
   */
  class empty_exception : public std::exception
  {
  public:
    /// Default constructor.
    empty_exception (void) 
    : std::logic_error () 
    {}

    /**
     * Initializing constructor.
     *
     * @param[in]      msg         Error message.
     */
    empty_exception (const char * msg) 
    : std::logic_error(msg)
    {}
  };

  /// Default constructor.
  Stack (void);

  /// Copy constructor.
  Stack (const Stack & s);

  /// Destructor.
  ~Stack (void);

  /**
   * Assignment operator
   *
   * @param[in]      rhs           Right-hand side of operator
   * @return         Reference to self
   */
  const Stack & operator = (const Stack & rhs);

  /**
   * Push a new \a element onto the stack. The element is inserted
   * before all the other elements in the list.
   *
   * @param[in]      element       Element to add to the list
   */
  void push (T element);

  /**
   * Remove the top-most element from the stack.
   *
   * @exception      empty_exception    The stack is empty.
   */
  void pop (void);

  /**
   * Get the top-most element on the stack. If there are no element 
   * on the stack, then the stack_is_empty exception is thrown.
   *
   * @return         Element on top of the stack.
   * @exception      empty_exception    The stack is empty
   */
  T top (void) const;

  /**
   * Test if the stack is empty
   *
   * @retval         true          The stack is empty
   * @retval         false         The stack is not empty
   */
  bool is_empty (void) const;

  /**
   * Number of element on the stack.
   *
   * @return         Size of the stack.
   */
  size_t size (void) const;

  /// Remove all elements from the stack.
  void clear (void);

private:
  // COMMENT You are to use the Array class from assignnment 1, and
  // not C arrays. Unfortunately, I cannot review your assignment since
  // you did not follow the assignment requirements.
  // RESPONSE - instead of making a new pointer on accident, I made an array pointer
  
  Array<T> data_;

  T max_size_;
  
  T cur_size_;
};

// include the inline files
#include "Stack.inl"

// include the source file since template class
#include "Stack.cpp"

#endif  // !defined _STACK_H_
