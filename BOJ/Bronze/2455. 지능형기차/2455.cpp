#include <iostream>
using namespace std;

int main() {
   int out = 0, in = 0;
   int count = 0;
   int max = 0;

   for(int i=0; i<4; i++){
      cin >> out >> in; 

      count -= out;
      count += in;

      if (count > max){
         max = count;
      }
   }

   cout << max << endl;
}