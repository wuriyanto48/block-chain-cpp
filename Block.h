/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Block.h
 * Author: wurianto
 *
 * Created on February 22, 2018, 12:42 AM
 */

#ifndef BLOCK_H
#define BLOCK_H

#include "Transaction.h"
#include <string>
#include <ctime>

class Block{
    
public:
    Block();
    Block(int index, Transaction data);
    
    int index_;
    string prevHash;
    time_t created_at;
    Transaction data_;
    
    
};

#endif /* BLOCK_H */

