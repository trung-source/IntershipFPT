#include<iostream>

using namespace std;

// Tra ve so phan tu mang sau khi xoa phan tu trung lap
int removeDuplicates(int arr[], int n){
	// Mang rong hoac chi co 1 phan tu
	if(n == 0||n == 1){
		return n;
	}
	
	// Mang nhieu hon 2 phan tu
	// So sanh tung phan tu voi nhau voi 2 vong lap dau
	for(int i = 0;i < n;i++){
		for(int j = i + 1 ;j < n;j++){
			// Neu trung lap
			if(arr[i] == arr[j]){
				// ghi de bang phan tu o phia truoc phan tu trung lap
				for(int k = j; k < n-1;k++){
					arr[k] = arr[k+1];
				}	
				
				// giam chi so mang
				n--;		
				
			}
		
		}
		
	}
	return n;
}

int main(){
	int n = 0;
	cout << "Nhap so phan tu n: "; cin >> n;
	int arr[n];
	cout << "Nhap cac phan tu: " << endl;
	for (int i = 0;i < n; i++){
		cout << "\tNhap phan tu thu " << i + 1 << " : ";
		cin >> arr[i];
	}
	
	n = removeDuplicates(arr,n);
	// In mang
	cout << "[ ";
	for(int i=0;i<n;++i)
	cout<<arr[i]<<" ";
	cout << "]";
	
	
	return 0;
}
