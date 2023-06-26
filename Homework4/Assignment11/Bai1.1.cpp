#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Lon hon 18 tuoi->Hop le" << endl;
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Duoi 18 tuoi->Tu choi\n";
    cout << "Do tuoi: " << myNum;  
  }
  return 0;
}

