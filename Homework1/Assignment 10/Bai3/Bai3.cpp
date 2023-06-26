#include <iostream>

using namespace std;

#define _CONG()\
	int n,s,sum=0;\
	cout << "\t+Nhap so cac so: ";\
	cin >> n;\
	for ( int i = 0; i < n ; i++ ){\
		cout << "\t\tNhap so thu "<< i + 1 << ": ";\
	cin >> s;\
	sum += s;\
}\
cout << "\t\t\tSUM: "<< sum << "\n" << endl;\

#define _TRU()\
int sub; \
cout << "\t+Nhap so bi tru: ";\
cin >> sub;\
cout << "\t\tNhap so cac so tru: ";\
cin >>  n;\
for ( int i = 0; i < n ; i++ ){\
	cout << " \t\tNhap so thu " << i + 1 << ": ";\
	int minus;\
	cin >> minus;\
	sub -= minus;  \
} \
cout << "\t\t\tMINUS: " << sub << "\n" << endl;\

#define _NHAN()\
int multi,num;\
cout << "\t+Nhap so cac so: ";\
cin >>  n;\
for ( int i = 0; i < n ; i++ ){\
	cout << "\t\tNhap so thu "<< i + 1 << ": ";\
		cin >> num;\
	if (i == 0){\
		multi = num;\
	}\
	else multi = multi * num;\
}\
cout << "\t\t\tMUL: " << multi << "\n" << endl;\

#define _CHIA() \
double div;\
cout << "\t+Nhap so bi chia: ";\
cin >> div;\
cout << "\t\tNhap so cac so chia: ";\
cin >> n;\
for ( int i = 0; i < n ; i++ ){\
	cout << " \t\tNhap so thu " << i + 1 << ": ";\
	int divider;\
	cin >> divider ;\
	div /= divider;  \
} \
cout << "\t\t\tDIV: " << div << "\n" << endl;\

#define input(type, value)\
type value;\
cin >> value;\

#define output(value)\
cout << value;

int main(){
	cout << "PHEP CONG:" << endl;
	_CONG();
	cout << "PHEP TRU:" << endl;
	_TRU();
	cout << "PHEP NHAN:" << endl;
	_NHAN();
	cout << "PHEP CHIA:" << endl;
	_CHIA();
	input(int, a);
	output(a);



	return 0;
}
