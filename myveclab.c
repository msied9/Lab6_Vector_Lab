/*****************************
* Filename: myveclab.c
* Description:
* Author: Mia Siedentopf
* Date: 10/1/26
**************************** */
//This is to see a change with lab6
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "myvect.h"
#include "myvectlab.h"
#include "myvectarray.h"
#include "myvectop.h"

void veclab(void)
{
    char isstring[50];

    char *token1;
    char *token2;
    char *token3;
    char *token4;
    char *token5;

    myvect v1, v2, v3;
    
    while(1)
    {
        printf("myveclab> ");

        fgets(isstring,49,stdin);
        token1 = strtok(isstring," \n");

        if(!token1)
        {
            continue;
        }

        if(!strcmp(token1, "quit")|| (!strcmp(token1, "exit")))
        {
            printf("ending program run \n");
            break;
        }
        else if (!strcmp(token1, "clear"))
        {
            printf("Clearing Array\n");
            Cleararray();
        }
        else if (!strcmp(token1,"list"))
        {
            printarray();
        }
        else
        {
            
        }
    }
}