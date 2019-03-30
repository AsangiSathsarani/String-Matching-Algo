
#include<stdio.h>
#include<string.h>

void Search(char *pat,char *txt){
	int M=strlen(pat);
	int N=strlen(txt);

	int i;
	for (i=0;i<=N-M;i++){
		int j;
		for(j=0;j<M;j++){
			if(pat[j] !=txt[i+j]){
			break;
			}		
		}
		if(j==M){
			printf("index is %d\n",i);
		}
		

		
	}
}

int main(){
	char pat[]="ABAB";
	char txt[]="AcABABAWEABAB";
	Search(pat,txt);
return 0;
	
}
