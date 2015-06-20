#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int par[10], impar[10], num[10], i;
    cout << "Digite os 10 numeros" << endl;
    int x = 0;
    int y = 0;
    for(i = 0; i < 10; i++){
        cin >> num[i];

    if(num[i] % 2 == 0 ){
           par[x] = num[i];
            x++;
    }
    else{
        impar[y] = num[i];
        y++;
    }
    }
    cout << "" << endl;
    cout << "Numeros pares" << endl;
    cout << "" << endl;
    for(i = 0; i < x; i++){
        cout << "-----------par--------------" << endl;
        cout << par[i] << endl;
    }
    cout << "" << endl;
    cout << "Numeros impares" << endl;
    cout << "" << endl;
    for(i = 0; i < y; i++){
        cout << "---------impar------------" << endl;
        cout << impar[i] << endl;
    }

    return 0;
}
