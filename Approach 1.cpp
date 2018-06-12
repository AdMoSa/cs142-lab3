#include<iostream>

using namespace std;

class pic
{
  public:
  int rRGB,gRGB,bRGB,pos[4];
  pic()
  {
    rRGB = gRGB = bRGB = 5;
    pos[0] = pos[1] = pos[2] = pos[3] = 45; 
  }
  
  void display()
  {
	cout<<"Colour values are \n";   
	cout<<"Red : "<< rRGB << endl <<"Green : "<< gRGB << endl <<"Blue : "<< bRGB << endl;
   	cout<<"Position values are \n";
 	cout<<"North : "<< pos[0]<<endl<<"South : "<< pos[1]<<endl<<"East : "<< pos[2]<<endl<<"West : "<< pos[3]<<endl;
  }
  void add2pic(pic temp)
  {
  	if(pos[0]== temp.pos[0]&&pos[1]== temp.pos[1]&&pos[2]== temp.pos[2]&&pos[3]== temp.pos[3])
        {
		rRGB += temp.rRGB;
		gRGB += temp.gRGB;
		bRGB += temp.bRGB;
        }
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
