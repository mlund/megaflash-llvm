#ifndef QSPIRECONFIG_H
#define QSPIRECONFIG_H

/*
 * minimal set of functions used over all QSPI tools
 * which are: MEGAFLASH, ONBOARD
 */

extern unsigned char reconfig_disabled, input_key;

unsigned char press_any_key(unsigned char attention, unsigned char nomessage);
void reconfig_fpga(unsigned long addr);
unsigned char ascii2petscii(unsigned char a, unsigned char def);
unsigned char ascii2screen(unsigned char a, unsigned char def);

#endif /* QSPIRECONFIG_H */