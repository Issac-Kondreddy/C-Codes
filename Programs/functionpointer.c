#include<stdio.h>
void func(int a)
{
    printf("The value of a is %d\n",a);
}
int main(){
    void (*func_ptr)(int) = &func;
    func_ptr(10);
}