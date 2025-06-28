/*Write a class called player having jersey number, no of goals, no of assists.
WAP to overload greater than '<' operator to compare  which   vb              player is greatest
Compare on the basis of no of goals and no of assists 
*/
#include<iostream>
using namespace std;
class Player
{
    private:
        int jerseyNumber;
        int noOfGoals;
        int noOfAssists;
    public:
        Player(int jn, int ng, int na)
        {
            jerseyNumber = jn;
            noOfGoals = ng;
            noOfAssists = na;
        }
        void display()
        {
            cout << "Jersey Number: " << jerseyNumber << endl;
            cout << "Goals: " << noOfGoals << endl;
            cout << "Assists: " << noOfAssists << endl;
        }
        bool operator<( Player& other)
        {
            if (noOfGoals == other.noOfGoals)
            {
                return noOfAssists < other.noOfAssists;
            }
            return noOfGoals < other.noOfGoals;
        }

};
int main()
{
    Player p1(10, 20, 5);
    Player p2(11, 25, 3);
    cout << "Player 1:" << endl;
    p1.display();
    
    cout << "Player 2:" << endl;
    p2.display();

    if (p1 < p2)  //Compiler understand as p1.operator<(p2)
    {
        cout<<"Player 2 is greater than Player 1 based on goals and assists."<<endl;
    }
    else
    {
        cout<<"Player 1 is greater than Player 2 based on goals and assists."<<endl;
    }
    return 0;
}
