#include<iostream>
#include<string.h>


using namespace std;



using namespace std;

int main() {
    char *str=new char[100];
    
  	cout<<"Nhap chuoi: ";
  	cin.getline (str,100);
    cout << "Chuoi vua nhap: " << str << endl;
    
    cout<<"Chuoi dao nguoc: ";
	 for(int i=(strlen(str)-1);i>=0;i--)
	 { cout<<*(str+i);
	 } 

     delete[]str;
     return 0;
}
 

