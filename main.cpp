#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"BMI.h"

using namespace std;

int main()
{   
	BMI BMI;
    float h_cm, w_kg;
	float bmi;
	string categ;

	ifstream file_in("file.in.txt", ios::in);
	ofstream file_out("file.out.txt", ios::out);

	if(!file_in)
		{
			cerr << "Failed while opening the file.in" << endl;
		}
	if(!file_out)
		{
			cerr << "Failed while opening the file.out" << endl;
		}
	
	
	while(1)
	{
		
  		file_in >> h_cm >> w_kg;
		
	    if (h_cm == 0 && w_kg == 0)
		{
			break;
		}
				
		BMI.setWeight(w_kg);
		BMI.setHeight(h_cm);
		BMI.setBMI();
 		
	    bmi = BMI.getBMI();	
		categ = BMI.getCategory();
		
		file_out << bmi << "  ";
		file_out << categ << endl;
		
	}

	return 0;
}

