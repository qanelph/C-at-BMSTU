#ifndef _EXECUTION_H_
#define _EXECUTION_H_

#include <stdio.h>

void save(FILE *out, const char *source);
int execution(FILE *in, const char **argv);

#endif
