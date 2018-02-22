/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Wuriyanto
 *
 * Created on February 22, 2018, 12:08 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "CodeGenerator.h"
#include "sha256.h"

using namespace std;

/*
 * 
 */



int main(int argc, char** argv) {
    
    string input0 = "1738393";
    
    string input1 = "wuriyanto";
    
    string input2 = input0.append(input1);
    
    string res = sha256(input2);
    
    cout << res;
}

