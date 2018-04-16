#include <iostream>
#include <string>

#include "buffer.hpp"

typedef struct {
  int     argc; 
  char**  argv; 
} parm_t;

static void init_params (parm_t *param_ptr, int argc, char* argv[]) {
  param_ptr -> argc = argc;
  param_ptr -> argv = argv; 
  return; 
}

static void system_init (int argc, char** argv) {
  parm_t params; 
  init_params(&params, argc, argv);
  return; 
}

int main (int argc, char* argv[]) {
  system_init(argc, argv); 
  return 0; 
}