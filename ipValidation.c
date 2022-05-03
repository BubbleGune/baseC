#include <stdio.h>

int is_valid_ip(const char *addr)
{
 unsigned n[4], i, nc;
 
 // Must be 4 integers separated by dots:
 if( sscanf(addr, "%d.%d.%d.%d%n", &n[0], &n[1], &n[2], &n[3], &nc) != 4 )
   return 0;
   
 // Leftover characters at the end are not allowed:
 if( nc != strlen(addr) )
   return 0;
   
 // Leading zeros and space characters are not allowed:
 if( addr[0] == '0' || strstr(addr, ".0") || strchr(addr, ' ') )
   return 0;
 
 // Values > 255 are not allowed:
 for(i=0; i<4; i++)
   if( n[i] > 255 )
     return 0;
  
 return 1;
};

int isValid_ip(const char *addr)
{
 uint8_t dot_count=0 , is_first_num=1;
    uint16_t num=0;
    
    for(uint8_t i=0; addr[i]!='\0'; i++) {
        // invalid IP character
        if( (addr[i]<'0' || addr[i]>'9') && addr[i]!='.' )
            return 0;

        // is_first_num problem
        if( (addr[i]<'1' || addr[i]>'9') && is_first_num )
            return 0;
        
        if( addr[i]=='.'){
            if(num>255)
                return 0;
            dot_count++;
            is_first_num = 1;
            num=0;
            continue;
        }
        num = num*10 + addr[i]-'0';
        is_first_num = 0;
    }
    if( dot_count != 3 )
        return 0;
    return 1;
};

