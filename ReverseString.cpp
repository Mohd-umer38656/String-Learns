#include<iostream>
using namespace std;
void reverseString(char name[],int ans){
    int si = 0;
    int ei = ans-1;
    while(si < ei){
        swap(name[si++],name[ei--]);
    }
}
int stringLength(char arr[]){
    int count = 0;
    for(int i= 0;arr[i] !=  '\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter the Name : ";
    cin>>name;
    cout<<endl;
    cout<<"Printing the Name : ";
    cout<< name;
    cout<<endl;
    //calling the length Function
    int ans = stringLength(name);
    cout<<"This is a Length of the String : "<<ans<<endl;
    cout<<endl;
    //calling the Reverse Function
    reverseString(name,ans);
    cout<<"Printing the Name : ";
    cout<< name;

}