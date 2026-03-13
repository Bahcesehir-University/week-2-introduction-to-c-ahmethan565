#include <iostream>
#include <string>

using namespace std;

/*
    LAB 1 – INTRODUCTION TO C++

    In this lab you will practice:

    - writing a C++ program
    - printing with cout
    - using variables
    - getting input with cin
    - doing simple calculations

    Complete the TODO parts.
*/

int main()
{

    // ------------------------------------------------
    // PART 1 — Your First Output
    // ------------------------------------------------

    cout << "Welcome to the C++ Lab!" << endl;

    // TODO 1
    // Print your name
    cout << "Ahmethan BAKIR" << endl;


    // TODO 2
    // Print your department
    cout << "Digital Game Design" << endl;


    // TODO 3
    // Print today's year
    cout << 2026 << endl;


    cout << endl;


    // ------------------------------------------------
    // PART 2 — Variables
    // ------------------------------------------------

    // TODO 4
    // Create an integer variable called age
    // Assign your age to it
    int age;
    age = 22;


    // TODO 5
    // Create a double variable called height
    // Example: 1.75
    double height;
    height = 1.75;
    char charTry = 'A';


    // TODO 6
    // Create a string variable called name
    // Store your name
    string name;
    name = "Ahmethan";


    // TODO 7
    // Print all variables
    
    cout << age << endl;
    cout << height << endl;
    cout << name << endl;
    cout << charTry << endl;


    cout << endl;


    // ------------------------------------------------
    // PART 3 — User Input
    // ------------------------------------------------

    string city;

    // TODO 8
    // Ask the user to enter their city
    cout << "Write your City:" << endl;


    // TODO 9
    // Read the city using cin
    cin >> city;


    // TODO 10
    // Print: "You live in <city>"
    cout << "You live in " + city << endl; 


    cout << endl;


    // ------------------------------------------------
    // PART 4 — Numbers and Math
    // ------------------------------------------------

    int a;
    int b;

    // TODO 11
    // Ask the user to enter first number
    cout << "First Number : " << endl; 


    // TODO 12
    // Read first number
    cin >> a;

    // TODO 13
    // Ask the user to enter second number
    cout << "Second Number : " << endl;

    // TODO 14
    // Read second number
    cin >> b;

    // TODO 15
    // Create a variable called sum
    // store a + b
    int sum;
    sum = a+b;

    // TODO 16
    // Print the sum
    cout << "Sum :" << sum << endl;

    cout << endl;


    // ------------------------------------------------
    // PART 5 — Mini Exercise
    // ------------------------------------------------

    string studentName;
    int birthYear;

    // TODO 17
    // Ask the student name
    cout << "Your Name: " << endl;

    // TODO 18
    // Read the student name
    cin >> studentName;

    // TODO 19
    // Ask birth year
    cout << "Birth Year: " << endl;

    // TODO 20
    // Read birth year
    cin >> birthYear;

    // TODO 21
    // Calculate approximate age
    // age = 2026 - birthYear
    int approximateAge;
    age = 2026 - birthYear;

    // TODO 22
    // Print:
    // "Hello <name> your approximate age is <age>"
    cout << "Hello " << studentName << " your approximate age is " << age << endl;

    cout << endl;
    cout << "Lab Finished!" << endl;

    return 0;
}
