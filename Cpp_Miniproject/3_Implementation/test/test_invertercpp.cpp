#include <iostream>
using namespace std;
#include "../header/header.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"



//testing file

///@note Unity framework requires this function (works as a constructor for a test)
void setUp(){}


///@note Unity framework requires this function(works as a destructor for a test)
void tearDown(){}



/**
*this function checks the value calculted by Dutycycle() function
* @param [in/out] No parameters
*/

void test_duycycle(void){                  //test function1


    //dummmy object;

    myclass dobj(150);
    myclass dobj2(200);


    cout<<"\ntest_Dutycycle executed" <<"\n\n";

    TEST_ASSERT_EQUAL(50, 100*(dobj.dutycycle(50)));

    TEST_ASSERT_EQUAL(100, 100*(dobj2.dutycycle(100)));

}




/**
* this function checks the 'iload' set by by function set_iload.
* @param [in/out] No parameters
*/

void test_set_iload(void){      //test function 2


    //dummy object

    myclass obj1(100);
    myclass obj2(150);

   cout<<"\ntest_set_iload executed\n\n";

    TEST_ASSERT_EQUAL(100, obj1.set_iload(100));

    TEST_ASSERT_EQUAL(150, obj2.set_iload(150));

}



/**
* this fuction runs test for the project.
* @param nothing
* @returns UNITY_END()
*/
int test_main(void){


//starting unity  process

    UNITY_BEGIN();

// testing the function

    RUN_TEST(test_duycycle);

    RUN_TEST(test_set_iload);


//end of tetsing

    return UNITY_END();


    }
