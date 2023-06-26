#include<iostream>
#include <fstream>
#include<string>

using namespace std;



int main(){
	

  	
	ifstream input("ex1.txt");
	if(input.is_open())
	{
		cout<<"Mo thanh cong!!"<<endl;
  	int counter = 1;
  	string* p = new string[1];
  	int alloc = 1;
  	
  	string word;

  	while((input.peek()!='\n') && (input >> word)){
  		if(counter >= alloc){
  			alloc *= 2;
  			string *temp = new string[alloc];
  			for (int i = 0; i < counter; i++){
  				temp[i] = p[i];
			  }
			
			delete[]p;
			p = temp;
		  }
		  
		p[counter] = word;
		counter++;
	  }
	  
	for(int i = counter-1; i > 0; i--){
		cout << p[i] << " ";
	}
  	

	delete[] p;
  	
  	

//    input.getline(buf,20);
//   
//    for (p=buf; *p; p++)  // note 2
//    {
//      cout << *p;
//    }

  
		
//		while(!input.eof())	//khi chua toi cuoi file thi tiep tuc
//		{
//			
//		}
	}
	else
	{
		cout<<"Mo that bai!!"<<endl;
	}
    input.close(); // dóng file input
        
	return 0;
}


