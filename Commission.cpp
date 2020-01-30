A C++ program that accepts the name of a salesperson and their monthly total
sales and computes the commission to be earned.
#include<cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
/* The header <iomanip> is part of the Input/output library of the C++ Standard Library that defines the manipulator functions such as
resetiosflags() , setiosflags() , setbase() , setfill() , setprecision() , and setw() . */
using namespace std;
int main()
{
double monthly_total_sales, commission_due; 
string name;
cout<<" Enter your First name: "<<endl;    
cin>>name;
cout<<" Enter your Montly sales in Kenyan Shillings: "<<endl;
cin>>monthly_total_sales;
if((monthly_total_sales>=20000)&&(monthly_total_sales<=80000))
{
/*Note: When float field is set to fixed, 
the value is represented with exactly as many digits in the decimal part as specified by the precision field.*/                                                              
commission_due=(monthly_total_sales*2)/100;                                                              
cout<<" Name: \t\t\t "<<name<<endl;   
cout<<" Monthly sales: \t"<<fixed<<setprecision(2)<<monthly_total_sales<<endl;
cout<<" Commission Due:\t "<<fixed<<setprecision(2)<<commission_due<<endl<<endl;                                                             
}    
else if((monthly_total_sales>80000)&&(monthly_total_sales<=120000))
{
commission_due=(monthly_total_sales*5)/100;                                                              
cout<<" Name: \t\t\t"<<name<<endl;   
cout<<" Monthly sales: \t"<<fixed<<setprecision(2)<<monthly_total_sales<<endl;
cout<<" Commission Due:\t "<<fixed<<setprecision(2)<<commission_due<<endl<<endl;                                                             
}     
else if(monthly_total_sales>120000)
{
commission_due=(monthly_total_sales*10)/100;                                                              
cout<<" Name: \t\t\t"<<name<<endl;   
cout<<" Monthly sales: \t "<<fixed<<setprecision(2)<<monthly_total_sales<<endl;
cout<<" Commission Due:\t"<<fixed<<setprecision(2)<<commission_due<<endl<<endl;                                                             
} 
else if((monthly_total_sales<20000)&&(monthly_total_sales>=0))
{                                                           
cout<<" Name: \t\t\t"<<name<<endl;   
cout<<" Monthly sales: \t "<<monthly_total_sales<<endl;
cout<<" The amount of the Monthly sales is less than 20000\t "<<endl<<endl;                                                             
} 
else
{
cout<<" Your monthly total sales is probably a negative amount or an invalid input. \n Please check correctly your monthly total sales and try again... "<<endl<<endl;     
}
system ("PAUSE");
return EXIT_SUCCESS;
}
