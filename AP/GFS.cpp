#include "GFS.h"
#include <malloc.h>


GFSALL* gfs_init() {

	GFSALL* gfs = (GFSALL*)malloc(sizeof(GFSALL));

	//GFS2
	gfs->gfs2 = (Function2*)malloc(sizeof(Function2) * GFS2NUM);
	gfs->gfs2[0].f = &gfs2_plus;
	gfs->gfs2[0].name = "Plus";
	gfs->gfs2[0].paramNum = 2;

	gfs->gfs2[1].f = &gfs2_minus;
	gfs->gfs2[1].name = "Minus";
	gfs->gfs2[1].paramNum = 2;

	gfs->gfs2[2].f = &gfs2_times;
	gfs->gfs2[2].name = "Times";
	gfs->gfs2[2].paramNum = 2;

	gfs->gfs2[3].f = &gfs2_divide;
	gfs->gfs2[3].name = "Divide";
	gfs->gfs2[3].paramNum = 2;

	gfs->gfs2[4].f = &gfs2_modulo;
	gfs->gfs2[4].name = "Mod";
	gfs->gfs2[4].paramNum = 2;

	gfs->gfs2[5].f = &gfs2_power;
	gfs->gfs2[5].name = "Power";
	gfs->gfs2[5].paramNum = 2;

	//GFS1
	gfs->gfs1 = (Function1*)malloc(sizeof(Function1) * GFS1NUM);
	gfs->gfs1[0].f = &gfs1_abs;
	gfs->gfs1[0].name = "Abs";
	gfs->gfs1[0].paramNum = 1;

	gfs->gfs1[1].f = &gfs1_sin;
	gfs->gfs1[1].name = "Sin";
	gfs->gfs1[1].paramNum = 1;

	gfs->gfs1[2].f = &gfs1_cos;
	gfs->gfs1[2].name = "Cos";
	gfs->gfs1[2].paramNum = 1;

	gfs->gfs1[3].f = &gfs1_tan;
	gfs->gfs1[3].name = "Tan";
	gfs->gfs1[3].paramNum = 1;

	gfs->gfs1[4].f = &gfs1_pow3;
	gfs->gfs1[4].name = "Pow3";
	gfs->gfs1[4].paramNum = 1;

	gfs->gfs1[5].f = &gfs1_pow2;
	gfs->gfs1[5].name = "Pow2";
	gfs->gfs1[5].paramNum = 1;

	gfs->gfs1[6].f = &gfs1_exp;
	gfs->gfs1[6].name = "Exp";
	gfs->gfs1[6].paramNum = 1;

	gfs->gfs1[7].f = &gfs1_ln;
	gfs->gfs1[7].name = "Ln";
	gfs->gfs1[7].paramNum = 1;

	gfs->gfs1[8].f = &gfs1_log;
	gfs->gfs1[8].name = "Log";
	gfs->gfs1[8].paramNum = 1;

	gfs->gfs1[9].f = &gfs1_sigmoid;
	gfs->gfs1[9].name = "Sigmoid";
	gfs->gfs1[9].paramNum = 1;

	gfs->gfs1[10].f = &gfs1_sqrt;
	gfs->gfs1[10].name = "Sqrt";
	gfs->gfs1[10].paramNum = 1;

	gfs->gfs1[11].f = &gfs1_prime;
	gfs->gfs1[11].name = "Prime";
	gfs->gfs1[11].paramNum = 1;

	//GFS0
	gfs->gfs0 = (Function0*)malloc(sizeof(Function0) * GFS0NUM);
	gfs->gfs0[0].f = &gfs0_euler;
	gfs->gfs0[0].name = "Euler";
	gfs->gfs0[0].paramNum = 0;

	gfs->gfs0[1].f = &gfs0_minusOne;
	gfs->gfs0[1].name = "MinusOne";
	gfs->gfs0[1].paramNum = 0;

	gfs->gfs0[2].f = &gfs0_one;
	gfs->gfs0[2].name = "One";
	gfs->gfs0[2].paramNum = 0;

	gfs->gfs0[3].f = &gfs0_pi;
	gfs->gfs0[3].name = "PI";
	gfs->gfs0[3].paramNum = 0;

	return gfs;
}

void gfs_free(GFSALL* gfs) {
	
	//free gfs members
	free(gfs->gfs2);
	free(gfs->gfs1);
	free(gfs->gfs0);

	//free gfs
	free(gfs);
}