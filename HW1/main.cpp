#include <iostream>
#include "BMP.h"
#include <cmath>

int main() {
    // This sets the image size in pixels and creates a new BPM struct/object
    BMP bmpNew(800,800,false);
    bmpNew.fill_region(0, 0, 800, 800, 0, 0, 0, 0);
    // The for loop was condition was replaced with a specifc number to prevent out of bounds errosrs
    for(double i=0;i<768;i = i + 0.001)
    {
      // ynew is the top half of the ellipse solved for y. ynew1 is the bottom half.
      double ynew =  384 + sqrt(36*(pow(64,2) - (pow(i,2)/144) ));
      double ynew1 =  384 - sqrt(36*(pow(64,2) - (pow(i,2)/144) ));
      
      // These two functions draw each half of the ellipse. First a ynew pixel, then a ynew1 pixel.
      bmpNew.set_pixel(i,ynew, 255, 255, 255, 0);
      bmpNew.set_pixel(i,ynew1, 255, 255, 255, 0);
      
    }
    // Writes the array with the lit up pixels to the output image
    bmpNew.write("output.bmp");


}
