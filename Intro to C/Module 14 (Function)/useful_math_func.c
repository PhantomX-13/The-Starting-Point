#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int ans1= ceil(4.3);
    int ans2= floor(4.3);
    int ans3= round(3.8);
    int ans4 = round(3.4);
    int ans5 = sqrt(30);
    double ans6 = sqrt(30);
    int ans7 = pow(4,3);
    int ans8 = abs(10);
    int ans9 = abs(-10);



    printf("After  Ceil: %d\nAfter Floor: %d\n", ans1, ans2);
    printf("After Round: %d\nAfter Round: %d\n", ans3, ans4);
    printf("After Square: %d\n", ans5);
    printf("After Square: %lf\n", ans6);
    printf("After Power: %d\n", ans7);
    printf("After Absolute: %d\nAfter Absolute: %d\n",ans8, ans9);
    return 0;
}