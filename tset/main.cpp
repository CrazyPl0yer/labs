#include <iostream>

using namespace std;

int experement(int a,int b)
{
    int num = a == b ? 1:0;
    return num;
}
void print_table()
{
system("mode con cols=80 lines=25");

for(int i = 0; i < 80; i++)

std::cout << "_";

std::cout << std::endl;

std::cout << " 1 | f | = 0.304878 | m |\n";

for(int i = 0; i < 80; i++)

std::cout << "_";

std::cout << std::endl;

}
int main()
{
    print_table();
    return 0;
}
