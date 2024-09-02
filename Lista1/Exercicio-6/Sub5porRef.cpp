#include <iostream>
using namespace std;

int Sub5(int *x){
    *x-=5;
    return *x;
}

int main(){
    int num1, ResSub;
    cout << "Insira um numero: " << endl;
    cin >> num1;

    ResSub = Sub5(&num1);

    cout << "O resustado da subtracao eh: " << ResSub << endl;
    cout << "O valor do numero eh: " << num1;

    return 0;
}