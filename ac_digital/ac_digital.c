
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

void writeToPort();
int getValue(int value);

void main() {
     trisa = 0; //Configure port a as out
     //trisb = 0;
     trisc = 0; //Configure port c as out
     trisd = 0; //Configure port d as out
     trise = 0; //Configure port e as out

     //Desliga portas
     porta = 0;
     portc = 0;
     portd = 0;
     porte = 0;
     
     while(1){
         rd0_bit = 1; //Liga segmento a
         rc5_bit = 1; //Liga display de milhar
         rc4_bit = 0; //Desliga display de centena
         re2_bit = 0; //desliga display de dezena
         ra3_bit = 0; //desliga display de unidade
         delay_ms(500);
         
         //writeToPort();

         
         rc5_bit = 0; //desliga display de milhar
         rc4_bit = 1; //liga display de centena
         delay_ms(500);

         rc4_bit = 0; //Desliga display centena
         re2_bit = 1; //liga display de dezena
         delay_ms(500);

         re2_bit = 0; //desliga display de dezena
         ra3_bit = 1; //Liga display de unidade
         delay_ms(500);

     }
}

void writeToPort(){
     int i = 0;
     for(i = 0; i < 10; i++){
         portd = getValue(i);
         delay_ms(1);
     }
}

int getValue(int value){
    if(value == 0)
        return zero;
    else if(value == 1)
        return um;
    else if (value == 2)
        return dois;
    else if (value == 3)
        return tres;
    else if(value == 4)
        return quatro;
    else if(value == 5)
        return cinco;
    else if (value == 6)
        return seis;
    else if(value == 7)
        return sete;
    else if (value == 8)
        return oito;
    else if (value == 9)
        return nove;
    else 
        return 0;
}



