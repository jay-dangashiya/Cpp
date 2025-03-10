#include <iostream>
using namespace std;

int main() 
{
    int score;
 cout<<"enter your score";
    cin>>score;
    char grade;

   
    // printf("Enter your score (0-100): ");
    // scanf("%d", &score);               

    grade = (score >= 90)  ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    
    printf("Your grade is: %c\n", grade);

   
    switch (grade) 
    {
        case 'A': 
        cout<<"Excellent! Work. "<< endl;
        break;
        case 'B': 
         cout<<"Wal done."<< endl;
         break;
        case 'C': 
        cout<<"Good!  job."<< endl;
        break;
        case 'D': 
        cout<<"your  pass,but you could do batt."<< endl;
        break;
        case 'E':
        cout<< "soore your failed.\n"<< endl;
        break;
      
       default:
            cout << "soory,you failed" << endl;
            break;
    }

  
    if (grade == 'A' || grade == 'B' || grade == 'C')
     {
        cout<<"Congratulations! You are eligible for the next level.\n";

    } else  if (grade =='F')
    {
        cout << "please try again next time,";
    }
    else{
        cout<< " ";
    }

    return 0;
}
