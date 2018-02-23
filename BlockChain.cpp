/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "BlockChain.h"
#include "Block.h"
#include <vector>
#include <iostream>

block::BlockChain::BlockChain() 
{
    Transaction trans;
    trans.from_ = "Genesis";
    trans.to_ = "Genesis";
    trans.amount_ = 1000000.0;
    
    //Create Genesis Block
    Block genesis_block(0, &trans);
    genesis_block.prev_hash = "0";
    genesis_block.current_hash = genesis_block.CreateHash();
    
    
    block_v.push_back(genesis_block);
}

//Add Block into block vector
void block::BlockChain::AddBlock(Block b)
{   
    b.prev_hash = GetLastBlock().current_hash;
    b.current_hash = b.CreateHash();
    block_v.push_back(b);
};

//Get last block from block vector
block::Block block::BlockChain::GetLastBlock(){
    block::Block b = block_v.at(block_v.size() - 1);
    return b;
}

//Get all blocks
block::block_vector block::BlockChain::GetBlocks(){
    return block_v;
}

//Check is block chain still valid
bool block::BlockChain::IsChainStillValid(){
    
    for(unsigned int i = 1;i < block_v.size(); i++)
    {
        block::Block current_block = block_v.at(i);
        block::Block previous_block = block_v.at(i - 1);
        
        //invalid chain
        if(current_block.current_hash != current_block.CreateHash()) return false;
        
        //invalid chain
        if(current_block.prev_hash != previous_block.current_hash) return false;
    }
    return true;
}