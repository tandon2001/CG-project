//Accept the x and y coordinates of the two points and compute the distance between two points 
#include <stdio.h>
#include <math.h>
int main(){
    float x1,x2,y1,y2,distance;
    printf("enter value of x1:");
    scanf("%f", &x1);
    printf("enter value of x2:");
    scanf("%f", &x2);
    printf("enter value of y1:");
    scanf("%f",&y1);
    printf("enter the value of y2:");
    scanf("%f", &y2);
    distance = sqrt ( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("the distance between two points is %f\n", distance);
    return 0;




}