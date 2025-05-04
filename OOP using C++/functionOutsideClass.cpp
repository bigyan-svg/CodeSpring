//create a claa player with a function outside the class
#include <iostream>
#include <string>
using namespace std;
class Player
{
    private :
        string name;
        string country;
        string club_name;
        int jersey_number;
        int goals_scored;
    public:
        void get_details();
        void show_details();
};
void Player::get_details()
{
    cout <<"Enter the name of the player:"<<endl;
    getline(cin, name);
    cout <<"Enter the country of the player:"<<endl;
    getline(cin, country);
    cout<<"Enter the name of the player's club:"<<endl;
    getline(cin, club_name);
    cout<<"Enter the jersey number of the player:"<<endl;
    cin>>jersey_number;
    cout<<"Enter the number of goals scored by the player:"<<endl;
    cin>>goals_scored;
}
void Player::show_details()
{
    cout<<"Name of the player:"<<name<<endl;
    cout<<"Country of the player:"<<country<<endl;
    cout<<"Club name of the player:"<<club_name<<endl;
    cout<<"Jersey number of the player:"<<jersey_number<<endl;
    cout<<"Goals scored by the player:"<<goals_scored<<endl;
}
int main()
{
    Player p1; //creating object of class Player
    p1.get_details(); //calling member function get_details() using object p1
    p1.show_details(); //calling member function show_details() using object p1
    return 0;
}
