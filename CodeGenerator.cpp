/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;


static const char alphanumeric[] = "0123456789"
"!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";

int length = sizeof(alphanumeric) - 1;

char fill_()
{
    return alphanumeric[rand() % length];
}

string gen()
{
    srand(time(0));
    string result;
    for(unsigned int i = 0;i < 20; i++)
    {
        result += fill_();
    }
    return result;
}