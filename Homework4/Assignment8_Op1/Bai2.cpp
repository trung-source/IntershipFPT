#include <iostream>
#include<math.h>
#include <conio.h>

using namespace std;


class Matrix
{
private:
	int col;
	int row;
	float **arr;
public:
	Matrix();
	Matrix(int r,int c);
	void nhap();
	void xuat();
	void tong(Matrix a);
	void hieu(Matrix a);
	void tich(Matrix a);
	void thuong(Matrix a);
	~Matrix() { delete[] arr; col = 0; row = 0; }
	friend Matrix operator+(
         Matrix& a,
         Matrix& b);
	friend Matrix operator-(
	         Matrix& a,
	         Matrix& b);
	friend Matrix operator*(
	         Matrix& a,
	         Matrix& b);
	friend Matrix operator/(
	         Matrix& a,
	         Matrix& b);
	friend float det(Matrix &a);
	friend Matrix inv(Matrix &a);

};
Matrix::Matrix() {
	col = -1;
	row = -1;
	arr = new float*(0);
	arr[0] = new float(0);
}

Matrix::Matrix(int r, int c) {
	col = c;
	row = r;
	arr = new float*[r];
	for(int i=0;i < r; i++){
		arr[i] = new float[c];
	}
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			arr[i][j] = 0;
		}
	}
}

void Matrix::nhap() {
	cout << "\tSo hang: "; cin >> row;
	cout << "\tSo cot: "; cin >> col;
	
	arr = new float*[row];
	for(int i=0;i < row; i++){
		arr[i] = new float[col];
	}
	

	for (int i = 0; i < row; i++) {
		cout << "Nhap hang thu " << i+1 << ":" << endl;
		for (int j = 0; j < col; j++) {
			cout << "\tPhan tu thu " << j+1 << ": ";
			cin >> arr[i][j];
		}
	}

}

void Matrix::xuat() {
	if(row > 0){
		for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	}
	
}

void Matrix::tong(Matrix a){
	if(col == a.col && row == a.row){
		cout << "Tong 2 ma tran: " << endl;
		for (int i = 0; i < row; i++) 
		{
		for (int j = 0; j < col; j++) {
			cout << arr[i][j]+a.arr[i][j] << " ";
		}
		cout << endl;
	}
	}else{
		cout << "Khong co tong 2 ma tran." << endl;
	}
}

float det(Matrix &a){
	if(a.col == 2){
//		cout << "Det: " << a.arr[0][0]*a.arr[1][1]-a.arr[0][1]*a.arr[1][0] <<endl;
		return a.arr[0][0]*a.arr[1][1]-a.arr[0][1]*a.arr[1][0];
	}else if(a.col > 2){
		float total = 0;
	
		for(int i = 0;i < a.col;i++){
			int subi = 0;
			Matrix temp(a.row-1,a.col-1);	
//			cout << "\tTEST " << a.arr[0][i] << endl;
			for(int j = 1;j<a.row;j++){
				int subj = 0;
				for(int k = 0;k<a.col;k++){
					if(k==i){
				
					continue;
					}
					temp.arr[subi][subj]= a.arr[j][k];
//					cout << "\t\tTEST " << a.arr[j][k] << endl;
					subj++;
//					temp.xuat();
					
				}
		
					subi++;
				
			}
			
			total += pow(-1,i)*a.arr[0][i]*det(temp);
		}
//		cout << "Det: " << total << endl;
		return total;
	}else if (a.col == 1){
		return a.arr[0][0];
	}
}


Matrix inv(Matrix &a){
	Matrix temp;
	if(a.row==a.col){
		if(det(a) != 0){
			Matrix temp(a.col,a.row);
	
	
		//Minor -> CoFactor Matrix
		for(int x = 0; x<a.row;x++){
			int subx = 0;
			for(int i = 0; i < a.col;i++){
				int subi = 0;
				Matrix temp2(a.row-1,a.col-1);
	//			cout << "\tTEST " << a.arr[x][i] << endl;
				for(int j = 0; j < a.row;j++){
					int subj = 0;
					if(j==x)
					continue;
					for(int k=0;k<a.col;k++){
						if(k==i)
						continue;
						temp2.arr[subi][subj]= a.arr[j][k];
						subj++;
	//					temp2.xuat();			
					}
					subi++;
				}
				subx++;
				temp.arr[x][i] = pow(-1,i+x)*det(temp2);
			}
		}	
		
		//ADJ Matrix = tranpose C
		//Inv Matrix = 1/det * Adj matrix
		
		Matrix temp3(a.row,a.col);
		for(int i = 0;i < a.col;i++){
			for(int j = 0;j < a.row; j++){
				temp3.arr[j][i]=1/det(a)*temp.arr[i][j];
			}
		}

		
//		temp3.xuat();
		return temp3;		
		}else{
			
			cout << "Khong ton tai nghich dao do ma tran thu 2 co dinh thuc bang 0." << endl;
			
			return temp;
		
		}
	}
	else{
			cout << "Khong ton tai nghich dao do ma tran thu 2 khong phai ma tran vuong." << endl;
			return temp;
		}
	
	
}
 	
 	

 	
Matrix operator+( Matrix& a,
                    Matrix& b)
{	
 	if(a.col == b.col && a.row == b.row){
 		Matrix temp(a.row,a.col);
		for (int i = 0; i < a.row; i++) 
		{
		for (int j = 0; j < a.col; j++) {
			temp.arr[i][j] =  a.arr[i][j]+b.arr[i][j];
		}
	}
	return temp;
	}else{
		cout << "Khong co tong 2 ma tran." << endl;
		Matrix temp;
		return temp;
	}
	
}

