#include <iostream>

using namespace std;

class Book{
private:
    string rating;
    public:
int serialNo;
string bookname;
string author;

    void setRating(string aRating){
        if(aRating == "G" || aRating == "PG" || aRating == "HR"){rating = aRating;}
        else{rating = "NR";}
    }
    string getRating(){return rating;}



  Book(int AserialNo, string Abookname, string Aauthor, string aRating){
serialNo = AserialNo;
bookname = Abookname;
author = Aauthor;
setRating(aRating);
}

};

int main()
{   Book book1(258, "Harry Potter", "JK Rowling", "G");

    book1.setRating("PG");
    cout << book1.getRating();
    return 0;
}
