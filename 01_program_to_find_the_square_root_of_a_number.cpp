#include<iostream>

using namespace std;

bool isPrime(int number)
{
    for(int i = 2; i < number; i++)
    {
        if(!(number%i)) return false;
    }
    return true;
}

int main(void)
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(!isPrime(num)) cout << "Number is not prime!";
    else cout << "Number is Prime!";
}