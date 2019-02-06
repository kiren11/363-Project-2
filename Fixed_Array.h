// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#ifndef _FIXED_ARRAY_H_
#define _FIXED_ARRAY_H_

#include "Array.h"

/**
 * @class Fixed_Array
 *
 * Implementation of a fixed size array, i.e., one that is not
 * resizeable. It is derived from Array so it can inherit of 
 * the Array class's methods.
 * 
 * Fixed Array inherits from Array, which inherits from Base Array
 */
template <typename T, size_t N>
class Fixed_Array : public Array <T>
{
public:
  /// Default constructor.
  Fixed_Array (void);

	/**
	 * Copy constructor.
	 *
	 * @param[in]      arr        Source array
	 */
  Fixed_Array (const Fixed_Array <T, N> & arr);
	
  // COMMENT This method should be removed since it was part of the original
  // bad design.
  // RESPONSE: constructor with size "M" has been removed.

  /**
   * Initializing constructor. Fills the contents of the 
   * array with the specified \a fill value.
   *
   * @param[in]      fill       The file value.
   */
  Fixed_Array (T fill);

  /// Destructor.
  ~Fixed_Array (void);

};

// include the inline files
#include "Fixed_Array.inl"

// include the source file since template class
#include "Fixed_Array.cpp"

#endif  // !defined _FIXED_ARRAY_H_
