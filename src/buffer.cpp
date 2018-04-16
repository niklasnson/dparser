#include "buffer.hpp"

Buffer::Buffer(Fileio * fileio) {
  buff_v = fileio -> to_buffert();
}

Buffer::~Buffer (void) {
}

auto Buffer::get_size (void) {
  buff_v.size(); 
}