#include<iostream>
using namespace std;

string intToRoman(int num) {
        string ans="";
        while(num>0)
        if(num>=1000){
            int temp = num/1000;
            while(temp--){
                ans+="M";
            }
            num=num%1000;
        }
        else if(num>=900){
            ans+="CM";
            num=num%100;
        }
        else if(num>=500){
            int temp=num/100;
            while(temp>=1){
                if(temp>=5){
                    ans+="D";
                    temp-=5;
                }
                else{
                    ans+="C";
                    temp-=1;
                }
            }
            num=num%100;
        }
        else if(num>=100){
            int temp=num/100;
            while(temp>=1){
                if(temp==4){
                    ans+="CD";
                    temp-=1;
                }
                else{
                    ans+="C";
                    temp-=1;
                }
            }
            num=num%100;
        }
        else if(num>=90){
            ans+="XC";
            num=num%10;
        }
        else if(num>=10){
            int temp=num/10;
            while(temp>=1){
                if(temp>=5){
                    ans+="L";
                    temp-=5;
                }
                else if(temp==4){
                    ans+="XL";
                    temp-=4;
                }
                else if(temp>=1){
                    ans+="X";
                    temp-=1;
                }
            }
            num=num%10;
        }
        else if(num>=9){
            ans+="IX";
            num=num%10;
        }
        else if(num>=1){
            int temp=num;
            while(temp>=1){
                if(temp>=5){
                    ans+="V";
                    temp-=5;
                }
                else if(temp==4){
                    ans+="IV";
                    temp-=4;
                }
                else if(temp>=1){
                    ans+="I";
                    temp-=1;
                }
            }
            num=num%10;
        }
        return ans; 
}
int main(){
    cout<<intToRoman(399);
    return 0;
}