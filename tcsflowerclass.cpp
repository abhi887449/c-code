#include <iostream>
#include <vector>
using namespace std;
class Flower
{
private:
    vector<int> flowerid;
    vector<string> flowername;
    vector<int> price;
    vector<int> rating;
    vector<string> type;

public:
    void setelements()
    {
        int tempflowerid;
        string tempflowername;
        int tempprice;
        int temprating;
        string temptype;
        this->flowerid.push_back(tempflowerid);
        this->flowername.push_back(tempflowername);
        this->price.push_back(tempprice);
        this->rating.push_back(temprating);
        this->type.push_back(temptype);

    }
    int* findminimumprice(string str){
        vector<int> index;
        for(int i=0;i<this->type.size();i++){
            if(this->type[i]==str){
                index.push_back(i);
            }
        }
    }
};

int main()
{
    int t = 2;
    Flower f;
    while (t--)
    {
        f.setelements();
    }
}