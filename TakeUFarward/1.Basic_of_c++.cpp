#include <iostream>
#include <string>
using namespace std;
void dataTypes()
{
    // data types
    int a = 1;
    long b = 1222412312;
    long long c = 122284834412312;
    cout << a << "\t" << b << "\t" << c << "\n";
    float d = 1;
    double e = 1222412312;
    long double f = 122284834412312;
    cout << d << "\t" << e << "\t" << f << "\n";
    char chr = 'a';
    cout << chr << "\n";
    bool cond = true;
    cout << cond << "\n";
}
void conditionalStatements()
{
    // using if to check age is greater than 18 or not
    int age;
    cin >> age;
    if (age > 18)
    {
        cout << "Age is greater than 18 \n";
    }
    else
    {
        cout << "Age is not greater than 18 \n";
    }
}
void loops()
{
    // printing table of 1-10 using for loop
    int count =1;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout<<j*count<<"\t";
        }
        cout<<"\n";
        count++;
    }
        cout<<"\n";
    // printing table of 1-10 using while loop
    count=1;
    int i=11,j=11;
    while(i<=20){
        j=11;
        while(j<=20){
            cout<<j*count<<"\t";
            j++;
        }
        cout<<"\n";
        count++;
        i++;
    }
}
int main()
{
    dataTypes();
    conditionalStatements();
    loops();
    
    return 0;
}