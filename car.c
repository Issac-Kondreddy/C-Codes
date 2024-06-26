#include<stdio.h>
struct car{
    char name[20];
    int year;
    float price;
};
int main(){
    struct car c1 = {"Kia Sportage",2024, 40000};
    struct car c2 = {"Hyundai Sonata",2024, 30000};
    struct car c3 = {"Kia Sedan",2023, 25000};
    struct car c4 = {"Hyundai Elantra",2023, 20000};
    struct car c5 = {"Kia Rio",2022, 15000};
    struct car c6 = {"Hyundai Accent",2022, 10000};

    printf("Car Model %s - Manufactured in %d with price %.2f\n", c1.name, c1.year, c1.price);
    printf("\nCar Model %s - Manufactured in %d with price %.2f\n", c2.name, c2.year,c2.price);
     printf("Car Model %s - Manufactured in %d with price %.2f\n", c3.name, c3.year, c3.price);
      printf("Car Model %s - Manufactured in %d with price %.2f\n", c4.name, c4.year, c4.price);
     printf("Car Model %s - Manufactured in %d with price %.2f\n", c5.name, c5.year, c5.price);
      printf("Car Model %s - Manufactured in %d with price %.2f\n", c6.name, c6.year, c6.price);

}