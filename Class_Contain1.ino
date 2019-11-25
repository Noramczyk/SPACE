  /* 
    Electro #2 :  4  2  : Electro #1
               :  3  1  :
               :
    Electro# 4 :  8  6  : Electro #4
               :  7  5  :   
  */

#define Sensor_Pin1 6                                                 
#define Sensor_Pin2 7
#define Sensor_Pin3 8
#define Sensor_Pin4 9

#define Sensor_Pin5 10
#define Sensor_Pin6 11
#define Sensor_Pin7 12
#define Sensor_Pin8 13

#define P1 2
#define P2 3
#define P3 4
#define P4 5

int sensorState1 = 0;
int sensorState2 = 0;
int sensorState3 = 0;
int sensorState4 = 0;

int sensorState5 = 0;
int sensorState6 = 0;
int sensorState7 = 0;
int sensorState8 = 0;
    
  
class ELECTRO
{
    int MAG;
    long eventTime1;
    long OffTime1;
    
    unsigned long previousTime1;
    unsigned long previousTime2;
    unsigned long previousTime3;
    unsigned long previousTime4;
        
    public:
    
      ELECTRO(int Elec, long Trig, long OFF)
        {
        
         MAG = Elec;
         eventTime1 = Trig;
         OffTime1 = OFF;
         
         pinMode(MAG, OUTPUT);
         
         previousTime1 = 0;
         previousTime2 = 0;
         previousTime3 = 0;
         previousTime4 = 0;
        
        }

          void Electro1()
            {
      
            sensorState1 = digitalRead(Sensor_Pin1);
            sensorState2 = digitalRead(Sensor_Pin2);
          
            unsigned long currentTime = millis();
            
              if((sensorState1 == LOW) && ( currentTime - previousTime1 >= eventTime1))      // P1 ELECTRO
                  {
                  sensorState1 = HIGH; 
                  previousTime1 = currentTime; 
                  digitalWrite(MAG, sensorState1); 
                                  
                  }
      
                   else if ((sensorState2 == LOW) && (currentTime - previousTime1 >= OffTime1))
                         {
                           sensorState2 = LOW; 
                           previousTime1 = currentTime;    
                           digitalWrite(MAG, sensorState2);     
                         }
            
            }
      
          void Electro2()
            {
      
            sensorState3 = digitalRead(Sensor_Pin3);
            sensorState4 = digitalRead(Sensor_Pin4);
          
            unsigned long currentTime = millis();
            
              if((sensorState3 == LOW) && ( currentTime - previousTime2 >= eventTime1))      // P2 ELECTRO
                  {
                  sensorState3 = HIGH; 
                  previousTime2 = currentTime; 
                  digitalWrite(MAG, sensorState3); 
                                  
                  }
      
                   else if ((sensorState4 == LOW) && (currentTime - previousTime2 >= OffTime1))
                         {
                           sensorState4 = LOW; 
                           previousTime2 = currentTime;    
                           digitalWrite(MAG, sensorState4);     
                         }
            
            }
            
          void Electro3()
            {
      
            sensorState5 = digitalRead(Sensor_Pin5);
            sensorState6 = digitalRead(Sensor_Pin6);
          
            unsigned long currentTime = millis();
            
              if((sensorState5 == LOW) && ( currentTime - previousTime3 >= eventTime1))      // P3 ELECTRO
                  {
                      sensorState5 = HIGH; 
                      previousTime3 = currentTime;    
                      digitalWrite(MAG, sensorState5);  
                                  
                  }
      
                   else if ((sensorState6 == LOW) && (currentTime - previousTime3 >= OffTime1))
                         {
                           sensorState6 = LOW; 
                           previousTime3 = currentTime;    
                           digitalWrite(MAG, sensorState6);     
                         }
            
            }
      
          void Electro4()
            {
      
            sensorState7 = digitalRead(Sensor_Pin7);
            sensorState8 = digitalRead(Sensor_Pin8);
          
            unsigned long currentTime = millis();
            
              if((sensorState7 == LOW) && ( currentTime - previousTime4 >= eventTime1))      // P4 ELECTRO
                  {
                  sensorState7 = HIGH; 
                  previousTime4 = currentTime; 
                  digitalWrite(MAG, sensorState7); 
                                  
                  }
      
                   else if ((sensorState8 == LOW) && (currentTime - previousTime4 >= OffTime1))
                         {
                           sensorState8 = LOW; 
                           previousTime4 = currentTime;    
                           digitalWrite(MAG, sensorState8);     
                         }
            
            }


 
};

   ELECTRO State1(P1, 90, 90);      // MODIFY for Sequence
   ELECTRO State2(P2, 130, 150);
   ELECTRO State3(P3, 90, 90);
   ELECTRO State4(P4, 160, 160);
    

void setup() 
  {

    pinMode(Sensor_Pin1, INPUT);
    digitalWrite(Sensor_Pin1, HIGH);
    pinMode(Sensor_Pin2, INPUT);
    digitalWrite(Sensor_Pin2, HIGH);
    pinMode(Sensor_Pin3, INPUT);
    digitalWrite(Sensor_Pin3, HIGH);
    pinMode(Sensor_Pin4, INPUT);
    digitalWrite(Sensor_Pin4, HIGH);
    
    pinMode(Sensor_Pin5, INPUT);
    digitalWrite(Sensor_Pin5, HIGH);
    pinMode(Sensor_Pin6, INPUT);
    digitalWrite(Sensor_Pin6, HIGH);
    pinMode(Sensor_Pin7, INPUT);
    digitalWrite(Sensor_Pin7, HIGH);
    pinMode(Sensor_Pin8, INPUT);
    digitalWrite(Sensor_Pin8, HIGH);


    ElectroStart();                   //  Start Function Call

    
   }

void loop() 
{

    State1.Electro1();
    State2.Electro2();
    State3.Electro3();
    State4.Electro4();
    
}

void ElectroStart()
{
  delay(5000);
  
 /* if((sensorState1 == LOW) && (sensorState7 == LOW))
        {
          digitalWrite(P1, HIGH);
          digitalWrite(P4, HIGH);
          delay(55);
          digitalWrite(P1, LOW);
          digitalWrite(P4, LOW);
          delay(200);
        }

   if((sensorState3 == LOW) && (sensorState5 == LOW))
        {
          digitalWrite(P2, HIGH);
          digitalWrite(P3, HIGH);
          delay(55);
          digitalWrite(P2, LOW);
          digitalWrite(P3, LOW);
          delay(200);
        }*/
}

