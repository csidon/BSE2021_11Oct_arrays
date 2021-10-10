//#include <iostream>
//using namespace std;
//
////function prototype
//int maxim(int my_grade[], int n);
//
//int main()
//{
//	//declare array with datatype and size
//	//initialising (input the values) the array with values
//	int grade[3] = { 83, 45, 98 };
//
//	//Change array values with index
//	grade[1] = 99;
//
//	//Access all values in the array
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "The value for student " << i + 1 << " is = " << grade[i] << endl;
//	}
//	//call a function to find the highest grade in the array
//	int maximum = maxim(grade, 3); //name and size of arrays are passed as actual parameters
//	cout << "The top grade is " << maximum;
//	
//}
//
////my_grade and n are dummy parameters/arguments
//int maxim(int my_grade[], int n) 
//{
//	//declaring a blank maximum value
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max < my_grade[i])
//		{
//			max = my_grade[i];
//		}
//	}
//	return max;
//}



#include <iostream>
using namespace std;

//function prototype
int find_min_grade(int the_grade[], int n);


int main()
{
	//creating and initialising an array
	int student_grade[3] = { 45, 86, 67 };

	//loop to display all students' grades in the array
	for (int i = 0; i < 3; i++)
	{
		cout << "Student " << i + 1 << "'s grades are " << student_grade[i] << endl;
		
	}
	//passing the parameters for hardcoded array
	/*int minimum_grade = find_min_grade(student_grade, 3);
	cout << minimum_grade;*/
	cout << find_min_grade(student_grade, 3);

}

int find_min_grade(int the_grade[], int n)
{
	int min = 100;
	for (int i = 0; i < 3; i++)
	{
		if (min > the_grade[i])
		{
			min = the_grade[i];
		}
	}
	return min;
}