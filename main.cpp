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
#include "BlockChain.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) 
{
    
    Transaction trans1;
    trans1.from_ = "Wuriyanto";
    trans1.to_ = "Alex";
    trans1.amount_ = 85000.5;
    
    Transaction trans2;
    trans2.from_ = "Alex";
    trans2.to_ = "Jeff";
    trans2.amount_ = 100000.5;
    
    Transaction trans3;
    trans3.from_ = "Ben";
    trans3.to_ = "Jeff";
    trans3.amount_ = 500000.5;
    
    
    block::Block block1(1, &trans1);
    block::Block block2(2, &trans2);
    
    block::BlockChain blockChain;
    blockChain.AddBlock(block1);
    blockChain.AddBlock(block2);
    
    
    blockChain.GetBlocks()[1].SetData(&trans3);
    
    std::cout << blockChain.GetBlocks().at(1).data_->from_ << std::endl;
    std::cout << blockChain.IsChainStillValid() << std::endl;
    
    
}

