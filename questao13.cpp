#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
int i, contador;
float temperatura[12], media;
for(i = 1; i < 13; i++){
    cout << "Digite a temperatura média do " << i  << "º mês" << endl;
    cin >> temperatura[i];
    media += temperatura[i];
}
cout << "--------------------" << endl;
media /= 12;
for(i = 1; i < 13; i++){
    if(temperatura[i] > media){
        contador = i;
    if(contador == 1){
        cout << "Janeiro " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 2){
        cout << "Fevereiro " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 3){
        cout << "Março " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 4){
        cout << "Abril " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 5){
        cout << "Maio " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 6){
        cout << "Junho " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 7){
        cout << "Julho " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 8){
        cout << "Agosto " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 9){
        cout << "Setembro " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 10){
        cout << "Outubro " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 11){
        cout << "Novembro " << temperatura[contador] << "º graus" << endl;
    }
    if(contador == 12){
        cout << "Dezembro " << temperatura[contador] << "º graus" << endl;
    }
    }
}
return 0;
}
