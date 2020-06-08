#include <iostream>
#include <string>

#include "Function.h"

using namespace std;

int main()
{
    cout<<"  Enter argument for function sin() and cos() : ";
    double argument;
    cin>>argument; cout<<endl;
    Sin sinus(argument);
    Cos cosinus(argument);
    Function& ran = sinus;
    double n = ran.result();
    cout<<" Definition sin() : "<<n<<endl;
    Function& ren = cosinus;
    double m = ren.result();
    cout<<" Definition cos() : "<<m;
    return 0;
}
