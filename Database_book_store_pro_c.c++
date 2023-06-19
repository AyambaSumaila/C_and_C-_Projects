#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Book {
public:
  string author;
  string title;
  string date;

  Book(string author, string title, string date) : author(author), title(title), date(date) {}

  bool operator<(const Book& other) const {
    return author < other.author;
  }
};

int main() {
  vector<Book> books;

  int choice;
  while (true) {
    cout << "Select from the following choices: " << endl;
    cout << "1. Add new book." << endl;
    cout << "2. Print listing sorted by author." << endl;
    cout << "3. Quit." << endl;

    cin >> choice;

    if (choice == 1) 
    {
      string author, title, date;
      cout << "Enter title: ";
      cin >> title;
      cout << "Enter author: ";
      cin >> author;
      cout << "Enter date: ";
      cin >> date;

      books.push_back(Book(author, title, date));
    }
    
     else if (choice == 2) {
      sort(books.begin(), books.end());

      for (int i = 0; i < books.size(); i++) {
        cout << books[i].author << " " << books[i].title << " " << books[i].date << endl;
      }
    } else {
      break;
    }
  }

  return 0;
}
