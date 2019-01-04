//This is a file to initialize the virtual pet

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Pet {

	string name;
	int lvl;
	int power;
	float disposition;

};

void dispStats(int* Name);

int main(){
	
	Pet Kaiju1;
	Pet * Godzilla;
	Godzilla = &Kaiju1;

	Godzilla->name = "Goji";
	Godzilla->lvl = 100;
	Godzilla->power = 1000;
	Godzilla->disposition = 100.0;

//	dispStats(&Godzilla);
	dispStats(0);

	return 0;
}

void dispStats(int* Name){
	*Name = 10;

//	cout<<"Kaiju: "<<Name->name<<endl;
//	cout<<"Level: "<<Name->lvl<<endl;
//	cout<<"Power: "<<Name->power<<endl;
//	cout<<"Disp.: "<<Name->disposition<<endl;

	
}
