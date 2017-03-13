/******************************************************************************
*     michaelShell C file for COMPX000X Project X                             *
*                                                                             *
*                    michaelShell                                             *
*                                                                             *
* Name: YiFei Wang                                                            *
*                                                                             *
* Student number: 715944                                                      *
*                                                                             *
* Brief description: This program is to write a shell for fun                 *
*                                                                             *
* Coding Log:                                                                 *
* Mon 13 Mar 2017 19:01:58 AEDT  Finishing writing the main funciton
******************************************************************************/

/*Version = 1.0*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
#include <sys/time.h>

#define TIMING 0

/*****************************************************************************/

int
main(int argc, char **argv) {
    #if TIMING
    struct timeval  tv1, tv2;
    gettimeofday(&tv1, NULL);
    #endif

    msh_loop();

    #if TIMING
    gettimeofday(&tv2, NULL);
    printf ("Total time = %f seconds\n",
                 (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
                          (double) (tv2.tv_sec - tv1.tv_sec));
    #endif
    return 0;
}

