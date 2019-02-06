#include "Array.h"
#include "Fixed_Array.h"
#include "Queue.h"
#include "Stack.h"

#include <iostream>

int main (int argc, char * argv [])
{

  std::cout<<"start of testing..."<<std::endl;

  //making new objects on the heap

  // Array<int> * arr = new Array();
  // Array<int> * arr = new Array(10);
  Array<int> * arr = new Array<int>(5, 'a');


  Fixed_Array<int, 5> * fixedarr = new Fixed_Array<int, 5>();


  Stack<int> * stack = new Stack<int>();


  Queue<int> * queue = new Queue<int>();


  /* testing starts here! */
  
  //set array values
  arr->set(1, 'b');
  arr->set(2, 'c');
  arr->set(3, 'd');
  arr->set(4, 'e');

  //get a value - should return c
  arr->get(2);

  //take off of the heap
  delete arr;
  delete fixedarr;
  delete stack;
  delete queue;


  // std::cout<<"end of testing..."<<std::endl;

  // return 0;
}