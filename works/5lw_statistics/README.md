ANALYSIS

I used char variable to refer to the ASCII table and created separate loops for each task.

CODE
#include <string.h>

#include <stdio.h>

// functions
char min_value(char *_str)

{
    char buf_char = _str[0];
    
    for (int i = 0; i < strlen(_str); i++) {
        
        if (buf_char > _str[i])
        
           buf_char = _str[i];
    }
    
    return buf_char;
}

char max_value(char *_str)
{
    char buf_char = _str[0];
    
    for (int i = 0; i < strlen(_str); i++) {
        
        if (buf_char < _str[i])
            
            buf_char = _str[i];
    }
    
    return buf_char;
}
char average_value(char *_str){
    
    unsigned int sum, avrg;
    
    for (int i = 0; i < strlen(_str); i++){
    
    sum=sum + _str[i];
    
    }
   
   avrg=sum/strlen(_str);
   
   return (char)avrg;
}
void sorted_string(char *_str, char *_buf){
   
   char buf_char[strlen(_str)];
   
   char temp_char;
   
   strcpy(buf_char,_str);
   
   for(int i = 0; i < strlen(_str); i++){
        
        for (int j = i + 1; j < strlen(_str); j++){
            
            if (buf_char[i] > buf_char[j]) {
                
                temp_char = buf_char[i];
                
                buf_char[i] = buf_char[j];
                
                buf_char[j] = temp_char;
            }
        }
    }
    strcpy(_buf, buf_char);
    
    //return buf;
}
char median_character(char *_str){
    
    char buf_char[strlen(_str)];
    
    int mdp;
    
    sorted_string(_str, buf_char);
    
    mdp=(strlen(_str)/2);
    
    return buf_char[mdp];

}

char mode_character(char *_str){
    
    int maxCount=0;
    
    char maxValue;
    
    for (int i = 0; i < strlen(_str); ++i) {
      
      int count = 0;
      
      for (int j = 1; j < strlen(_str); ++j) {
         
         if (_str[j] == _str[i])
         
         ++count;
      
      }
      
      if (count > maxCount) {
         
         maxCount = count;
         
         maxValue = _str[i];
      
      }
   }
   
   return maxValue;
}

int main()

{
    char i_char[100];
    
    char buf[100];
    
    printf("Input something\n");
    
    scanf("%s", i_char);
    
    printf("the min character %c\n", min_value(i_char));
    
    printf("the max character %c\n", max_value(i_char));
    
    printf("the average value %c\n", average_value(i_char));
    
    sorted_string(i_char, buf);
    
    printf("the sorted string   %s\n", buf);
    
    printf("the original string %s\n", i_char);
    
    printf("the median character %c\n", median_character(i_char));
    
    printf("the mode is %c", mode_character(i_char));
    
    return 0;

}

OUTPUT 

Input something                                                                                                                           
3e52cd1abb4                                                                                                                               
the min character 1                                                                                                                       
the max character e                                                                                                                       
the average value M                                                                                                                       
the sorted string   12345abbcde                                                                                                           
the original string 3e52cd1abb4                                                                                                           
the median character a
the mode is b
