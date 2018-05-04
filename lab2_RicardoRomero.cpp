#include <iostream>
#include <string>

using namespace std;

using std::cout;
using std::cin;
using std::string;
using std::endl;


int menu(int resp);

int Triangulo(int resp);
int Circulo(int resp);
int Harshad(int resp);

int main() {
	int resp;

    	cout << "Pick a choice from the list;  (1)Triangulo, (2)Circulo, (3)Harshad: ";
    	cin >> resp;

    	menu(resp);}

int menu(int resp)
{
    while (resp <= 0 || resp > 3)
    {
        switch (resp)
        {
            case 1:
                Triangulo(resp);
		cout <<"triangulo \n";
                break;

            case 2:
                Circulo(resp);
                break;

            case 3:
                Harshad(resp);
                break;
        }
    }
    return resp;
}

int Triangulo(int resp)
{
    cout << "Triangulo\n";
    return resp;
}

int Circulo(int resp)
{
    cout << "Circulo\n";
    return resp;
}

int Harshad(int resp)
{
    cout << "Harshad\n";
    return resp;
}
