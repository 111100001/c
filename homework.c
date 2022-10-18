#include <stdio.h>
int main(void)
 {
    float bmi =0;
    float cm;
    float kg;
    bmi = (10000 * kg)/(kg * cm);
    printf("%s", "enter height:");
    scanf("%f", &cm);
    printf("%s","enter weight:");
    scanf("%f",&kg);
    if (bmi < 18.5 ){
        puts("you're underweight");
    }
    else if(18.5<=bmi<=24.9 ){
        puts("your weight is normal");
    }
    else if (25<=bmi<=29.9){
        puts("you're overweight");
    }
    else if (bmi >=30 ){
        puts("you're obese");
    }

    printf("bmi is %.2f\n", bmi);
}