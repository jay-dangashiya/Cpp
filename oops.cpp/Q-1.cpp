#include <iostream>
using namespace std;

class student {
public:
    string name;
    int number;
    int grid;
    string fees;

    student(string name, int number, int grid ,string fees) {
        this->name = name;
        this->number = number;
        this->grid = grid;
        this->fees=fees;
        
    }
    void print() {
        cout << "Name: " <<this->name <<" number-> "<< this->number << " grid->"<< this-> grid << " fees->" <<   this -> fees<< endl;
    }  
};

int main() {
   
    student *std=new student("jay", 123, 44577,"122345");
    std->print(); 
    return 0;
}
