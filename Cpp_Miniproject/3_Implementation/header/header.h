#include <iostream>
using namespace std;

///header files for unit testing.
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

///header file of class.
#include "myclass.h"
#define maxerror 100


#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

///declaration of myclass member functions.
void test_duycycle(void);
void test_set_iload(void);
int test_main(void);


#endif // HEADER_H_INCLUDED
