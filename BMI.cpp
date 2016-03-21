#include "BMI.h"
#include<iostream>
#include<string>

void BMI::setHeight(float h_cm)
{
	h = h_cm;
}
void BMI::setWeight(float w_kg)
{
	w = w_kg;
}
void BMI::setBMI()
{
	bmi = w / ( (h / 100.0) * (h / 100.0) );
}

float BMI::getHeight()
{
	return h;
}
float BMI::getWeight()
{
	return w;
}
float BMI::getBMI()
{
	return bmi;
}

string BMI::getCategory()
{
	if (bmi < 15.0)
	{
	    category = "Very severely underweight";
	}
	else if (15.0 <= bmi && bmi < 16.0)
	{
		category = "Severely underweight";
	}
	else if (16.0 <= bmi && bmi < 18.5)
	{
		category = "Underweight";
	}
	else if (18.5 <= bmi && bmi < 25.0)
	{
		category = "Normal";
	}
	else if (25.0 <= bmi && bmi < 30.0)
	{
		category = "Overweight";
	}
	else if (30.0 <= bmi && bmi < 35.0)
	{
		category = "Obese Class I (Moderately obese)";
	}
	else if (35.0 <= bmi && bmi< 40.0)
	{
		category = "Obese Class II (Severely obese)";
	}
	else if (bmi >= 40.0)
	{
		category = "Obese Class III (Very severely obese)";
	}
	return category;
}
