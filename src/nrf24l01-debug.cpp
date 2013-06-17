#include "nrf24l01-debug.h"
#include <Arduino.h>

void nrf24l01Register_CONFIG(nRF24L01 rf, bool details=true);
void nrf24l01Register_EN_AA(nRF24L01 rf, bool details = true);
void nrf24l01Register_EN_RXADDR(nRF24L01 rf, bool details = true);
void nrf24l01Register_SETUP_AW(nRF24L01 rf, bool details = true);
void nrf24l01Register_SETUP_RETR(nRF24L01 rf, bool details = true);
void nrf24l01Register_RF_CH(nRF24L01 rf, bool details = true);
void nrf24l01Register_RF_SETUP(nRF24L01 rf, bool details = true);
void nrf24l01Register_STATUS(nRF24L01 rf, bool details = true);
void nrf24l01Register_OBSERVE_TX(nRF24L01 rf, bool details = true);
void nrf24l01Register_RPD(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_ADDR_P0(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_ADDR_P1(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_ADDR_P2(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_ADDR_P3(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_ADDR_P4(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_ADDR_P5(nRF24L01 rf, bool details = true);
void nrf24l01Register_TX_ADDR(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_PW_P0(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_PW_P1(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_PW_P2(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_PW_P3(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_PW_P4(nRF24L01 rf, bool details = true);
void nrf24l01Register_RX_PW_P5(nRF24L01 rf, bool details = true);
void nrf24l01Register_FIFO_STATUS(nRF24L01 rf, bool details = true);
void nrf24l01Register_DYNPD(nRF24L01 rf, bool details = true);
void nrf24l01Register_FEATURE(nRF24L01 rf, bool details = true);

void nrf24l01Registers(nRF24L01 rf) {
    nrf24l01Register_CONFIG(rf);
    nrf24l01Register_EN_AA(rf);
    nrf24l01Register_EN_RXADDR(rf);
    nrf24l01Register_SETUP_AW(rf);
    nrf24l01Register_SETUP_RETR(rf);
    nrf24l01Register_RF_CH(rf);
    nrf24l01Register_RF_SETUP(rf);
    nrf24l01Register_STATUS(rf);
    nrf24l01Register_OBSERVE_TX(rf);
    nrf24l01Register_RPD(rf);
    nrf24l01Register_RX_ADDR_P0(rf);
    nrf24l01Register_RX_ADDR_P1(rf);
    nrf24l01Register_RX_ADDR_P2(rf);
    nrf24l01Register_RX_ADDR_P3(rf);
    nrf24l01Register_RX_ADDR_P4(rf);
    nrf24l01Register_RX_ADDR_P5(rf);
    nrf24l01Register_TX_ADDR(rf);
    nrf24l01Register_RX_PW_P0(rf);
    nrf24l01Register_RX_PW_P1(rf);
    nrf24l01Register_RX_PW_P2(rf);
    nrf24l01Register_RX_PW_P3(rf);
    nrf24l01Register_RX_PW_P4(rf);
    nrf24l01Register_RX_PW_P5(rf);
    nrf24l01Register_FIFO_STATUS(rf);
    nrf24l01Register_DYNPD(rf);
    nrf24l01Register_FEATURE(rf);
}

void nrf24l01Registers(nRF24L01 rf, uint8_t registerAddress) {
    switch(registerAddress) {
        case CONFIG:
            nrf24l01Register_CONFIG(rf, true);
            break;
        case EN_AA:
            nrf24l01Register_EN_AA(rf, true);
            break;
        case EN_RXADDR:
            nrf24l01Register_EN_RXADDR(rf, true);
            break;
        case SETUP_AW:
            nrf24l01Register_SETUP_AW(rf, true);
            break;
        case SETUP_RETR:
            nrf24l01Register_SETUP_RETR(rf, true);
            break;
        case RF_CH:
            nrf24l01Register_RF_CH(rf, true);
            break;
        case RF_SETUP:
            nrf24l01Register_RF_SETUP(rf, true);
            break;
        case STATUS:
            nrf24l01Register_STATUS(rf, true);
            break;
        case OBSERVE_TX:
            nrf24l01Register_OBSERVE_TX(rf, true);
            break;
        case RPD:
            nrf24l01Register_RPD(rf, true);
            break;
        case RX_ADDR_P0:
            nrf24l01Register_RX_ADDR_P0(rf, true);
            break;
        case RX_ADDR_P1:
            nrf24l01Register_RX_ADDR_P1(rf, true);
            break;
        case RX_ADDR_P2:
            nrf24l01Register_RX_ADDR_P2(rf, true);
            break;
        case RX_ADDR_P3:
            nrf24l01Register_RX_ADDR_P3(rf, true);
            break;
        case RX_ADDR_P4:
            nrf24l01Register_RX_ADDR_P4(rf, true);
            break;
        case RX_ADDR_P5:
            nrf24l01Register_RX_ADDR_P5(rf, true);
            break;
        case TX_ADDR:
            nrf24l01Register_TX_ADDR(rf, true);
            break;
        case RX_PW_P0:
            nrf24l01Register_RX_PW_P0(rf, true);
            break;
        case RX_PW_P1:
            nrf24l01Register_RX_PW_P1(rf, true);
            break;
        case RX_PW_P2:
            nrf24l01Register_RX_PW_P2(rf, true);
            break;
        case RX_PW_P3:
            nrf24l01Register_RX_PW_P3(rf, true);
            break;
        case RX_PW_P4:
            nrf24l01Register_RX_PW_P4(rf, true);
            break;
        case RX_PW_P5:
            nrf24l01Register_RX_PW_P5(rf, true);
            break;
        case FIFO_STATUS:
            nrf24l01Register_FIFO_STATUS(rf, true);
            break;
        case DYNPD:
            nrf24l01Register_DYNPD(rf, true);
            break;
        case FEATURE:
            nrf24l01Register_FEATURE(rf, true);
            break;
        default:
            Serial.print("Unkown register address: ");
            Serial.println(registerAddress, BIN);
    }
}

uint8_t readRegister(nRF24L01 rf, uint8_t registerAddress) {
    uint8_t data;
    rf.readRegister(registerAddress, &data, 1);
    return data;
}

void printBits(const char *name, uint8_t data, uint8_t mask) {
    Serial.println(name);
    bool printed = false;
    for (int i = 7; i >= 0; i--) {
        uint8_t bitmask = 1 << i;
        if (bitmask ^ mask) continue;
        printed = true;
        uint8_t value = data & bitmask & mask;
        if (i == 3 && printed) Serial.print(" ");
        if (value) Serial.print("1");
        else Serial.print("0");
    }
    Serial.print("\n");
}

void printByte(const char *name, uint8_t data) {
    printBits(name, data, 0xFF);
}

void printBit(const char *name, uint8_t data, int bitNumber) {
    Serial.println(name);
    Serial.println((data & bitNumber) >> bitNumber);
}

void nrf24l01Register_CONFIG(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, CONFIG);
    printByte("CONFIG", data);

    if (!details) return;

    printBit("MASK_RX_DR", data, MASK_RX_DR);
    printBit("MASK_TX_DS", data, MASK_TX_DS);
    printBit("MASK_MAX_RT", data, MASK_MAX_RT);
    printBit("EN_CRC", data, EN_CRC);
    printBit("CRCO", data, CRCO);
    printBit("PWR_UP", data, PWR_UP);
    printBit("PRIM_RX", data, PRIM_RX);
}

void nrf24l01Register_EN_AA(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, EN_AA);
    printByte("EN_AA", data);

    if (!details) return;

    printBit("ENAA_P5", data, ENAA_P5);
    printBit("ENAA_P4", data, ENAA_P4);
    printBit("ENAA_P3", data, ENAA_P3);
    printBit("ENAA_P2", data, ENAA_P2);
    printBit("ENAA_P1", data, ENAA_P1);
    printBit("ENAA_P0", data, ENAA_P0);
}

void nrf24l01Register_EN_RXADDR(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, EN_RXADDR);
    printByte("EN_RXADDR", data);

    if (!details) return;

    printBit("ERX_P5", data, ERX_P5);
    printBit("ERX_P4", data, ERX_P4);
    printBit("ERX_P3", data, ERX_P3);
    printBit("ERX_P2", data, ERX_P2);
    printBit("ERX_P1", data, ERX_P1);
    printBit("ERX_P0", data, ERX_P0);
}

void nrf24l01Register_SETUP_AW(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, SETUP_AW);
    printByte("SETUP_AW", data);

    if (!details) return;

    printBits("AW", data, 0x03);
}

void nrf24l01Register_SETUP_RETR(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, SETUP_RETR);
    printByte("SETUP_RETR", data);

    if (!details) return;

    printBits("ARD", data, 0x0F);
    printBits("ARC", data, 0xF0);
}

void nrf24l01Register_RF_CH(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RF_CH);
    printByte("RF_CH", data);
}

void nrf24l01Register_RF_SETUP(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RF_SETUP);
    printByte("RF_SETUP", data);

    if (!details) return;

    printBit("CONT_WAVE", data, CONT_WAVE);
    printBit("RF_DR_LOW", data, RF_DR_LOW);
    printBit("PLL_LOCK", data, PLL_LOCK);
    printBit("RF_DR_HIGH", data, RF_DR_HIGH);
    printBits("RF_PWR", data, 0x06);
}

void nrf24l01Register_STATUS(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, STATUS);
    printByte("STATUS", data);

    if (!details) return;

    printBit("RX_DR", data, RX_DR);
    printBit("TX_DS", data, TX_DS);
    printBit("MAX_RT", data, MAX_RT);
    printBits("RX_P_NO", data, RX_P_NO_MASK);
    printBit("STATUS_TX_FULL", data, STATUS_TX_FULL);
}

void nrf24l01Register_OBSERVE_TX(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, OBSERVE_TX);
    printByte("OBSERVE_TX", data);

    if (!details) return;

    printBits("PLOS_CNT", data, 0x0F);
    printBits("ARC_CNT", data, 0xF0);
}

void nrf24l01Register_RPD(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RPD);
    printByte("RPD", data);
}

void nrf24l01Register_RX_ADDR_P0(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_ADDR_P0);
    printByte("RX_ADDR_P0", data);
}

