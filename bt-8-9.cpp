#include <iostream>
#include <string>

using namespace std;


bool isNumber(const string& str)
{
    for (int i = 0;i<str.length();i++) {
        if (std::isdigit(str[i]) == 0) return true;
    }
    return false;
}


int main(){
    
    int a;
    string str;
//    char str2[100];
while(isNumber(str)){
	
}
    printf("NHAP DAY SO NGUYEN: ");
    cin >> str;
//    cout << str.length() << endl;

    for(int i = 0;i<str.length();i++){
    	float a = (float(str[i])-48)/2;
    	cout << a << endl;

	}
    



    return 0;
}
