#include "uartlite.h"
#include "sim.h"

bool uartlite_t::load(reg_t addr, size_t len, uint8_t* bytes){
  switch (addr) {
    case UARTLITE_STAT_REG:
      memset(bytes, 0, len);
  }
  return true;
}

bool uartlite_t::store(reg_t addr, size_t len, const uint8_t* bytes) {
  switch (addr) {
    case UARTLITE_TX_FIFO:
      putc(*bytes, stdout);
  }
  return true;
}