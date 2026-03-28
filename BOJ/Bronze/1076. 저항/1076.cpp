#include<iostream>
using namespace std;


long ColorList(string color){
    if (color == "black") return 0;
    if (color == "brown") return 1;
    if (color == "red") return 2;
    if (color == "orange") return 3;
    if (color == "yellow") return 4;
    if (color == "green") return 5;
    if (color == "blue") return 6;
    if (color == "violet") return 7;
    if (color == "grey") return 8;
    if (color == "white") return 9;
}


int main(){
    string first, second, third;
    long FirstResult = 0;
    long SecondResult = 1;
    long FinalResult = 0;

        cin >> first >> second >> third;

        FirstResult = ColorList(first)*10 + ColorList(second);

        for(int j=0; j<ColorList(third); j++){
            SecondResult *= 10;
        }
        FinalResult = FirstResult * SecondResult;
        cout << FinalResult <<endl;

    return 0;
}