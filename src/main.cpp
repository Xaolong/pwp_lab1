#include "LaborkaConfig.h" 
#ifdef USE_TRIGONOMETRY_DEGREE
#include "Trygonometria.h"
#else
#include <math.h>
#endif
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

int main(){
#ifdef USE_TRIGONOMETRY_DEGREE
	double result = cos_degree(45.0);
#else
	double result = cos(M_PI/4.0);
#endif
	std::cout << result <<std::endl;
	std::cin.get();
	return 0;
}