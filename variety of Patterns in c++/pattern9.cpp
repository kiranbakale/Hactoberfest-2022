#include<iostream>
using namespace std;
int main()
{ 
     
     int i=1;
     int n;
     cin>>n;
     while (i<=n)
     {
        int j=1;
        int val=1;
        while(j<=i){
            while(((i+j)%)==0){
                cout<<"0";
                i++; 
            }
            
            j++;
        }
        cout<<endl;
        i++;
     }
     















    return 0;
}