#include <iostream>
 using namespace std;
#include "../header/header.h"

/**
 *This function calculates the *on-time* and *off-time* for halfcycle.
 *@param[in] fraction
 *@returns  nothing
 */


void myclass::delay( float fraction){

     int limit =fraction;

/// this for loop generates the delay i.e. ontime and offtime delay required to generate sequence

    for (int i=0; i<limit ;i++){}
    if(limit>100){
        cout<<"\n WARNING:delay limit exceeded\n";
    }else{
    cout<<"\n       delay generated of: "<<limit<<"\n";
    }
}
