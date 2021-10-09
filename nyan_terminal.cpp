#include <iostream>
#include <string>

using namespace std;


void nyanf(string text, string color, string background) {

    string result = "";
    // Text Colors

    if(color == "black") {
        result += "\x1b[30m";
    } else if(color == "red") {
        result += "\x1b[31m";
    } else if(color == "green") {
        result += "\x1b[32m";
    } else if(color == "yellow") {
        result += "\x1b[33m";
    } else if(color == "blue") {
        result += "\x1b[34m";
    } else if(color == "magenta") {
        result += "\x1b[35m";
    } else if(color == "cyan") {
        result += "\x1b[36m";
    } else if(color == "white") {
        result += "\x1b[37m";
    } else if(color == "default") {
        result += "";
    }

    // Background Colors

    if(background == "black") {
        result += "\x1b[40m";
    } else if(background == "red") {
        result += "\x1b[41m";
    } else if(background == "green") {
        result += "\x1b[42m";
    } else if(background == "yellow") {
        result += "\x1b[43m";
    } else if(background == "blue") {
        result += "\x1b[44m";
    } else if(background == "magenta") {
        result += "\x1b[45m";
    } else if(background == "cyan") {
        result += "\x1b[46m";
    } else if(background == "white") {
        result += "\x1b[47m";
    } else if(background == "default") {
        result += "";
    }

    cout << result + text << endl;
}