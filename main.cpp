#include <iostream>
using namespace std;


int main()
{

    string product, category;
    int price;

    cout << "Enter Product Name: ";
    cin >> product;
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Category: ";
    cin >> category;
    cout << "==============================================" <<"\n";

    cout << "Product: " << product << "\n";

    if(price >= 10000) {
        cout << "Price Category: High Value Product\n";
    } else if (price >= 5000 && price < 10000) {
        cout << "Price Category: Mediam Value Product\n"; 
    } else {
        cout << "Price Category: Low Value Product\n";
    }

    if(category == "Electronics") {
        cout << "Tax: 14%" << "\n";
    } else if (category == "Food") {
        cout << "Tax: 5%" << "\n";
    } else if (category == "Clothing") {
        cout << "Tax: 10%" << "\n";
    } else {
        cout << "Unknown category" << "\n";
    }

    double FinalPrice = (category == "Electronics") ? price + (price * 0.14) : (category == "Food") ? price + (price * 0.05) : (category == "Clothing") ? price + (price * 0.10): price; 

    cout << "Price After Tax: " << FinalPrice << "\n";
}
