/**
 * @author : Aj dev
 * @coded_at: Aj dev labs
 * @email  : ajdevlabs16@gmail.com
 * @web    : https://ajdevlabs.github.io
 */

# Example: overloading << Operator to print Class Object

#include<iostream.h>
#include<conio.h>
class Time
{
    int hr, min, sec;
    public:
    // default constructor
    Time()
    {
        hr=0, min=0; sec=0;
    }
    
    // overloaded constructor
    Time(int h, int m, int s)
    {
        hr=h, min=m; sec=s;
    }
    
    // overloading '<<' operator
    friend ostream& operator << (ostream &out, Time &tm); 
};

// define the overloaded function
ostream& operator << (ostream &out, Time &tm)
{
    out << "Time is: " << tm.hr << " hour : " << tm.min << " min : " << tm.sec << " sec";
    return out;
}

void main()
{
    Time tm(3,15,45);
    cout << tm;
}
