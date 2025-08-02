#include <iostream>
#include <vector>
#include <string> // Added for string manipulation

// Using a namespace for convenience, but be mindful in larger projects
using namespace std; 

// Structure to represent a student
struct Class {
    int roll_no;
    string name;
    float marks;

    // Function to get student input
    void input() {
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter name: "; 
        cin.ignore(); // Consume the leftover newline character from previous cin
        getline(cin, name); // Use getline for names with spaces
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---" << endl; 
        cout << "Roll number = " << roll_no << endl;
        cout << "Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    int num_students; 

    cout << "Enter the number of students: ";
    cin >> num_students;

    // Check for invalid input
    if (num_students <= 0) {
        cout << "Number of students must be greater than 0." << endl;
        return 0;
    }

    // Declare a vector of 'Class' (student) objects
    vector<Class> students(num_students); // Initialize vector with specified size

    // Loop to get input for each student
    for (int x = 0; x < num_students; x++) {
        cout << "\nEnter details for student " << x + 1 << ":" << endl;
        students[x].input(); // Call input method for each student object
    }

    // Loop to display details for all students
    cout << "\n--- Displaying All Student Details ---" << endl;
    for (int x = 0; x < num_students; x++) {
        students[x].display(); // Call display method for each student object
    }

    return 0; // Indicate successful execution
}