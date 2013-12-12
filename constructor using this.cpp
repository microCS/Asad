#include<iostream.h>
#include<conio.h>
class MyDate
{
      public:
             MyDate()
             {
                     cout<<"\n parameter less contructor called:";
                     month=day=year=0;
             }
             MyDate(int month, int day, int year)
             {
                     cout<<"constructor with three parameters..:";
                     this->month=month;
                     this->day=day;
                     this->year=year;
             }
             ~MyDate()
                     void setmonth(int month)
                 {    
                     this->month=month;        
                 }
                     void setmonth(int month)
