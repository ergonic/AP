#pragma once

typedef struct t_function1
{
	char* name;
	int paramNum;
	double(*f)(double);
} Function1;

#define GFS1NUM 12

double gfs1_abs(double x);
double gfs1_sin(double x);
double gfs1_cos(double x);
double gfs1_tan(double x);
double gfs1_pow3(double x);
double gfs1_pow2(double x);
double gfs1_exp(double x);
double gfs1_ln(double x);
double gfs1_log(double x);
double gfs1_sigmoid(double x);
double gfs1_sqrt(double x);
double gfs1_prime(double x);