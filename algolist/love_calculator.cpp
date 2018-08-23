#include <stdio.h>
#include <algorithm>
char name1[1000],name2[1000],h[1000];
int i,s[1000],l,sum,sz=-1,szcur,szcur2;
int main()
{
	printf("Welcome to the love calculator!!!\n");   //Introduction
	printf("Enter your name:");
	gets(name1);                                    //input
	printf("Enter your partner's name:");
	gets(name2);                                    //input
	for(i=0;i<strlen(name1);i++)
	{
		if(name1[i]=='a'||name1[i]=='A')s[0]++;        //counting how many each character in the fist name
		if(name1[i]=='b'||name1[i]=='B')s[1]++;
		if(name1[i]=='c'||name1[i]=='C')s[2]++;	
		if(name1[i]=='d'||name1[i]=='D')s[3]++;
		if(name1[i]=='e'||name1[i]=='E')s[4]++;
		if(name1[i]=='f'||name1[i]=='F')s[5]++;
		if(name1[i]=='g'||name1[i]=='G')s[6]++;
		if(name1[i]=='h'||name1[i]=='H')s[7]++;	
		if(name1[i]=='i'||name1[i]=='I')s[8]++;
		if(name1[i]=='j'||name1[i]=='J')s[9]++;
		if(name1[i]=='k'||name1[i]=='K')s[10]++;
		if(name1[i]=='l'||name1[i]=='L')s[11]++;
		if(name1[i]=='m'||name1[i]=='M')s[12]++;	
		if(name1[i]=='n'||name1[i]=='N')s[13]++;
		if(name1[i]=='o'||name1[i]=='O')s[14]++;
		if(name1[i]=='p'||name1[i]=='P')s[15]++;
		if(name1[i]=='q'||name1[i]=='Q')s[16]++;
		if(name1[i]=='r'||name1[i]=='R')s[17]++;	
		if(name1[i]=='s'||name1[i]=='S')s[18]++;
		if(name1[i]=='t'||name1[i]=='T')s[19]++;
		if(name1[i]=='u'||name1[i]=='U')s[20]++;
		if(name1[i]=='v'||name1[i]=='V')s[21]++;
		if(name1[i]=='w'||name1[i]=='W')s[22]++;	
		if(name1[i]=='x'||name1[i]=='X')s[23]++;
		if(name1[i]=='y'||name1[i]=='Y')s[24]++;
		if(name1[i]=='z'||name1[i]=='Z')s[25]++;
	}
	for(i=0;i<strlen(name2);i++)
	{
		if(name2[i]=='a'||name2[i]=='A')s[0]++;       //counting how many each character in the second name
		if(name2[i]=='b'||name2[i]=='B')s[1]++;
		if(name2[i]=='c'||name2[i]=='C')s[2]++;	
		if(name2[i]=='d'||name2[i]=='D')s[3]++;
		if(name2[i]=='e'||name2[i]=='E')s[4]++;
		if(name2[i]=='f'||name2[i]=='F')s[5]++;
		if(name2[i]=='g'||name2[i]=='G')s[6]++;
		if(name2[i]=='h'||name2[i]=='H')s[7]++;	
		if(name2[i]=='i'||name2[i]=='I')s[8]++;
		if(name2[i]=='j'||name2[i]=='J')s[9]++;
		if(name2[i]=='k'||name2[i]=='K')s[10]++;
		if(name2[i]=='l'||name2[i]=='L')s[11]++;
		if(name2[i]=='m'||name2[i]=='M')s[12]++;	
		if(name2[i]=='n'||name2[i]=='N')s[13]++;
		if(name2[i]=='o'||name2[i]=='O')s[14]++;
		if(name2[i]=='p'||name2[i]=='P')s[15]++;
		if(name2[i]=='q'||name2[i]=='Q')s[16]++;
		if(name2[i]=='r'||name2[i]=='R')s[17]++;	
		if(name2[i]=='s'||name2[i]=='S')s[18]++;
		if(name2[i]=='t'||name2[i]=='T')s[19]++;
		if(name2[i]=='u'||name2[i]=='U')s[20]++;
		if(name2[i]=='v'||name2[i]=='V')s[21]++;
		if(name2[i]=='w'||name2[i]=='W')s[22]++;	
		if(name2[i]=='x'||name2[i]=='X')s[23]++;
		if(name2[i]=='y'||name2[i]=='Y')s[24]++;
		if(name2[i]=='z'||name2[i]=='Z')s[25]++;
	}
	for(i=0;i<26;i++)h[++sz]=s[i]+'0';                   //converting array s to array h
	while(sz>1)                                          //shorting array h
	{
		char cur[1000],cur2[1000];
		szcur=-1;
		szcur2=-1;
		l=0;		
		for(i=sz;i>0;i--)
		{
			sum=(h[i]-'0')+(h[i-1]-'0')+l;             //finding sum for each pair like h[i] and h[i+1]
			cur[++szcur]=((sum%10)+'0');			   //converting this sum to array cur
			l=sum/10;                                  
		}
		if(l!=0)cur[++szcur]=l+'0';
		for(i=szcur;i>-1;i--)cur2[++szcur2]=cur[i];    //reversing the array cur
		for(i=0;i<=szcur;i++)cur[i]=cur2[i];
		sz=szcur;                                        //changing value of sz
		for(i=0;i<=sz;i++)h[i]=cur[i];                 //equaling array cur to h
	}
	printf("This is percentage of love:");    //output
	for(i=0;i<=sz;i++)printf("%c",h[i]);     //output 
	printf("%");
	return 0;
}                                        //END OF PROGRAM