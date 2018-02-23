/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CodeGenerator.h
 * Author: Wuriyanto
 *
 * Created on February 22, 2018, 4:30 PM
 */

#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

static const char alphanumeric[] = "0123456789"
"!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";

int length = sizeof(alphanumeric) - 1;

static char fill_()
{
    return alphanumeric[rand() % length];
}
    
namespace code_gen
{

    std::string gen()
    {
        srand(time(0));
        std::string result;
        for(unsigned int i = 0;i < 20; i++)
        {
            result += fill_();
        }
        return result;
    }
}

#endif /* CODEGENERATOR_H */

