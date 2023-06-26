#include<iostream>
#include<string.h>
#include <conio.h>
using namespace std;

struct SinhVien{
	char Hoten[30];
	char Account[20];
	int mssv;

};

void nhap(SinhVien &sv){
	cout << ("\nNhap account: "); cin >> (sv.Account);
    cout << ("\nNhap ten: "); cin>> (sv.Hoten);
    cout << ("\nNhap MSSV: ") ; cin >> sv.mssv;
   
}
 
void nhapN(SinhVien a[], int n){
    cout << ("\n____________________________________\n") << endl;
    for(int i = 0; i< n; ++i){
        cout << "\n\nNhap sinh vien thu:" << i+1 << endl;
        nhap(a[i]);
    }
    cout <<("\n____________________________________\n") << endl;
}

void xuat(SinhVien sv){
	cout << "\nTai Khoan: " << sv.Account;
    cout << "\nHo ten SV: " << sv.Hoten;
    cout << "\nMSSV : " << sv.mssv;
}
 
void xuatN(SinhVien a[], int n){
    cout << "\n____________________________________\n" << endl;
    for(int i = 0;i < n;++i){
        cout << "\nThong tin sinh vien thu: " << i+1 << endl;
        xuat(a[i]);
    }
    cout << "\n____________________________________\n\n\n" << endl;
}

void TimKiem(SinhVien a[], int n, char acc[]){
	cout << "\n____________________________________\n" << endl;
	bool check = false;
    for(int i = 0;i < n;++i){
        if (!strcmp(a[i].Account, acc)){
        	cout << "TIM THAY SINH VIEN:" << endl;
        	check = true;
        	xuat(a[i]);
        	break;
		}
    }
    if (check == false){
    	cout << "KHONG TIM THAY SINH VIEN" << endl;
    	
	}
    cout << "\n____________________________________\n\n\n" << endl;
}



void Xoa(SinhVien a[], int &n, int mssv){
	cout << "\n____________________________________\n" << endl;
	bool check = false;
    for(int i = 0;i < n;++i){
        if (a[i].mssv == mssv){
        	cout << "TIM THAY SINH VIEN:" << endl;
        	check = true;
        	xuat(a[i]);
        	for (int j = i;j<n;j++){
        		a[j] = a[j+1];
			}
			n = n - 1;
			cout << "\nDA XOA SINH VIEN CO MSSV: " << mssv << endl;
        	break;
		}
    }
    
    if (check == false){
    	cout << "KHONG TIM THAY SINH VIEN" << endl;
    	
	}
    cout << "\n____________________________________\n\n\n" << endl;
}


int main (){
	int N = 0;
	int key = 0;
	bool daNhap = false;
	do{
        cout << ("Nhap so luong sinh vien: ");
        cin >> N;
    }while(N <= 0);
    SinhVien a[N];
    while(true){
    	system("cls");
        cout << "*********************************************\n";
        cout << "**      1. Nhap du lieu                 	**\n";
       	cout << "**      2. In danh sach sinh vien       	**\n";
        cout << "**      3. Nhap lai so luong sinh vien  	**\n";
        cout << "**      4. Tim kiem sinh vien theo Account  	**\n";
        cout << "**      5. Xoa sinh vien theo MSSV 		**\n";
        cout << "**      6. Thoat                        	**\n";
        cout << "*********************************************\n";
       	cout << "**       Nhap lua chon cua ban          	**\n";
        cin >> key;
        switch(key){
            case 1:
                cout << "\nBan da chon nhap DS sinh vien!";
                nhapN(a,N);
                cout << "\nBan da nhap thanh cong!";
                daNhap = true;
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
            case 2:
                if(daNhap){
                   cout << "\nBan da chon xuat DS sinh vien!";
                    xuatN(a,N);
                }else{
                    cout << "\nNhap DS sinh vien truoc!!!!";
                }
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
            case 3:
            	cout << "\nBan da chon nhap lai so luong DS sinh vien!";
            	cout << ("\nNhap so luong sinh vien: ");
        		cin >> N;
            	break;
            case 4:
            	if(daNhap){
                   	cout << "\nBan da chon Tim kiem sinh vien theo Account!";
	            	cout << ("\nNhap ten sinh vien muon tim: ");
	            	char acc[20];
	        		cin >> acc;
	        		TimKiem(a,N,acc);
                }else{
                    cout << "\nNhap DS sinh vien truoc!!!!";
                }
            	
        		cout << "\nBam phim bat ky de tiep tuc!";
            	getch();
                break;
            case 5:
            	if(daNhap){
                   	cout << "\nBan da chon Xoa sinh vien theo MSSV!";
	            	cout << ("\nNhap MSSV cua sinh vien muon xoa: ");
	            	int mssv = 0;
	        		cin >> mssv;
	        		Xoa(a,N,mssv);
                }else{
                    cout << "\nNhap DS sinh vien truoc!!!!";
                }
        		cout << "\nBam phim bat ky de tiep tuc!";
            	getch();
                break;
            case 6:
                return 0;
            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nBam phim bat ky de tiep tuc!";
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
	}

	

}


	

	return 0;
}

