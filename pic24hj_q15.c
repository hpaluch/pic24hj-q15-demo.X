/*
 * File:   pic24hj_q15.c - introductory example how to use
 *         "MPLAB C30 Fixed Point Math Library" for math
 *         with fractional number Q15 (also known as Q1.15)
 * NOTE: This program to be expected to run under Simulator only
 *       Put breakpoint on "return 0;" line, and see values
 *       in Variables Window
 * CPU: PIC24HJ128GP502 (included with "Microstick" II board)
 * NOTE: I intentionally use non-dsPIC CPU to see how well standard
 *       (non-DSP) library works
 * Author: John
 * Created on May 25, 2021, 8:26 PM
 */


#include "xc.h"
#include "libq.h"

int main(void) {
    _Q15 x1 = _Q15ftoi(0.1);
    _Q15 x2 = _Q15ftoi(0.2);
    _Q15 xsum = _Q15add(x1,x2);
    float fsum = _itofQ15(xsum); // fsum should be 0.3 = 0.1 + 0.2
    return 0; // put BP here
}
