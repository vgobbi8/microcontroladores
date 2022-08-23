const int zero = 63;
const int um = 6;
const int dois = 91;
const int tres = 79;
const int quatro = 102;
const int cinco = 109;
const int seis = 125;
const int sete = 7;
const int oito = 127;
const int nove = 111;

void main() {
    porta = 0;
    trisa = 0;
    portd = 0;
    trisd = 0;
    cmcon = 7; //comparador desligado
    intcon2 = 0; //resistor pull up port b

    ra3_bit = 1;    //Este é o transistor da unidade que precisa ser ligado
    while(1){
        const int del = 250;
        
        portd = zero; // Escreve 0;
        delay_ms(del);
        
        portd = um;
        delay_ms(del);
        
        portd = dois;
        delay_ms(del);
        
        portd = tres;
        delay_ms(del);
        
        portd = quatro;
        delay_ms(del);
        
        portd = cinco;
        delay_ms(del);
        
        portd = seis;
        delay_ms(del);
        
        portd = sete;
        delay_ms(del);
        
        portd = oito;
        delay_ms(del);
        
        portd = nove;
        delay_ms(del);
    }
}








