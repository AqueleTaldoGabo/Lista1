#include <iostream>
using namespace std;

int Multi(int *x, int *y){
    return (*x) * (*y);
}

int main(){
    int num1, num2, ResMulti;
    cout << "Insira dois numeros: " << endl;
    cin >> num1 >> num2;

    ResMulti = Multi(&num1, &num2);

    cout << "O resultado da multiplicacao eh: " << ResMulti << endl;
    
    return 0;
}