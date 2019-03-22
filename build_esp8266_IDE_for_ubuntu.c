/*This file shows you how to build the esp8266 IED in Ubuntu*/

1. $wget -c https://dl.espressif.com/dl/xtensa-lx106-elf-linux64-1.22.0-88-gde0bdc1-4.8.5.tar.gz //download the toolchain for the IDE
2. $tar -vxf xtensa-lx106-elf-linux64-1.22.0-88-gde0bdc1-4.8.5.tar.gz //Extract  the tools.
3. $ mv xtensa-lx106-elf ~/soft  // move the tools to the localtion you want.mine is: ~/soft/xtensa-lx106-elf/bin/
4. //download the SDK and extract to the place you want, mine is:~/github/esp8266/ESP8266_NONOS_SDK-master/
4. $ sudo chmod 777 /etc/profile
5. $ sudo vim /etc/profile
6. //add in the last line with:
//export PATH="$PATH:/home/vincent/soft/xtensa-lx106-elf/bin"
//export PATH="$PATH:/home/vincent/github/esp8266/ESP8266_NONOS_SDK-master"
//make sure you don't use "~/" instead of /home/vincent/, I have tried.
7. // reboot the Ubuntu.

/* now you can compile your project.*/

8. $cd ~/github/esp8266/ESP8266_NONOS_SDK-master
9. $cp ./examples/peripheral_test ../
10. $vim Makefile
11. // modify SPI_SIZE_MAP?=0 to SPI_SIZE_MAP?=4  save and exit
12. $vim vi peripheral_test/user/user_main.c
13. //add #define SPI_FLASH_SIZE_MAP 4 , and os_printf("Hello Vincent. How are you!?***************\r\n");
14. //save and exit
15. cd peripheral_test// please MAKE SURE YOU ARE IN THE peripheral_test DIRECTION. if you don't you will get wrong informations.
16. sh gen_misc.sh
17. //you will see:

/*
!!!
No boot needed.
Generate eagle.flash.bin and eagle.irom0text.bin successully in folder bin.
eagle.flash.bin-------->0x00000
eagle.irom0text.bin---->0x10000
!!!
*/

/*next step, download bin files to the chip!!*/


