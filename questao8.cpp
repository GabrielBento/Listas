#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
int idade[5], i, x;
float altura[5];
for(i = 0; i < 5; i++){
    cout << "Digite a idade da " << i + 1 << "º pessoa" << endl;
    cin >> idade[i];
    cout << "Digite a altura da " << i + 1 << "º pessoa em metros" << endl;
    cin >> altura[i];
}
cout << "" << endl;
for(x = 4; x >= 0; x--){
    cout << "A idade da " << x + 1 << "º pessoa é: " << idade[x] << endl;
    cout << "A altura da " << x + 1 << "º pessoa é: " << altura[x] << endl;
    cout << "-------------------------" << endl;
}
return 0;
}
