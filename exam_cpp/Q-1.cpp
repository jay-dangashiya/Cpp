#include <iostream>
using namespace std;

int main() {
  //  5 4 3 2 1 
  //  5 4 3 2
  //  5 4 3 
  //  5 4
  //  5
    int i,j;
    int n=5;

    for(i=1; i<=5; i++){
        for(j=5 ;j>=i; j--) {
            cout << j<< " ";
        } 
        cout << endl; 
    }    
    return 0;
}