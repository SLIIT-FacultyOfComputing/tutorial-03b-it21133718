#include <iostream>
using namespace std;

void print(int len, int wth);

void input(int &length, int &width);


// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len <<endl;
   cout << "Width  : " << wth << endl;
}

// Implement the Input Function here

//1.Yes

//2.Modify the parameter,length and width as reference type parameters

void input(int &length, int &width)
{
  cout<<"Enter length :";
  cin>>length;
  
  cout<<"Enter width :";
  cin>>width;
}
//3.yes