
//BERKAN BERK

#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	double midterm, finn, homework, hw1, hw2, hw3, hw4, hw5, hw_avr, ratio, reduced_scr, q1 ,q2 ,q3 , q4, z ,x ,c, v, quiz_grade, total_grade;
		

	cout << "The purpose of this program is to calculate your CS201 grade. What is your name? ";
	cin >> name;

	cout << "Hello " << name << ", " << "what are your midterm and final exam grades? ";
	cin >> midterm >> finn;

	double exam_avr;

	exam_avr = (midterm*0.3 + finn*0.35)/0.65;

	if (exam_avr < 30){
		cout << name << ", your weighted exam average is less than 30, you will fail the course!" << endl;
		return 0;
	}
	
	cout << "What are the grades of your 5 homework? ";
	cin >> hw1 >> hw2 >> hw3 >> hw4 >> hw5;
	hw_avr = (hw1 + hw2 + hw3 + hw4 + hw5)/5;
	ratio = (hw_avr / exam_avr);
	reduced_scr = hw_avr * (3 - ratio);

	if (ratio <= 2){
		cout << "You'll get all the points earned from homework!"<< endl;
	}

	

	else if (2 < ratio && ratio < 3){
		cout << "You'll get " << reduced_scr << " from the points earned from homework!" << endl;
		hw_avr = reduced_scr;
	}
	else{
		cout << "You'll get NONE of the points earned from homework!" << endl;
		hw_avr = 0;

	}
	cout << "What are the grades of your 4 quizzes? If any, enter your grade as 0 for missed quizzes. ";
	cin >> q1 >> q2 >> q3 >> q4;

	z = q1+q2+q3;
	x = q1+q2+q4;
	c = q1+q3+q4;
	v = q2+q3+q4;

	if (z > x)
	{
		if (z > c)
		{
			if (z > v)
			{
				quiz_grade = (z) / (0.3);}
			else if(v > z)
			{
				quiz_grade = (v) / (0.3);}}}
	else if (x > c)
	{
		if (x > v)
		{
			quiz_grade = (x) / (0.3);}

		else if(v >x)
		{
			quiz_grade = (v) / (0.3);}}

	else if (c > v)
	{
		quiz_grade = (c) / (0.3);}

	else
	{
		quiz_grade = (v) / (0.3);}
	

	total_grade = quiz_grade*0.1 + hw_avr*0.25 + midterm*0.3 + finn*0.35;

	cout << name << ", your grade for CS201 is: " << total_grade << endl;

	return 0;
	}
