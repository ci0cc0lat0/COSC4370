#include <iostream>
#include "BMP.h"
#include <cmath>

int main() {

    BMP bmpNew(800,800,false);
    bmpNew.fill_region(0, 0, 200, 200, 0, 0, 0, 0);
    // The for loop was condition was replaced with a specifc number to prevent out of bounds errosrs
    for(int i=0;i<768;i++)
    {
      // ynew is the top half of the ellipse. ynew1 is the bottom half
      int ynew =  384 + sqrt(36*(pow(64,2) - (pow(i,2)/144) ));
      int ynew1 =  384 - sqrt(36*(pow(64,2) - (pow(i,2)/144) ));
      
      //printf("%d\t%d\t%d\n",i,ynew,ynew1);
      // These two functions draw each half of the ellipse. First a ynew pixel, then a ynew1 pixel.
      bmpNew.set_pixel(i,ynew, 255, 255, 255, 0);
      bmpNew.set_pixel(i,ynew1, 255, 255, 255, 0);
      
    }
    bmpNew.write("output.bmp");


}
