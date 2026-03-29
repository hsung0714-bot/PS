#include<iostream>
using namespace std;

int PrimeNumber(int X){
    if(X==1) return 0;

    for (int i = 2; i * i <= X; i++) {
        if (X % i == 0) return 0;
    }
    return 1;
}

int main(){
    int N1=0;
    int N2=0;
    int count=0;
    cin >> N1;

    for(int i=0; i<N1; i++){
        cin >> N2;
            if (PrimeNumber(N2)) count++;
    }
    cout<<count<<endl;
    return 0;
}