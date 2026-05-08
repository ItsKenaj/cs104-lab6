#include "mathfuncs.h"
#include <iostream>


int multiply(int a, int b) { return a * b; }
double divide(double a, double b) { 
    if (b == 0) { 
       std::cout << "Error: division by zero\n";
       return 0;
    }
    return a / b;
}
