// drives a full bridge. PhaseA connects to legA, phaseB to legB

int outpinA = 1; // ouput pin
int outpinB = 2;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(outpinA,OUTPUT);
  pinMode(outpinB,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
 int i = 0;
 int pwm_val[256]= {0,1,3,4,6,7,9,10,12,14,15,17,18,20,21,23,25,26,28,29,31,32,34,36,37, // copy and paste from scilab output file
 39,40,42,43,45,46,48,49,51,53,54,56,57,59,60,62,63,65,66,68,69,71,72,74,75,77,78,80,81,
 83,84,86,87,89,90,92,93,95,96,97,99,100,102,103,105,106,108,109,110,112,113,115,116,117,
 119,120,122,123,124,126,127,128,130,131,132,134,135,136,138,139,140,142,143,144,146,147,
 148,149,151,152,153,154,156,157,158,159,161,162,163,164,165,167,168,169,170,171,172,174,
 175,176,177,178,179,180,181,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,
 198,199,200,201,202,203,204,205,206,207,208,209,209,210,211,212,213,214,215,215,216,217,
 218,219,220,220,221,222,223,223,224,225,226,226,227,228,228,229,230,230,231,232,232,233,
 234,234,235,236,236,237,237,238,238,239,239,240,241,241,242,242,243,243,243,244,244,245,
 245,246,246,246,247,247,248,248,248,249,249,249,250,250,250,250,251,251,251,251,252,252,
 252,252,253,253,253,253,253,253,254,254,254,254,254,254,254,254,254,254,254,254,254,254,255};

  for (i = 0; i<256; i++)                  // 0 - 90 degrees delay affects wave period
  {
  analogWrite(outpinA,pwm_val[i]);
  delay(1); // mS
  }
  
  for(i = 256; i>0; i--)                 // 90 - 180 degrees
  {
  analogWrite(outpinA,pwm_val[i]);
  delay(1);
  }
  
    for (i = 0; i<256; i++)                  // 180-240 degrees delay affects wave period
  {
  analogWrite(outpinB,pwm_val[i]);
  delay(1); // mS
  }
  
  for(i = 256; i>0; i--)                 // 240-360 degrees
  {
  analogWrite(outpinB,pwm_val[i]);
  delay(1);
  }
  
}
