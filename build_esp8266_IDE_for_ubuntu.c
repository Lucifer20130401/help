/*This file shows you how to build the esp8266 IED in Ubuntu*/

1. $wget -c https://dl.espressif.com/dl/xtensa-lx106-elf-linux64-1.22.0-88-gde0bdc1-4.8.5.tar.gz //download the toolchain for the IDE
2. $tar -vxf xtensa-lx106-elf-linux64-1.22.0-88-gde0bdc1-4.8.5.tar.gz //Extract  the tools.
3. $ mv xtensa-lx106-elf ~/soft  // move the tools to the localtion you want.mine is: ~/soft/xtensa-lx106-elf/bin/
4. //download the SDK and extract to the place you want, mine is:~/github/esp8266/ESP8266_NONOS_SDK-master/
4. $ sudo chmod 777 /etc/profile
5. $ sudo vim /etc/profile
6. //add in the last line with:
//export PATH="$PATH:/home/vincent/soft/xtensa-lx106-elf/bin"
//export PATH="$PATH:/home/vincent/temp/esp/esp8266/ESP8266_NONOS_SDK-master"
//make sure you don't use "~/" instead of /home/vincent/, I have tried.
7. // reboot the Ubuntu.
8. now you can compile your project.
9. 
