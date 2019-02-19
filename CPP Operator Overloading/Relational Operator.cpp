/**
 * @author : Aj dev
 * @coded_at: Aj dev labs
 * @email  : ajdevlabs16@gmail.com
 * @web    : https://ajdevlabs.github.io
 */

#Overloading Relational Operator in C++

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
    
    //overloading '==' operator
    friend bool operator==(Time &t1, Time &t2);
};

/* 
    Defining the overloading operator function
    Here we are simply comparing the hour, minute and
    second values of two different Time objects to compare
    their values
*/
bool operator== (Time &t1, Time &t2)
{
    return ( t1.hr == t2.hr && t1.min == t2.min && t1.sec == t2.sec );
}

void main()
{
    Time t1(3,15,45);
    Time t2(4,15,45);
    if(t1 == t2)
    {
        cout << "Both the time values are equal";
    }   
    else 
    {
        cout << "Both the time values are not equal";
    }
}
