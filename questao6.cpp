#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
int i, x, nota[4], media, aprovados;
aprovados = 0;
for(i = 0; i < 2; i++){
    for(x = 0; x < 4; x++){
        cout << "Digite a " <<  x + 1 << "º nota" << endl;
        cin >> nota[x];
    }

    media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;


        if(media >= 7.0){
        aprovados++;
    }
}
   cout << "A lista foi de aprovados foi de " << aprovados << endl;

}
