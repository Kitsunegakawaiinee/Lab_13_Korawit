#include<iostream>
#include<ctime>
using namespace std;

long long int sum = 0;
long long int N1 = 0,N2 = 1;

long long int fibonacci(long long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(long long int x)
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