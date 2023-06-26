#include<iostream>
#include<string>

#define CONG 0x0001//: 
#define TRU 0x0002//: 
#define NHAN 0x0004//: 
#define CHIA 0x0008//: 
#define MAX 0x0010//: 
#define MIN 0x0020//: 

using namespace std;



void Calculator(unsigned int type, float a, float b) {
	unsigned int all = (CONG|TRU|NHAN|CHIA|MAX|MIN);
	
//	while(type != 0){
	
	bool check_cong = false;
	bool check_tru = false;
	bool check_nhan = false;
	bool check_chia = false;
	bool check_max = false;
	bool check_min = false;
	
	
	
	if(type >= MAX){
		type = type - MAX;
		check_max = true;
	}
	if(type >= MIN){
		type = type - MIN;
		check_min = true;
	}
	if(type >= CHIA){
		type = type - CHIA;
		check_chia = true;
	}
	if(type >= NHAN){
		type = type - NHAN; 
		check_nhan = true;
	}
	if(type >= TRU){
		type = type - TRU;
		check_tru = true;
	}
	if(type >= CONG){
		type = type - CONG; 
		check_cong = true;
	}
	if (type == 0){
		if(check_cong){
		cout << "Phep cong: " << a+b << endl;
		}
		if(check_tru){
			cout << "Phep tru: " << a-b << endl;
		}
		if(check_nhan){
			cout << "Phep nhan: " << a*b << endl;
		}
		if(check_chia){
			cout << "Phep chia: " << a/b << endl;
		}
		if(check_min){
			float min = a;
			if (a>b) min = b;
			cout << "MIN: " << min << endl;
		}
		if(check_max){
			float max = a;
			if (a<b) max = b;
			cout << "MAX: " << max << endl;
		}
		cout << "END" << endl;
	}else{
		cout << "WRONG INPUT!!!" << endl;
	}
}

void Calculator2(string str,  float a, float b)
{	unsigned int type = 0;
	string deli = "|";
    int start = 0;
    int end = str.find(deli);
    while (end != -1) {
        if(str.substr(start, end - start) == "CONG"){
        	cout << "Phep cong: " << a+b << endl;
		}else if(str.substr(start, end - start) == "TRU"){
        	cout << "Phep tru: " << a-b << endl;
		}
		else if(str.substr(start, end - start) == "NHAN"){
        	cout << "Phep nhan: " << a*b << endl;
		}
		else if(str.substr(start, end - start) == "CHIA"){
        	cout << "Phep chia: " << a/b << endl;
		}
		else if(str.substr(start, end - start) == "MIN"){
        	float min = a;
			if (a>b) min = b;
			cout << "MIN: " << min << endl;
		}
		else if(str.substr(start, end - start) == "MAX"){
        		float max = a;
			if (a<b) max = b;
			cout << "MAX: " << max << endl;
		}
		else{
			cout << "WRONG INPUT!!" << endl;
		}
        start = end + deli.size();
        end = str.find(deli, start);
    }
    if(str.substr(start, end - start) == "CONG"){
        	cout << "Phep cong: " << a+b << endl;
		}else if(str.substr(start, end - start) == "TRU"){
        	cout << "Phep tru: " << a-b << endl;
		}
		else if(str.substr(start, end - start) == "NHAN"){
        	cout << "Phep nhan: " << a*b << endl;
		}
		else if(str.substr(start, end - start) == "CHIA"){
        	cout << "Phep chia: " << a/b << endl;
		}
		else if(str.substr(start, end - start) == "MIN"){
        	float min = a;
			if (a>b) min = b;
			cout << "MIN: " << min << endl;
		}
		else if(str.substr(start, end - start) == "MAX"){
        		float max = a;
			if (a<b) max = b;
			cout << "MAX: " << max << endl;
		}
		else{
			cout << "WRONG INPUT!!" << endl;
		}
}





//ANOTHER IMPLEMENT:
unsigned int Split(string str)
{	unsigned int type = 0;
	string deli = "|";
    int start = 0;
    int end = str.find(deli);
    while (end != -1) {
        if(str.substr(start, end - start) == "CONG"){
        	type +=CONG;
		}else if(str.substr(start, end - start) == "TRU"){
        	type +=TRU;
		}
		else if(str.substr(start, end - start) == "NHAN"){
        	type +=NHAN;
		}
		else if(str.substr(start, end - start) == "CHIA"){
        	type +=CHIA;
		}
		else if(str.substr(start, end - start) == "MIN"){
        	type +=MIN;
		}
		else if(str.substr(start, end - start) == "MAX"){
        	type +=MAX;
		}
        start = end + deli.size();
        end = str.find(deli, start);
    }
    if(str.substr(start, end - start) == "CONG"){
        	type +=CONG;
		}else if(str.substr(start, end - start) == "TRU"){
        	type +=TRU;
		}
		else if(str.substr(start, end - start) == "NHAN"){
        	type +=NHAN;
		}
		else if(str.substr(start, end - start) == "CHIA"){
        	type +=CHIA;
		}
		else if(str.substr(start, end - start) == "MIN"){
        	type +=MIN;
		}
		else if(str.substr(start, end - start) == "MAX"){
        	type +=MAX;
		}
    return type;
}



int main(){
	
	float a = 0;
	float b = 0;
	cout << "NHAP SO THU NHAT: ";
	cin >> a;
	cout << "NHAP SO THU HAI: ";
	cin >> b;


	string c;
	cout << "NHAP TO HOP PHEP TOAN (VD:TRU|CONG): ";
	
	cin >> c;
	unsigned int type = Split(c);
	cout << type << endl;
	
	Calculator(type,a,b);
	
	
	// CACH 2: NHAP PHEP NAO TRUOC THI RA PHEP DO
	cout << "\n\nCACH 2: " << endl;
	Calculator2(c,a,b);
	
	return 0;
	
};
