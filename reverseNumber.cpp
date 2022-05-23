#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int remainder;
    int multiplier=1;
    int reverse =0;
    int counter=-1;

    while(num)
    {
        num /= 10;
        counter++;
    }

    while(num)
    {
        remainder = num%10;
        num = num - remainder;
        num = num/10;
        
        reverse = reverse + remainder*pow(10,counter);
        counter--;
    }

    cout<<reverse;
    return 0;
}