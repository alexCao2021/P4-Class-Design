#include<bits/stdc++.h>
#include<iostream>
using namespace std;


//define class item
class Items
{
public:
        //declare properties
        string name;
        double price;
        int quantity;

        //constructor to take item input
        Items(string name, double price, int quantity)
        {
                this->name = name;
                this->price = price;
                this->quantity = quantity;
        }

};

//define global vector to store item
vector<Items> v;

//define class store
class Store
{
public:

        //method to add item into store
        void addItem(Items i)
        {
                v.push_back(i);
        }

        //method to print all items of store
        void printItems()
        {
                for (int i = 0; i < v.size(); i++)
                {
                        Items curr = v[i];
                        cout << curr.name << " x " << curr.quantity << endl;
                        //cout << endl;
                }
        }
};

//main method
int32_t main()
{

        //create items using Items class
        Items i1("Book", 120, 12);
        Items i2("Colored Pencils", 35, 15);
        Items i3("Coloring Paper", 5, 20);
        Items i4("Markers", 10, 50);
        Items i5("Crayons", 25, 3);
        Items i6("Staples", 15, 7);

        //create store using store class
        Store s1;
        //add items to store
        s1.addItem(i1);
        s1.addItem(i2);
        s1.addItem(i3);
        s1.addItem(i4);
        s1.addItem(i5);
        s1.addItem(i6);
        //call method to print all items
        s1.printItems();
        return 0;
}