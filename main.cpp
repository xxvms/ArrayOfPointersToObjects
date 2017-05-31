#include <iostream>
class Person                            // class of person
{
protected:
    char name[40];                      // this holds person name
public:
    void setName()                      // set person name
    {
        std::cout << "Enter name: ";
        std::cin >> name;
    }
    void printName()                    // get name
    {
        std::cout << "\nName is: " << name;
    }
};
int main()
{
    Person* personPtr[100];             // array of pointers to person
    int n = 0;                          // number of persons in array
    char choice;
    
    do                                  // put person in to array
    {
        personPtr[n] = new Person;      //  make new object type Person
        personPtr[n]->setName();        // set person name
        n++;                            // count new person
        std::cout << "Enter another (y/n)?"; // choice
        std::cin >> choice;
    }
    while (choice == 'y');               // quit on 'n'
    
    for (int i = 0; i < n; i++)         // print names of all persons
    {
        std::cout << "\nPersona number " << i+1;
        personPtr[i]->printName();
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}