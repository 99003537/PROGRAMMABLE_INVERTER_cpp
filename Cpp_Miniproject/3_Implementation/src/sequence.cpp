#include <iostream>
 using namespace std;

 #include "../header/header.h"


/**
 *This function generates sequence of switching pulses which further generate output wavwform.
 * @param[in] m
 *@returns  nothing
 */


void myclass::sequence(float m){

/// s1, s2, s3, s4 represent the bridge converter

    int s1, s2, s3, s4;
    float n=1.0-m;

    if (m>1.0){

     cout<<"\n WARNING:converter limit exceeded; switchs may overlap\n";

    }else{

    //half cycle
    s1=1;
    s2=1;
    delay(m*100);

    cout<<"     half cycle sequence: "<<s1<<" "<<s2<<"\n";

    s1=0;
    s2=0;
    delay(n*100);

    cout<<"     half cycle sequence: "<<s1<<" "<<s2<<"\n";


    //half cylce
    s3=1;
    s4=1;
    delay(m*100);

    cout<<"     half cycle sequence: "<<s3<<" "<<s4<<"\n";

    s3=0;
    s4=0;
    delay(n*100);

    cout<<"     half cycle sequence: "<<s3<<" "<<s4<<"\n";

    }

}
