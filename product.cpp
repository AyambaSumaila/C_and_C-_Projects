#include<iostream>
#iinclude<string>

struct Product{
    std::string name;
    double price;
    int rating;
    bool available;

};

int main()
{
    Product book;
    Product tshirt;
    Product *ptr=&book;
    Product& ref=tshirt;
    book.name = "I'm learning C++ Structures";
    std::cout<<ptr->name<<std::endl;
}