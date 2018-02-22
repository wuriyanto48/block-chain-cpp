/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Transaction.h
 * Author: wurianto
 *
 * Created on February 22, 2018, 12:23 AM
 */

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <ctime>

class Transaction
{
    
public:
    Transaction();
    Transaction(std::string from, std::string to, float amount);
    std::string from_;
    std::string to_;
    float amount_;
    time_t created_at;
    
    std::string CreatedAtToString();
};
 
#endif /* TRANSACTION_H */

