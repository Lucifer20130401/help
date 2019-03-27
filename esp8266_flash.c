/*this file is to record the esp8266 debug experience*/

1. esp8266 FW NONOS NON-OTA I used 4M flash which the addr should 4*1024*1024=4194304(0x40 0000)
        eso_init_data_default.bin// Defaoult system RF parameters file.download to addr:from 0x3fc000 to 0x3fd000
        blank.bin               //Defaoult system parameters file. download to addr:from 0x3fd000 to 0x40 0000
        eagle.flash.bin         //made by your app, need to download every time.download to addr:from 0x00000 to 0x0ffff
        eagle.irom0text.bin     //made by your app, need to download every time.download to addr:from 0x10000 to 0x5C000
        boot                    //no need
        user1.bin               //no need
        user2.bin               //no need
        
        
        //so,for my app, I can used 0x70000 to 0x3fb000 as a normal flash use.

