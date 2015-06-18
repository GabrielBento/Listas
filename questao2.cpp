#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
 int i, vetor[10];
 cout << "Digite 10 números" << endl;
 for(i = 0; i <= 9; i++){
     cin >> vetor[i];
     cin.ignore();
     system("cls");
}
 cout << "A ordem inversa é" << endl;
 for(i = 9; i >= 0; i--){
     cout << vetor[i] << endl;
 }

}
