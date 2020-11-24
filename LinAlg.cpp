#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

//int main() {
    double l = 0.944;
    double a = 50;
    double g = 9.8;
    double t1, t2, t3;
    a = a * M_PI / 180;
    t1 = 2*M_PI*sqrt(l/g);
    t2 = t1*sqrt((1+(1/16)*a*a));
    t3 = t1*sqrt((1+(1/4)*pow(sin(a/2),2)+(9/64)*pow(sin(a/2),4)));

    cout<<t1<<" "<<t2<<" "<<t3;
    return 0;
}