#include<string.h>

int customCompare(char str1[], char str2[])
{
    int i=0,j=0,ui=0,uj=0;
    while(j<strlen(str2)){
        if(str2[j]>='A'&&str2[j]<='Z'){
            uj++;
        }
        j++;
    }
    j=0;
    while(i<strlen(str1)){
        if(str1[i]>='A'&&str1[i]<='Z'){
            ui++;
            while(j<strlen(str2)){
                if(str2[j]>='A'&&str2[j]<='Z'){
                    if(str1[i]==str2[j]){
                        j++;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                j++;
            }
        }
        i++;
    }
    if(ui==uj){
        return 1;}
        return 0;

}
