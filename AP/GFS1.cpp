#include "GFS1.h"
#include <math.h>

double gfs1_abs(double x) {
	return fabs(x);
}
double gfs1_sin(double x) {
	return sin(x);
}
double gfs1_cos(double x) {
	return cos(x);
}
double gfs1_tan(double x) {
	return tan(x);
}
double gfs1_pow3(double x) {
	return pow(x, 3);
}
double gfs1_pow2(double x) {
	return pow(x, 2);
}
double gfs1_exp(double x) {
	return exp(x);
}
double gfs1_ln(double x) {
	return log(x);
}
double gfs1_log(double x) {
	return log10(x);
}
double gfs1_sigmoid(double x) {
	return 1.0 / (double)(1.0 + exp((-1.0*x)));
}
double gfs1_sqrt(double x) {
	return sqrt(x);
}
double gfs1_prime(double x) {
	int size = 24;
	double prime[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	if (x < 0) {
		return prime[0];
	}
	if (x > 24) {
		return prime[size];
	}
	return prime[(int)x];
}