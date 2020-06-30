// 문제 : 문장에서 특정 문장의 위치를 반환하는 함수를 만들어주세요.(get_index_of_str)

#include <stdio.h>


int get_index_of_str(char* str_1, char* str_2) {


  int index = -1;


  for ( int i = 0; str_1[i] != '\0'; i++) { //첫번쨰 기준이되는 배열 loop


    for( int j = 0; str_2[j] != '\0'; j++) {//두번째 비교 배열 loop
      
      
      if ( str_1[i] == str_2[j] ) { //만약에 비교하는 '첫' 문자가 같다면
        
        index = i; //index 는 첫 문자의 자리 번호. 만약 문자가 틀리다면 break로 빠져나가기
                  


        if (str_2[ j + 1 ] != '\0') //첫 비교후 loop이 끝나기 전에 다음 문자가 null 인지 비교.
            { //만약 null이라면 이 if 문을 빠져나가서 break 로 끝내기.

                if(str_1[ i + 1 ] == str_2[ j + 1 ]) { //null 이 아닐경우 바로 비교.


                index = i; //비교후 같다면 index 유지.
                          //첫 문자가 같아야 -1이 아니게 되므로 두번쨰 문자만 추가로 계속 비교해주면 됨.
                          // 두번쨰 문자가 null이면 바로 빠져나갈 수 있음.

            }

          else {

            index = -1;
            //만약 null이 아닌데도 다르다면 -1. 모든 문자가 일치해야함.
          }

        }

      }



    break;  //두번재 비교 배열 loop 빠져나가기.

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

  index = get_index_of_str("abeda", "bd");
  printf("index : %d\n", index);
  // 출력 => index : -1

  return 0;
}