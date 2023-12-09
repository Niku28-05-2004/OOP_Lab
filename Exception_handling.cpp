#include <bits/stdc++.h>
using namespace std;

class user
{
private:
    int age;
    int vehicle;
    int income;
    string city;

public:
    void Age()
    {
        cout << "Enter the Age : ";
        cin >> age;

        try
        {
            if (age < 18 || age > 55)
            {
                throw age;
            }
        }

        catch (int)
        {
            cout << "Age is Invalid" << endl;
        }
    }

    void Income()
    {
        cout << "Enter the Income : ";
        cin >> income;

        try
        {
            if (income < 50000 || income > 100000)
            {
                throw income;
            }
        }

        catch (int)
        {
            cout << "Income is Invalid" << endl;
        }
    }

    void Vehicle()
    {
        cout << "\nEnter :\n1) 2 Wheeler \n2)4 Wheeler : ";
        cin >> vehicle;

        try
        {
            if (vehicle == 1)
            {
                throw vehicle;
            }
        }

        catch (int)
        {
            cout << "Choosen Vehicle is invalid" << endl;
        }
    }

    void City()
    {
        cout << "Enter the city:";
        cin >> city;

        try
        {
            // if ((!strcmp(city, "pune")) || (!strcmp(city, "mumbai")) || (!strcmp(city, "chennai")) || (!strcmp(city, "delhi")))
            if (city != "pune" && city != "mumbai" && city != "chennai" && city != "delhi")
            {
                throw city;
            }
        }

        catch (string)
        {
            cout << "Invalid city" << endl;
        }
    }
};

int main()
{
    user u;
    u.Age();
    u.Income();
    u.Vehicle();
    u.City();

    return 0;
}