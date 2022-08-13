#include <iostream>

//custo: t(n)= (n-1) + (n-2) + 1
//ou t(n)= (n-1) + (n-2) + C
using namespace std;

int Fibonacci(int n){
    if (n == 1 || n == 2)
    
    return 1;
    
    else{
        
    return Fibonacci(n-1) + Fibonacci(n-2);
    
    }
    
}

int main()
{
    cout << Fibonacci(3) << " ";

    return 0;
}