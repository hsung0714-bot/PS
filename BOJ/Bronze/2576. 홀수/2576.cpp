#include<iostream>
using namespace std;

int main() {
    int count=0;
    int sum=0;
    int min=100;

    for(int i = 0; i < 7; i++){
        cin >> count;

        if(count % 2 != 0){
            sum += count;
            if(count < min){
                min = count;
            }
        }
    }

    if(sum == 0){
        cout << -1 <<endl;
    } else {
        cout << sum << endl;
        cout << min;
    }
}