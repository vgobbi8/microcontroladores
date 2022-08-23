
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

void switchPorts(int m, int c, int d, int u);
char decodeValue(char value);

void initialSetup();
void setUnidade(char v);
void setDezena(char v);
void setCentena(char v);
void setMilhar(char v);

char unidade = 0;
char dezena = 0;
char centena = 0;
char milhar = 0;
       int i = 0;
void main() {
    initialSetup();

    while(1){
        rd0_bit = 1; //Liga segmento a
        switchPorts(0,0,0,0);
        unidade++;
        if(unidade == 10) {
           unidade = 0;
           dezena++;
           if(dezena == 10) {
               dezena = 0;
               centena++;
               if(centena == 10){
                   centena = 0;
                   milhar++;
                   if(milhar == 10) milhar = 0;
               }
           }
        }
        
        
        for(i=0; i< 50; i++){
            setUnidade(unidade);
            setDezena(dezena);
            setCentena(centena);
            setMilhar(milhar);
        }

     }
}

void initialSetup() {
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
}


void setUnidade(char v){
     char w = decodeValue(v);
     portd = w;
     switchPorts(0,0,0,1);
     delay_ms(1);
}

void setDezena(char v){
     char w = decodeValue(v);
     portd = w;
     switchPorts(0,0,1,0);
     delay_ms(1);
}

void setCentena(char v){
     char w = decodeValue(v);
     portd = w;
     switchPorts(0,1,0,0);
     delay_ms(1);
}

void setMilhar(char v){
     char w = decodeValue(v);
     portd = w;
     switchPorts(1,0,0,0);
     delay_ms(1);
}


void switchPorts(int m, int c, int d, int u){
    rc5_bit = m; //1; //desliga display de milhar
    rc4_bit = c; //0; //desliga display de centena
    re2_bit = d; //0; //desliga display de dezena
    ra3_bit = u; //0; //desliga display de unidade
}

char decodeValue(char value) {
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
