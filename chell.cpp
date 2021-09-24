#include <iostream>
#include <string>
#include <filesystem>
#include <unistd.h>
#include <stdlib.h>
#include "scripts/help.cpp"
#include "scripts/git.cpp"
#include "scripts/konami.cpp"
// Load Commands

using namespace std;

int console(){
    string cmd;
    cout << "Chell % ";
    cin >> cmd;
    if (cmd == "help"){
        helpcmd();
    }
    if (cmd == "version"){
        cout << "   Chell v0.5" << endl;
    }
    if (cmd == "figlet"){
        system("figlet");
    }
    if (cmd == "clit"){
        gitcmd();
    }
    if (cmd == "clear"){
        system("clear");
    }
    if (cmd == "sussy"){
        sussy();
    }
    console();
}


int main(){
    system("clear");
    system("figlet Chell");
    console();
}
