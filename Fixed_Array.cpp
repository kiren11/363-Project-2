// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//default constructor
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
{
    Array_Base<T>();
}

//copy constructor
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
{
    Array_Base<T>(fixedArr);
}

//initializing constructor
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
{
	Array_Base<T>(baseLength);
}

//initializing constructor with fill
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
{
    Array_Base<T>(N,fill);
}

//destructor
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
    delete [] this->data_;
}


