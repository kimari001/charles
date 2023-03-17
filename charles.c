#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "I am an animal" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "I am a dog" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "I am a cat" << endl;
    }
};

int main() {
    Animal* animal;

    animal = new Animal;
    animal->speak();

    animal = new Dog;
    animal->speak();

    animal = new Cat;
    animal->speak();

    return 0;
}
