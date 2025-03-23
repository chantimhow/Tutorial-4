//#include <iostream>;
//#include <iomanip>;
//#include <cmath>;
//
//using namespace std;
//
//int main() {
//	int total = 0;
//	int student_marks;
//	char yn;
//	int stunum = 1;
//	int highest = 0;
//	int stufail = 0;
//
//	do {
//		do {
//			cout << "enter student marks: ";
//			cin >> student_marks;
//			if (student_marks < 0) {
//				cout << "marks cannot be lower than 0" << endl;
//			}
//			else if (student_marks > 100){
//				cout << "marks cannot be higher than 100" << endl;
//			}
//		} while (student_marks < 0 || student_marks >100);
//
//		cout << "Do you want to enter more marks? y/n: ";
//		cin >> yn;
//		total += student_marks;
//
//
//		if (yn == 'y') {
//			stunum += 1;
//		}
//		if (highest < student_marks) {
//			highest = student_marks;
//		}
//		if (student_marks < 50) {
//			stufail++;
//		}
//
//	} while (yn == 'y');
//
//	cout << "Average Mark: " << total / stunum << endl;
//	cout << "Highest Mark: " << highest << endl;
//	cout << "Students Failed: " << stufail << endl;
//	system("pause");
//		return 0;
//} 