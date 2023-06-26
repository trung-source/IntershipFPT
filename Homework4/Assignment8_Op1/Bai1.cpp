#include <iostream>
using namespace std;

int strleng(char*arr)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i;
}

void strcpyarr(char *&arr1,char *arr2)
{
    int Team =  strleng(arr2);
    arr1 = new char[Team + 1];
    int i;
    for(i = 0; i < Team; i++)
    {
        arr1[i] = arr2[i];
    }
    arr1[i] = '\0';
}

class String
{
	char* str;
	public:
		String();
		String(char* val);
		void nhap();
		void xuat();
		void congxau(String s);
		void xoa();
		void dao();
		void sosanh(String s);
		~String() { delete str; }
		friend String operator+(
         String& lhs,
         String& rhs);
};
String::String(){
	str = new char[1];
    str[0] = '\0';
	}
String::String(char* val){
if (val == NULL) {
        str = new char[1];
        str[0] = '\0';

    }
 
    else {
 
        str = new char[strleng(val) + 1];
 

        strcpyarr(str, val);
        str[strleng(val)] = '\0';
    }
	}


void String::dao()
{	

	int leng = strleng(str);
    char* temp = new char[leng+1];
    for(int i = 0; i < leng; i++)
    {
        temp[leng -1 - i] = str[i];
    }
   
    temp[leng] = '\0';
//    cout << "\nSDsdS: "<< temp << endl;
    
    delete [] str;
    str = temp;
    
}

void String::congxau(String s){
 	int leng = strleng(s.str) + strleng(str);
    char* temp = new char[leng+1];
    for(int i = 0; i < strleng(str); i++)
    {
        temp[i] = str[i];
    }
    for(int j = strleng(str); j < leng; j++)
    {
        temp[j] = s.str[j-strleng(str)];
    }
    temp[leng] = '\0';
//    cout << "\nSDS: "<< temp << endl;
    
    delete [] str;
    str = temp;

}

// Overloading the plus operator
String operator+( String& lhs,
                    String& rhs)
{
    int leng = strleng(lhs.str)
                 + strleng(rhs.str);
    char* temp = new char[leng+1];
    for(int i = 0; i < strleng(lhs.str); i++)
    {
        temp[i] = lhs.str[i];
    }
    for(int j = strleng(lhs.str); j < leng; j++)
    {
        temp[j] = rhs.str[j-strleng(lhs.str)];
    }
    temp[leng] = '\0';
    
 
    // String temp
    String s(temp);
 	
    // delete the buff[]
    delete[] temp;
 
    // Return the concatenated string
    return s;
}


void String::nhap(){
	cout<<"Nhap xau: "; 
	cin.getline(str,100);
}
void String::xuat(){
	cout<< "XAU: " << str << endl;
	cout<< "\tChieu dai xau: " << strleng(str) << endl;
}

void String::sosanh(String s){
	if(strleng(s.str) > strleng(str)){
		cout << "Chuoi 2 dai hon chuoi 1." << endl;
	}else if(strleng(s.str) < strleng(str)){
		cout << "Chuoi 1 dai hon chuoi 2." << endl;
	}else{
		cout << "2 chuoi co do dai bang nhau." << endl;
		bool check = true;
		for(int i = 0;i<strleng(str);i++){
			if(str[i]!= s.str[i]){
				check = false;
				break;
			}
		}
		if (check == true){
			cout << "\t2 chuoi tuong duong nhau" << endl;
		}else{
			cout << "\t2 chuoi khong giong nhau" << endl;
		}
	}
}



void String::xoa(){
	str = '\0';

}
int main ()
{	// Nhap, Xuat, Chieu dai
	String y;
	y.nhap();
	y.xuat();
	
	

	String x("sad");
	x.xuat();
	//So sanh
	y.sosanh(x);
	
	
	//Ghep
	cout << "GHEP: "<< endl;
	String z("try");
	z.xuat();

	cout << "s;" <<endl;
	y.congxau(z);
	
	y.xuat();
	// Ghep theo overloading
	String d("x");
	d.xuat();
	d = d+z;
	d.xuat();
	
	//DAO
	cout << "DAO: ";
	y.dao();
	y.xuat();
	
	
	
	
	//XOA
	y.xoa();
	y.xuat();
	
	
	return 0;

	
}
