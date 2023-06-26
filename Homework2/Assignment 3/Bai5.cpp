#include<iostream>
#include<string.h>


using namespace std;

int main()
{	char hex[50];
    int num, a; 
	int i = 1, j, r;
    
    cout << " Nhap so thap phan : ";
    cin >> num;
    n = num;
    while (n != 0)
    {
        r = n % 16;
        
        if (r < 10)
        // so
            hex[i++] = r + 48;
        else
        // Chu cai
            hex[i++] = r + 55;
            
            
        n = n / 16;
    }
    cout << "\nSo hexa tuong ung cua so thap phan " << num << " la : ";
    for (j = i; j > 0; j--)
        cout << hex[j];
    return 0;
}
