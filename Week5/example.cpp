
#include <iostream>
 #include<string>
 using namespace std;

 // Student class with encapsulation
 class Student {
 private:
 string name;
 int rollNumber;

 char grade;
 public:
 // Constructor to initialize student details

  Student (string studentName, int studentRoll, char studentGrade) {
 name = studentName;
 rollNumber = studentRoll;
 // Use setter to validate grade
 setGrade (studentGrade); 
  }

 // Getter method for student name
 string getName() const {
 return name;
 }
 void setName(string studentName) {
 name = studentName;
 }


 // Getter method for roll number
 int getRollNumber() const {
    return rollNumber;

 }

 // Setter method for roll number
 void setRollNumber(int studentRoll) {
 rollNumber = studentRoll;
 }

 // Getter method for grade
 char getGrade() const {

 return grade;

 }
 //Setter method for grade with validation

 void setGrade (char studentGrade) {

 if (studentGrade >= 'A' && studentGrade <= 'F') {
 grade = studentGrade;
  }   else {
 cout << "Invalid grade! Grade must be between A and F." << endl;
 }
 }
 // Method to display student details
 void displayStudentDetails() const {
 cout << "Student Name: "<<name<< endl;
 }
 };

 // Main function to demonstrate encapsulation
 int main() {
 // Creating a student object with valid grade

 Student student1 ("Pradeep", 101, 'A'); 
 // Display student details

  student1.displayStudentDetails();
  cout << endl;

  // Modifying student details using setter methods
 student1.setName("Himanshu");
 student1.setGrade('B');
 // Display updated student details
 cout << "Updated Student Details:" << endl;
 student1.displayStudentDetails();
  cout << endl;
 // Attempt to set an invalid grade
 student1.setGrade('Z');
 // This should display an error message
 return 0;
}
