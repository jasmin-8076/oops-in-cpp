#include <iostream>
using std::string;
using namespace std;
class Employee{

public: 
    string name;
    string place;
    int age;
    void introduceYourself(){
        cout<<"name "<<name<<std::endl;
        cout<<"place "<<place<<std::endl;
        cout<<"age "<<age<<std::endl;
    }
    Employee(string na,string plce,int ag){

     name=na;
     place=plce;
     age=ag;
    
    
    
    }


};

int main(){
    Employee employee1=Employee("jasmin","calicut",24);

    
     
    employee1.introduceYourself();


}

      

