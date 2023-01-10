#include<iostream>
using namespace std;

int sum = 0;
int N1 = 0,N2 = 1;

int fibonacci(int);

int main()
{
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x)
{
    if(x > 0) fibonacci(x-1);

    if(x == 0) return sum;
    else if (x == 1) return sum +1;
    else if (x > 1) 
    {
        sum = N1+N2;

        N1 = N2;
        N2 = sum;
        return sum;
    }
    return 0;
}