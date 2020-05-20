void setup() {
    Serial.begin(115200);               //initial the Serial
    pinMode(A0, INPUT);
    
}
//When using 4 channels use all the un-commented lines and comment the following line
float adcValue[3];
//float adcValue[4];

void loop()
{
    adcValue [0] = analogRead(A0) * (5.00 / 1023.0 );
    adcValue [1] = analogRead(A1) * (5.00 / 1023.0 );
    adcValue [2] = analogRead(A2) * (5.00 / 1023.0 );
//    adcValue [3] = analogRead(A3) * (5.00 / 1023.0 );
        
    Serial.println(adcValue[0]);
    delay(5);
    Serial.println(adcValue[1]);
    delay(5);
    Serial.println(adcValue[2]);
    delay(5);
//    Serial.println(adcValue[3]);
//    delay(5);
    delay(20);
} 
