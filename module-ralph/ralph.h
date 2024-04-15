//
// Created by MAGISTER on 12/04/2024.
//
#include <time.h>
#include <stdlib.h>
int venirse(){
    srand(time(NULL));
    int x = rand() %10;
    return x;
}
