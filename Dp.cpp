#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    char st[100];
    int count=0;
    cout<<"entry string:"<<endl;
    cin.get(st,100);

    string tmp;
    cout<<"string: "<<st<<endl;
    cout<<"words with 2 letters:"<<endl;
    int N=2;
    istringstream ss(st);
    while(ss>>tmp) 
    {
        if(tmp.size()==N)
            cout<<tmp<<' ';
    }
    
    return 0;
}
