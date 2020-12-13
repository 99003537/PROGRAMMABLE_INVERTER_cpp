#include <iostream>
#include "header/header.h"
#include "myclass.h"

using namespace std;


int main(){


///Object of myclass is created; it represents instantaneous condition in converter's operation.

    myclass obj1(150);
    obj1.error_DT= obj1.error_cal();            // error calculation using current summation

///This statement checks ,if error calculated is in the limit.

    if(obj1.error_DT<100.0 && obj1.error_DT!=0){

        cout<<"\nerror is: "<<obj1.error_DT<<"\n";
        cout<<"\niconv: "<<obj1.error_DT<<"\n";

    }else if(obj1.error_DT==0){

       cout<<"\n WARNING:converter current is: 0A  \nbattery is supplying total current, minimum error "<<"\n";

       }
       else{

         cout<<"\n WARNING:error limit exceeded, max limit is iload: 200"<<"\n";

        }

      float multiplier= obj1.dutycycle(obj1.error_DT); // fraction multiplier for delay

       obj1.sequence(multiplier);//sequence generator

/// this function checks the test cases for declared functions.

    test_main();                //test_main function calling


return 0;
}
