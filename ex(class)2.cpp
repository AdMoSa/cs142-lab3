#include<iostream>

using namespace std;

class pos
{
 	public:
	int N,S,E,W;
        pos()
        {
		N = S = E = W = 45;
	}
        int equal(pos temp)
        {
    		if(N==temp.N&&S==temp.S&&E==temp.E&&W==temp.W)
            	    return 1;
		else
		    return 0;
        }
};
class pic
{
  public:
  int rRGB,gRGB,bRGB,eq;
  pos pos1;
  pic()
  {
    rRGB = gRGB = bRGB = 5;
  }
  
  void display()
  {
	cout<<"eq value is : "<<eq;	
	cout<<"Colour values are \n";   
	cout<<"Red : "<< rRGB << endl <<"Green : "<< gRGB << endl <<"Blue : "<< bRGB << endl;
   	cout<<"Position values are \n";
 	cout<<"North : "<< pos1.N <<endl<<"South : "<< pos1.S <<endl<<"East : "<< pos1.E <<endl<<"West : "<< pos1.W <<endl;
  }
  void add2pic(pic temp)
  {
        eq = pos1.equal(temp.pos1);
  	if(eq==1)
        {
		rRGB += temp.rRGB;
		gRGB += temp.gRGB;
		bRGB += temp.bRGB;
        }
        else
          cout<<"Position don't match "<< endl;
  }
};

int main()
{
	pic pic1,pic2;
        pic1.display();
        pic1.add2pic(pic2);
        pic1.display();
        return 0;
}
