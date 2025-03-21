#include <iostream>
using namespace std;

int main() 
{
    char alphabet = 'a';
    do 
    {
        cout << alphabet << ", ";
        alphabet += 4;
    } while (alphabet <= 'z');
    cout << endl;
   
}