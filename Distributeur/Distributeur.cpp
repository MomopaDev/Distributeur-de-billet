#include <algorithm>
#include <iostream>
#include <vector>

std::vector <int> n_money{};
std::vector <int> p_money{ 500,200,100,50,20,10,5 };

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
        std::cout << it << " x " << element << '\n';
    }

}
int main()
{
    int entry;
    std::cout << "Entrez l'argent que le distributeur doit vous donner : ";
    std::cin >> entry;
    if (entry < 5) {
        std::cout << "Vous ne pouvez pas entrer une valeur inférieure à 5€" << std::endl;
        return EXIT_FAILURE;
    }
    else {
        distrib(entry);
        return EXIT_SUCCESS;
    }    
}
