//Program to find difference between min and max by using functions


#include<iostream>

using namespace std;

int main()
{
    int ar[10],max,min;
    cout<<"Enter the sequence : ";
    for(int i=0;i<10;i++)
        cin>>ar[i];
    int findmin(int chk[10]);
    int findmax(int chek[10]);
    min= findmin(ar);
    max= findmax(ar);
    

    cout<<"The max is : "<<max<<"\nThe min is : "<<min;
    cout<<"\nThe difference is : "<<(max-min)<<"\n";
    return 0;
}

int findmin(int chk[10])
{
  int min=chk[0];
  for(int i=1;i<10;i++)
  {
    if(min>chk[i])
      {
         int temp;
         temp=min;
         min=chk[i];
         chk[i]=temp;
      }
  }
  return min;
}

int findmax(int chek[10])
{
  int max=chek[9];
    for(int i=9;i>0;i--)
    {
        if(max<chek[i])
        {
            int temp;
            temp=max;
            max=chek[i];
            chek[i]=temp;
        }
    }
  return max;
}
