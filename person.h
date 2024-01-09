#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
#include <vector>

class Person {
    private:
        std::string name;
        std::string address;
        std::string email;

    public:
        std::string getName();
        void setName(std::string name);
        std::string getAddress();
        void setAddress(std::string address);
        std::string getEmail();
        void setEmail(std::string email);
};

class Librarian : public Person {
    private:
        int staffID;
        int salary;

    public:

};


class Member : public Person {
    private:
        int memberID;
        std::vector<std::string> booksLoaned;


};





#endif