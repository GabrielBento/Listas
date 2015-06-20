#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
int i, soma, multipli, num[5];
multipli = 1;
soma = 0;
for(i = 0; i < 5; i++){
    cout << "Digite o " << i + 1 << "º número" << endl;
    cin >> num[i];
    soma += num[i];
    multipli *= num[i];
}
for(i = 0; i < 5; i++){
    cout << num[i] << endl;
}
cout << "" << endl;
cout << "A soma de todos é:  " << soma <<endl;
cout << "A multiplicação de todos é:  " << multipli << endl;

}
