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






};

int main(){
    Employee employee1;

    employee1.name="jasmin";
    employee1.place="calicut";
    employee1.age= 20;
  
     
    employee1.introduceYourself();


}

      

