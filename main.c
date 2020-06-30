// 문제 : 문장에서 특정 문장의 위치를 반환하는 함수를 만들어주세요.(get_index_of_str)

#include <stdio.h>


int get_index_of_str(char* a, char* b) {


  int index = -1;


  for ( int i = 0; *(a + i) != '\0'; i++) {


    for( int j =0; *(b + j) != '\0'; j++) {
      
      
      while (*(a + i) == *(b + j)) {
        
        
        index = i;


      }

    break;  


    } 

    
  }
  return index;
}


int main(void) {
  int index;
  
  index = get_index_of_str("abc", "b");
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_str("test", "es");
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_str("abcd", "bd");
  printf("index : %d\n", index);
  // 출력 => index : -1

  return 0;
}