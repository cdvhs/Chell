#include <iostream>

using namespace std;

int gitcmd()
{
    cout << "   URL: ";
    string url;
    cin >> url;
    string position;
    cout << "   Location: ";
    cin >> position;
    string command = "git clone " + url + " " + position;

    system((const char*)command.c_str());
}