void nrf24l01Register_RX_ADDR_P1(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_ADDR_P1);
    printByte("RX_ADDR_P1", data);
}

void nrf24l01Register_RX_ADDR_P2(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_ADDR_P2);
    printByte("RX_ADDR_P2", data);
}

void nrf24l01Register_RX_ADDR_P3(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_ADDR_P3);
    printByte("RX_ADDR_P3", data);
}

void nrf24l01Register_RX_ADDR_P4(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_ADDR_P4);
    printByte("RX_ADDR_P4", data);
}

void nrf24l01Register_RX_ADDR_P5(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_ADDR_P5);
    printByte("RX_ADDR_P5", data);
}

void nrf24l01Register_TX_ADDR(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, TX_ADDR);
    printByte("TX_ADDR", data);
}

void nrf24l01Register_RX_PW_P0(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_PW_P0);
    printByte("RX_PW_P0", data);
}

void nrf24l01Register_RX_PW_P1(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_PW_P1);
    printByte("RX_PW_P1", data);
}

void nrf24l01Register_RX_PW_P2(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_PW_P2);
    printByte("RX_PW_P2", data);
}

void nrf24l01Register_RX_PW_P3(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_PW_P3);
    printByte("RX_PW_P3", data);
}

void nrf24l01Register_RX_PW_P4(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_PW_P4);
    printByte("RX_PW_P4", data);
}

