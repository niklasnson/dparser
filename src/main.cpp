#include <iostream>
#include <string>
#include <string>

#include "buffer.hpp"
#include "fileio.hpp"

typedef struct {
  int     argc; 
  char**  argv; 
} parm_t;

typedef struct {
  Fileio * fileio; 
  Buffer * buffer; 
} buffer_t; 

static void init_params (parm_t *param_ptr, int argc, char* argv[]) {
  param_ptr -> argc = argc;
  param_ptr -> argv = argv; 
  return; 
}

static void init_buffert (buffer_t *buffer_ptr, int argc, char* argv[]) {
  buffer_ptr -> fileio = new Fileio(argv[1]);
  buffer_ptr -> buffer = new Buffer(buffer_ptr -> fileio);  
  return; 
}

static void system_init (buffer_t *buffer_ptr, parm_t *param_ptr, int argc, char** argv) {
  init_params(param_ptr, argc, argv);
  init_buffert(buffer_ptr, argc, argv); 
  return; 
}

static void system_stats (buffer_t *buffer_ptr) {
  std::cout << "size of buffert: " << buffer_ptr -> buffer -> get_size() << std::endl; 
}

int main (int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "useage: dparser [filename]" << std::endl; 
    return -1; 
  }
  parm_t   params;
  buffer_t buffer;  
  system_init(&buffer, &params, argc, argv);
  system_stats(&buffer);  
  return 0; 
}