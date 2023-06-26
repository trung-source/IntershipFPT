#include<iostream>

using namespace std;

class hanghoa
{
public:
	char mahang[2];
	char tenhang[20];
	char donvitinh[10];
	float dongia, soluong, thanhtien;
	
void nhap()
{
	cout << "Nhap ma hang : "; cin >> mahang;
	cout << "Nhap ten hang : "; cin >> tenhang;
	cout << "Nhap don vi tinh : "; cin >> donvitinh;
	cout << "Nhap don gia : "; cin >> dongia;
	cout << "Nhap so luong : "; cin >> soluong;
}
};

class subhanghoa : public hanghoa
{
private:
	float dongiavanchuyen, congvanchuyen;
public:
	void nhap()
{
	cout << "Nhap ma hang : "; cin >> mahang;
	cout << "Nhap ten hang : "; cin >> tenhang;
	cout << "Nhap don vi tinh : "; cin >> donvitinh;
	cout << "Nhap don gia : "; cin >> dongia;
	cout << "Nhap don gia van chuyen : "; cin >> dongiavanchuyen;
	cout << "Nhap so luong : "; cin >> soluong;
}
	void tinhcongvanchuyen() {
		congvanchuyen = soluong * dongiavanchuyen;
		cout << "Tien cong van chuyen: " << congvanchuyen << " " << donvitinh << endl;
	}
	void tinhthanhtien() {
		thanhtien = congvanchuyen + soluong * dongia;
		cout << "Tong thanh tien: " << thanhtien << " " << donvitinh << endl;
	}
};

int main() {
	subhanghoa hang1;
	hang1.nhap();
	hang1.tinhcongvanchuyen();
	hang1.tinhthanhtien();
}
