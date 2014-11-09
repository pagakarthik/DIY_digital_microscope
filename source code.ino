const int ledPin = 13; // the pin that the LED is attached to
int M1 = 8;
int M2 = 9;
int M3 = 10;
int M4 = 11;
int incomingByte;

int M5 = 3;
int M6 = 4;
int enable1 = 12;
int enable2 = 13;
int x=0,y;

void setup()
{
  Serial.begin(9600);
  pinMode (ledPin,OUTPUT);
  pinMode (M1, OUTPUT);
  pinMode (M2, OUTPUT);
  pinMode (M3, OUTPUT);
  pinMode (M4, OUTPUT);
  pinMode (M5, OUTPUT);
  pinMode (M6, OUTPUT);
  pinMode (enable1, OUTPUT);
  pinMode (enable2, OUTPUT);
  digitalWrite (M1, LOW);
  digitalWrite (M2, LOW);
  digitalWrite (M3, LOW);
  digitalWrite (M4, LOW);
  digitalWrite (M5, LOW);
  digitalWrite (M6, LOW);
  digitalWrite (enable1, HIGH);
  digitalWrite (enable2, HIGH);
  
}
void loop()
{
   // see if there's incoming serial data:
 // Serial.println("ENTER UR DIRECTION");
  if (Serial.available() > 0) 
  {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    if (incomingByte == 'W')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }      
     else if (incomingByte == 'S')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, LOW);
      digitalWrite(M2, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }   
     else if (incomingByte == 'A')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, HIGH);
      digitalWrite(M6, LOW);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    } 
     else if (incomingByte == 'D')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, LOW);
      digitalWrite(M6, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
     else if (incomingByte == '+')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, HIGH);
      digitalWrite(M4, LOW);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }  
     else if (incomingByte == '-')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, LOW);
      digitalWrite(M4, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    } 
    else if (incomingByte == '8')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      delay(2.5);
      digitalWrite(M1, LOW);
      digitalWrite(M2, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }  
    else if (incomingByte == '2')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, LOW);
      digitalWrite(M2, HIGH);
      delay(2.5);
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);      
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
    else if (incomingByte == '4')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, HIGH);
      digitalWrite(M6, LOW);
      delay(10);
      digitalWrite(M5, LOW);
      digitalWrite(M6, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
     else if (incomingByte == '6')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, LOW);
      digitalWrite(M6, HIGH);
      delay(10);
      digitalWrite(M5, HIGH);
      digitalWrite(M6, LOW);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
    else if (incomingByte == 'K')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, HIGH);
      digitalWrite(M4, LOW);
      delay(10);
      digitalWrite(M3, LOW);
      digitalWrite(M4, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }  
     else if (incomingByte == 'I')
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, LOW);
      digitalWrite(M4, HIGH);
      delay(10);
      digitalWrite(M3, HIGH);
      digitalWrite(M4, LOW);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    } 
    else if (incomingByte == '#')
    {
      x=0;y=0;
      for(y=0;y<=5;y++)
      {
        fineYdown();
        delay(100);
        if(x==16)
        {
          for(x=15;x>=1;x--)
          {
            fineXleft();
            delay(100);
          }
        }
        else if(x==0)
        {
          for(x==0;x<=15;x++)
          {
            fineXright();
            delay(100);
          }
         } 
        else
        {
          digitalWrite(ledPin, LOW);
          digitalWrite (M1, LOW);
          digitalWrite (M2, LOW);
          digitalWrite (M3, LOW);
          digitalWrite (M4, LOW);
          digitalWrite (M5, LOW);
          digitalWrite (M6, LOW); 
        } 
      }
       for(y=0;y<=5;y++)
      {
        fineYup();
        delay(100);
      }
      if(x==16)
        {
          for(x=15;x>=1;x--)
          {
            fineXright();
            delay(100);
          }
        }
       else if(x==0)
        {
          for(x==0;x<=15;x++)
          {
            fineXleft();
            delay(100);
          }
         } 
        else
        {
          digitalWrite(ledPin, LOW);
          digitalWrite (M1, LOW);
          digitalWrite (M2, LOW);
          digitalWrite (M3, LOW);
          digitalWrite (M4, LOW);
          digitalWrite (M5, LOW);
          digitalWrite (M6, LOW); 
        }  
      
    }
     else
    {
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
    
  }
  
  else
  {
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW); 
  } 
} 

void coarseYup()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }      
   //  else if (incomingByte == 'S')
   void coarseYdown()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, LOW);
      digitalWrite(M2, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }   
  //   else if (incomingByte == 'A')
    void coarseXleft()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, HIGH);
      digitalWrite(M6, LOW);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    } 
  //   else if (incomingByte == 'D')
    void coarseXright()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, LOW);
      digitalWrite(M6, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
   //  else if (incomingByte == '+')
   void coarseZin()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, HIGH);
      digitalWrite(M4, LOW);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }  
  //   else if (incomingByte == '-')
    void coarseZout()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, LOW);
      digitalWrite(M4, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    } 
    //else if (incomingByte == '8')
    void fineYup()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      delay(10);
      digitalWrite(M1, LOW);
      digitalWrite(M2, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }  
  //  else if (incomingByte == '2')
  void fineYdown ()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M1, LOW);
      digitalWrite(M2, HIGH);
      delay(10);
      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);      
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
   // else if (incomingByte == '4')
   void fineXleft()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, HIGH);
      digitalWrite(M6, LOW);
      delay(10);
      digitalWrite(M5, LOW);
      digitalWrite(M6, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
   //  else if (incomingByte == '6')
   void fineXright()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M5, LOW);
      digitalWrite(M6, HIGH);
      delay(10);
      digitalWrite(M5, HIGH);
      digitalWrite(M6, LOW);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }
  //  else if (incomingByte == 'K')
   void fineZin()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, HIGH);
      digitalWrite(M4, LOW);
      delay(10);
      digitalWrite(M3, LOW);
      digitalWrite(M4, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    }  
    // else if (incomingByte == 'I')
    void fineZout()
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(M3, LOW);
      digitalWrite(M4, HIGH);
      delay(10);
      digitalWrite(M3, HIGH);
      digitalWrite(M4, LOW);
      digitalWrite(ledPin, LOW);
      digitalWrite (M1, LOW);
      digitalWrite (M2, LOW);
      digitalWrite (M3, LOW);
      digitalWrite (M4, LOW);
      digitalWrite (M5, LOW);
      digitalWrite (M6, LOW);
    } 

//Delay () used were pretested for various time intervals and it was found out that 2.5ms is good for Y axis and 10ms for Xaxis and 10ms for Z axis
