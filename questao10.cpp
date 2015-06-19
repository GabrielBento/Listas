#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
int vetor1[10], vetor2[10], vetor3[20], x, i, y;
cout << "Digite os numeros" << endl;
for(x = 0; x < 10; x++){
    cin >> vetor1[x];

}
cout << "Digite os outros numeros" << endl;
for(y = 0; y < 10; y++){
    cin >> vetor2[y];
}
y = 0; x = 0;
for(i = 0; i < 20; i++){
    if(i % 2 == 0){
        vetor3[i] = vetor1[x];
        x++;
    }
    else{
        vetor3[i] = vetor2[y];
        y++;
    }
}
for(i = 0; i < 20; i++){
    cout << "Os numeros " << vetor3[i] << endl;
}
return 0;
}
