#include "GFS2.h"
#include <math.h>
#include <limits.h>

double gfs2_plus(double x, double y) {
	return x + y;
}
double gfs2_minus(double x, double y) {
	return x - y;
}
double gfs2_times(double x, double y) {
	return x * y;
}
double gfs2_divide(double x, double y) {
	if (y == 0) {
		return LONG_MAX;
	}
	return x / y;
}
double gfs2_modulo(double x, double y) {
	return fmod(x, y);
}
double gfs2_power(double x, double y) {
	return pow(x, y);
}