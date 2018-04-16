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