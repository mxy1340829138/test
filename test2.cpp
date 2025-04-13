#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string studentID;

public:
    // Constructor
    Student(const std::string& name, int age, const std::string& studentID)
        : name(name), age(age), studentID(studentID) {}

    // Getters
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getStudentID() const {
        return studentID;
    }

    // Setters
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setStudentID(const std::string& newStudentID) {
        studentID = newStudentID;
    }

    // Display student information
    void displayInfo() const {
        std::cout << "Name: " << name << "\nAge: " << age << "\nStudent ID: " << studentID << std::endl;
    }
};

int main() {
    // Create a Student object
    Student student("John Doe", 20, "S12345");

    // Display student information
    student.displayInfo();

    // Modify student information
    student.setName("Jane Doe");
    student.setAge(21);
    student.setStudentID("S54321");

    // Display updated information
    student.displayInfo();

    return 0;
}