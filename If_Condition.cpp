/*A program to find maximum between three numbers that a user inputs*/
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double first_number, second_number, third_number;
cout<<" Enter the first number: "<<endl;
cin>>first_number;
cout<<" Enter the second number: "<<endl;      
cin>>second_number;
cout<<" Enter the Third number: "<<endl;      
cin>>third_number;
if((first_number>second_number)&&(first_number>third_number))
{
cout<<" The First number "<<first_number<<" is the maximum number between "<<second_number<<" and "<<third_number<<endl<<endl;
}
else if ((second_number>first_number)&&(second_number>third_number))
{
cout<<" The Second number "<<second_number<<" is the maximum number between "<<first_number<<" and "<<third_number<<endl<<endl;
}
else if((second_number==first_number)&&(second_number==third_number))
{
cout<<" The three numbers entered have the same values "<<endl<<endl;
}
else 
{
cout<<" The Third number "<<third_number<<" is the maximum number between "<<first_number<<" and "<<second_number<<endl<<endl;   
}
system ("PAUSE");
return EXIT_SUCCESS;
}
