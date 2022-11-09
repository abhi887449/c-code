#include<iostream>
using namespace std;
class Student{
    private:
    const string name;
    const string fathername;
    int rollnumber;
    static int totalstudents;
    public:
    Student(string name,string fathername,int rollnumber):name(name),fathername(fathername){
        this->rollnumber = rollnumber;
        Student::totalstudents++;
    }
    string getname() const{
        return this->name;
    }
    string getfathername() const{
        return this->fathername;
    }
    int getrollnumber() const{
        return this->rollnumber;
    }
    static int gettotalstudents(){
        return Student::totalstudents;
    }
    void printstudentdetails(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Father's Name: "<<this->fathername<<endl;
        cout<<"Roll Number: "<<this->rollnumber<<endl;
    }
};
int Student::totalstudents = 0;

int main(){
    Student s1("Abhishek Singh","Ram Singh",1);
    s1.printstudentdetails();
    Student s2("Payal Singh","Ram Singh",2);
    s2.printstudentdetails();
    cout<<Student::gettotalstudents()<<endl;
}