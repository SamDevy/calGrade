#include <iostream>

using namespace std;

int main() { 

// to save defnition data

int score;
char grade;


// cout like print in high level lang
cout << "Enter your score:";
// cin like input to input ur score
cin >> score;


// if else 
if (score >= 90){
    grade = 'A';
} else if (score >= 80){
    grade = 'B';
} else if (score >= 70){
    grade = 'C';
} else if (score >= 60)
{
    grade = 'F';
}

// last answer look like this Your grade is : B
cout << "Your Grade is: " << grade << endl;

// end of the code 
return 0;

}

//Useful note (== is Equal to) (!= Not equal to) (> grater than) (< less than) (>= Grater than or equal to) (<= Less than or equal to)