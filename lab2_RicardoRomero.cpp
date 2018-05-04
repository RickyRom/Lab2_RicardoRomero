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
bool Harshad(int resp);

int main() {
	int resp;

    	cout << "Elija una opción;  (1)Triangulo, (2)Circulo, (3)Harshad: ";
    	cin >> resp;

    	menu(resp);
}

int menu(int resp)
{
    while (resp >= 1 || resp < 3)
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
                Harshad(201)? cout << "si\n" : cout << "no\n";
                break;
        }
	resp = 0; 
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

bool Harshad(int n)
{
    int sum = 0;
    int x;
    int result = n / x;
    for (int temp = n; temp > 0; temp /= 10)
	    sum += temp % 10;

    return (n % sum == 0);
}


