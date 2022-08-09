//Bubble sort
#include <bits/stdc++.h>
using namespace std;
  
// função que implementa o bublle sort, void seria uma função que não retorna nada.
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Os últimos i elementos já estão
        // no lugar
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
  
//função que imprime o array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
  
//código do driver
int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Matriz ordenada: \n";
    printArray(arr, N);
    return 0;
}
