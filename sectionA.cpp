#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//class that asked
class URLs
{
public:
        //define properties
        string scheme, authority, path;

        //constructor to inirialize values
        URLs(string scheme, string authority, string path)
        {
                this->scheme = scheme;
                this -> authority = authority;
                this -> path = path;
        }

        //3 getters to get all 3 properties
        string getScheme()
        {
                return this->scheme;
        }

        string getAuthority()
        {
                return this->authority;
        }

        string getPath()
        {
                return this->path;
        }

        //method to return full url using all 3 properties
        string getUrl()
        {
                return scheme + "." + authority + "." + path;
        }
};

//main method
int32_t main()
{
        //create class object
        URLs obj1("prepaid", "vodafone", "com");
        //call method to get full URL
        string fullurl = obj1.getUrl();
        //print URL on console
        cout << "Full URL is:" << fullurl << endl;
        return 0;
}