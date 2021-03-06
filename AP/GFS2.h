#pragma once

typedef struct t_function2
{
	char* name;
	int paramNum;
	double(*f)(double, double);
} Function2;

#define GFS2NUM 6

double gfs2_plus(double x, double y);
double gfs2_minus(double x, double y);
double gfs2_times(double x, double y);
double gfs2_divide(double x, double y);
double gfs2_modulo(double x, double y);
double gfs2_power(double x, double y);