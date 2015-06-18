#include <iostream>
#include <cstdlib>

using namespace std;

 int main(void){
 int i;
 float vetor [4], media;
 for(i = 1; i <= 4; i++){
     cout << "Digite a " << i << "º nota do Aluno" << endl;
     cin >> vetor[i];
     cin.ignore();
     system ("cls");
 }
 media = (vetor[1] + vetor[2] + vetor[3] + vetor[4])/4;
 for(i = 1; i <= 4; i++){
     cout << "A sua " << i << "º nota foi " << vetor[i] << endl;
 }
  cout << "-----------------------------"<< endl;
  cout << "A média foi " << media << endl;
return 0;
}
