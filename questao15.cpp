#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
int  i, c, acima_media, cont;
float soma, media, t;
float * A;
soma = 0.0;
t = 0;
i = 0;
A = new float [i];
while(t != -1){
    cout << "Digite o valor" << endl;
    cin >> t;
    A[i] = t;
    i++;
    if(t == -1){
        i--;
    }
}
cout << "-------------------" << endl;
cout << "Foram lidos " << i << " valores" << endl; // letra A
for(c = 0; c < i; c++){
    cout << A[c] << " "; // Letra B
}
cout << "" << endl;
cout << "A ordem inversa dos valores são" << endl;
i--;
for(c = i; c >= 0; c--){
    cout << A[c] << endl; // Letra C
    soma += A[c];
}
media = soma / (i + 1);
acima_media = 0;
cont = 0;
for(c = i; c >= 0; c--){
    if(A[c] > media){
        acima_media++;
    }
    if(A[c] < 7.0){
    cont++;
    }
}
cout << "A soma dos valores é: " << soma << endl; // Letra D
cout << "A média é : " << media << endl; // Letra E
cout << "Valores acima da média '" << acima_media << "'" << endl; // Letra F
cout << "Valores abaixo de 7 '" << cont << "'"<< endl; // Letra G

cout << "Acabou!!!" << endl; // Letra H

return 0;
}
