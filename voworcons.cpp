#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter : ";
    cin>>c;

    if((c>=65 && c<=90)||(c>=97 && c<=122))
    {
        cout<<"it's an alphabet\n";
        if(c==65 || c==69 || c==73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117)
            cout<<"and it's  vowel\n";
        else
            cout<<"and it's  consonant\n";
    }
    else
        cout<<"it's not an alphabet\n";

    return 0;
}
