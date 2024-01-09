#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
#include <vector>

using namespace std;

/*
TO DO:
- add Date class
- add functions for each class
- fukcing idk bro
*/



class Person {
    private:
        string name;
        string address;
        string email;

    public:
        string getName();
        void setName(string name);
        string getAddress();
        void setAddress(string address);
        string getEmail();
        void setEmail(string email);
};

class Librarian : public Person {
    private:
        int staffID;
        int salary;

    public:
        Librarian(int staffID, string name, string address,
        string email, int salary);
        void addMember();
        void issueBook(int memberID, int bookID);
        void returnBook(int memberID, int bookID);
        void displayBorrowedBooks(int memberID);
        void calcFine(int memberID);
        int getStaffID();
        void setStaffID(int staffID);
        int getSalary();
        void setSalary(int salary);
};


class Member : public Person {
    private:
        int memberID;
        vector<Book> booksLoaned;

    public:
        Member(int memberID, string name, string address,
        string email);
        int getMemberID();
        vector<Book> getBooksBorrowed();
        void setBooksBorrowed(Book book);

};


class Book : public Librarian, public Member {
    private:
        int bookID;
        string bookName;
        string authorFirstName;
        string authorLastName;
        string bookType;
        Member borrower;

    public:
        Book(int bookID, string bookName, string authorFirstName,
        string authorLastName);
        int getBookID();
        string getBookName();
        string getAuthorFirstName();
        string getAuthorLastName();
        void setDueDate();
        void returnBook();
        void borrowBook(Member borrower);
};

#endif