#ifndef __UARTLITE_H
#define __UARTLITE_H

#include "sim.h"
#include "abstract_device.h"

#define UARTLITE_BASE_ADDR  0x40600000L
#define UARTLITE_END_ADDR  0x40600010L
#define UARTLITE_MEM_SIZE_BYTE (UARTLITE_END_ADDR - UARTLITE_BASE_ADDR) / sizeof(uint8_t)
#define UARTLITE_RX_FIFO  0x0
#define UARTLITE_TX_FIFO  0x4
#define UARTLITE_STAT_REG 0x8
#define UARTLITE_CTRL_REG 0xc

class uartlite_t : public abstract_device_t {
  public:
  bool load(reg_t addr, size_t len, uint8_t* bytes);
  bool store(reg_t addr, size_t len, const uint8_t* bytes);
  unsigned long int size(){ return UARTLITE_MEM_SIZE_BYTE; };
  ~uartlite_t(){};
};

#endif
