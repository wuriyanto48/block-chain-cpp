/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Block.h"
#include "sha256.h"
#include "Transaction.h"
#include <string>
#include <sstream>
#include <ctime>

block::Block::Block(){
    
}

block::Block::Block(int index, Transaction* data){
    index_ = index;
    data_ = data;
    created_at = time(0);
}

std::string block::Block::CreateHash(){
    std::stringstream s;
    s << index_ << prevHash << created_at << data_;
    return sha256(s.str());
}