// Dispositivo:	PIC16F887
// Autor:       Michelle Serrano
// Programa:	Lab 6
// Creado:      25 de octubre del 2022

#define _XTAL_FREQ 8000000          //frecuencia de 1 MHz
#include <xc.h>
#pragma config FOSC=INTRC_NOCLKOUT  //Oscilador interno sin salida
#pragma config WDTE=OFF             //Reinicio repetitivo del pic
#pragma config PWRTE=ON             //WTS de 72 ms al iniciar el pic
#pragma config MCLRE=OFF            //El pin MCLR se utiliza como entrada/salida
#pragma config CP=OFF               //Sin protección de código
#pragma config CPD=OFF              //Sin protección de datos
#pragma config BOREN=OFF //Sin reinicio cuando el input voltage es inferior a 4V
#pragma config IESO=OFF  //Reinicio sin cambio de reloj de interno a externo
#pragma config FCMEN=OFF //Cambio de reloj externo a interno en caso de fallas
#pragma config LVP=ON    //Programación en low voltage permitida 4v
    
//CONFIGURATION WORD 2
#pragma config WRT=OFF              //Proteccion de autoescritura por programa 
#pragma config BOR4V=BOR40V         //Reinicio abajo de 4V 

//VARIABLES
unsigned char ConstantI = 70;
unsigned char Boo = 0;
char Phrase1 [] = "Ingnieria\n electronica\n es\n la\n mas\n cabrona\n \n";
char WTS;

void Character_s (char a)
{
    while (TXSTAbits.TRMT == 0){
       
    }
    if (PIR1bits.TXIF)
        {
            TXREG = a;
        }  
    return;
}

void Chain_s (char* cadena)
{
    while (*cadena != 0)
    {
      Character_s(*cadena);
      cadena++;
    }
    return;
}

void Menu (void)
{
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 81;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 117;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 105;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 111;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 110;
        }
        
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 100;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 115;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 106;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 101;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 99;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 117;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 116;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 97;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 114;
        }
        if (PIR1bits.TXIF)
        {
            TXREG = 63;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
        
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 40;
        }    
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 49;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 41;
        }
        
         __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
         
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 76;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 82;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 80;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 79;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 84;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 78;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 78;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 67;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 73;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 79;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 77;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 84;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 82;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 79;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 10;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
       
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 40;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 50;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 41;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 78;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 86;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 73;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 82;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 83;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 67;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 73;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 73;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 10;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 40;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 51;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 41;
        }
        
         __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 32;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 67;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 68;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 69;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 78;
        }
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 65;
        }
        
        __delay_ms(5);
        if (PIR1bits.TXIF)
        {
            TXREG = 13;
        }

}


void __interrupt() isr(void)
{    
    if (PIR1bits.RCIF)
    {
        
        switch (RCREG)
        {
            case 49:                    // Menú 1 - Post Lab -- Leer Pot
                ADCON0bits.GO = 1;
                while(ADCON0bits.GO == 1);
                ADIF = 0;
                TXREG = ADRESH;
                __delay_ms(10);
                
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                
                Menu();
                break;

            case 50: 
                 do {
                   if (PIR1bits.RCIF)
                    {
                        PORTB = RCREG;
                        Boo = 255;
                    }  
                 }   //Menú2 - Post Lab -- Enviar Ascii
                 
                    
                while (Boo==0);
                __delay_ms(50);
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                __delay_ms(50);
                if (PIR1bits.TXIF)
                {
                    TXREG = 13;
                }
                Menu();
                Boo=0;
                break;
                }
           
        }        
    }

void main(void) {
    

//----------------------------CONFIGURACIONES-----------------------------------

    //configuración de reloj
    OSCCONbits.IRCF2 = 1;               //reloj a 1MHz
    OSCCONbits.IRCF1 = 0;
    OSCCONbits.IRCF0 = 0;
    OSCCONbits.SCS   = 1;               //reloj interno
    
    //INPUTS/OUTPUTS
    ANSEL = 0;                          //Pines digitales
    ANSELH = 0; 
    TRISB  = 0;
    
    PORTB  = 0;
    
    //TX y RX
    TXSTAbits.SYNC = 0;
    TXSTAbits.BRGH = 1;
    BAUDCTLbits.BRG16 = 1;
    
    SPBRG = 25;
    SPBRGH = 0;
    
    RCSTAbits.SPEN = 1;
    RCSTAbits.RX9 = 0;
    RCSTAbits.CREN = 1;
    TXSTAbits.TXEN = 1;
    
    //INTERRUPCIONES
    PIR1bits.RCIF = 1;
    PIE1bits.RCIE = 1;
    INTCONbits.PEIE = 1;
    INTCONbits.GIE = 1;
    
    PIR1bits.TMR2IF = 0;            //limpieza de bandera
    T2CONbits.T2CKPS = 0b11;        //prescaler 1:16
    T2CONbits.TMR2ON = 1;   
    
    while(PIR1bits.TMR2IF == 0);    //esperar un ciclo de tmr2
    PIR1bits.TMR2IF = 0;
    TRISCbits.TRISC2 = 0;           
    TRISCbits.TRISC1 = 0;   
    
    
    //TRISAbits.TRISA0 = 1;
    TRISA = TRISA | 0x01;
    ANSEL = ANSEL | 0x01;
    
    // Configurar mÃ³dulo ADC
    
    ADCON0bits.ADCS1 = 0;
    ADCON0bits.ADCS0 = 1;       // Fosc/ 8
    
    ADCON1bits.VCFG1 = 0;       // Ref VSS
    ADCON1bits.VCFG0 = 0;       // Ref VDD
    
    ADCON1bits.ADFM = 0;        // Justificado hacia izquierda
    
    ADCON0bits.CHS3 = 0;
    ADCON0bits.CHS2 = 0;
    ADCON0bits.CHS1 = 0;
    ADCON0bits.CHS0 = 0;        // Canal AN0
    
    ADCON0bits.ADON = 1;        // Habilitamos el ADC
    __delay_us(100);
    
    
    Menu ();
    while (1)
    {      
    }

 }

