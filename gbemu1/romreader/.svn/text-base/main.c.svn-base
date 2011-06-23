#include <stdio.h>

typedef struct{
    //comments are offset within rom
    unsigned char begincode[4]; //0x100 - 0x103
    unsigned char nintendo_graphic[48]; //0x104 - 0x133
    unsigned char title[15]; // 0x134 - 0x142
    unsigned char color[1]; // 0x143
    unsigned char licensee[2]; //0x144
    unsigned char gb_indicator[1]; //0x146
    unsigned char cartridge_type[1]; //0x147
    unsigned char rom_size[1]; //0x148
    unsigned char ram_size[1]; //0x149
    unsigned char destination_code[1]; //0x14A
    unsigned char licensee_code[1]; //0x14B
    unsigned char mask_rom_version[1]; //0x14C
    unsigned char complement_check[1]; //0x14D
    unsigned char checksum[2]; //0x14E - 0x14F

} gbc_header;

FILE *romfp;
gbc_header gbc_head;

int main(int argc, char *argv[]){
    //Check arguments
    if(argc != 2){
       printf("Usage: romreader <romfile>\n"); 
       return 0;
    }

    char* romfile = argv[1];
    romfp = fopen(romfile, "rb");

    //Check if <romfile> exists
    if(romfp == 0){
        printf("Could not open: %s\n", romfile);
    }

    fseek(romfp, 0x100, SEEK_SET);
    fread(&gbc_head, 1, 80, romfp);
    fclose(romfp);
    
    printf("First bytes: 0x%X 0x%X 0x%X 0x%X\n", gbc_head.begincode[0],
                                                 gbc_head.begincode[1],
                                                 gbc_head.begincode[2],
                                                 gbc_head.begincode[3]);
    //scrolling nintendo graphic

    //Print title
    printf("Title: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", gbc_head.title[0], gbc_head.title[1], gbc_head.title[2], gbc_head.title[3], gbc_head.title[4], gbc_head.title[5], gbc_head.title[6], gbc_head.title[7], gbc_head.title[8], gbc_head.title[9], gbc_head.title[10], gbc_head.title[11], gbc_head.title[12], gbc_head.title[13], gbc_head.title[14]);

    //Gameboy color or not
    if(gbc_head.color[0] == 0x80){
        printf("Gameboy Color Rom: Yes\n");
    } else{
        printf("Gameboy Color Rom: No\n");
    }

    //Licensee
    
    //Indicator
    switch(gbc_head.gb_indicator[0]){
        case 0x0:
            printf("GB/SGB Indicator: GameBoy\n");
            break;
        case 0x03:
            printf("GB/SGB Indicator: Super GameBoy Functions\n");
            break;
        default:
            printf("Gb/SGB Indicator: other, no super gameboy functions\n");
            break;
    }

    //cartridge type
    switch(gbc_head.cartridge_type[0]){
        case 0x0:
            printf("Cartridge type: ROM ONLY\n");
            break;
        case 0x1:
            printf("Cartridge type: ROM+MBC1\n");
            break;
        case 0x2:
            printf("Cartridge type: ROM+MBC1+RAM\n");
            break;
        case 0x3:
            printf("Cartridge type: ROM+MBC1+BATTERY\n");
            break;
        case 0x5:
            printf("Cartridge type: ROM+MBC2\n");
            break;
        case 0x6:
            printf("Cartridge type: ROM+MBC2+BATTERY\n");
            break;
        case 0x8:
            printf("Cartridge type: ROM+RAM\n");
            break;
        case 0x9:
            printf("Cartridge type: ROM+RAM+BATTERY\n");
            break;
        case 0xB:
            printf("Cartridge type: ROM+MMM01\n");
            break;
        case 0xC:
            printf("Cartridge type: ROM+MMM01+SRAM\n");
            break;
        case 0xD:
            printf("Cartridge type: ROM+MMM01+SRAM+BATTERY\n");
            break;
        case 0xF:
            printf("Cartridge type: ROM+MBC3+TIMER+BATT\n");
            break;
        case 0x10:
            printf("Cartridge type: ROM+MBC3+TIMER+RAM+BATTERY\n");
            break;
        case 0x11:
            printf("Cartridge type: ROM+MBC3\n");
            break;
        case 0x12:
            printf("Cartridge type: ROM+MBC3+RAM\n");
            break;
        case 0x13:
            printf("Cartridge type: ROM+MBC3+RAM+BATTERY\n");
            break;
        case 0x19:
            printf("Cartridge type: ROM+MBC5\n");
            break;
        case 0x1A:
            printf("Cartridge type: ROM+MBC5+RAM\n");
            break;
        case 0x1B:
            printf("Cartridge type: ROM+MBC5+RAM+BATTERY\n");
            break;
        case 0x1C:
            printf("Cartridge type: ROM+MBC5+RUMBLE\n");
            break;
        case 0x1D:
            printf("Cartridge type: ROM+MBC5+RUMBLE+SRAM\n");
            break;
        case 0x1E:
            printf("Cartridge type: ROM+MBC5+RUMBLE+SRAM+BATTERY\n");
            break;
        case 0x1F:
            printf("Cartridge type: Pocket Camera\n");
            break;
        case 0xFD:
            printf("Cartridge type: Bandai TAMA5\n");
            break;
        case 0xFE:
            printf("Cartridge type: Hudson HuC-3\n");
            break;
        case 0XFF:
            printf("Cartridge type: Hudson HuC-1\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    
    //rom_size
    printf("rom_size: ");
    switch(gbc_head.rom_size[0]){
        case 0:
            printf("32 KByte  = 2  banks\n");
            break;
        case 1:
            printf("64 KByte  = 4  banks\n");
            break;
        case 2:
            printf("128 KByte = 8  banks\n");
            break;
        case 3:
            printf("256 KByte = 16 banks\n");
            break;
        case 4:
            printf("512 KByte = 32 banks\n");
            break;
        case 5:
            printf("1   MByte = 64 banks\n");
            break;
        case 6:
            printf("2   MByte = 128 banks\n");
            break;
        case 52:
            printf("1.1 MByte = 72 banks\n");
            break;
        case 53:
            printf("1.2 MByte = 80 banks\n");
            break;
        case 54:
            printf("1.5 MByte = 96 banks\n");
            break;
        default:
            printf("Unknown");
            break;
    }

    //ram size
    printf("ram size: ");
    switch(gbc_head.ram_size[0]){
        case 0:
            printf("None\n");
            break;
        case 1:
            printf("2   kB = 1  bank\n");
            break;
        case 2:
            printf("8   kB = 1  bank\n");
            break;
        case 3:
            printf("32  kB = 4  bank\n");
            break;
        case 4:
            printf("128 kB = 16 bank\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    //destination_code
    printf("Destination code: ");
    switch(gbc_head.destination_code[0]){
        case 0:
            printf("Japanese\n");
            break;
        case 1:
            printf("Non-Japanese\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    //licensee code
    printf("Licensee code: ");
    switch(gbc_head.licensee_code[0]){
        case 0x33:
            printf(" - \n");
            break;
        case 0x79:
            printf("Accolade\n");
            break;
        case 0xA4:
            printf("Konami\n");
            break;
        default:
            printf("Unknown (Super GamBoy function won't work)\n");
            break;
    }

    //Mask Rom Version number
    printf("Mask Rom Version Number: 0x%X\n", gbc_head.mask_rom_version[0]); 

    //Complement check
    printf("Complement check?: 0x%X\n", gbc_head.complement_check[0]);

    //Checksum
    printf("Checksum 0x%X 0x%X\n", gbc_head.checksum[0], gbc_head.checksum[1]);
    
}
