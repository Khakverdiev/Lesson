#include <iostream>

using namespace std;

class Pet
{
protected:
    char name[30];
    char sound[30];
    char breed[30];
    int age;
public:
    Pet(const char name[],
        const char sound[],
        const char breed[],
        int age
    )
    {
        strcpy_s(this->name, name);
        strcpy_s(this->sound, sound);
        strcpy_s(this->breed, breed);
        this->age = age;
    }

    Pet()
    {}

    void info()
    {
        cout << "Name: " << this->name << endl << "Sound: " << this->sound << endl;
        cout << "Breed: " << this->breed << endl << "Age: " << this->age << endl;
        cout << "--------------------------" << endl;
    }

    ~Pet()
    {}
};


class Dog : public Pet
{
private:
    Pet pets;
public:
    Dog(const char name[],
        const char sound[],
        const char breed[],
        int age
    )
    {
        pets = Pet(name, sound, breed, age);
        pets.info();
    }

    Dog()
    {}
};

class Cat : public Pet
{
private:
    Pet pets;
public:
    Cat(const char name[],
        const char sound[],
        const char breed[],
        int age)
    {
        pets = Pet(name, sound, breed, age);
        pets.info();
    }

    Cat()
    {}
};

class Bird : public Pet
{
private:
    Pet pets;
public:
    Bird(const char name[],
        const char sound[],
        const char breed[],
        int age)
    {
        pets = Pet(name, sound, breed, age);
        pets.info();
    }

    Bird()
    {}
};

int main()
{
    Dog dog("Dog", "gav - gav", "Dalmatian", 2);
    Cat cat("Cat", "mau - mau", "Scottish", 3);
    Bird bird("Bird", "crik - crik", "Canary", 1);
}

