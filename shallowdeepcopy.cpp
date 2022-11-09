#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    int rollnumber;
    char *name;
    string fathername;
    public:
    Student(int rollnumber,char *name,string fathername){
        this->rollnumber = rollnumber;
    this->fathername = fathername;
        // shallow copy
        // this->name = name;

        // deep copy 
        this->name = new char[strlen(name + 1)];
        strcpy(this->name,name);
    }
    Student(Student const &s1){
        this->rollnumber = s1.rollnumber;
        this->fathername = s1.fathername;
        // shallow copy
        // this->name = s1.name;
        // deep copy 
        this->name = new char[strlen(s1.name + 1)];
        strcpy(this->name,s1.name);
    }
    void printstudentdetails(){
        cout<<"rollnumber :"<<this->rollnumber<<" , name :"<<this->name<<" , father name :"<<this->fathername<<endl;
    }
};

int main(){
    char name[10] = "Abhishek";
    string father = "Ram Singh";
    Student s1(1,name,father);
    s1.printstudentdetails();
    name[0] = 'P';
    father = father.substr(1);
    s1.printstudentdetails();

    Student s2(s1);
    s2.printstudentdetails();
}