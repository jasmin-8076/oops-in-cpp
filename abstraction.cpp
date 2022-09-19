#include <iostream>
using std::string;
using namespace std;

class AbstractionEmployee{
   virtual void askforpromotion()=0;

   };



class Employee:AbstractionEmployee{
private:
     string name;
     string place;
     int age;
public:
     void setname(string input){
       name=input;
    }
     string getname(){
      return name;
     }
     void setplace(string input2){
        place=input2;
    }
     string getplace(){
        return place;
    }
     void setage(int num){
        age=num;
    }
     int getage(){
        return age;
    }
     void introduceYourself(){
        cout<<"name "<<name<<std::endl;
        cout<<"place "<<place<<std::endl;
        cout<<"age "<<age<<std::endl;
     }
       Employee(string input,string input2,int num){
       name =input;
       place =input2;
       age=num;
       } 
    void askforpromotion(){
        if(age<=20)
       cout<<name "got promoted" <<endl;
       else;
       cout<<name "sorry.no promotion!!"<<endl;
    }
    };


 

int main(){

  Employee employee1=Employee("jasmine","It company",24);
  Employee employee2=Employee("shamil","calicut",23);
  
  employee1.askforpromotion();
  employee2.askforpromotion();


}