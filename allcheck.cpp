#include<bits/stdc++.h>
using namespace std;

bool isInteger(string str)
{
    for (int i = 0; i < str.length(); i++)
        if ((str[i]>=48 && str[i]<=57)==false)
            return false;

    return true;
}

bool isIdentifier(string str)
{
    {

    int num=0,n;
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


    if(n==1)
        return false;
    else
        return true;


}


}


int main()
{
int i,n;
string str1;

cout<<"how many times you want to check : ";
cin>>n;

while(n--){


cout<<"\nEnter  : ";
cin>>str1;

if (isInteger(str1))
{
    cout<<"IT'S A NUMBER";
}

else if(str1=="#"||str1=="@"||str1=="~"||str1=="?"||str1==","||str1=="."||str1=="("||str1==")"||str1=="{"||str1=="}"||str1=="["||str1=="]")
{
    cout<<"IT'S  A SPECIAL CHARACTER ";
}
else if(str1=="+"||str1=="-"||str1=="*"||str1=="/"||str1=="%"||str1=="&"||str1=="|"||str1=="^"||str1=="!")
{
    cout<<"IT'S  A OPERATOR ";
}

else if(str1=="F1"||str1=="F2"||str1=="F3"||str1=="F4"||str1=="F5"||str1=="F6"||str1=="F7"||str1=="F8"||str1=="F9"||str1=="F10"||str1=="F11"||str1=="F12")
{
    cout<<"IT'S  A FUNCTION KEY ";
}
else if(isIdentifier(str1))
{
    cout<<"IT'S  A IDENTIFIER\n";
    if (str1=="int"||str1=="asm"||	str1=="double"||str1=="new"||str1=="switch"||str1=="auto"||str1=="else"||str1=="operator"||str1=="template"||str1=="break"||str1=="enum"||str1=="private"||str1=="this"||str1=="case"||str1=="enum"||str1=="extern"||str1=="protected"||str1=="throw"||str1=="catch"||str1=="float"||str1=="try"||str1=="public"||str1=="char"||str1=="for"||str1=="register"||str1=="typedef"||str1=="class"||str1=="friend"||str1=="return"||str1=="union"||str1=="goto"||str1=="const"||str1=="short"||str1=="unsigned"||str1=="continue"||str1=="if"||str1=="signed"||str1=="virtual"||str1=="default"||str1=="inline"||str1=="typeof"||str1=="delete"||str1=="int"||str1=="void"||str1=="long"||str1=="do"||str1=="while"||str1=="static"||str1=="volatile"||str1=="struct")
    {
    cout<<"IT'S A KEYWORD";
    }
    else{
        cout<<"IT'S A VARIABLE";
    }

}
else{
    cout<<"IT'S NOT A NUMBER/KEYWORD/SPECIAL CHARACTER/OPERATOR/FUNCTION KEY";
}
}

cout<<"\n Done. \n";

return 0;
}
