#include <iostream>

using namespace std;

class base{
	static int count;
	int id;
	public:
	base(){
		count++;
		id = count;
		
		cout << "YES " << id << endl;;
		if(id == 4){
			throw 4;
		}
	}
	~base(){
		cout <<"No" << id << endl;;
	}
};

int base::count =0;
int main() {
	
try{
	base arr[5];

}
catch(int b){
	cout <<"defa" << b;
}

}
