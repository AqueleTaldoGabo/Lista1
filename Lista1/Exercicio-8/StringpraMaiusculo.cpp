#include <iostream>
using namespace std;

void ParaMaiusculo(string *x){
    for(int i = 0; i < (*x).length(); i++){
        if((*x)[i]>=97 && (*x)[i] <= 122){
            (*x)[i]-=32;
        }

    }
}

int main(){
    string palavra;
    getline(cin, palavra);

    ParaMaiusculo(&palavra);
    cout << palavra;

    return 0;
}