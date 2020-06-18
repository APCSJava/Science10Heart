// assign meaningful names for the I/O channels
const int L_VENTRICLE = 2;
const int R_VENTRICLE = 3;
const int L_ATRIUM = 4;
const int R_ATRIUM = 5;

void setup() {
  // set all I/O channels as outputs
  pinMode(L_VENTRICLE, OUTPUT);
  pinMode(R_VENTRICLE, OUTPUT);
  pinMode(L_ATRIUM, OUTPUT);
  pinMode(R_ATRIUM, OUTPUT);
  // send low signal to all channels
  digitalWrite(L_VENTRICLE, LOW);
  digitalWrite(R_VENTRICLE, LOW);
  digitalWrite(L_ATRIUM, LOW);
  digitalWrite(R_ATRIUM, LOW);
}

void loop() {
  digitalWrite(L_ATRIUM, HIGH);
  digitalWrite(R_ATRIUM, HIGH);
  delay(1000);
  digitalWrite(L_ATRIUM, LOW);
  digitalWrite(R_ATRIUM, LOW);
  digitalWrite(L_VENTRICLE, HIGH);
  digitalWrite(R_VENTRICLE, HIGH);
  delay(1000);
  digitalWrite(L_VENTRICLE, LOW);
  digitalWrite(R_VENTRICLE, LOW);
}
