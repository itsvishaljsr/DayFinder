// Day finder Program v1
//....vishal  prajapati.....

#include<iostream>

 using namespace std;
 
 class dayfinder
 {
private:
      int year, year_odd1 , year_odd2 ;
       int odd_days, date, y;
       string month;
    
public:

     void dateInput()
     {
         cout<< "Format: <date> <month> <year>\nExample: 1 january 2021\n"<<"Enter date: ";
         cin>> date >> month >> year ;
     }
     void yearOddDays()
     {
        int yearq = ( year / 100 ) ;
        int yearr = ( year % 100 ) - 1;
        
         if ( yearq % 4 == 0 )
         {
             year_odd1 = 0;
         }
         else
         {
            int yearq_q =  yearq % 4;
            
            if ( yearq_q == 1 )
            {
                year_odd1 = 5;
            }
            if ( yearq_q == 2 )
            {
                year_odd1 = 3; 
            }
            if ( yearq_q == 3 )
            {
                year_odd1 = 1;
            }
         } 
        
        year_odd2 = ( ( yearr / 4 ) * 2 ) + ( yearr - ( yearr / 4 ) ); 
     }
     
     void leapYearCheck() 
     {
         if ( year % 100 == 0 )
         {
             if ( year % 400 == 0 )
             {
                 y = 1;
             }
             else
             {
                 y = 0;
             }
         }
         else
         {
             if ( year % 4 == 0 )
             {
                 y = 1;
             }
             else
             {
                 y = 0;
             }
         }
 
     }
     void oddDaysFind()
     {
         if ( y == 1 )
         {
                     if ( month == "january" )
                    {
                        odd_days = date;
                    } 
                    if ( month == "feburary" )
                    { 
                        odd_days = ( 31 + date ) % 7;
                    }
                    if ( month == "march" )
                    {
                        odd_days = ( 31 + 29 + date ) % 7;
                     }
                    if ( month == "april" )
                    {
                       odd_days = ( 31 + 29 + 31 + date ) % 7;
                     }
                    if ( month == "may" )
                    {
                       odd_days = ( 31 + 29 + 31 + 30 + date ) % 7;
                    }
                   if ( month == "jun" )
                    {
                          odd_days = ( 31 + 29 + 31 + 30 + 31 + date ) % 7;
                     }
                    if ( month == "july" )
                    {
                        odd_days = ( 31 + 29 + 31 + 30 + 31 + 30 + date ) % 7;
                    }
                    if ( month == "august" )
                    {   
                        odd_days = ( 31 + 29 + 31 + 30 + 31 + 30 + 31 + date ) % 7;
                    }
                    if ( month == "september" )
                    {
                            odd_days = ( 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + date ) % 7;
                    }
                    if ( month == "october" )
                    {
                            odd_days = ( 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + date ) % 7;
                    }
                    if ( month == "november" )
                    {
                           odd_days = ( 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + date ) % 7;  
                    }
                    if ( month == "december" )
                    {
                          odd_days = ( 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + date ) % 7;
                    }
         
         }
         else
         {
                     if ( month == "january" )
                    {
                        odd_days = date;
                    } 
                    if ( month == "feburary" )
                    { 
                        odd_days = ( 31 + date ) % 7;
                    }
                    if ( month == "march" )
                    {
                        odd_days = ( 31 + 28 + date ) % 7;
                     }
                    if ( month == "april" )
                    {
                       odd_days = ( 31 + 28 + 31 + date ) % 7;
                     }
                    if ( month == "may" )
                    {
                       odd_days = ( 31 + 28 + 31 + 30 + date ) % 7;
                    }
                   if ( month == "jun" )
                    {
                          odd_days = ( 31 + 28 + 31 + 30 + 31 + date ) % 7;
                     }
                    if ( month == "july" )
                    {
                        odd_days = ( 31 + 28 + 31 + 30 + 31 + 30 + date ) % 7;
                    }
                    if ( month == "august" )
                    {
                        odd_days = ( 31 + 28 + 31 + 30 + 31 + 30 + 31 + date ) % 7;
                    }
                    if ( month == "september" )
                    {
                            odd_days = ( 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + date ) % 7;
                    }
                    if ( month == "october" )
                    {
                            odd_days = ( 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + date ) % 7;
                    }
                    if ( month == "november" )
                    {
                           odd_days = ( 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + date ) % 7;  
                    }
                    if ( month == "december" )
                    {
                          odd_days = ( 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + date ) % 7;
                    }             
         }
       
    }
     
     void dayFind()
     {
         int daycode;
         int total_odd_days;
         
         total_odd_days = odd_days + year_odd1 + year_odd2 ;
         
         daycode = ( total_odd_days ) % 7;
        
         cout<< "\n" ;
     
        if ( daycode == 1 ) 
        {
            cout<<"Day is Monday";
        }
        if ( daycode == 2 )
        {
            cout<< "Day is Tuesday";
        }
        if ( daycode == 3 )
        {
            cout<< "Day is Wednesday";
        }
        if ( daycode == 4 )
        {
            cout<< "Day is Thursday";
        }
        if ( daycode == 5 )
        {
            cout<< "Day is Friday";
        }
        if ( daycode == 6 )
        {
            cout<< "Day is Saturday";
        }
        if ( daycode == 7 || daycode == 0 )
        {
            cout<< "Day is Sunday";
        }
     cout<<endl;
     }
 };
 
int main(){
 
      dayfinder problem1;
      
      problem1.dateInput();
      problem1.yearOddDays();
      problem1.leapYearCheck();
      problem1.oddDaysFind();
      problem1.dayFind();
 
    return 0;
}