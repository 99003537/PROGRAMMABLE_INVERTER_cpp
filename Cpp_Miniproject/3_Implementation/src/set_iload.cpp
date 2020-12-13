#include <iostream>
 using namespace std;
 #include "../header/header.h"

/**
 *This function sets load current at required value(manually).
 * @param[in] i
 * @param[out] iload
 * @returns nothing
*/


int myclass::set_iload(int i){

/// @note This function is used to test system manually by setting iload parameter manually.

    iload=i;
    //cout<<"iload is: "<< iload<<"\n";


return i;
}
