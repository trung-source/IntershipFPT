#include<iostream>
#include <conio.h>
using namespace std;

struct Hoten {
	char ho[8];
	char dem[20];
	char ten[8];
};
struct QueQuan {
	char xa[20];
	char huyen[20];
	char tinh[20];
};

struct DiemThi {
	double toan,ly,hoa;
};

class THISINH
{
public:
	Hoten hoten;
	QueQuan que;
	char truong[20];
	int tuoi;
	char sbd[10];
	DiemThi diem;
	
void nhap()
{	
	cout << "Nhap ho ten : " << endl;
		cout << "\tNhap ho: "; cin >> hoten.ho;
		cin.ignore();
		cout << "\tNhap ten dem: "; cin.getline(hoten.dem,sizeof(hoten.dem));
		cout << "\tNhap ten: "; cin >> hoten.ten;
	cin.ignore();
	cout << "Nhap que quan : " << endl; 
	cout << "\tNhap ten xa: "; cin.getline(que.xa,sizeof(que.xa));
	cout << "\tNhap ten huyen: "; cin.getline(que.huyen,sizeof(que.huyen));
	cout << "\tNhap ten tinh: "; cin.getline(que.tinh,sizeof(que.tinh));
	
	 
	cout << "Nhap ten truong : ";  cin.getline(truong,sizeof(truong));
	cout << "Nhap tuoi : "; cin >> tuoi;
	cout << "Nhap so bao danh : "; cin >> sbd;
	cout << "Nhap diem thi : "  << endl;
	cout << "\tNhap diem thi hoa: "; cin >> diem.hoa;
	cout << "\tNhap diem thi toan: "; cin >> diem.toan;
	cout << "\tNhap diem thi ly: "; cin >> diem.ly;
}

void in()
{
	cout << "Ho ten : " << hoten.ho << " " <<  hoten.dem << " " << hoten.ten << endl;
	cout << "Que quan : " << que.xa << "-" << que.huyen << "-" << que.tinh << endl;
	cout << "Ten truong : " << truong << endl;
	cout << "Tuoi : " << tuoi << endl;
	cout << "So bao danh : " << sbd << endl;
	cout << "Diem thi : " << endl;
	cout << "\tDiem thi hoa: " << diem.hoa << endl;
	cout << "\tDiem thi toan: " << diem.toan << endl;
	cout << "\tDiem thi ly: " << diem.ly << endl;
	cout << "Tong diem 3 mon: " << TongDiem() << endl;
}


double TongDiem(){
	return diem.hoa+diem.ly+diem.toan;
}
};

void nhapN(THISINH a[], int n){
    cout << ("\n____________________________________\n") << endl;
    for(int i = 0; i< n; ++i){
        cout << "\n\nNhap thi sinh thu:" << i+1 << endl;
        a[i].nhap();
    }
    cout <<("\n____________________________________\n") << endl;
}

void xuatN(THISINH a[], int n){
    cout << "\n____________________________________\n" << endl;
    for(int i = 0;i < n;++i){
        cout << "\n\nThong tin thi sinh thu: " << i+1 << endl;
        a[i].in();
    }
    cout << "\n____________________________________\n\n\n" << endl;
}

void xuatbang(THISINH a[], int n) {
//    printLine(100);
    cout << "\nSTT\tHo va ten\t\tQue quan \t\tSBD\tToan\tLy\tHoa\tTong diem";
    for(int i = 0; i < n; i++) {
        // in sinh vien thu i ra man hinh
        cout << "\n "<< i;
        cout << "\t" << a[i].hoten.ho << " " << a[i].hoten.dem << " " << a[i].hoten.ten;
        cout << "\t\t" << a[i].que.xa << " " << a[i].que.huyen << " " << a[i].que.tinh;
        cout << "\t\t" << a[i].sbd;
        printf("\t%.2f\t%.2f\t%.2f", a[i].diem.toan, a[i].diem.ly, a[i].diem.hoa);
        printf("\t%.2f", a[i].TongDiem());
    }
//    printLine(100);
}


void TimKiem(THISINH a[], int n){
	cout << "\n____________________________________\n" << endl;
	bool check = false;
	int j = 1;
    for(int i = 0;i < n;++i){
    	if(a[i].TongDiem() > 15){
    		cout << "\n\nThong tin thi sinh thu: " << j << endl;
        	a[i].in();
        	j++;
        	check = true;
		}
      	
    }
    if (check == false){
    	cout << "KHONG TIM THAY SINH VIEN" << endl;
    	
	}
    cout << "\n____________________________________\n\n\n" << endl;
}

void sapxepTheodiem(THISINH a[], int n) {
    //Sap xep theo tang dan
    THISINH tmp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].TongDiem() > a[j].TongDiem()) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}



int main() {
	int N = 0;
	int key = 0;
	bool daNhap = false;
	do{
        cout << ("Nhap so luong thi sinh: ");
        cin >> N;
    }while(N <= 0);
    THISINH a[N];
    while(true){
    	system("cls");
        cout << "*********************************************\n";
        cout << "**      1. Nhap du lieu                 	**\n";
       	cout << "**      2. In danh sach thi sinh       	**\n";
        cout << "**      3. Nhap lai so luong thi sinh  	**\n";
        cout << "**      4. Tim kiem thi sinh theo co tong diem > 15  	**\n";
        cout << "**      5. Sap xep thi sinh theo diem 		**\n";
        cout << "**      6. In theo dang bang 		**\n";
        cout << "**      7. Thoat                        	**\n";
        cout << "*********************************************\n";
       	cout << "**       Nhap lua chon cua ban          	**\n";
        cin >> key;
        switch(key){
            case 1:
                cout << "\nBan da chon nhap DS thi sinh!";
                nhapN(a,N);
                cout << "\nBan da nhap thanh cong!";
                daNhap = true;
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
            case 2:
                if(daNhap){
                   cout << "\nBan da chon xuat DS thi sinh!";
                    xuatN(a,N);
                }else{
                    cout << "\nNhap DS thi sinh truoc!!!!";
                }
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
            case 3:
            	cout << "\nBan da chon nhap lai so luong DS thi sinh!";
            	cout << ("\nNhap so luong thi sinh: ");
        		cin >> N;
            	break;
            case 4:
            	if(daNhap){
                   	cout << "\nBan da chon Tim kiem thi sinh theo co tong diem > 15!";
	        		TimKiem(a,N);
                }else{
                    cout << "\nNhap DS thi sinh truoc!!!!";
                }
            	
        		cout << "\nBam phim bat ky de tiep tuc!";
            	getch();
                break;
            case 5:
            	if(daNhap){
                   	cout << "\nBan da chon sap xep thi sinh theo diem!";
	        		sapxepTheodiem(a,N);
	        		xuatN(a,N);
                }else{
                    cout << "\nNhap DS thi sinh truoc!!!!";
                }
        		cout << "\nBam phim bat ky de tiep tuc!";
            	getch();
                break;
            case 6:
            	if(daNhap){
                   	cout << "\nBan da chon In theo dang bang!";
	        		xuatbang(a,N);
                }else{
                    cout << "\nNhap DS thi sinh truoc!!!!";
                }
        		cout << "\nBam phim bat ky de tiep tuc!";
            	getch();
                break;
            case 7:
                return 0;
            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
	}

	

}
}
