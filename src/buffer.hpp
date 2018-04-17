#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <iostream>
#include <vector>
#include <string> 

#include "fileio.hpp"

class Buffer {
  public: 
    Buffer (Fileio * fileio); 
    ~Buffer ();
    int stats_wordcount (void);
  private: 
    std::vector<std::string> buff_v; 
};

#endif