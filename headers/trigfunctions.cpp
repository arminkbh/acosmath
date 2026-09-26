#include "acosmath.h"

/*
For normal and hyperbolic trigonometric functions, we will use taylor series/maclaurin polynomial
Let's go :)

OBS: All input values are in RADIANS!
*/
using namespace acosmath;

double trigonometry::sin(double x) {
	double X = x - 2 * PI * round(x/(2 * PI));
	return (X - X*X*X / 6.0 + X*X*X*X*X / 120.0 - X*X*X*X*X*X*X / 5040.0);
}

double trigonometry::cos(double x) {
	double X = x - 2 * PI * round(x / (2 * PI));
	return (1 - X * X / 2.0 + X * X * X * X / 120.0 - X * X * X * X * X * X / 720.0);
}

double trigonometry::tan(double x) {
	return (trigonometry::sin(x) / trigonometry::cos(x)); 
	//tan(x) = sin(x)/cos(x)
}

/*
secx = 1/cosx
cotx = 1/tanx = cosx/sinx
cscx = 1/sinx
*/
double trigonometry::csc(double x) { return 1 / trigonometry::sin(x); };
double trigonometry::sec(double x) { return 1 / trigonometry::cos(x); };
double trigonometry::cot(double x) { return trigonometry::cos(x) / trigonometry::sin(x); };

//Inverse functions

double trigonometry::arcsin(double x) {
	double X = x - 2 * PI * round(x / (2 * PI));
	return (X + X*X*X / 6 + 3 * X*X*X*X*X / 40 + 5 * X*X*X*X*X*X*X / 112);
}
double trigonometry::arccos(double x) { return PI / 2 - trigonometry::arcsin(x); }
double trigonometry::arctan(double x) {
	//continue later!
}