#pragma once

typedef struct t_function0
{
	char* name;
	int paramNum;
	double(*f)();
} Function0;

#define GFS0NUM 4

double gfs0_one();
double gfs0_minusOne();
double gfs0_euler();
double gfs0_pi();