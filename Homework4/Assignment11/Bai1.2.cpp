#include<iostream>

using namespace std;


int main()
{
    int choice;
     
    try
    {
        cout<<"Chon 1 so: "; 
        cin>>choice;
         
        if(choice == 0)         cout<<"Hello!"<<endl;
        else if(choice == 1)    throw (100);    //Int
        else if(choice == 2)    throw ('x');    //Char
        else if(choice == 3)    throw (1.23f);  //Float
        else    cout<<"Bye Bye !!!"<<endl;
    }
    catch(int a)
    {
        cout<<"Int: "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"Char: "<<b<<endl;
    }   
    catch(float c)
    {
        cout<<"Float: "<<c<<endl;
    }       
     
    return 0;
}
