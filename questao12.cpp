#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
int i, idade[3],cont_alunos;
float altura[3], media;
cont_alunos = 0;
for(i = 0; i < 3; i++){
    cout << "Digite a idade do " << i + 1 << "º aluno" << endl;
    cin >> idade[i];
    cout << "Digite a altura do " << i + 1 << "º aluno" << endl;
    cin >> altura[i];
}
for(i = 0; i < 3; i++){
    media += altura[i];
}
media = media / 3;
for(i = 0; i < 3; i++){
    if(idade[i] > 13 and altura[i] < media){
        cont_alunos ++;
    }
}
cout << "A quantidade de alunos abaixo da altura é: " << cont_alunos << endl;
return 0;
}
