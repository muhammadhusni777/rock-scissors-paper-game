int red_rock_button = 9;
int red_paper_button = 8;
int red_scissors_button = 7;


int blue_rock_button = 5;
int blue_paper_button = 4;
int blue_scissors_button = 3;

int red_led = 13;
int blue_led = 12;
int draw_led = 11;


int red_rock;
int red_scissors;
int red_paper;

int blue_rock;
int blue_scissors;
int blue_paper;

void setup() {
  // put your setup code here, to run once:
 pinMode(red_rock_button, INPUT);
 pinMode(red_scissors_button, INPUT);
 pinMode(red_paper_button, INPUT);

 pinMode(blue_rock_button, INPUT);
 pinMode(blue_scissors_button, INPUT);
 pinMode(blue_paper_button, INPUT);

 pinMode(red_led, OUTPUT);
 pinMode(blue_led, OUTPUT);
 pinMode(draw_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //read input from push button
  red_rock = digitalRead(red_rock_button);
  red_paper = digitalRead(red_paper_button);
  red_scissors = digitalRead(red_scissors_button);

  blue_rock = digitalRead(blue_rock_button);
  blue_paper = digitalRead(blue_paper_button);
  blue_scissors = digitalRead(blue_scissors_button);

  //red win
  if ( (red_rock && blue_scissors)|| (red_paper && blue_rock) || (red_scissors && blue_paper)){
    digitalWrite(red_led, HIGH);
    digitalWrite(blue_led, LOW);
    digitalWrite(draw_led, LOW);
  }
  //draw
  else if ( (red_rock && blue_rock)|| (red_paper && blue_paper) || (red_scissors && blue_scissors)){
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(draw_led, HIGH);
  }
  //blue win
  else if ( (red_scissors && blue_rock)|| (red_rock && blue_paper) || (red_paper && blue_scissors)){
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, HIGH);
    digitalWrite(draw_led, LOW);
  }
  ///////////////////////////////////
   else{
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(draw_led, LOW);
   }
}
