//Program to store time in hours and minute using friend function
#include<iostream>
using namespace std;

class TIME 
{
  int hours, minutes,add;
  public:
  void input() 
{
  cout << "Enter the value of hours and minutes :";
  cin >> hours>>minutes;
 }
 //creating friend function
  friend void add(TIME &t);
  void display() 
 {
     hours=hours*60;
   cout << "The sum is :" <<hours+minutes;
 }
};
//creating function to add the object
  void add(TIME &t) 
{
   t.add = t.hours + t.minutes;
}
int main() 
  {
   TIME t1;
   t1.input();
   
   add(t1);
   
   t1.display();
   return 0;
}
