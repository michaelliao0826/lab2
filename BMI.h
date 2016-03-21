#include<string>
using namespace std;
class BMI
{
	public:
		void setHeight(float h_cm);
		void setWeight(float w_kg);
		void setBMI();

		float getHeight();
		float getWeight();
		float getBMI();
 		string getCategory();

	private:
		float h;
		float w;
		float bmi;
		string category;
};	
