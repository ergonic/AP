#include <stdio.h>
#include <math.h>

//windows only
#include <Windows.h>

//custom inlcude
#include "GFS.h"

 
int main() {

	GFSALL* gfs =  gfs_init();
	
	double ret = 0;
	ret = gfs->gfs2[0].f(2, 4);

	gfs_free(gfs);
	return 0;
}