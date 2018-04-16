#include "fileio.hpp"

Fileio::Fileio (std::string filename): filename(filename) {}

Fileio::~Fileio (void) {
} 

std::vector<std::string> Fileio::to_buffert (void) {
  std::vector<std::string> buff; 
  std::string tmp; 
  std::ifstream ifs;
  ifs.open (filename, std::ifstream::in);
  while (ifs >> tmp) {
    buff.push_back(tmp); 
  }
  return buff; 
}

int Fileio::from_buffert (void) {
  return 0; 
}