#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 
void game1(){
  
  printf("\n");
  
  srand(time(NULL));
  int nnum = 1 + rand()%100;
  int num,cs=0;
  do{
  printf("Geuss The Number (1-100) : ");
  scanf("%d",&num);
  cs++;
  
  if((num-nnum <= 10 && num-nnum > 0 ) || (nnum-num <= 10 && nnum-num > 0)) 
    printf("Close\n");
  else if (num > nnum ) printf("Too High\n");
  else if (num < nnum ) printf("Too Low\n");
  else printf("Good Job, You Won\nAttempts = %d\n",cs);
  }while(num != nnum);
  
}

void game2(){
  
  char cho,cts='y';
  int bc=0;
  srand(time(NULL));
  
  while( cts == 'Y' || cts == 'y' ){
      
    int i,chh=1,rcha=0;
  
  printf("\nYou are walking on a path of 10 meters.\nEvery meter you have to choose which direction you will walk (Right Middle Left)\n");
  printf("One of the three directions will be a bomb.\nIf you finish the 10 meters without exploding, you win.\nGood Luck :)\n\n");
  
  for(i=1;i<=10 && rcha != chh;i++){
    
    printf("%d - Choose Your Directions : \nR: Right\nM: Middle\nL: Left \n",i);
    scanf(" %c",&cho);
    
    switch (cho){
      case 'R' :
      case 'r' : chh = 1; break;
      case 'M' :
      case 'm' : chh = 2; break;
      case 'L' :
      case 'l' : chh = 3; break;
    }
    
    rcha = 1+rand()%3;
    
    if(rcha == chh) {
        if(i>=bc) bc = i;   
        printf("\nBomb \nGame Over \nYour Score : %d\nBest Score : %d\n\n",i,bc);
    }
    else if (i==10) {
        printf("You Won\n\n");
        bc = 0;
    }
    else printf("\nContinue\n\n");
  }
  
  printf("Do You Want To Play Again ? (Y = Yes | N = No) \n");
  scanf(" %c",&cts);
  
}
}

int main()
{
  int ca;
  
  while(ca != 3){
  
  printf("Choose A Game : \n1 : Geuss The Number\n2 : Bomb Game\n3 : Exit\n");
  scanf("%d",&ca);
  
  if(ca == 1) game1();
  else if (ca == 2) game2();
  else if (ca == 3) return 0;
  else printf("Invald Option\n");
  printf("\n");
  }
  
  return 0;
}
