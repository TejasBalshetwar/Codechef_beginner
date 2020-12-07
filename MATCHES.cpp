#include <iostream>
using namespace std;

int main() {
 
     
     int t;
     cin>>t;
     
     while(t--!=0)
     {
         int a,b;
         cin>>a>>b;
         
         
         int sum=a+b;
         int number_mat=0;
         while(sum>0)
         {
             int d=sum%10;
             
             if(d==0 || d==6 || d==9)
             {
                 number_mat=number_mat+6;
             }
            else if(d==2 || d==3 || d==5)
             {
                 number_mat=number_mat+5;
             }
             else if(d==1)
             {
                 number_mat=number_mat+2;
             }
            else if(d==4)
             {
                 number_mat=number_mat+4;
             }
             else if(d==7)
             {
                 number_mat=number_mat+3;
             }
             else if(d==8)
             {
                 number_mat=number_mat+7;
             }
             
             
             sum=sum/10;
             
         }
         cout<<number_mat<<endl;
         
     }
	return 0;
}
