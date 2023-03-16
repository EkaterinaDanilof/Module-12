#include <string>
#include <iostream>


void IsKPeriodic(std::string& stroka, int kol)
{
    
 std::string podstroka;
    for (int a = 0; a < kol; a++)
    {
        podstroka.push_back(stroka[a]);
    }
    
    std::size_t found = stroka.find_first_not_of(podstroka);
    if (found == std::string::npos)
        std::cout << "Stroka kratna " <<kol<< std::endl;
    else
        std::cout << "Stroka ne kratna " << kol << std::endl;
    
    
}

int main()

{
    std::string stroka;
    std::cin >> stroka;
    int k;
    std::cin >> k;
    IsKPeriodic(stroka,k);
    
    return 0;
}