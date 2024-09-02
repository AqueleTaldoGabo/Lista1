#include <iostream>
using namespace std;

int Sub5(int x){
    return x - 5;
}

int main(){
    int num1, ResSub;
    cout << "Insira um numero: " << endl;
    cin >> num1;

    ResSub = Sub5(num1);

    cout << "O resultado da subtracao eh: " << ResSub << endl;
    cout << "O valor do numero eh: " << num1 << endl; 
    
    return 0;
}