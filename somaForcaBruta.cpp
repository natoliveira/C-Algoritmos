#include <vector>
#include <iostream>
//custo: O(n.m)
using namespace std;

int Soma(vector<vector<int>> v){
    int soma = 0;
for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v[i].size(); j++){
        cout << v[i][j] << " ";
        soma = soma + v[i][j];
    }
}
return soma;
}
int main()
{
    int soma;
    vector<vector<int>> matriz = {{1,2,3}, {4,5,6}, {7,8, 9}};
    cout << soma << " " ;

    return 0;
}
