#include "meta.hpp"

Meta::Meta (Buffer * buf) {
  stats.wordcount = buf -> stats_wordcount(); 
}