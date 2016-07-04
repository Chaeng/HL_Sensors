/* 
 * File:   main.c
 * Author: Chaeng
 *
 * Created on July 2, 2016, 9:02 PM
 */

#include <stdio.h>
#include <stdlib.h>
/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */
#include <stdio.h> 

#endif

#include "can.h"
#include "uart.h"
#include "config.h"
#include "interrupts.h"
#include <pic.h>   /* C18 General Include File */
/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/* i.e. uint8_t <variable_name>; */
// Adjust to system clock
#define _XTAL_FREQ 32000000

/******************************************************************************/
/* Function Prototypes                                                        */
/******************************************************************************/
//void print_can_message(Message* mess);

int i = 0;

unsigned char DisSensor(unsigned char d)
{
   ADCON0 = 0x00;
   ADCON0 = (d << 2);
   ADON = 1;
   
   for(i = 0; i<5000; i++)
   {
   }
   GODONE = 1;
   while(GODONE);
   ADON = 0;
  
  return ADRESH;     
   
}


/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/

/*
 * 
 */
void main(int argc, char** argv) {
    
    ADCON! = 0x20;
}

