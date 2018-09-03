#define A 2 // Definindo a porta para a entrada lógica A
#define B 3 // Definindo a porta para a entrada lógica B
#define saida 4 // Definindo a porta para a saida lógica (resultado)
 
int estadoEntradaA = 0; 
int estadoEntradaB = 0; 
int estadoSaida = 0; 
 
void setup() {
 
  pinMode(saida, OUTPUT); 
  pinMode(A, INPUT); 
  pinMode(B, INPUT); 
 
}
 
void loop() { 
   
    estadoEntradaA = digitalRead(A); 
    estadoEntradaB = digitalRead(B); 
 
  
    // Escolha abaixo a operação que deseja executar tire as barras "//" da frente da expressão escolhida.
    //As outras expressões deve ter as barras "//" na frete.
     
    //estadoSaida = estadoEntradaA && estadoEntradaB; // Faz a operação lógica AND (E) entre A e B
    estadoSaida = estadoEntradaA || estadoEntradaB; // Faz a operação lógica OR (OU) entre A e B
    //estadoSaida = !(estadoEntradaA && estadoEntradaB); // Faz a operação lógica NAND (E invertida) entre A e B
    //estadoSaida = !(estadoEntradaA || estadoEntradaB); // Faz a operação lógica NOR (OU invertida) entre A e B
    //estadoSaida = estadoEntradaA ^ estadoEntradaB; // Faz a operação lógica XOR (Ou exclusivo) entre A e B
    //estadoSaida = !(estadoEntradaA ^ estadoEntradaB); // Faz a operação lógica XNOR (Ou exclusivo invertido) entre A e B
   
    digitalWrite(saida, estadoSaida);  
   
}