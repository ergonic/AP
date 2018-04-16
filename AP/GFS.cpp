#include "GFS.h"
#include <malloc.h>


GFSALL* gfs_init() {

	GFSALL* gfs = (GFSALL*)malloc(sizeof(GFSALL));

	//GFS2
	gfs->gfs2 = (Function2*)malloc(sizeof(Function2) * GFS2NUM);
	gfs->gfs2[0].f = &gfs2_plus;
	gfs->gfs2[0].name = "Plus";
	gfs->gfs2[0].paramNum = 2;

	return gfs;
}

void gfs_free(GFSALL* gfs) {
	
	//free gfs2 members
	free(gfs->gfs2);

	//free gfs
	free(gfs);
}