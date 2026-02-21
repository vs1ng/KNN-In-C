#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int data[][3] = {
         // U,I,IS
           {7,1,1},
           {24,0,0},
           {11,1,0},
           {17,0,1},
           {22,1,0}
};
double options[5];
int K = 3;

double distance(int X1, int Y1, int X2, int Y2){return sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));}
int compare(const void *a, const void *b) { double diff = *(double*)a - *(double*)b; return (diff > 0) - (diff < 0); }

int main(int AC, char *ARG[]){
    int U_X2 = atoi(ARG[1]); int I_Y2 = atoi(ARG[2]);
    for(int index = 0 ; index < 6 ; index++){
        options[index]=distance(data[index][0],data[index][1],U_X2,I_Y2);
        printf("Manhattan Distance of:\n%i\t%i\nfrom: %i,%i\tis: %f\n",U_X2,I_Y2,data[index][0],data[index][1],options[index]);
    }
    qsort(options, 5, sizeof(double), compare);
    for(int index = 0 ; index < K + 1 ; index++){
        printf("the closest %dth distance is %.2f\n",index,options[index]);
    }
}
