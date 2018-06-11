//Program to find difference between min and max


#include<iostream>

using namespace std;

int main()
{
    int ar[10];
    cout<<"Enter the sequence : ";
    for(int i=0;i<10;i++)
        cin>>ar[i];
    int min=ar[0];
    for(int i=1;i<10;i++)
    {
        if(min>ar[i])
        {
            int temp;
            temp=min;
            min=ar[i];
            ar[i]=temp;
        }
    }
    int max=ar[9];
    for(int i=9;i>0;i--)
    {
        if(max<ar[i])
        {
            int temp;
            temp=max;
            max=ar[i];
            ar[i]=temp;
        }
    }

    cout<<"The max is : "<<max<<"\nThe min is : "<<min;
    cout<<"\nThe difference is : \n"<<(max-min);
    return 0;
}
