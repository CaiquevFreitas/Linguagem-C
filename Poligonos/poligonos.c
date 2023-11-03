#include "poligonos.h"

float calc_Per_triangulo(float a, float b, float c){

	return a + b + c;
}

float calc_Per_retangulo(float b, float a){

	return 2*b + 2*a;
}

float calc_Per_circulo(float r){

	return 2 * 3.14159 * r;
}

float calc_Area_triangulo(float b, float a){

	return (b*a)/2;
}

float calc_Area_retangulo(float b, float a){

	return b*a;
}

float calc_Area_circulo(float r){

	return 3.14159*r*r;
}
