#include<iostream>
#include<math.h>
#include <fstream>
using namespace std;
int main()
{


int a =5, b= 3;
auto x= sqrt (pow(a,2) + pow (b,2));

cout << pow(a,2) << endl;
cout << pow(b,2) <<endl; 
cout << sqrt (pow(a,2) + pow(b,2)) << endl;

ofstream myfile;
myfile.open("Untitled-1.txt");
myfile << sqrt (pow(a,2) + pow(b,2))<< endl;
myfile.close();

return 0;
}
