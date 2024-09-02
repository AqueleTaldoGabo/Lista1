#include <iostream>
using namespace std;

int Multi(int x, int y){
    return x * y;
}

int main(){
    int num1, num2, ResMul;
    cout << "Insira dois numeros: " << endl;
    cin >> num1 >> num2;

    ResMul = Multi(num1, num2);

    cout << "O resultado da multiplicacao eh: " << ResMul << endl;

    return 0;
}