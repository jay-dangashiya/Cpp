#include <iostream>
using namespace std;
int main() {
    int i, j;
    int n = 5;


    for (i=1;i<=n;i++){
       
        for (j=1;j<=n*2;j++){
           
            if (j>=n-i+1&&j<=n){
                cout << j << "  ";
            }
           
            else if (j>n&&j<n+i){
                cout << (n*2-j) << "  ";
            }
            else{
                cout << "   ";
            }
        }
        cout<<endl;
    }
}



 //           5
 //        4  5  4
///      3  4  5  4  3
 //  2  3  4  5  4  3  2        
//1  2  3  4  5  4  3  2  1 