#include <fstream>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


vector <int> n_money{};
vector <int> p_money{ 500,200,100,50,20,10,5 };

void distrib(int money)
{
    while (money >= 5)
    {
        for (auto element : p_money)
        {
            if (money >= element)
            {
                n_money.push_back(element);
                money -= element;
                break;
            }
        }
    }
    for (auto element : p_money)
    {
        int it = count(begin(n_money), end(n_money), element);
        cout << it << " x " << element << '\n';
    }

}
int main()
{
    distrib(3685);
    return 0;
}
