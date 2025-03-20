#include <iostream>
using namespace std;

int main() 
{
    int i, j;
    int n;
    
    cin >> n;
    cout << "Enter the number of rows: ";
      
    
    
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++) 
        {
            cout << char('A' + (i - 1)) << " "; 
        }
        
        cout << endl;
    }

    return 0;
}

//A
//B B
//C C C
//D D D D
//E E E E E
