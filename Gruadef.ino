int funo = 2;
int fdos = 3;
int ftres = 4;

int tempsentredada = 100;

int valorsensor = 0; 

int valorminim = 0; 
int primeralinea = 10;
int segonalinea = 50;
int terceralinea = 100;

void setup() {
  Serial.begin(9600);
  pinMode(funo, OUTPUT);
  pinMode(fdos, OUTPUT);
  pinMode(ftres, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  valorsensor = analogRead(A0);
  delay(100);
  Serial.print("Valor sensor de Llum: \t");
  Serial.println(valorsensor);

   if (valorsensor == valorminim) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } 
  else if (valorsensor < 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } 
  else if (valorsensor > 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } 
  else if (valorsensor > 100) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }

  
  
  
}
