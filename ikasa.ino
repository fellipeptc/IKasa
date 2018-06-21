int readBluetooth;//Variável que irá receber o valor enviado do celular para o Bluetooth
int banheiro=13;//LED da porta a
int cozinha=12;//LED da porta b
int sala=11;//LED da porta c
int garagem=10;//LED da porta d
int quarta1=9;//LED da porta e
int quarta2=8;//LED da porta f
int quarta3=7;//LED da porta g
int banheiro2=6;//LED da porta h
int jardim=5;//LED da porta i
int piscina=4;//LED da porta j
 
void setup(){
   Serial.begin(9600);//Inicia comunicação serial
   pinMode(banheiro,OUTPUT);//Definindo como saída
   pinMode(cozinha,OUTPUT);//
   pinMode(sala,OUTPUT);//Definindo 
   pinMode(garagem,OUTPUT);//Definindo 
   pinMode(quarta1,OUTPUT);//Definindo 
   pinMode(quarta2,OUTPUT);//Definindo 
   pinMode(quarta3,OUTPUT);//Definindo 
   pinMode(banheiro2,OUTPUT);//Definindo 
   pinMode(jardim,OUTPUT);//Definindo 
   pinMode(piscina,OUTPUT);//Definindo 
}
 
void loop(){
    if(Serial.available()){
    readBluetooth = Serial.read();
    if(readBluetooth == 'a'){
           digitalWrite(banheiro,!digitalRead(banheiro));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'b'){
           digitalWrite(cozinha,!digitalRead(cozinha));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'c'){
           digitalWrite(sala,!digitalRead(sala));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'd'){
           digitalWrite(garagem,!digitalRead(garagem));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'e'){
           digitalWrite(quarta1,!digitalRead(quarta1));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'f'){
           digitalWrite(quarta2,!digitalRead(quarta2));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'g'){
           digitalWrite(quarta3,!digitalRead(quarta3));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'h'){
           digitalWrite(banheiro2,!digitalRead(banheiro2));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'i'){
           digitalWrite(jardim,!digitalRead(jardim));//Escreve o que leu na porta negado
     }
     if(readBluetooth == 'j'){
           digitalWrite(piscina,!digitalRead(piscina));//Escreve o que leu na porta negado
     }
   }
}
