#include <iostream>
using std::string;
using namespace std;
class Employee{
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
 };
class Developer:public Employee{
public:
      string favlanguage;

    Developer(string input,string input2,int num,string fpl):Employee(input,input2,num){
    favlanguage=fpl;
    }
            
     
     

void fixbug(){
    std::cout<<getname()<<" fixed bug using " << favlanguage << std::endl;
}
};



int main(){

  Employee employee1=Employee("jasmine","It company",24);
  Developer d=Developer("jasmine","It company",24,"cpp");

 d.fixbug();


}