Matrix operator-( Matrix& a,
                    Matrix& b)
{	
 	if(a.col == b.col && a.row == b.row){
 		Matrix temp(a.row,a.col);
		for (int i = 0; i < a.row; i++) 
		{
		for (int j = 0; j < a.col; j++) {
			temp.arr[i][j] =  a.arr[i][j]-b.arr[i][j];
		}
	}
	return temp;
	}else{
		cout << "Khong co hieu 2 ma tran." << endl;
		Matrix temp;
		return temp;	
	}
	
}



Matrix operator*( Matrix& a,
                    Matrix& b)
{
 	if(a.col == b.row ){
 		Matrix temp(a.row,a.col);
		for (int i = 0; i < a.row; i++) 
		{
		for (int j = 0; j < b.col; j++) {
			for(int k = 0;k < a.col ;k++){
				temp.arr[i][j] +=  a.arr[i][k]*b.arr[k][j];
			}
			
		}
	}
		return temp;
	}else{
		cout << "Khong co nhan 2 ma tran." << endl;
		Matrix temp;
		return temp;
	}

}

Matrix operator/( Matrix& a,
                    Matrix& b)
{	
	Matrix temp2;
	temp2 = inv(b);
 	if(a.col == temp2.row ){
 		Matrix temp(a.row,a.col);
		for (int i = 0; i < a.row; i++) 
		{
		for (int j = 0; j < temp2.col; j++) {
			for(int k = 0;k < a.col ;k++){
				temp.arr[i][j] +=  a.arr[i][k]*temp2.arr[k][j];
			}
			
		}
	}
		return temp;
	}else{
		cout << "->Khong co chia 2 ma tran." << endl;
		Matrix temp;
		return temp;
	}

}



void Matrix::hieu(Matrix a){
	if(col == a.col && row == a.row){
		cout << "Hieu 2 ma tran: " << endl;
		for (int i = 0; i < row; i++) 
		{
		for (int j = 0; j < col; j++) {
			cout << arr[i][j]-a.arr[i][j] << " ";
		}
		cout << endl;
	}
	}
}
int main ()
{	// Nhap, Xuat, Chieu dai
	Matrix x;
	cout << "Ma tran 1: " << endl;
	x.nhap();
	x.xuat();
	
	
	Matrix y;
	cout << "Ma tran 2: " << endl;
	y.nhap();
	y.xuat();
	
	Matrix c;
	
//	// Phep cong
//	cout << "Cong: " << endl;
//	c=y+x;
//	c.xuat();
//	
//	
//	// Phep tru
//	cout << "Tru: " << endl;
//	c=x-y;
//	c.xuat();
//	
//	//Phep nhan
//	cout << "Nhan: " << endl;
//	c=x*y;
//	c.xuat();
//	
//	//Phep chia
//	cout << "Chia: " << endl;
//	c=x/y;
//	c.xuat();
	

	int key = 0;
	
	while (true) {
		system("cls");
		cout << "******************************************\n";
		cout << "**      1. Nhap lai ma tran                 **\n";
		cout << "**      2. Xuat ma tran                 **\n";
		cout << "**      3. Phep cong       **\n";
		cout << "**      4. Phep tru  **\n";
		cout << "**      5. Phep nhan  **\n";
		cout << "**      6. Phep chia  **\n";
		cout << "**      7. Thoat                        **\n";
		cout << "******************************************\n";
		cout << "**       Nhap lua chon cua ban          **\n";
		cin >> key;
		switch (key) {
			case 1:
				cout << "Ma tran 1: " << endl;
				x.nhap();
				cout << "Ma tran 2: " << endl;
				y.nhap();
				getch();
				break;
			case 2:
				cout << "Ma tran 1: " << endl;
				x.xuat();
				cout << "Ma tran 2: " << endl;
				y.xuat();
				getch();
				break;
			case 3:
				cout << "Ban chon thuc hien phep cong: " << endl;
				cout << "Ma tran 1: " << endl;
				x.xuat();
				cout << "Ma tran 2: " << endl;
				y.xuat();
				cout << "\nKet qua: " << endl;
				c = y + x;
				c.xuat();
				getch();
				break;
			case 4:
				cout << "Ban chon thuc hien phep tru: " << endl;
				cout << "Ma tran 1: " << endl;
				x.xuat();
				cout << "Ma tran 2: " << endl;
				y.xuat();
				cout << "\nKet qua: " << endl;
				c = x - y;
				c.xuat();
				getch();
				break;
			case 5:
				cout << "Ban chon thuc hien phep nhan: " << endl;
				cout << "Ma tran 1: " << endl;
				x.xuat();
				cout << "Ma tran 2: " << endl;
				y.xuat();
				cout << "\nKet qua: " << endl;
				c = x * y;
				c.xuat();
				getch();
				break;
			case 6:
				cout << "Ban chon thuc hien phep chia: " << endl;
				cout << "Ma tran 1: " << endl;
				x.xuat();
				cout << "Ma tran 2: " << endl;
				y.xuat();
				cout << "\nKet qua: " << endl;
				c = x / y;
				c.xuat();
				getch();
				break;
			case 7:
				return 0;
		}
	}
	
	
	
	

	
	return 0;

	
}
