#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int sqr(int x){
	return x * x;
}

int add(int x, int y){
	return x + y;
}

int sub(int x, int y){
	return x - y;
}

int mul(int x, int y){
	return x * y;
}

int div(int x, int y){
	return x / y;
}

int main(){
    while(true){
        cout << "\nSelect a program you want to run:\n";
        cout << "1. Area of Circle\n";
        cout << "2. Odd or Even\n";
        cout << "3. Check Vowel\n";
        cout << "4. Calculator\n";
        cout << "5. Marksheet\n";
        cout << "Enter choice (1-5): ";
        
        int choice;
        cin >> choice;

        if(choice == 1){
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = 3.14 * sqr(radius);
            cout << "The area of the circle with radius " << radius << " is: " << area << endl;
        
        }
        else if(choice == 2){
            int number;
            cout << "Enter a number: ";
            cin >> number;
            if(number % 2 == 0){
                cout << number << " is even.\n";
            }
            else {
                cout << number << " is odd.\n";
            }

        }
        else if(choice == 3){
            char letter;
            cout << "Enter a letter: ";
            cin >> letter;
            letter = tolower(letter);
            if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
                cout << letter << " is a vowel.\n";
            }
            else {
                cout << letter << " is not a vowel.\n";
            }

        }
        else if(choice == 4){
            cout << "Select operation:\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cout << "Enter choice (1/2/3/4): ";
            
            int calChoice;
            cin >> calChoice;
            double num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            if(calChoice == 1){
                cout << "The result of addition is: " << add(num1, num2) << endl;
            }
            else if(calChoice == 2){
                cout << "The result of subtraction is: " << sub(num1, num2) << endl;
            }
            else if(calChoice == 3){
                cout << "The result of multiplication is: " << mul(num1, num2) << endl;
            }
            else if(calChoice == 4){
                if(num2 != 0){
                    cout << "The result of division is: " << div(num1, num2) << endl;
                }
                else {
                    cout << "Cannot divide by zero.\n";
                }
            }
            else {
                cout << "Invalid input\n";
            }

        }
        else if(choice == 5){
            string name;
            cout << "Enter student's name: ";
            getline(cin, name);
            int subjects;
            cout << "Enter the number of subjects: ";
            cin >> subjects;
            double total = 0;
            
            for (int i = 0; i < subjects; i++){
                double mark;
                cout << "Enter marks for subject #" << i + 1 << ": ";
                cin >> mark;
                total += mark;
            }

            double percentage = (total / (subjects * 100)) * 100;
            cout << "\nStudent: " << name << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Percentage: " << percentage << "%" << endl;

            char grade;
            if(percentage >= 90) grade = 'A+';
            else if(percentage >= 80) grade = 'A';
            else if(percentage >= 70) grade = 'B+';
            else if(percentage >= 60) grade = 'B';
            else if(percentage >= 50) grade = 'C';
            else grade = 'F';

            cout << "Grade: " << grade << endl;

        }
        else {
            cout << "Invalid, try from 1-5\n";
        }
    }

    return 0;
}

