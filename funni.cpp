#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
const int MAX = 26;
const int MAX2 = 10;

//Welcomes
void welcomeMessage(){
    string text;
    int a = 0;
    text = "Welcome to FAKE discord nitro generator! This is just a fun project created by Culminated :D\nIf you want to continue type Yes or yes\n";

    while(text[a] != '\0'){
	      cout << text[a];
	      this_thread::sleep_for(chrono::milliseconds(50));
          a++;
    };
}

//Gives invalid code
void invalid(){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int col=4;
    FlushConsoleInputBuffer(hConsole);
    SetConsoleTextAttribute(hConsole, col);

    cout << "[INVALID]";

    SetConsoleTextAttribute(hConsole, 15);
}

//Prints random character
string printRandomString(int n)
{
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];
    return res;
}

//Prints random digit
string printRandomDigit(int m)
{
    char digits[MAX2] = { '1', '2', '3', '4', '5', '6', '7',
                          '8', '9' };

    string res = "";
    for (int i = 0; i < m; i++)
        res = res + digits[rand() % MAX2];
    return res;
}

//Main
int main(){
    srand(time(NULL));
    string yes;
    int i, input, n = 4, m = 1, l = 2, l2 = 2, c = 5, c2 = 5;;
    welcomeMessage();
    cout << ">>> ";
    cin >> yes;
    if(yes == "Yes" || yes == "yes"){
        cout << "How many codes do you want to generate? (MAX 100)\n";
        cout << ">>> ";
        cin >> input;
        for(i=0;i<input;i++){
               invalid(); cout << "https://discord.com/" << printRandomString(n) << printRandomDigit(m) << printRandomString(c) << printRandomDigit(l) << printRandomString(n) << printRandomDigit(m) << endl;
        }
    }
    else{
        cout << "Well, seems like you don't want to proceed generating FAKE codes...that's fine! :D Have a nice day!";
    }
}