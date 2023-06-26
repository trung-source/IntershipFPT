#include <iostream>
using namespace std;


class employee
{
protected:
	std::string m_name;
	// We're making this constructor protected because
	// we don't want people creating employee objects directly,
	// but we still want inhertance classes to be able to use it.
	employee(std::string name)
	: m_name(name)
	{ }
public:
	std::string getName() { return m_name; }
	const char* level() { return "level0.0"; }
	double coin(){return 0.0;}
};

class dev1 : public employee
{
private:
	char* lev;
	double coins;
	

	
	
public:
	
	dev1(std::string m_name="",char* m_level ="level1.1", double m_coin = 0)
        : employee{ m_name},lev(m_level), coins(m_coin)
    {
    	getName_1();
    	getLevel() ;
//		cout << "level: " ;cin >> m_level;
		cout << "coins: ";cin >> coins;
    }
	const char* level(){
		return lev;	
	}
	double coin(){
		return coins*0.5;
	}
	
	void getName_1() { 
	cout << "\nTen dev1: "; cin >> m_name;
	
 	}
 	void getLevel() { 
 	char *lvl = new char[10];
	cout << "Level: "; cin >> lvl;
	while(lvl[0]!='1' || lvl[1]!='.' || lvl[3] || int(lvl[2])>57 || int(lvl[2]) <= 48 ){
		cout << "\tLevel: "; cin >> lvl;
	}
	lev = lvl;
	
 	}
	std::string getName() { return m_name; }
	void xuat(){
		cout << "\t----------------------" <<endl;
		cout << "\tTen dev1: " << getName() << endl;
		cout << "\tlevel: " << level() << endl;
		cout << "\tcoins: " << coin() << endl<<endl;
	}
	friend class projectManager;
};

class dev2 : public employee
{
private:
	char* lev;
	double coins;
public:
	dev2(std::string m_name="",char* m_level ="level1.1", double m_coin = 0)
        : employee{ m_name},lev(m_level), coins(m_coin)
    {
    	getName_1();
    	getLevel() ;
//		cout << "level: " ;cin >> m_level;
		cout << "coins: ";cin >> coins;
    }
	const char* level(){
		return lev;	
	}
	const char* level(char* lv){
		lev = lv;
		return lv;
	}
	double coin(){
		return coins;
	}
	void getName_1() { 
	cout << "\nTen dev2: "; cin >> m_name;
	
 	}
 	void getLevel() { 
	 	char *lvl = new char[10];
	 	cout << "Level: "; cin >> lvl;
		while(lvl[0]!='2' || lvl[1]!='.' || lvl[3] || int(lvl[2])>57 || int(lvl[2]) <= 48 ){
		cout << "\tLevel: "; cin >> lvl;
		}
		lev = lvl;
//		delete[] lvl;
 	}
	void xuat(){
		cout << "\t----------------------" <<endl;
		cout << "\tTen dev2: " << getName() << endl;
		cout << "\tlevel: " << level() << endl;
		cout << "\tcoins: " << coin() << endl<<endl;
	}
	friend class projectManager;
};

class projectManager : public employee
{	
private:
	char* lev;
	double coins;
	
public:
	projectManager(std::string m_name="",char* m_level ="level1.1", double m_coin = 0)
        : employee{ m_name},lev(m_level), coins(m_coin)
    {
    	getName_1();
    	getLevel() ;
    
    }
	const char* level(){
		return lev;	
	}
	const char* level(char* lv){
		lev = lv;
		return lv;
	}
	void getName_1() { 
	cout << "\nTen PM: "; cin >> m_name;
	
 	}
 	void getLevel() { 
	 	char *lvl = new char[10];
	 	cout << "Level: "; cin >> lvl;
		while( lvl[1] || int(lvl[0])>57 || int(lvl[0]) <= 48 ){
		cout << "\tLevel: "; cin >> lvl;
	}
		lev = lvl;
 	}
 	
	void coin(dev1 & d1){
		//PM lay 50% cua dev1 va nhan 25% tong coin tat ca dev
		coins += d1.coin()*0.5+d1.coin()*0.25*0.5;
	}
	void coin(dev2 & d2){
		coins += d2.coin()*0.25;
	}
	double coin(){
		return coins;
	}
	void xuat(){
		cout << "\t----------------------" <<endl;
		cout << "\tTen PM: " << getName() << endl;
		cout << "\tlevel: " << level() << endl;
		cout << "\tcoins: " << coin() << endl<<endl;
	}
};


int main()
{	
	int N1 = 0,N2 = 0, M1 =0;
	cout << "Nhap so luong dev1: "; cin >> N1;
	cout << "Nhap so luong dev2: "; cin >> N2;
	cout << "Nhap so luong PM: "; cin >> M1;
//	
	cout << endl;
	dev1 d1[N1];
	dev2 d2[N2];
	projectManager m1[M1];

	
	if(N1>0){
		cout << "\nNhan vien dev1: " << endl;
		for(int i = 0;i<N1;i++){
			d1[i].xuat();
		}
	
		
	}
	
	if(N2>0){
		cout << "\nNhan vien dev2: " << endl;
		for(int i = 0;i<N2;i++){
		d2[i].xuat();
		}
	}
	
	

	for(int j = 0;j<M1;j++){
		for(int i = 0;i<N1;i++){
			m1[j].coin(d1[i]);
		}
		for(int i = 0;i<N2;i++){
			m1[j].coin(d2[i]);
		}
	}
	if(M1>0){
		cout << "\nPM: " << endl;
		for(int i = 0;i<M1;i++){
			m1[i].xuat();
		}
	}
	
	
	

	
	delete[] d1;
	delete[] d2;
	delete[] m1;

	return 0;
}
