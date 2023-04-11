#include<iostream>
using namespace std;
void leetcodeReverse(char s[]){
    int si = 0;
    int ei = s.size() -1;
    while(si < ei ){
        swap(s[si++],s[ei--]);
    }
}
int main()
{
    char s[20];
    cout<<"Enter the Name : ";
    cin>>s;
    cout<<endl;
    cout<<"Printing the Name : ";
    cout<<s;
    //calling the LeetcodeFunction
    leetcodeReverse(s);
    cout<<"Printing the Name : ";
    cout<<s;
}