#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int i, vetor[5];
  cout << "Digite 5 números inteiros" << endl;
  for(i = 0; i < 5; i++){
      cin >> vetor[i] ;
      cin.ignore();
      system("cls");
  }
  for(i = 0; i < 5; i++){
      cout << "O número " << vetor[i] << " corresponde a posição " << i << endl;
  }
}
