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
        Librarian(int staffID, std::string name, std::string address,
        std::string email, int salary);
        void addMember();
        void issueBook(int memberID);
        void returnBook();
        void displayBorrowedBooks();
        void calcFine();
        int getStaffID();
        void setStaffID();
        int getSalary();
        void setSalary();
};


class Member : public Person {
    private:
        int memberID;
        std::vector<std::string> booksLoaned;

    public:
        Member(int memberID, std::string name, std::string address,
        std::string email);
        int getMemberID();
        std::vector<std::string> getBooksBorrowed();
        void setBooksBorrowed();

};


class Book : public Librarian, public Member {
    private:
        int bookID;
        std::string bookName;
        std::string authorFirstName;
        std::string authorLastName;
        std::string bookType;
        Member borrower;
};

#endif