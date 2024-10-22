// Copyright 2024 maximusf
// Define a book class, - title, author, chapter titles

#ifndef BOOK_H_
#define BOOK_H_

#include<string>
using std::string;
#include<iostream>
using std::ostream;

class Book {
    // overloaded insertion operator
    friend ostream& operator << (ostream&, const Book&);
    // default constructor
    public:
        Book();
        // when we have a pointer as a data member we need to define a copy constructor
        Book(const Book&);

        // when we have a pointer as a data member we need to write the
        // destructor to free the dynamically allocated memory
        ~Book() { if ( chapter_title_ != nullptr ) delete [] chapter_title_; } 

        string GetTitle() const { return title_; };
        string GetAuthor() const { return author_; };
        void SetTitle(string t);
        void SetAuthor(string a);
        string GetChapterTitle(int i) const; // const means it won't change the object values
        void SetChapter(int i, string t); // chapter #, title
        void SetNumChapter(int n);

        Book& operator = (const Book&);

    private:
        string title_;
        string author_;
        string * chapter_title_;
        int num_chapters_;
}; // dont forget the semicolon

#endif

// if you have a pointer as a data member, you need to define:
// 1) copy constructor
// 2) assignment operator
// 3) destructor
