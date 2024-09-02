#include <iostream>
using namespace std;

int Soma10(int x){
    return x + 10;
}

int main(){
    int num1, ResSoma;
    cout << "Insira um numero: " << endl;
    cin >> num1;

    ResSoma = Soma10(num1);

    cout << "O resultado da soma de 10 eh: " << ResSoma << endl;
    cout << "O valor do numero eh: " << num1 << endl;
    
    return 0;
}