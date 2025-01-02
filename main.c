1) bit to enables interrups
2) vector of interrups 
    01) each interrupts has number on it representing the thing the hardware component sent that interrupt
    02) retfi - command that not only returns from an isr subroutine but also restores its context.
    03) slide num 20 : in our course will will only handle interrups ------> internal sources tree path.
    04) we can also define interrupts priority aka allowing certain higher interrupts to interrupt a lower priority interrupt.
    05) we will learn about timers block which we will be able to connect an isr to it and implement interrupts. 

    PIC 
    01) 8 processor exeptions and traps. 
    02) 7 selectable priority levels. 
    03) interrup vector table with unique vector for each interrupt. slide 27. 
        01) starting from address 14hex begins the interrupt vectors that we can use.
    04) we will mannage the interrupts system via the SFRS : INTCON1, INTCON2, INTCON3, INTCON4. 
        01) IPC - interrupt priority vector.
        02) IEC - interrupt enable vector.
        03)