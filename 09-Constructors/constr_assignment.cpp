/*
Write OOP of Manchester United football player using constructor...
*/
#include<iostream>
#include<string>
using namespace std;

class football_player
{
    private:
        string name;
        int kit_no;
        string nationality;
        int age;

    public:
        football_player(string name_p = "Null", int kit_no_p = 0, string nationality_p = "Null", int age_p = 0)
        {
            name = name_p;
            kit_no = kit_no_p;
            nationality = nationality_p;
            age = age_p;
        }

        football_player(football_player &infos)
        {
            name = infos.name;
            kit_no = infos.kit_no;
            nationality = infos.nationality;
            age = infos.age;
        }

        void getInfo();
};

void football_player::getInfo()
{
    cout << endl << "The player name is " << name;
    cout << endl << "Kit number is " << kit_no;
    cout << endl << "His national team is " << nationality;
    cout << endl << "Age is " << age;
}

int main()
{
    football_player player, player1("Bruno Fernandes", 18, "Portugal", 27), player2(player1);

    player.getInfo();
    player1.getInfo();
    player2.getInfo();

    return 0;
}