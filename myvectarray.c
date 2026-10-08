/*****************************
* Filename: myvectarray.c
* Description: the storage array
* Author: Mia Siedentopf
* Date: 10/1/26
**************************** */
#include <stdio.h>
#include <string.h>
#include "myvectarray.h"

static myvect storage[MAX_VECTS];
static int used[MAX_VECTS];   

int addvect(myvect v)
{

    return 0;
}

int findvect(char *name, myvect *out)
{

    return 0;
}

void Cleararray(void)
{
    for (int i = 0; i < MAX_VECTS; i++)
    {
        used[i] = 0;
    }
}

void printarray(void)
{
    for (int i = 0; i < MAX_VECTS; i++)
    {
        if (used[i])
        {
            printf("%s = %.2f %.2f %.2f\n", storage[i].name,
                   storage[i].x, storage[i].y, storage[i].z);
        }
    }
}
