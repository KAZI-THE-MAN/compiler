//write a program to check variable valid or not
#include<iostream>
using namespace std;

int main()
{
    string str;
    int num=0,n;
    cout<<"enter a string or letter: ";
    cin>>str;

    if((str[0]>=65 && str[0]<=90) || (str[0]>=97 && str[0]<=122) || str[0]==36 || str[0]==95)
    {
         for(int i=1;i<str.length();i++)
         {
             if((str[i]>=48 && str[i]<=57) || (str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) || str[i]==36 || str[i]==95)
         {
            num++;
         }
         }


         if(num==str.length())
         {
             n=0;
         }
         }
         else{
            n=1;
         }


    if(n==1 || (str=="auto" || str=="double" || str=="int" || str=="struct" || str=="break" || str=="else" || str=="long" ||
      str=="switch" || str=="case" || str=="enum" || str=="register" || str=="typedef" || str=="char" ||
      str=="extern" || str=="return" || str=="union" || str=="const" || str=="float" || str=="short" ||
      str=="unsigned" || str=="continue" || str=="for" || str== "signed" || str=="void" || str=="default" ||
      str=="goto"|| str=="sizeof" || str=="voltile" || str=="do" || str=="if" || str=="static" || str=="while"))
        cout<<"invalid variable";
    else
        cout<<"variable is valid";


}

