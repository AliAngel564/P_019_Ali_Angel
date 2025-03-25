/*
Amerike University
Author: Ali Angel
Work #: 19
Date: 25/03/25
Description: This program will use a struct to store different data about different videogames 
and we will then show said data to the user
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void pressAnyKey();

struct VideoGame
{
    string title;
    string ageRating;
    float price;

    string setTitle(string newTitle)
    {
        title = newTitle;
    }
    string setRating(string newRating)
    {
        ageRating = newRating;
    }
    float setPrice(float newPrice)
    {
        price = newPrice;
    }
    string getTitle()
    {
        return title;
    }
    string getRating()
    {
        return ageRating;
    }
    float getPrice()
    {
        return price;
    }
};

int main(){
    string name,rating;
    float price;
    VideoGame usrGame;
    cout << "This program will prompt you to input information about a videogames\n";
    pressAnyKey();
    cout <<"Title: ";
    getline(cin,name);
    usrGame.setTitle(name);
    cout << "\nAge Rating: ";
    getline(cin,rating);
    usrGame.setRating(rating); 
    cout << "\nPrice: $ ";
    cin >> price;
    usrGame.setPrice(price);    
    cout << "\nWe will now show you the data you input videogame\n";
    pressAnyKey();
    cout << "Title: " << usrGame.getTitle();
    cout << "\nAge Rating: " << usrGame.getRating();
    cout << "\nPrice: $ " << usrGame.getPrice();

    return 0;    
}

void pressAnyKey()
{
    cout << "PRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}