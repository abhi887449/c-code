#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    // 👻 declaration of set
    set<int> st;
    
    // 👻 insertion in set
    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(3); // {1,2,3}
    st.insert(3); // {1,2,3}
    cout<<"1. ";
    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<"\n";
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same
    
    // 👻 searching in set
    auto it = st.find(3); // if present then return iterator to that element
    cout<<"2. "<<*(it)<<endl;
    auto it2 = st.find(5); // if not present then return st.end();
    cout<<"3. "<<(it2==st.end())<<endl;
    
    // 👻 deletion in set
    
    //Method 1
    st.erase(3); // {1,2}
    cout<<"4. ";
    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;
    
    st.insert(4); // {1,2,4}
    st.insert(5); // {1,2,4,5}
    st.insert(6); // {1,2,4,5,6}
    st.insert(7); // {1,2,4,5,6,7}
    cout<<"5. ";
    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;
    
    // Method 2
    auto it3 = st.find(4);
    auto it4 = st.find(6);
    st.erase(it3,it4); // after erase {1,2,7} [first,last]
    cout<<"6. ";
    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;
    
    int cnt = st.count(1); // if present return 1 else 0
    cout<<"7. "<<cnt<<endl;
    
    auto it5 = st.lower_bound(2);
    cout<<"8. "<<*(it5)<<endl;
    auto it6 = st.upper_bound(6);
    cout<<"9. "<<*(it6)<<endl;
    
    return 0;
}