#include "buffer.hpp"

Buffer::Buffer(Fileio * fileio) {
  buff_v = fileio -> to_buffert();
}

Buffer::~Buffer (void) {
}

int Buffer::stats_wordcount (void) {
  return buff_v.size();   
}