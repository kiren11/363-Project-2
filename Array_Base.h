   // -*- C++ -*-
// $Id: Array_Base.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ARRAY_BASE_H_
#define _ARRAY_BASE_H_

#include <cstring>          // for size_t definition

/**
 * @class Array_BASE_H_
 *
 * Basic implementation of a standard array class for chars.
 */
template <typename T>
class Array_Base
{

public:
  /// Type definition of the element type.
  typedef T type;

  //Default constructor
  Array_Base (void);

  /**
   * Initializing constructor.
   *
   * @param[in]      length        Initial size
   */
  Array_Base (size_t length);

  /**
   * Initializing constructor.
   *
   * @param[in]      length        Initial size
   * @param[in]      fill          Initial value for each element
   */
  Array_Base (size_t length, T fill);

  /**
   * Copy constructor
   *
   * @param[in]     arrary         The source array.
   */
  Array_Base (const Array_Base & array);

  //Destructor
  ~Array_Base (void);


private:

  /// Current size of the array.
  size_t cur_size_;

  /// Maximum size of the array.
  size_t max_size_;


protected:
  // Pointer to the actual data.
  T * data_;


};

#include "Array_Base.cpp"

#endif // !defined _ARRAY_BASE_H_