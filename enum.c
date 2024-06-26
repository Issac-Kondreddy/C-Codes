//enum keyword is a similar to struct but represent group of constants
#include<stdio.h>
enum level{
    LOW = 25,
    MEDIUM,
    HIGH
};
int main(){
    enum level mylevel = HIGH;
    printf("%d\n", mylevel);
    enum level mylevel_MED = MEDIUM;
    printf("%d\n", mylevel_MED);
    switch (mylevel)
    {
    case 25:
    printf("LOW\n");
        break;
    case 26:
    printf("MEDIUM\n");
    break;
    case 27:
    printf("HIGH\n");
    break;
    default:
        break;
    }
}