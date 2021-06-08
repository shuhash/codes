#include <stdio.h>
 
 
int letter_bits(char *str)
{
	int bits=0;
	int i=0;
	while(str[i] != '\0'){
		bits |= 1<<(str[i] - 'a');
		i++;
	}
	return bits;
}
 
int main(){
	int t, bitsA, bitsB;
	char s1[100000], s2[100000];
	scanf("%d", &t);              		
	while(t--){
		scanf("%s", s1);
		scanf("%s", s2);
		bitsA = letter_bits(s1);
		bitsB = letter_bits(s2);
		bitsA & bitsB ? printf("Yes \n") : printf("No \n");
	}     
}
