#include <stdio.h>
#include <math.h>

#include <vector>

//windows only
#include <Windows.h>

//custom inlcude
//#include "GFS.h"


typedef struct t_function {
	char* name;
	std::vector<Function>(*f)(std::vector<Function>);
} Function;

std::vector<Function> Sum(std::vector<Function> in) {
	return { in[0] }/* + in[1]*/;
}
 
int main() {

	Function sum;
	sum.name = "Total";
	sum.f = &Sum;

	/*
	GFSALL* gfs =  gfs_init();
	
	double ret = 0;
	ret = gfs->gfs2[0].f(2, 4);


	gfs_free(gfs);
	*/
	system("pause");

	return 0;
}