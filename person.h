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
    protected:
        string name;
        string address;
        string email;

    public:
        Person(string name, string address, string email);
        
        string getName(){
            return name;
        };

        void setName(string n){
            name = n;
        };

        string getAddress(){
            return address;
        };

        void setAddress(string a){
            address = a;
        };

        string getEmail(){
            return email;
        };

        void setEmail(string e){
            email = e;
        };
};

class Librarian : public Person {
    private:
        int staffID;
        int salary;

    public:
        Librarian(int staffID, const std::string& name, const std::string& address,
               const std::string& email, int salary)
        : Person(name, address, email), staffID(staffID), salary(salary) {
    }
        
        void addMember(){

        };

        void issueBook(int memberID, int bookID){

        };

        void returnBook(int memberID, int bookID){

        };

        void displayBorrowedBooks(int memberID){
            
        };

        void calcFine(int memberID){

        };
        
        int getStaffID(){
            return staffID;
        };

        void setStaffID(int sID){
            staffID = sID;
        };

        int getSalary(){
            return salary;
        };

        void setSalary(int sal){
            salary = sal;
        };
};


class Member : public Person {
    private:
        int memberID;
        vector<Book> booksLoaned;

    public:
        Member(int memberID, const std::string& name, const std::string& address, const std::string& email)
        : Person(name, address, email), memberID(memberID) {
    }

        int getMemberID(){
            return memberID;
        };

        vector<Book> getBooksBorrowed(){
            return booksLoaned;
        };

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
        Book(int bookID);

        int getBookID(){
            return bookID;
        };

        string getBookName(){
            return bookName;
        };

        string getAuthorFirstName(){
            return authorFirstName;
        };
    
        string getAuthorLastName(){
            return authorLastName;
        };

        void setDueDate();
        void returnBook();
        void borrowBook(Member borrower);
};

#endif