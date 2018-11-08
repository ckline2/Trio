#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void Sort(int &red, int &blue, int &green);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  Sort(red, blue, green);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void Sort(int &red, int &green, int &blue)
{
    if (red < blue) 
    {
        int temp = red;
        red = blue;
        blue = temp;
    }
    if (red < green) 
    {
        int temp = red;
        red = green;
        green = temp;
    }
    if (blue < green) 
    {
        int temp = blue;
        blue = green;
        green = temp;
    }
    return;
}
