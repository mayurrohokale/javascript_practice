#include<iostream>

using namespace std;

int main()
{
    int value = 0;
    int ret = 0;
    
    cout<<"Enter Number";
    cin>>value;
    
    int originalValue = value;
    
    while(value > 0)
    {
        int digit = value % 10;
        ret += digit * digit * digit;
        value /= 10;
        
    }
    
    if(ret == originalValue)
    {
        cout<<"Its a armstrong";
    }
    else 
    {
        cout<<"Its not an armstrong number";
    }
}