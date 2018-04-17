#ifndef META_HPP
#define META_HPP

#include "buffer.hpp"
#include <iostream> 

typedef struct {
  int wordcount;
} stats_t; 

class Meta {
  public: 
    Meta(Buffer * buf); 
    ~Meta(); 
    stats_t stats; 
  private:
};

#endif