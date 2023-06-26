#include<iostream>
#include<string.h>
#include <conio.h>
using namespace std;

struct NhanVien{
	char Hoten[30];
	char GioiTinh[10];
	int Exp_year;
	int level;
};

void nhap(NhanVien &nv){
    cout << ("\nNhap ten: "); cin>> (nv.Hoten);
    cout << ("\nNhap gioi tinh: "); cin >> (nv.GioiTinh);
    cout << ("\nNhap so nam kinh nghiem: ") ; cin >> nv.Exp_year;
    cout << ("\nNhap level hien tai: ") ; cin >> nv.level;
    while (nv.level >= 5 && nv.level <= 1) {
        cout << ("\nNhap level hien tai: "); cin >> nv.level;
    }
}
 
void nhapN(NhanVien a[], int n){
    cout << ("\n____________________________________\n") << endl;
    for(int i = 0; i< n; ++i){
        cout << "\nNhap nhan vien thu:" << i+1 << endl;
        nhap(a[i]);
    }
    cout <<("\n____________________________________\n") << endl;
}

void xuat(NhanVien nv){
    cout << "\nHo ten SV:" << nv.Hoten << endl;
    cout << "\nGioi tinh: " << nv.GioiTinh << endl;
    cout << "\nso nam kinh nghiem : " << nv.Exp_year << endl;
    cout << "\n level hien tai: " << nv.level << endl;
}
 
void xuatN(NhanVien a[], int n){
    cout << "\n____________________________________\n" << endl;
    for(int i = 0;i < n;++i){
        cout << "\nThong tin Nhan Vien thu: " << i+1 << endl;
        xuat(a[i]);
    }
    cout << "\n____________________________________\n\n\n" << endl;
}



int main (){
	int N = 0;
	int key = 0;
	bool daNhap = false;
	do{
        cout << ("Nhap so luong nhan vien: ");
        cin >> N;
    }while(N <= 0);
    NhanVien a[N];
    while(true){
    	system("cls");
        cout << "******************************************\n";
        cout << "**      1. Nhap du lieu                 **\n";
       	cout << "**      2. In danh sach nhan vien       **\n";
        cout << "**      3. Nhap lai so luong nhan vien  **\n";
        cout << "**      4. Thoat                        **\n";
        cout << "******************************************\n";
       	cout << "**       Nhap lua chon cua ban          **\n";
        cin >> key;
        switch(key){
            case 1:
                cout << "\nBan da chon nhap DS nhan vien!";
                nhapN(a,N);
                cout << "\nBan da nhap thanh cong!";
                daNhap = true;
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
            case 2:
                if(daNhap){
                   cout << "\nBan da chon xuat DS nhan vien!";
                    xuatN(a,N);
                }else{
                    cout << "\nNhap DS nhan vien truoc!!!!";
                }
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
            case 3:
            	cout << "\nBan da chon nhap lai so luong DS nhan vien!";
            	cout << ("\nNhap so luong nhan vien: ");
        		cin >> N;
            	break;
            case 4:
                return 0;
            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
	}

	

}


	

	return 0;
}
