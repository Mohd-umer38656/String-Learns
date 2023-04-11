#include<iostream>
using namespace std;
int nameLeng(char arr[]){
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
    //calling the lenght Function
    int ans = nameLeng(name);
    cout<<"The Length of the Name : "<<ans<<endl;
  

}