#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int game(int user,int comp){
  if(user==0 &&comp==2 || user==0 && comp==4){
    return 1;
    }
  else if(user==1 &&comp==0 ||user==1 && comp==3){
    return 1;
    }
  else if(user==2 &&comp==1 ||user==2 && comp==4){
    return 1;
    }
  else if(user==3 &&comp==2 || user==3 && comp==0){
    return 1;
    }
  else if(user==4 &&comp==3 || user==4 &&comp==1){
    return 1;
    }
  else if(user==comp){
    return 0;
  }
  else{
    return -1;
    }
}
int main(){
    int i,result,x;
    char guess[10];
    char arr[5][10]={"rock","paper","scissors","spock","lizard"};
    srand(time(0));// Gentrates random number each time
    i = rand()%5 + 0; // Generates a random number between 1 and 100;;
    printf("Choose from rock paper scissors lizard and spock\n");
    gets(guess);
    for(x=0;x<6;x++){
      if(x==5){
        printf("Invalid input\n");
        goto error;
      }
      int result=strcmp(guess,arr[x]);
      if(result==0){
        break;
      }
    }
    printf("Computer chose %s\n",arr[i]);
    result=game(x,i);
    if(result==0){
      printf("It is a tie");
      goto end;
    }
    else if(result==1){
      printf("You Won");
      goto end;
    }
    else if(result==-1){
      printf("You Lost");
      goto end;
    }
  else{
    printf("Error");
  }
  error:
    printf("Error try again\n");
  end:
    return 0;
      }