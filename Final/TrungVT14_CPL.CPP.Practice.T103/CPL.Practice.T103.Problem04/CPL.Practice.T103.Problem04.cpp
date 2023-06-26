#include<iostream>
#include <vector>

using namespace std;

class Employee{
public:
	string m_name;
	int m_age;
	string m_employeeID;
	string m_projectName;
public:
	// Construct
	Employee(string name,int age,string ID,string proj) :
		m_name(name),m_age(age),m_employeeID(ID),m_projectName(proj)		
		{	}
	
	// In thong tin
	virtual void printInformation(){
		cout << "Ten: " << m_name << endl;
		cout << "Tuoi: " << m_age << endl;
		cout << "ID: " << m_employeeID << endl;
		cout << "Ten Project: " << m_projectName << endl;
	};
	// Ham ao thuan
	virtual void doWork() = 0;
};


class Tester : public Employee
{

public:
	// construct
	Tester(string name,int age,string ID,string proj) : Employee(name , age, ID, proj)
      {
      	
	  }
	  
	// In thong tin cong viec
	void doWork(){
		cout << "Teter: " << m_name << " is testing software in project "<< m_projectName << endl;
	};
};

class Developer :  public Employee
{

public:
	//constuct
	Developer(string name,int age,string ID,string proj) : Employee(name , age, ID, proj)
      {
      	
	  }
	  // In thong tin cong viec
	void doWork(){
		cout << "Developer: " << m_name << " is developing software in project "<< m_projectName << endl;
	};
};




class ProjectManager : public Employee
{

public:
	//constuct
	ProjectManager(string name,int age,string ID,string proj) : Employee(name , age, ID, proj)
      {
      	
	  }
	  // In thong tin cong viec
	void doWork(){
		cout << "Project Manager: " << m_name << " is managing software in project "<< m_projectName << endl;
	};
};




class Project{
	vector<Employee*> m_employees;
	string m_projectName;
public:
	//construct
	Project(vector<Employee*> emp, string proj){
		m_employees = emp;
		m_projectName = proj;
	}
	//deconstruct
	~Project(){
		 m_employees.~vector();
	}
	//role
	enum EmpoyeeRole{
		E_TESTER,
		E_DEVELOPER,
		E_PROJECT_MANAGER
	};
	
	// Them nhan vien
	void addEmployee(string name,int age, string employeeID, EmpoyeeRole role){
		if(role == E_TESTER){
		
			m_employees.push_back(new Tester(name,age,employeeID,m_projectName));
		}else if(role == E_DEVELOPER){
			m_employees.push_back(new Developer(name,age,employeeID,m_projectName));
		}else if(role == E_PROJECT_MANAGER){
			m_employees.push_back(new ProjectManager(name,age,employeeID,m_projectName));
		}else{
			cout << "Wrong type" << endl;
		}
			
		
	}
	
	void removeEmployee(string employeeID){
		vector<Employee*>::iterator a = m_employees.begin(); 
	    while (a != m_employees.end()){
	    	if ((*a)->m_employeeID == employeeID)
	        {
	    
	            a = m_employees.erase(a); 
	        }
	        
	        else {
	            ++a;
	        }
	    }
		
	       
	        
	}
	
	
	void showEmployee(){
		vector<Employee*>::iterator a = m_employees.begin(); 
	    while (a != m_employees.end()) 
	    {	
	    	(*a)->printInformation();
	    	++a;
	    }
	}
	
	void projectWorking(){
		cout << "Project: " << m_projectName << endl;
	}
	
	
};


int main(){
	Tester e("TRU",32,"12","asdh");
	e.doWork();
	return 0;
}
