#include <iostream>
#include "../header/header.h"
 using namespace std;



/**
 *This function calculates **duty cycle** for converter switches.
 * @param[in] error
 *@param[out] Dcycle
 *@returns variable "Dcycle".
*/

float myclass::dutycycle(float error){

    /// duty cycle is calculated and used for sequence().

    float Dcycle= error/maxerror;

    if(Dcycle>1){
        cout<<"\n WARNING:Duty cycle limit exceeded\n";
    }else{
     cout<< "\n duty cycle: "<<Dcycle<<"\n";
    }
return Dcycle;
}
