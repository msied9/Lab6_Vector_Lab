/*****************************
* Filename: myvectop.h
* Description: vector math
* Author: Mia Siedentopf
* Date: 10/1/26
**************************** */
#ifndef MYVECTOP_H
#define MYVECTOP_H

#include "myvect.h"

myvect add(myvect a, myvect b);
myvect subtract(myvect a, myvect b);
myvect scalar_mult(myvect a, double s);

#endif