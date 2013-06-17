Arduino-nRF24L01+ DEBUG
=======================

To be used with [Arduino-nRF24L01+](https://github.com/antoineleclair/arduino-nrf24l01).

Prints all the registers of nRF24L01+ over Serial.

How to use
----------

Clone the repository somewhere in your home folder, then make a symlink of the source folder in arduino libraries folder. For example, in Ubuntu 13.04:

```bash
git clone git@github.com:antoineleclair/arduino-nrf24l01-debug.git
sudo ln -s arduino-nrf24l01-debug/src /usr/share/arduino/libraries/nrf24l01Debug
```

Then, you can use it to send debug info to Serial.

```c++
#include <nrf24l01-mnemonics.h>
#include <nrf24l01.h>
#include <nrf24l01-debug.h>

// ...

nRF24L01 rf = nRF24L01(SLAVE_SELECT_PIN, CHIP_ENABLE_PIN);
Serial.begin(9600);

// ...

nrf24l01Registers(rf); // sends all the registers to Serial
nrf24l01Registers(rf, CONFIG); // sends this register to Serial, with details
```

Output
------

`nrf24l01Registers(rf)` will send something like this:


    nRF24L01+ registers
    ===================
    CONFIG
    0000 1111
    EN_AA
    0011 1111
    EN_RXADDR
    0000 0001
    SETUP_AW
    0000 0011
    SETUP_RETR
    0000 0011
    RF_CH
    0000 0010
    RF_SETUP
    0000 1111
    STATUS
    0100 0000
    OBSERVE_TX
    0000 0000
    RPD
    0000 0000
    RX_ADDR_P0
    0000 0001
    RX_ADDR_P1
    0000 0001
    RX_ADDR_P2
    1100 0011
    RX_ADDR_P3
    1100 0100
    RX_ADDR_P4
    1100 0101
    RX_ADDR_P5
    1100 0110
    TX_ADDR
    1110 0111
    RX_PW_P0
    0000 0000
    RX_PW_P1
    0000 0000
    RX_PW_P2
    0000 0000
    RX_PW_P3
    0000 0000
    RX_PW_P4
    0000 0000
    RX_PW_P5
    0000 0000
    FIFO_STATUS
    0001 0000
    DYNPD
    0011 1111
    FEATURE
    0000 0100

`nrf24l01Registers(rf, STATUS)` will send something like this:

    STATUS
    0100 0000
    RX_DR
    1
    TX_DS
    0
    MAX_RT
    0
    RX_P_NO
    000
    STATUS_TX_FULL
    0
