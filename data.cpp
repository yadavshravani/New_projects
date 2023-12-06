#include <iostream>
#include <cstring>

class PersonnelInformation {
private:
    char* name;
    char* dateOfBirth;
    char* bloodGroup;

public:
    // Constructors and Destructor
    PersonnelInformation();
    PersonnelInformation(const char* n, const char* dob, const char* bg);
    PersonnelInformation(const PersonnelInformation& obj);
    ~PersonnelInformation();

    // Member function
    void displayInfo() const;
};

// Constructors and Destructor definitions
PersonnelInformation::PersonnelInformation() : name(nullptr), dateOfBirth(nullptr), bloodGroup(nullptr) {}

PersonnelInformation::PersonnelInformation(const char* n, const char* dob, const char* bg)
    : name(strdup(n)), dateOfBirth(strdup(dob)), bloodGroup(strdup(bg)) {}

PersonnelInformation::PersonnelInformation(const PersonnelInformation& obj)
    : name(strdup(obj.name)), dateOfBirth(strdup(obj.dateOfBirth)), bloodGroup(strdup(obj.bloodGroup)) {}

PersonnelInformation::~PersonnelInformation() {
    delete[] name;
    delete[] dateOfBirth;
    delete[] bloodGroup;
}

// Member function definition
void PersonnelInformation::displayInfo() const {
    std::cout << "Name: " << name << ", Date of Birth: " << dateOfBirth << ", Blood Group: " << bloodGroup << std::endl;
}

int main() {
    PersonnelInformation person1("John", "01/01/1990", "O+");
    PersonnelInformation person2 = person1; // Copy constructor
    PersonnelInformation person3;

    person1.displayInfo();
    person2.displayInfo();
    person3.displayInfo();

    return 0;
}
