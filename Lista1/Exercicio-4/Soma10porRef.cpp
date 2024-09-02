#include <iostream>
using namespace std;

int Soma10(int *x){
    *x+=10;
    return *x;
}

int main(){
    int num1, ResSoma;
    cout << "Insira um numero: " << endl;
    cin >> num1;

    ResSoma = Soma10(&num1);

    cout << "O resultado da soma 10 eh: " << ResSoma << endl;
    cout << "O valor do numero eh: " << num1 << endl;

    return 0;
}