#include <iostream>
#include <string>

class Dog { // Define a class named Dog
public: // Public members can be accessed from outside the class
    std::string name; // Member variable to store the dog's name

    void bark() { // Member function to simulate a dog barking
        std::cout << name << " says Woof!" << std::endl;
    }
};

int main() {
    Dog myDog; // Create an object of the Dog class
    myDog.name = "Buddy"; // Assign a value to the name member variable
    myDog.bark(); // Call the bark member function
    return 0;
}
