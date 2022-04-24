#include <iostream>
using namespace std;
int main()
{
	int mark;
	cout << "Enter the mark :" << endl;
	cin >> mark;
	if (mark < 0 || mark > 100)
		cout << "Out Of Range!" << endl;
	else if (mark >= 0 && mark < 60)
		cout << "Failed!:(" << endl;
	else if (mark >= 60 && mark < 70)
		cout << "Failed with a chance of Reexamine!;)" << endl;
	else if (mark >= 70 && mark <= 90)
		cout << "Passed susseccfully!:)" << endl;
	else if (mark >= 91 && mark <= 100)
		cout << "Passed with a perfect score,Congratulations!";
}
