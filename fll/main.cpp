#include <iostream>
#include <stdexcept>

using namespace std;

struct Pet
{
    private:
    int m_health;
    int m_happiness;
    int m_staruness;
    int m_weight;
    public:

    Pet()
    {
        set_health(100);
        cout<<"Pet()"<<endl;
    }

    Pet(int health)
    {
        set_health(health);
        m_happiness = 9;
         m_staruness = 9;
        m_weight = 5;
    }

    Pet(int health, int happines)
    {
        set_health(health, happines);
        m_staruness = 9;
        m_weight = 5;
    }

    Pet(int health, int happines, int staruness)
    {
        set_health(health, happines, staruness);
        m_weight = 9;
    }

    void set_health(int health)
    {
        if(health>101||health<0)
        {
            throw std::invalid_argument("health must to be 0-100");
        }
        m_health=health;
    }

    int get_health()
    {
        return m_health;
    }
    void set_happiness(int happiness)
    {
        if(happiness>51||happiness<0)
        {
            throw std::invalid_argument("poshel ti");
        }
        m_happiness=happiness;
    }
    int get_happiness()
    {
        return m_happiness;
    }
    void set_staruness(int staruness)
    {
        if(staruness<0)
        {
            throw std::invalid_argument("you died how LIL PEEP");
        }
        else if(staruness>21)
        {
            throw std::invalid_argument("perezhral");
        }
        m_staruness=staruness;
    }
    int get_staruness()
    {
        return m_staruness;
    }


};
int main()
{
    Pet arr[4]={Pet(),Pet(1),Pet(1,2),Pet(1,2,3)};
    cout << arr[3].get_happiness() << " " << arr[0].get_health() << endl;
    return 0;
}
