#pragma once
#include "GFS2.h"
#include "GFS1.h"
#include "GFS0.h"

typedef struct t_gfsall
{
	Function0* gfs0;
	Function1* gfs1;
	Function2* gfs2;
} GFSALL;

/**
	Include and inicialize all required functions into distinticted fields
*/
GFSALL* gfs_init();

/**
	Free all fields
*/
void gfs_free(GFSALL* gfs);

/*
	Print function
	todo return char* and indexing
*/
void gfs_print();