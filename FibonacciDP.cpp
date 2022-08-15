#include <vector>
#include <iostream>
//C(n) = soma(i=2 to i=n-1)1 = n-1 - 2 +1 = n-2 --> O(n)
using namespace std;

int FibonacciDP(int n){
    int num1 = 0;
    int num2 = 1;
    int numaux = 0;
    
    for (int i = 0; i < n-1; i++){
        numaux = num2;
        num2 = num2 + num1;
        num1 = numaux;
        
    }
    
    return num2;

}

int main()
{
    cout << FibonacciDP << " ";

    return 0;
}
