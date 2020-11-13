int A = 4; //connected with segment A of seven segment display
int B = 5; //connected with segment B of seven segment display
int C = 6; //connected with segment C of seven segment display
int D = 7; //connected with segment D of seven segment display
int E = 8; //connected with segment E of seven segment display
int F = 9; //connected with segment F of seven segment display
int G = 10; //connected with segment G of seven segment display

int firstdigit = 2; //First digital pin anode
int seconddigirt = 3; //Second digital pin anode

const int sensor = A1; // Assigning analog pin A1 to variable 'sensor'
float tempc;  //variable to store temperature in degree Celsius
int vout;  //temporary variable to hold sensor reading


void setup()
{
  // put your setup code here, to run once:
  pinMode(A, OUTPUT); //pin define as the output
  pinMode(B, OUTPUT); //pin define as the output
  pinMode(C, OUTPUT); //pin define as the output
  pinMode(D, OUTPUT); //pin define as the output
  pinMode(E, OUTPUT); //pin define as the output
  pinMode(F, OUTPUT); //pin define as the output
  pinMode(G, OUTPUT); //pin define as the output
  pinMode(firstdigit, OUTPUT); //pin define as the output
  pinMode(seconddigirt, OUTPUT); //pin define as the output

  Serial.begin(9600);

}

void loop()
{
  // put your main code here, to run repeatedly:
  vout = analogRead(sensor);                              //Take the analog read of the sensor
  vout = (vout * 500) / 1024 ;                            //commen formula for the LM35 temperator sensors for get the temperature in celcius
  tempc = vout;
  Serial.println(tempc);                                  //display the temperature in serial moniture
  displaynum(tempc);                                      //display the temperature in seven segment display
}

void refreshdisplay()                                     //Function for the refresh the seven segment display
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);

  digitalWrite(firstdigit, LOW);
  digitalWrite(seconddigirt, LOW);
  delay(10);
}
void displaynum(int num)                          //Functio for the display the relevent number in seven segment
{
  int firstnum = num / 10;
  int secondnum = num % 10;

  for (int i = 0 ; i < 10; i++)
  {
    digitalWrite(firstdigit, HIGH);
    digitalWrite(seconddigirt, LOW);
    if (firstnum == 0)
    {
      zero();
    }
    if (firstnum == 1)
    {
      one();
    }
    if (firstnum == 2)
    {
      two();
    }
    if (firstnum == 3)
    {
      three();

    }
    if (firstnum == 4)
    {
      four();
    }
    if (firstnum == 5)
    {
      five();
    }
    if (firstnum == 6)
    {
      six();
    }
    if (firstnum == 7)
    {
      seven();
    }
    if (firstnum == 8)
    {
      eight();
    }
    if (firstnum == 9)
    {
      nine();
    }
    delay(50);
    refreshdisplay();



    digitalWrite(firstdigit, LOW);
    digitalWrite(seconddigirt, HIGH);
    if (secondnum == 0)
    {
      zero();
    }
    if (secondnum == 1)
    {
      one();
    }
    if (secondnum == 2)
    {
      two();
    }
    if (secondnum == 3)
    {
      three();
    }
    if (secondnum == 4)
    {
      four();
    }
    if (secondnum == 5)
    {
      five();
    }
    if (secondnum == 6)
    {
      six();
    }
    if (secondnum == 7)
    {
      seven();
    }
    if (secondnum == 8)
    {
      eight();
    }
    if (secondnum == 9)
    {
      nine();
    }
    delay(50);
    refreshdisplay();
  }
}

void zero()                     //Function for the display zero
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
}
void one()                  //Function for the display one
{
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
}
void two()                //Function for the display two
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
}
void three()            //Function for the display three
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(G, LOW);
}
void four()             //Function for the display four
{
  digitalWrite(F, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, LOW);
}
void five()             //Function for the display five
{
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}
void six()              //Function for the display six
{
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
}
void seven()            //Function for the display seven
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);

}
void eight()            //Function for the display eight
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void nine()             //Function for the display nine
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, LOW);

}
