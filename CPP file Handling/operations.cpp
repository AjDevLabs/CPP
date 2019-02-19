/**
 * @author : Aj dev
 * @coded_at: Aj dev labs
 * @email  : ajdevlabs16@gmail.com
 * @web    : https://ajdevlabs.github.io
 */
#include <iostream>
#include<conio.h>
#include <fstream>

using namespace std;

int main()
{
    fstream st; // Creating object of fstream class
    st.open("E:\studytonight.txt",ios::out);  // Creating new file
    if(!st) // Checking whether file exist
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created"<<endl;
        st<<"Hello Friends"; //Writing to file
        
        // Checking the file pointer position
        cout<<"File Pointer Position is "<<st.tellp()<<endl;  
        
        st.seekp(-1, ios::cur); // Go one position back from current position
        
        //Checking the file pointer position
        cout<<"As per tellp File Pointer Position is "<<st.tellp()<<endl; 
        
        st.close(); // closing file
    }
    st.open("E:\studytonight.txt",ios::in);   // Opening file in read mode
    if(!st) //Checking whether file exist
    {
        cout<<"No such file";
    }
    else
    {
        char ch;
        st.seekg(5, ios::beg);  // Go to position 5 from begning.
        cout<<"As per tellg File Pointer Position is "<<st.tellg()<<endl; //Checking file pointer position
        cout<<endl;
        st.seekg(1, ios::cur); //Go to position 1 from beginning.
        cout<<"As per tellg File Pointer Position is "<<st.tellg()<<endl; //Checking file pointer position
        st.close(); //Closing file
    }
    getch();
    return 0;
}
