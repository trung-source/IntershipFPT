#include <bits/stdc++.h>
using namespace std;


double abs(double a,double b){
	if(a-b >= 0){
		return a-b;
	}else{
		return b-a;
	}
}

void FindNearest(double x, double y){
	double x1 = int(x);
	double y1 = int(y);
	if(abs(x1,x)<abs(x1+1,x)){
		cout << x1 << " ";
	}else{
		cout << x1 + 1 << " ";
	}
	if(abs(y1,y)<abs(y1+1,y)){
		cout << y1 << " ";
	}else{
		cout << y1 + 1 << " ";
	}

}

int main()
{	double x = 0;
	double y = 0;
	cout << "Nhap lo can tim: ";
	cin >> x >> y;
	while(x > 1000 || y> 1000 || x<0 || y<0 ){
		cout << "Nhap lai lo can tim: ";
		cin >> x >> y;
	}
	FindNearest(x,y);
	
	return 0;
}



