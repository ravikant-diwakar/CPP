#include <iostream>

// Define a simple class named 'Person'
class Person {
public:
    // Public attributes
    std::string name;
    int age;

    // Public method to display information about the person
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create an object of the 'Person' class
    Person person1;

    // Set attributes of the object
    person1.name = "John";
    person1.age = 25;


    Person person2;

    person2.name = "Abcd";
    person2.age = 25;

    // Call the method to display information
    person1.displayInfo();
    person2.displayInfo();

    return 0;
}
