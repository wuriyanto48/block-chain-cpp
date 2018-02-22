/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Transaction.h"
#include <string>
#include <ctime>

Transaction::Transaction()
{
    
}

Transaction::Transaction(std::string from, std::string to, float amount)
{
    from_ = from;
    to_ = to;
    amount_ = amount;
    created_at = time(0);
}

std::string Transaction::CreatedAtToString()
{
    return ctime(&created_at);
}