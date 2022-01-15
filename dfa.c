#include<stdio.h>

#include<stdlib.h>

#include<ctype.h>

void main()

{

int nstate,ninput,i,j,ins,nfs,len,state,column,flag=0;

int str[15],trans[20][20],fs[15];

printf("Enter the no. of states:");

scanf("%d",&nstate);

printf("Enter the no. of inputs:");

scanf("%d",&ninput);

printf("Enter the transition table:\n");

for(i=0;i<nstate;i++)

{ for(j=0;j<ninput;j++)

  {

scanf("%d",&trans[i][j]);

  }

}

printf("Enter the initial state:");

scanf("%d",&ins);

printf("Enter the no. of final states:");

scanf("%d",&nfs);

printf("Enter the final state:");

for(i=0;i<nfs;i++)

{

 scanf("%d",&fs[i]);

}

printf("Enter the length of input:");

scanf("%d",&len)

printf("Enter the input:\n");

for(i=0;i<len;i++)

{

 scanf("%d",&str[i]);

}

state=ins;

for(i=0;i<len;i++)

{

 column=str[i];

 state=trans[state][column];

}

for(j=0;j<nfs;j++)

{

 if(state==fs[j])

 {

  printf("Accepted");

  flag=1;

 }

}

if(flag==0)

{

 printf("Rejected");

}

}
