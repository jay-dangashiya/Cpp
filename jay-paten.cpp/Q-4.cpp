#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n = 5;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) 
        {
            if (j % 2 == 0) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout<< endl;
    }    
   
}

// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0 
//         1