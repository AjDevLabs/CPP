/**
 * @author : Aj dev
 * @coded_at: Aj dev labs
 * @email  : ajdevlabs16@gmail.com
 * @web    : https://ajdevlabs.github.io
 */
#include <iostream>
#include<conio>
#include <fstream>

using namespace std;

int main()
{
    fstream st; // Step 1: Creating object of fstream class
    st.open("E:\studytonight.txt",ios::out);  // Step 2: Creating new file
    if(!st) // Step 3: Checking whether file exist
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created";
        st<<"Hello";    // Step 4: Writing to file
        st.close(); // Step 5: Closing file
    }
    getch();
    return 0;
}
