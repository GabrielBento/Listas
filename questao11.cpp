#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
int vetorA[10], vetorB[10], vetorC[10], vetorD[30], i, x, a, b, c;
a = 0; b = 0; c = 0;
x = 3;
for(i = 0; i < 10; i++){
    cout << "Digite os valores do primeiro vetor" << endl;
    cin >> vetorA[i];
}
for(i = 0; i < 10; i++){
    cout << "Digite os valores do segundo vetor" << endl;
    cin >> vetorB[i];
}
for(i = 0; i < 10; i++){
    cout << "Digite os valores do terceiro vetor" << endl;
    cin >> vetorC[i];
}
for(i = 0; i < 30; i++){
    if(x == 3){
        vetorD[i] = vetorA[a];
        x--;
        a++;
    }
    else if(x == 2){
        vetorD[i] = vetorB[b];
        x--;
        b++;
    }
    else if(x == 1){
        vetorD[i] = vetorC[c];
        x = 3;
        c++;
    }
}
for(i = 0; i < 30; i++){
    cout << "os valores são " << vetorD[i] << endl;
}
return 0;
}
