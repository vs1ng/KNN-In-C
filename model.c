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

double options[5][2];
int K = 3;

double distance(int X1, int Y1, int X2, int Y2){
    return sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
}

int compare(const void *a, const void *b) {
    double diff = ((double*)a)[0] - ((double*)b)[0];
    return (diff > 0) - (diff < 0);
}

int main(int AC, char *ARG[]){
    int U_X2 = atoi(ARG[1]); int I_Y2 = atoi(ARG[2]);
    for(int index = 0 ; index < 5 ; index++){
        options[index][0]=distance(data[index][0],data[index][1],U_X2,I_Y2);
        options[index][1]=data[index][2];
    }
    qsort(options, 5, sizeof(options[0]), compare);
    for(int index = 0 ; index < K ; index++){
        printf("the closest %dth distance is %.2f of category %.1f\n",index+1,options[index][0],options[index][1]);
    }
}
