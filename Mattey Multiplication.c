#include <stdio.h>
    #define pcu putchar_unlocked
     
    typedef long int lint;
     
    lint get_lint() { //Positive
    	lint n =0;
    	register int c = getchar_unlocked();
    	while(c<'0' || c>'9') c = getchar_unlocked();
    	while(c>='0' && c<='9') {
    		n = n * 10 + c-'0';  c = getchar_unlocked();
        }
    	return n;
    }
    void put_lint (lint li, char lc) {//Negative
    	if (0 == li) {
    		putchar_unlocked((int)'0');
    		if (lc) putchar_unlocked((int)lc);
    		return;
    	} else if (li < 0) {
    		putchar_unlocked ( (int) '-');
    		li *= -1;
    	}
    	char s[24];
    	auto idx =0;
    	for (; li; idx++) {
    		s[idx] = '0' + li % 10;
    		li /= 10;
    	}
    	for (auto jdx=idx-1; jdx>=0; jdx--)
    		putchar_unlocked((int)s[jdx]);
    	if(lc) putchar_unlocked((int)lc);
    	return;
    }
     
    int main () {
    	lint T = get_lint();
    	while(T--) {
            lint N = get_lint();
            lint M = get_lint();
            lint msb = 63 - __builtin_clzl(M);
            //(2<<1) + (2<<0)
            pcu('('); put_lint(N,0); pcu('<');pcu('<');put_lint(msb,0);pcu(')');
            for(auto bi=msb-1; bi>=0; bi--) {
                if (M & (1UL<<bi)) {
                    pcu(' '); pcu('+'); pcu(' '); pcu('(');
                    put_lint(N,0); pcu('<');pcu('<');put_lint(bi,0);pcu(')');
                }
            }
            pcu('\n');
    	}
    	return 0;
    }
