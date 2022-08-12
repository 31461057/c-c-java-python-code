#include<stdio.h>
int main(){
    for(double l=1;l>-1;l-=0.05,printf("\n"))
        for(double w=1;w>-1;w-=0.025)
            printf((l*l + w*w<=1)?"=":" ");
} 
