#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=50;
    int c=60;

     if(a==b && a==c)
     {
        cout <<"all are same";
     }
     else if (a==b && b==c)
     {
        cout <<"a and b are same ";

     }
     else if( a==b && b==c)
     {
        cout << "a|=b && a==c";
     }
     else if (a==b && a==c)
     {
        cout <<" a and c are same ";
     }
     else
     {

        if(a<b && a>c)
        {
            cout <<" a is bigger";
        }
         else if(a<b && b>c)
        {
            cout <<" a is bigger";
        }
        else
        {
            cout<< "c is bigger";
        }

     }
}
