#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int input_number,step = 0;
    printf("please input the number:\n");
    scanf("%d",&input_number);
    while(input_number != 1)
    {
        if(input_number % 2 == 0)
            input_number = input_number / 2;
        else
            input_number = (input_number * 3 + 1 ) / 2;
        step++;
    }
    printf("%d\n", step);
    return 0;
}