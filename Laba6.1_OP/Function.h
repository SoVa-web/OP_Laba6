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

       ~Function();
       //varieties
       double argument;
       int rang = 6;

};

class Sin: public Function{

};

class Cos: public Function{

};

#endif // FUNCTION_H_INCLUDED
