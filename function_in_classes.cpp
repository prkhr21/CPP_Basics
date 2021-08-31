#include <iostream>
#include <string>
using namespace std;

class Shop
{
    int item_id[100], item_price[100], counter;

public:
    void init_counter(void);
    void inc_counter(void);
    void set_price(void);
    void display_price(void);
};

void Shop ::init_counter()
{
    counter = 1;
}

void Shop :: inc_counter()
{
    counter++;
}

void Shop ::set_price()
{
    cout << "Enter Item ID of Item no. " << counter << " - " << endl;
    cin >> item_id[counter];
    cout << "Enter Price - " << endl;
    cin >> item_price[counter];
    inc_counter();
}

void Shop ::display_price()
{
    for (int i = 1; i < counter; i++)
    {
        cout << "The Price of Item with ID " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    Shop Aadinath;
    Aadinath.init_counter();
    Aadinath.set_price();
    Aadinath.set_price();
    Aadinath.set_price();
    Aadinath.display_price();
    Shop Trishatripti;
    Trishatripti.init_counter();
    Trishatripti.set_price();
    Trishatripti.set_price();
    Trishatripti.set_price();
    Trishatripti.display_price();
    return 0;
}