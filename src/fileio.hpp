#ifndef FILEIO_HPP
#define FILEIO_HPP

#include <iostream> 
#include <string>
#include <vector>
#include <fstream>

class Fileio {
  public: 
    Fileio(std::string filename); 
    ~Fileio(); 
    int from_buffert(void);
    std::vector<std::string> to_buffert(void);  
  private: 
    std::string filename; 
};
#endif