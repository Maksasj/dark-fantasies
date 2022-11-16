
#define image_width 16
#define image_height 48

const unsigned char image_data[] = { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x01, 
    0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x02, 0x02, 
    0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x03, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x02, 
    0x01, 0x00, 0x00, 0x00, 0x02, 0x02, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 
    0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x05, 0x04, 0x04, 
    0x00, 0x00, 0x00, 0x01, 0x06, 0x01, 0x05, 0x05, 0x00, 0x00, 0x01, 0x06, 
    0x06, 0x01, 0x06, 0x06, 0x00, 0x00, 0x01, 0x04, 0x04, 0x01, 0x07, 0x07, 
    0x00, 0x00, 0x00, 0x01, 0x01, 0x08, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x05, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x01, 0x06, 0x01, 0x00, 0x00, 0x00, 
    0x06, 0x06, 0x01, 0x06, 0x06, 0x01, 0x00, 0x00, 0x07, 0x07, 0x01, 0x04, 
    0x04, 0x01, 0x00, 0x00, 0x01, 0x08, 0x08, 0x01, 0x01, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 
    0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x03, 0x03, 0x00, 0x00, 0x00, 0x01, 
    0x03, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x01, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x03, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x04, 0x01, 0x02, 
    0x01, 0x00, 0x00, 0x00, 0x04, 0x08, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x01, 0x09, 0x01, 0x05, 0x04, 
    0x00, 0x00, 0x01, 0x06, 0x06, 0x06, 0x06, 0x05, 0x00, 0x00, 0x01, 0x04, 
    0x04, 0x01, 0x07, 0x07, 0x00, 0x00, 0x00, 0x01, 0x01, 0x08, 0x08, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x04, 0x04, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x05, 0x01, 0x09, 
    0x01, 0x00, 0x00, 0x00, 0x05, 0x06, 0x06, 0x06, 0x06, 0x01, 0x00, 0x00, 
    0x07, 0x07, 0x01, 0x04, 0x04, 0x01, 0x00, 0x00, 0x01, 0x08, 0x08, 0x01, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 
    0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 
    0x03, 0x01, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x04, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x08, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x09, 0x04, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x04, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x08, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x09, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x06, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x07, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned short image_palette[] = { 
    0x681f ,0x0000 ,0x00eb ,0x0087 ,0x471f ,0x0140 ,0x05e0 ,0x1001 ,0x2c04 ,
    0x00a0 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,
    0x0000 ,0x0000 ,0x0000 ,0x0000
};
