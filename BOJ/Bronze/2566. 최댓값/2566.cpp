#include<iostream>
using namespace std;

int main(){
    int arr[9][9];
    int max=0;
    int h=0, y=0; 

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> arr[i][j];

        if(arr[i][j] > max){
            max = arr[i][j];
            h = i;
            y = j;
        }
    }
}
cout << max << endl;
cout << h + 1 << " " << y+1 << endl;

return 0;
}