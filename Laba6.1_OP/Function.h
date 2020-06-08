#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#pragma once

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Function{
public:
       //prototypes
       Function();
       virtual double factorial(int number);
       virtual double result(){return argument;};
       ~Function();
       //varieties
       double argument;
       int rang = 6;

};

class Sin: public Function{
public:
       Sin(double argument);
       double result();
};

class Cos: public Function{
public:
       Cos(double argument);
       double result();
};

#endif // FUNCTION_H_INCLUDED
