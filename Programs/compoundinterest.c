#include<stdio.h>
#include<math.h>
int CI(int principle, int time, float rate);
int main(){
    int principle;
    int time;
    float rate;
    printf("Enter the principle amount: ");
    scanf("%d", &principle);
    printf("Enter the time: ");
    scanf("%d", &time);
    printf("Enter the rate of Interest: ");
    scanf("%f", &rate);
    float result = CI(principle, time, rate);
    printf("The compound interest is:\n %.1f", result);
}

int CI(int principle, int time, float rate){
    return principle*(pow(1+(rate/100), time));
}