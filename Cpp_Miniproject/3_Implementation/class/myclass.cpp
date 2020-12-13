#include "myclass.h"
#include <iostream>
using namespace std;
///myclass destructor.
myclass::~myclass(){}

///myclass default constructor.
myclass::myclass()
{

    //cout<<"inside ctor"<<endl;

}

/**
*This is copy constructor myclass(int i). this sets iload value passed by user.
*@param [in] int i (local)
*@param [out] nothing
*/
myclass::myclass(int i){

cout<< "\n LOCATION: inside copy constructor\n"<<endl;

  iload=i;

  cout<<"\n iload is: "<<iload<<endl;

}






