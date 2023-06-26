// FileHandlingExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string.h>
#include <conio.h>


using namespace std;

void AddData(int nID, char* pFullName, char* pKhoa, char* pBirthday, int nSex, int nStatus)
{
	FILE* pFile = NULL;
    pFile = fopen( "test.csv", "a");
    fprintf(pFile, "ID: %d,name: %s, Khoa: %s, sex: %d, Birth: %s, status: %d\n", nID,pFullName,pKhoa, nSex,pBirthday,nStatus);
	fclose(pFile);
}



int main()
{
    std::cout << "Hello World!\n";
    FILE* pFile = NULL;
    pFile = fopen( "test.csv", "w");
    if (!pFile)
    {
        return -1;
    }
    
	char name[] = "Kiyoshi";
	char Khoa[] = "K63";
    int sex = MALE;
    int  ID = 30;
    char birth[] = "1/1/1999";
    int status = 1;
    
//    fprintf(pFile, "%d %s %s %d %s %d\n", ID,name,Khoa, sex,birth,status);
//    fprintf(pFile, "%d,%s,%s,%d,%s,%d\n", ID,name,Khoa, sex,birth,status);
    fprintf(pFile, "ID: %d,name: %s, Khoa: %s, sex: %d, Birth: %s, status: %d\n", ID,name,Khoa, sex,birth,status);
	fclose(pFile);
	
	int key = 0;
	while(true){
    	system("cls");
        cout << "*********************************************\n";
        cout << "**      1. Nhap du lieu                 	**\n";
        cout << "**      2. In                        	**\n";
        cout << "**      3. Thoat                        	**\n";
        cout << "*********************************************\n";
       	cout << "**       Nhap lua chon cua ban          	**\n";
        cin >> key;
        switch(key){
            case 1:
                cout << "\nBan da chon nhap DS thi sinh!" << endl;
                cout << "Nhap ID: "; cin >>ID;
                cin.ignore();
                cout << "Nhap ten: "; cin.getline(name,40);
                cout << "Nhap Khoa: "; cin >> Khoa;
                cout << "Nhap gioi tinh: "; cin >> sex;
                cout << "Nhap ngay thang nam sinh: "; cin >> birth;
                cout << "Nhap status: "; cin >> status;
                AddData(ID,name,Khoa,birth, sex,status);
                cout << "\nBan da nhap thanh cong!";
                cout << "\nBam phim bat ky de tiep tuc!";
                getch();
                break;
            case 3:
            	cout << "THOAT" <<endl;
                return 1;
            case 2:
            	FILE * fp = NULL;
			 
			    fp= fopen("test.csv", "r");
			
			    char a;
			    while ((a = fgetc(fp)) != EOF)
			    {   
			        cout << a;
			    }
			
			   
			    getch();
			 	fclose(fp);
			    break;
			
		}
	}
    //write file csv
    //write header

    
}
