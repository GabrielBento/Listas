#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
 int consoante = 0;
 int i;
 char caracter[10];
 for(i = 1;i <=10; i++){
     cout << "Digite o " << i << "º Caracter" << endl;
     cin >> caracter[i];
     if(caracter[i] != 'a' && caracter[i] != 'A' && caracter[i] != 'e' && caracter[i] != 'E' && caracter[i] != 'i' && caracter[i] != 'I'
     && caracter[i] != 'o' && caracter[i] != 'O' && caracter[i] != 'u' && caracter[i] != 'U' ){
     consoante++;
     }
 }
cout << "Foram impressas " << consoante <<" Consoantes" << endl;

for(i = 1; i <= 10; i++ ){
    if(caracter[i] != 'a' && caracter[i] != 'A' && caracter[i] != 'e' && caracter[i] != 'E' && caracter[i] != 'i' && caracter[i] != 'I'
     && caracter[i] != 'o' && caracter[i] != 'O' && caracter[i] != 'u' && caracter[i] != 'U' ){
     cout << caracter[i] << endl;
     }
}
return 0;
}
