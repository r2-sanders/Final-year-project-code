

  int count_base = 0;
  bool dir_base = 0; // 0 to count up,1 to count down
  
  int count_sine = 0;
  int clock_div = 10;
  int clock_count = 0;
  int clock_slow_tick = 0;
  float sine_val = 0;
  bool output = 0;
  
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly: 
    
 
  
  
   if((count_base < 101) & !dir_base)// count up 
    count_base++; 
    
   if ((count_base > 0) & dir_base) // count down
    count_base--;
   
    clock_count++;
    if (clock_count == (clock_div + 1))
       { clock_count = 0;
         clock_slow_tick = 1;
       }
       
    if(clock_slow_tick)
    {
      count_sine++;
      if(count_sine == 361)
      count_sine = 0;
    }
      
    sine_val = sin(count_sine);
    sine_val = sine_val * 100;
    
    if(count_base > sine_val)
      output = 1;
      else output = 0;
      
}
