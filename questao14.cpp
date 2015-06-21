#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
int i, contador;
char perguntas[6];
contador = 0;
cout << "Para responde tecle S-sim e N-não" << endl;
cout << "---------------------------" << endl;
for(i = 1; i < 6; i++){
    if(i == 1){
    cout << "Telefonou para a vítima?" << endl;
    cin >> perguntas[i];
    }
    if(i == 2){
        cout << "Esteve no local do crime?" << endl;
        cin >> perguntas[i];
    }
    if(i == 3){
        cout << "Mora perto da vítima?" << endl;
        cin >> perguntas[i];
    }
    if(i == 4){
        cout << "Devia para a vítima?" << endl;
        cin >> perguntas[i];
    }
    if(i == 5){
        cout << "Já trabalhou com a vítima?" << endl;
        cin >> perguntas[i];
    }
}
for(i = 0; i < 6; i++){
    if(perguntas[i] == 's' or perguntas[i] == 'S'){
        contador++;
    }
}
if(contador == 2){
    cout << "Suspeito!!" << endl;
}
if(contador > 2 && contador < 5){
    cout << "Cúmplice" << endl;
}
if(contador == 5){
    cout << "Assassino" << endl;
}
else{
    cout << "Inocente" << endl;
}
return 0;
}
