// setting the light to their pin numbers
int up_red = 2;
int up_yellow = 3;
int up_green = 4;

int rt_red = 5;
int rt_yellow = 6;
int rt_green = 7;

int dw_red = 8;
int dw_yellow = 9;
int dw_green = 10;

int lt_red = 11;
int lt_yellow = 12;
int lt_green = 13;

// Duration constants (in milliseconds)
int red_duration = 2000;
int yellow_duration = 2000;
int green_duration = 5000;


void setup() {
  // put your setup code here, to run once:
  pinMode(up_red,OUTPUT);
  pinMode(up_yellow,OUTPUT);
  pinMode(up_green,OUTPUT);

  
  pinMode(rt_red,OUTPUT);
  pinMode(rt_yellow,OUTPUT);
  pinMode(rt_green,OUTPUT);

  pinMode(dw_red,OUTPUT);
  pinMode(dw_yellow,OUTPUT);
  pinMode(dw_green,OUTPUT);

  pinMode(lt_red,OUTPUT);
  pinMode(lt_yellow,OUTPUT);
  pinMode(lt_green,OUTPUT);
  // Set all lights to red initially
  allRed();
  upYellow();
}

void loop() {
  // put your main code here, to run repeatedly:
  upGreen();
  upYellowDownYellow();
  downGreen();
  downYellowRightYellow();
  rightGreen();
  rightYellowLeftYellow();
  leftGreen();
  leftYellowUpYellow();
}


void allRed() {
  digitalWrite(up_red, HIGH);
  digitalWrite(up_yellow, LOW);
  digitalWrite(up_green, LOW);

  digitalWrite(rt_red, HIGH);
  digitalWrite(rt_yellow, LOW);
  digitalWrite(rt_green, LOW);

  digitalWrite(dw_red, HIGH);
  digitalWrite(dw_yellow, LOW);
  digitalWrite(dw_green, LOW);

  digitalWrite(lt_red, HIGH);
  digitalWrite(lt_yellow, LOW);
  digitalWrite(lt_green, LOW);
  delay(red_duration);
}

void upYellow() {
  digitalWrite(up_red, LOW);
  digitalWrite(up_yellow, HIGH);
  delay(yellow_duration);
}

void upGreen() {
  digitalWrite(up_yellow, LOW);
  digitalWrite(up_green, HIGH);
  digitalWrite(lt_yellow, LOW);
  digitalWrite(lt_red, HIGH);
  delay(green_duration);
}

void upYellowDownYellow() {
  digitalWrite(up_green, LOW);
  digitalWrite(up_yellow, HIGH);
  digitalWrite(dw_red, LOW);
  digitalWrite(dw_yellow, HIGH);
  delay(yellow_duration);
}

void downGreen() {
  digitalWrite(up_yellow, LOW);
  digitalWrite(dw_yellow, LOW);
  digitalWrite(dw_green, HIGH);
  digitalWrite(up_red, HIGH);
  delay(green_duration);
}

void downYellowRightYellow() {
  digitalWrite(dw_green, LOW);
  digitalWrite(dw_yellow, HIGH);
  digitalWrite(rt_red, LOW);
  digitalWrite(rt_yellow, HIGH);
  delay(yellow_duration);
}

void rightGreen() {
  digitalWrite(dw_yellow, LOW);
  digitalWrite(rt_yellow, LOW);
  digitalWrite(rt_green, HIGH);
  digitalWrite(dw_red, HIGH);

  delay(green_duration);
}

void rightYellowLeftYellow() {
  digitalWrite(rt_green, LOW);
  digitalWrite(rt_yellow, HIGH);
  digitalWrite(lt_red, LOW);
  digitalWrite(lt_yellow, HIGH);
  delay(yellow_duration);
}

void leftGreen() {
  digitalWrite(rt_yellow, LOW);
  digitalWrite(lt_yellow, LOW);
  digitalWrite(lt_green, HIGH);
  digitalWrite(rt_red, HIGH);
  delay(green_duration);
}

void leftYellowUpYellow() {
  digitalWrite(lt_green, LOW);
  digitalWrite(lt_yellow, HIGH);
  digitalWrite(up_red, LOW);
  digitalWrite(up_yellow, HIGH);
  delay(yellow_duration);
}

