// Copyright 2024 maximusf
// implement functionality of Book class

#include "book.h"

Book::Book() {
    title_ = "Untitled";
    author_ = "Unknown";
    num_chapters_ = 0;
    chapter_title_ = nullptr;
}

Book::Book(const Book& b) : title_(b.title_), author_(b.author_), 
                            num_chapters_(b.num_chapters_) {
    if ( num_chapters_ == 0 ) {
        chapter_title_ = nullptr;
    }
    else {
        chapter_title_ = new string[num_chapters_];
        for (int i = 0; i < num_chapters_; ++i)
            chapter_title_[i] = b.chapter_title_[i];
    }
}

Book& Book::operator = (const Book& b) {
    title_ = b.title_;
    author_ = b.author_;
    num_chapters_ = b.num_chapters_;

    if ( chapter_title_ != nullptr )
        delete [] chapter_title_; // delete the old array memory

    if ( num_chapters_ == 0 ) {
        chapter_title_ = nullptr;
    }
    else {
        chapter_title_ = new string[num_chapters_];
        for (int i = 0; i < num_chapters_; ++i)
            chapter_title_[i] = b.chapter_title_[i];
    }
    return *this;
}


ostream& operator << (ostream& whereto, const Book& b) {
    whereto << b.title_ << " by " << b.author_;
    for (int i = 0; i < b.num_chapters_; ++i) {
        whereto << "Chapter " << i + 1 << ": " << b.chapter_title_[i];
    }
    return whereto;
}



void Book::SetTitle(string t) {
    if (t != "")
        title_ = t;
}

void Book::SetAuthor(string a) {
    if (a != "")
        author_ = a;
}
string Book::GetChapterTitle(int i) const {
    if (i >= 1 && i <= num_chapters_)
        return chapter_title_[i - 1];
    return "Invalid Chapter Number!";
}
void Book::SetChapter(int i, string t) {
    if (i >= 1 && i <= num_chapters_)
        chapter_title_[i - 1] = t;
}
void Book::SetNumChapter(int n) {
    if ( num_chapters_ == n  || num_chapters_ < 0 )
        return;
    if ( chapter_title_ != nullptr )
        delete [] chapter_title_;
    chapter_title_ = new string[n];
    num_chapters_ = n;
}

// if you have a pointer as a data member, you need to define:
// 1) copy constructor
// 2) assignment operator
// 3) destructor