void nrf24l01Register_RX_PW_P5(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, RX_PW_P5);
    printByte("RX_PW_P5", data);
}

void nrf24l01Register_FIFO_STATUS(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, FIFO_STATUS);
    printByte("FIFO_STATUS", data);

    if (!details) return;

    printBit("TX_REUSE", data, TX_REUSE);
    printBit("FIFO_TX_FULL", data, FIFO_TX_FULL);
    printBit("TX_EMPTY", data, TX_EMPTY);
    printBit("RX_FULL", data, RX_FULL);
    printBit("RX_EMPTY", data, RX_EMPTY);
}

void nrf24l01Register_DYNPD(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, DYNPD);
    printByte("DYNPD", data);

    if (!details) return;

    printBit("DPL_P5", data, DPL_P5);
    printBit("DPL_P4", data, DPL_P4);
    printBit("DPL_P3", data, DPL_P3);
    printBit("DPL_P2", data, DPL_P2);
    printBit("DPL_P1", data, DPL_P1);
    printBit("DPL_P0", data, DPL_P0);
}

void nrf24l01Register_FEATURE(nRF24L01 rf, bool details) {
    uint8_t data = readRegister(rf, FEATURE);
    printByte("FEATURE", data);

    if (!details) return;

    printBit("EN_DPL", data, EN_DPL);
    printBit("EN_ACK_PAY", data, EN_ACK_PAY);
    printBit("EN_DYN_ACK", data, EN_DYN_ACK);
}
