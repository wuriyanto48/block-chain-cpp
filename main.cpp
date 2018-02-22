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
#include <ctime>
#include "CodeGenerator.h"
#include "Transaction.h"
#include "Block.h"

using namespace std;

/*
 * 
 */



int main(int argc, char** argv) 
{
    
    Transaction trans;
    trans.from_ = "Wuriyanto";
    trans.to_ = "Alex";
    trans.amount_ = 85000.5;
    
    block::Block block(1, &trans);
    std::string hashedTrans = block.CreateHash();
    std::cout << hashedTrans;
}

