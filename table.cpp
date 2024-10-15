#include<iostream>
using namespace std;

int main()
{
    int value = 0;
    int ret = 0;


    cout<<"Enter a number: ";
    cin>>value;

    for(int i = 1; i <= 10; i++ )
    {
        ret = i * value;

        cout<<ret<<"\n";
    }

}