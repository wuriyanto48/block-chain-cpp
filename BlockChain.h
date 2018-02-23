/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BlockChain.h
 * Author: wurianto
 *
 * Created on February 23, 2018, 8:02 PM
 */

#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "Block.h"
#include <vector>

namespace block
{
    class BlockChain
    {
    public:
        BlockChain();
        void AddBlock(Block b);
        Block GetLastBlock();
        bool IsChainStillValid();
        block_vector GetBlocks();
    private:
        block_vector block_v;
        
    };
}

#endif /* BLOCKCHAIN_H */

