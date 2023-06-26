#include <iostream>
using namespace std;
class HinhTuGiac {
	float width;
	float height;
public:
	virtual float TinhDienTich() {
		return 0;
	}

};


class HinhChuNhat : public HinhTuGiac {
	float width;
	float height;
public:
	HinhChuNhat(float x, float y) {
		width = x;
		height = y;
	}
	float TinhDienTich() {
		cout << "Dien tich hinh chu nhat: " << width*height << endl;
		return width*height;
	}
};

class HinhVuong : public HinhTuGiac {
	float a;
public:
	HinhVuong(float x) {
		a = x;
	}
	float TinhDienTich() {
		cout << "Dien tich hinh vuong: " << a * a << endl;
		return a * a;
	}
};

main()
{	float cdai = 0,crong = 0,cvuong = 0;
	cout<< "Nhap cac canh hinh chu nhat: " << endl;
	cout<< "\tChieu dai: ";
	cin >> cdai;
	cout<< "\tChieu rong: ";
	cin >> crong;
	
	cout<< "Nhap canh hinh vuong: ";
	cin >> cvuong;
	
	HinhVuong vuong(cvuong);
	HinhChuNhat nhat(cdai,crong);
	cout << endl;
	float s_1 = vuong.TinhDienTich();
	float s_2 = nhat.TinhDienTich();
	
	float x[5] = {s_1,s_2,s_1,s_2,s_1};
	cout << endl;
	cout << "Dien tich: ";
	for(int i = 0;i <= 4;i++){
		cout << x[i] << " ";
	}
	
}
