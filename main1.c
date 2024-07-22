// snake and ladder in c by dev jain,
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct player{
	int pos;
	char col[20];
};
int main() {	
struct player a[20];
int n,i,j,d,e=0,f=0,r;
char m;
//input no of player and ballast colour
printf("ENTER THE TOTAL NO OF PLAYER\n");
scanf("%d",&n);
for(i=0;i<n;i++){
	getchar();
printf("ENTER THE COLOUR OF BALLAST OF %d PLAYER\n ",i+1); 
scanf("%[^\n]s",a[i].col);
getchar();
a[i].pos=0;
}
// positions of snake and ladder from to end,
printf("IN THIS SNAKE AND LADDER THERE ARE 6 SNAKES AND 6 LADDERS\n");
printf("FIRST LADDER IS IN THE POSITION OF 7 AND IT BRING YOU AT THE POSITION OF 45\n\n");
printf("FIRST LADDER IS IN THE POSITION OF 23 AND IT BRING YOU AT THE POSITION OF 33\n\n");
printf("FIRST LADDER IS IN THE POSITION OF 39 AND IT BRING YOU AT THE POSITION OF 42\n\n");
printf("FIRST LADDER IS IN THE POSITION OF 54 AND IT BRING YOU AT THE POSITION OF 69\n\n");
printf("FIRST LADDER IS IN THE POSITION OF 71 AND IT BRING YOU AT THE POSITION OF 95\n\n");
printf("FIRST LADDER IS IN THE POSITION OF 82 AND IT BRING YOU AT THE POSITION OF 99\n\n");
printf("FIRST SNAKE IS IN THE POSITION OF 14 AND IT BRING YOU AT THE POSITION OF 4\n\n");
printf("FIRST SNAKE IS IN THE POSITION OF 29 AND IT BRING YOU AT THE POSITION OF 10\n\n");
printf("FIRST SNAKE IS IN THE POSITION OF 37 AND IT BRING YOU AT THE POSITION OF 22\n\n");
printf("FIRST SNAKE IS IN THE POSITION OF 64 AND IT BRING YOU AT THE POSITION OF 1\n\n");
printf("FIRST SNAKE IS IN THE POSITION OF 77 AND IT BRING YOU AT THE POSITION OF 49\n\n");
printf("FIRST SNAKE IS IN THE POSITION OF 98 AND IT BRING YOU AT THE POSITION OF 55\n\n");
//comparing the colours of ballast of players are same or not,
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
d=strcmp(a[i].col,a[j].col);
if(d==0){
e++;
}  }  }
if(e==0){
	printf("NOW THE GAME BEGINS\n");
	printf("THE CHANCES OF THE PLAYERS IS IN THE SEQUENCE LIKE 1,2,3---N\n");
	printf("FOR ROLL THE DICE TYPE 'A'\n");
//loop for game
	while(f==0){
	for(i=0;i<n;i++){
	printf("PLAYER %d TYPE ENTER OR RETURN TO ROLL THE DICE\n",i+1);
	scanf("%c",&m);
	if(m=='\n'){
	r=(rand()%6)+1;
	printf("%d PLAYER GET %d NUMBER ON DICE\n",i+1,r);
	a[i].pos=a[i].pos+r;
	if(a[i].pos==7){   //conditions on ladder
		a[i].pos=45;
	}
	else if(a[i].pos==23){
		a[i].pos=33;
		printf("it gets ladder on 23 position\n");
	}
	else if(a[i].pos==39){
		a[i].pos=42;
		printf("it gets ladder on 39 position\n");
	}
	else if(a[i].pos==54){
		a[i].pos=69;
		printf("it gets ladder on 54 position\n");
	}
	else if(a[i].pos==71){
		a[i].pos=95;
		printf("it gets ladder on 71 position\n");
	}
	else if(a[i].pos==82){
		a[i].pos=99;
		printf("it gets ladder on 82 position\n");
	}
	else if(a[i].pos==14){   //condition of snakes
		a[i].pos=4;
		printf("it gets bite by snake on 14 position\n");
	}
	else if(a[i].pos==29){
		a[i].pos=10;
		printf("it gets bite by snake on 29 position\n");
	}
	else if(a[i].pos==37){
		a[i].pos=22;
		printf("it gets bite by snake on 37 position\n");
	}
	else if(a[i].pos==64){
		a[i].pos=1;
		printf("it gets bite by snake on 64 position\n");
	}
	else if(a[i].pos==77){
		a[i].pos=49;
		printf("it gets bite by snake on 77 position\n");
	}
	else if(a[i].pos==98){
		a[i].pos=55;
		printf("it gets bite by snake on 98 position\n");
	}
	
	if(a[i].pos>100){
		a[i].pos=a[i].pos-r;
	}
	else if(a[i].pos==100){
		f++;
		printf("WOW PLAYER %d WITH %s COLOUR BALLAST WINS THE GAME\n",i+1,a[i].col);
	} else {
		printf("PLAYER %d AT %d\n", i+1, a[i].pos);
	}
	}
	else{
    printf("ENTER 'A' TO ROLL THE DICE\n");
	i=i-1;
	}	}	}    }	
else
	printf("ALL PLAYERS WILL CONTAIN A DIFFERENT COLOUR BALLAST\n");
	printf("SORRY\nGAME OVER");
}
