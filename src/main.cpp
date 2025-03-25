/*
Amerike University
Author: Ali Angel
Work #: 17
Date: 21/03/25
Description: This program will use a struct to store different data about different videogames 
and we will then show said data to the user
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pressAnyKey();

struct VideoGame
{
    string title;
    string ageRating;
    float price;
};

int main(){
    VideoGame videogames[3];
    cout << "This program will prompt you to input information about three videogames\n";
    pressAnyKey;
    for(int i=0;i<3;i++)
    {
        cout << i+1 << ".Game\nTitle: ";
        cin >> videogames[i].title;
        cout << "Age Rating: ";
        cin >> videogames[i].ageRating;
        cout << "Price: $ ";
        cin >> videogames[i].price;
        cout << "\n";
    }
    cout << "We will now show you your videogames\n";
    pressAnyKey();
    for(int i=0;i<3;i++)
    {
        cout << i+1 << ".Game\nTitle: " << videogames[i].title<<"\nAge Rating: " << videogames[i].ageRating << "\nPrice: $ " << videogames[i].price << endl;
    }



    return 0;    
}

void pressAnyKey()
{
    cout << "PRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}