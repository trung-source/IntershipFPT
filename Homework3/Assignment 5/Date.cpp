#include<iostream>
#include<stdio.h>


using namespace std;
struct Date{
	int day;
	int month;
	int year;
	void getData(int d, int m, int y){
	day = d;
	month = m;
	year = y;
}
	void printShortForm(){
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			day = 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			day = 30;
			break;
		}
		default: {
			day = 28;
			month = 1;
		}
	}
	
		
		
		if(1<=day && day<10){
			cout << "0" << day << "/";
		}else{
			cout << day << "/";
		}
		
		if(1<=month && month<10){
			cout << "0" << month << "/";
		}else {
			cout << month << "/";
		}
		
		if(year>0){
			cout << year <<endl;
		}else{
			cout << "2000" <<endl;
		}
	}


	void printLongForm(){
		
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			day = 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			day = 30;
			break;
		}
		default: {
			day = 28;
			
		}
	}
	
		switch (month)
	   {
	   case 1: { cout << "January "; } break;
	   case 2: {cout << "February ";} break;
	   case 3: { cout << "March "; } break;
	   case 4: { cout << "April "; } break;
	   case 5: { cout << "May "; } break;
	   case 6: { cout << "June "; } break;
	   case 7: { cout << "July "; } break;
	   case 8: { cout << "August "; } break;
	   case 9: { cout << "September "; } break;
	   case 10: { cout << "October "; } break;
	   case 11: { cout << "November "; } break;
	   case 12: { cout << "December "; } break;
	   default: { cout << "January "; } break;
	   }
			
		
		
		if(1<=day && day<10){
			cout << "0" << day << ", ";
		}else{
			cout << day << ", ";
		}
	
		
		
		if(year>0){
			cout << year <<endl;
		}else{
			cout << "2000" <<endl;
		}
		
	}
	

};


int main(){
	Date d;
	d.getData(253,23,2020);
	d.printShortForm();
	d.getData(253,23,2020);
	d.printLongForm();
	
	return 0;
}
