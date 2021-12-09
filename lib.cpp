//
// Created by Andrea Fuselli on 09/12/21.
//

#include "lib.h"
float funzione(float a[], int dim){
    float x=0 , y=0 , z=0;
    x=a[0];
    y=a[1];
    if (x>y){
        z=x;
    }else{
        z=y;
    }
    for (int i = 2; i < dim; i++) {
        y= a[i];
        if (z<y){
            z=y;
        }
    }
    return z;
}
