#include<iostream>

using namespace std;

int main()
{
    int value = 0;
    int rev = 0;
    
    cout<<"Enter the Number";
    cin>>value;
    
    int originalValue = value;
    
    while(value > 0)
    {
        int digit = value % 10;
        rev = rev * 10 + digit;
        value /=10;
        
    }
    
    if(originalValue == rev)
    {
        cout<<rev<<"is pallindrome";
    }
    else
    {
        cout<<"not pallindrome";
    }
}
