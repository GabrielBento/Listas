#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
int vetorA[10], i, soma;
soma = 0;
for(i = 0; i < 10; i++){
    cout << "Digite o " << i + 1 << "º número" << endl;
    cin >> vetorA[i];
    soma += (vetorA[i]*vetorA[i]);
}
cout << "A soma dos quadrados é: "<< soma << endl;
}
