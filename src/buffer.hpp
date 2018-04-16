#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <iostream>
#include <vector>
#include <string> 

#include "fileio.hpp"

class Buffer {
  public: 
    Buffer(Fileio * fileio); 
    ~Buffer();
    auto get_size(); 
  private: 
    std::vector<std::string> buff_v; 
};

#endif