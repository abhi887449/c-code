#include<iostream>
using namespace std;
class hostel{
    private:
    int Stu_Rollno[100];
    int Stu_Roomno[100];
    int Counter;
    public:
    void initicounter(void){ Counter=0;}
    void Setinfo(void);
    void Displayinfo(void);

};
    void hostel :: Setinfo(void){
        cout<<"Enter the roll no of Student"<<endl;
        cin>>Stu_Rollno[Counter];
        cout<<"Enter the room no of Student"<<endl;
        cin>>Stu_Roomno[Counter];
        Counter++;
    }
    void hostel :: Displayinfo(void){
        for(int i=0;i<Counter;i++){
            cout<<i+1<<",Roll No Is"<<Stu_Rollno[Counter]<<",Room No is"<<Stu_Roomno[Counter]<<endl;
        }
    }
int main(){
     hostel lord_buddha;
     lord_buddha.initicounter();
     lord_buddha.Setinfo();
     lord_buddha.Setinfo();
     lord_buddha.Setinfo();
     lord_buddha.Setinfo();
     lord_buddha.Setinfo();
     lord_buddha.Displayinfo();
    return 0;
}