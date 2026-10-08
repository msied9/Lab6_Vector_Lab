/*****************************
* Filename: myvectarray.h
* Description: storage for up to 10 vectors
* Author: Mia Siedentopf
* Date: 10/1/26
**************************** */
#ifndef MYVECTARRAY_H
#define MYVECTARRAY_H

#include "myvect.h"

#define MAX_VECTS 10

int addvect(myvect v);                  
int findvect(char *name, myvect *out); 
void Cleararray(void);
void printarray(void);

#endif