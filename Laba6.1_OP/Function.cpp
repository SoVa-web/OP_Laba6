#include "Function.h"

Function::Function(){
}

double Function::factorial(int number) {
    double result = 1;
    for(int i =1; i <= number; i++) {
        result *= i;
    }
    return result;
}


Function::~Function()
{

}

Sin::Sin(double argument){
this->argument = argument;
}

Cos::Cos(double argument){
this->argument = argument;
}


double Sin::result(){
double sin = 0;
for(int n = 0; n < rang; n++){
       sin += ((pow(-1, n)*pow(argument,2*n+1))/factorial(2*n+1));
}
return sin;
}

double Cos::result(){
double cos = 1;
for(int n =1; n <= rang; n++){
       cos += ((pow(-1, n)*pow(argument, 2*n))/factorial(2*n));
}
return cos;
}
