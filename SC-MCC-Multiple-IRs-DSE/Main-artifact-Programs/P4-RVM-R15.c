#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#define BOUND 5
int kappa;
int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>
	 int a200 = 7;
	 int a5 = 10;
	 int a154 = 12;
	 int a157 = 10;
	 int a172 = 13;
	 int a79 = 10;
	 int a7 = 6;
	 int a53 = 8;
	 int a33 = 10;
	 int a90 = 5;
	 int a192 = 11;
	 int a66 = 5;
	 int a9 = 4;
	 int a143 = 4;
	 int a119 = 8;
	 int a191 = 10;
	 int a3 = 13;
	 int a91 = 14;
	 int a69 = 13;
	 int a6 = 4;
	 int a45 = 3;

	int check29(int v) {
	int temp;
        if(a53 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check28(int v) {
	int temp;
        if(a172 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check42(int v) {
	int temp;
        if(a90 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check24(int v) {
	int temp;
        if(a7 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check22(int v) {
	int temp;
        if(a7 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check34(int v) {
	int temp;
        if(a5 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check41(int v) {
	int temp;
        if(a172 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check27(int v) {
	int temp;
        if(a79 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check46(int v) {
	int temp;
        if(a91 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check39(int v) {
	int temp;
        if(a66 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check37(int v) {
	int temp;
        if(a191 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check47(int v) {
	int temp;
        if(a5 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check25(int v) {
	int temp;
        if(a119 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check49(int v) {
	int temp;
        if(a6 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check48(int v) {
	int temp;
        if(a53 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check23(int v) {
	int temp;
        if(a3 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check30(int v) {
	int temp;
        if(a192 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check43(int v) {
	int temp;
        if(a6 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check33(int v) {
	int temp;
        if(a79 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check50(int v) {
	int temp;
        if(a66 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	int check26(int v) {
	int temp;
        if(a7 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
		}

	void update19(int a, int b, int c)
	{
		a5 = (((a + b) - c) + 1);
	}

	void update20(int a, int b, int c)
	{
		a200 = (((a * b) - c) + 5);
	}

	void update57(int a, int b, int c)
	{
		a157 = ((a / b) + c) -3;
	}

	void update58(int a, int b, int c)
	{
		a79 = ((a / b) - c) + 5;
	}

	void update7(int a, int b, int c)
	{
		a7 = (((a - b) + c) + 0);
	}

	void update8(int a, int b, int c)
	{
		a90 = (((a * b) - c) + 4);
	}

	void update21(int a, int b, int c)
	{
		a91 = (((a * b) - c) - 1);
	}

	void update22(int a, int b, int c)
	{
		a172 = (((a - b) * c) - 2);
	}

	void update47(int a, int b, int c)
	{
		a90 = (((a * b) / c) + 0) ;
	}

	void update48(int a, int b, int c)
	{
		a154 = (((a * b) - c) + -1);
	}

	void update27(int a, int b, int c)
	{
		a3 = (((a / b) - c) + 2);
	}

	void update28(int a, int b, int c)
	{
		a143 = (((a - b) * c) - 10);
	}

	void update61(int a, int b, int c)
	{
		a200 = (((a / b) + c) - 3);
	}

	void update62(int a, int b, int c)
	{
		a3 = (((a * b) - c) + 2);
	}

	void update13(int a, int b, int c)
	{
		a7 = (((a * b) - c) + 5);
	}

	void update14(int a, int b, int c)
	{
		a6 = (((a * b) / c) - 6);
	}

	void update15(int a, int b, int c)
	{
		a53 = (((a * b) - c) + 1);
	}

	void update16(int a, int b, int c)
	{
		a33 = (((a / b) + c) + 2);
	}

	void update53(int a, int b, int c)
	{
		a7 = (((a * b) + c) - 3);
	}

	void update54(int a, int b, int c)
	{
		a192 = (((a / b) - c) + 2);
	}

	void update39(int a, int b, int c)
	{
		a90 = (((a / b) * c) - 10);
	}

	void update40(int a, int b, int c)
	{
		a33 = (((a * b) - c) + -3);
	}

	void update35(int a, int b, int c)
	{
		a172 = (((a / b) * c) + 3);
	}

	void update36(int a, int b, int c)
	{
		a143 = (((a * b) - c) + 1);
	}

	void update55(int a, int b, int c)
	{
		a53 = (((a / b) - c) + 3);
	}

	void update56(int a, int b, int c)
	{
		a53 = (((a * b) - c) + 0);
	}

	void update11(int a, int b, int c)
	{
		a3 = (((a + b) - c) + 5);
	}

	void update12(int a, int b, int c)
	{
		a6 = (((a * b) + c) + 2);
	}

	void update59(int a, int b, int c)
	{
		a66 = (((a * b) - c) - 0);
	}

	void update60(int a, int b, int c)
	{
		a6 = (((a * b) + c) - 0);
	}

	void update17(int a, int b, int c)
	{
		a191 = (((a * b) - c) + 2);
	}

	void update18(int a, int b, int c)
	{
		a33 = (((a - b) - c) - 5);
	}

	void update45(int a, int b, int c)
	{
		a7 = (((a * b) - c) - 1);
	}

	void update46(int a, int b, int c)
	{
		a192 = (((a * b) + c) + 3);
	}

	void update9(int a, int b, int c)
	{
		a53 = (((a + b) + c) - 0);
	}

	void update10(int a, int b, int c)
	{
		a33 = (((a / b) + c) - 6);
	}

	void update5(int a, int b, int c)
	{
		a5 = (((a - b) - c) + 12);
	}

	void update6(int a, int b, int c)
	{
		a7 = (((a + b) / c) + 2);
	}

	void update29(int a, int b, int c)
	{
		a6 = (((a * b) - c) - 3);
	}

	void update30(int a, int b, int c)
	{
		a79 = (((a + b) - c) - 7);
	}

	void update43(int a, int b, int c)
	{
		a91 = (((a - b) - c) + 3);
	}

	void update44(int a, int b, int c)
	{
		a5 = (((a / b) + c) + 0);
	}

	 int check43(int v); 
	 void update11(int a, int b, int c);
	 int check26(int v); 
	 void update54(int a, int b, int c);
	 void update28(int a, int b, int c);
	 int check23(int v); 
	 void update14(int a, int b, int c);
	 void update61(int a, int b, int c);
	 void update60(int a, int b, int c);
	 void update55(int a, int b, int c);
	 void update58(int a, int b, int c);
	 void update46(int a, int b, int c);
	 void update9(int a, int b, int c);
	 void update62(int a, int b, int c);
	 int check22(int v); 
	 void update5(int a, int b, int c);
	 void update15(int a, int b, int c);
	 void update8(int a, int b, int c);
	 void update30(int a, int b, int c);
	 void update16(int a, int b, int c);
	 int check34(int v); 
	 void update21(int a, int b, int c);
	 void update18(int a, int b, int c);
	 int check49(int v); 
	 int check41(int v); 
	 void update44(int a, int b, int c);
	 void update47(int a, int b, int c);
	 int check25(int v); 
	 void update6(int a, int b, int c);
	 int check28(int v); 
	 void update7(int a, int b, int c);
	 void update27(int a, int b, int c);
	 void update36(int a, int b, int c);
	 void update56(int a, int b, int c);
	 void update45(int a, int b, int c);
	 int check48(int v); 
	 void update22(int a, int b, int c);
	 void update59(int a, int b, int c);
	 void update19(int a, int b, int c);
	 void update53(int a, int b, int c);
	 int check50(int v); 
	 void update40(int a, int b, int c);
	 int check46(int v); 
	 int check37(int v); 
	 int check24(int v); 
	 void update20(int a, int b, int c);
	 void update39(int a, int b, int c);
	 int check27(int v); 
	 void update17(int a, int b, int c);
	 void update57(int a, int b, int c);
	 void update12(int a, int b, int c);
	 int check33(int v); 
	 void update10(int a, int b, int c);
	 void update13(int a, int b, int c);
	 void update43(int a, int b, int c);
	 int check30(int v); 
	 int check47(int v); 
	 int check29(int v); 
	 int check39(int v); 
	 void update48(int a, int b, int c);
	 int check42(int v); 
	 void update29(int a, int b, int c);
	 void update35(int a, int b, int c);

	// inputs
	int inputs[] = {2,5,3,1,4};

	 int a180 = 13;
	 int a59 = 4;
	 int a52 = 4;
	 int a55 = 11;
	 int a20 = 1;
	 int a139 = 9;
	 int a87 = 5;
	 int a63 = 3;
	 int a176 = 4;
	 int a193 = 15;
	 int cf = 1;
	 int a107 = 12;
	 int a35 = 4;
	 int a187 = 10;
	 int a85 = 13;
	 int a21 = 11;
	 int a95 = 3;
	 int a121 = 4;
	 int a8 = 9;
	 int a159 = 6;
	 int a170 = 12;
	 int a1 = 3;
	 int a78 = 10;
	 int a101 = 15;
	 int a181 = 3;
	 int a173 = -15;
	 int a166 = 1;
	 int a106 = 1;
	 int a130 = 1;
	 int a126 = 1;
	 int a71 = -15;
	 int a19 = 1;
	 int a50 = 1;
	 int a32 = 1;
	 int a115 = 0;
	 int a132 = 1;
	 int a99 = 2;
	 int a75 = 1;
	 int a42 = 1;
	 int a117 = 1;
	 int a196 = 1;
	 int a162 = -15;
	 int a36 = 1;
	 int a155 = 1;
	 int a182 = 1;
	 int a18 = -15;
	 int a175 = 1;
	 int a135 = 3;
	 int a82 = 3;
	 int a58 = 2;
	 int a198 = 1;
	 int a136 = 1;
	 int a38 = 1;
	 int a133 = -15;
	 int a144 = 1;
	 int a131 = -15;
	 int a10 = 3;
	 int a81 = 1;
	 int a100 = 3;
	 int a168 = 1;
	 int a54 = -15;
	 int a22 = 1;
	 int a102 = 0;


	void errorCheck() {
	    if((((a55 == 12) && (a176 == 9)) && (a193 == 16))){
	    cf = 0;
	    //error_ 0: assert(!//error_ 0);
	    }
	    if((((a121 == 10) && check29(9)) && (a193 == 10))){
	    cf = 0;
	    //error_ 1: assert(!//error_ 1);
	    }
	    if((((a101 == 15) && (a176 == 8)) && (a193 == 16))){
	    cf = 0;
	    //error_ 2: assert(!//error_ 2);
	    }
	    if(((check46(5) && check42(6)) && (a193 == 15))){
	    cf = 0;
	    //error_ 3: assert(!//error_ 3);
	    }
	    if(((check22(14) && (a176 == 4)) && (a193 == 16))){
	    cf = 0;
	    //error_ 4: assert(!//error_ 4);
	    }
	    if((((a181 == 6) && (a78 == 7)) && (a193 == 13))){
	    cf = 0;
	    //error_ 5: assert(!//error_ 5);
	    }
	    if((((a55 == 15) && check48(11)) && (a193 == 11))){
	    cf = 0;
	    //error_ 6: assert(!//error_ 6);
	    }
	    if(((check33(7) && check42(13)) && (a193 == 15))){
	    cf = 0;
	    //error_ 7: assert(!//error_ 7);
	    }
	    if((((a35 == 3) && check29(12)) && (a193 == 10))){
	    cf = 0;
	    //error_ 8: assert(!//error_ 8);
	    }
	    if((((a95 == 5) && check41(6)) && (a193 == 17))){
	    cf = 0;
	    //error_ 9: assert(!//error_ 9);
	    }
	    if((((a1 == 6) && (a78 == 8)) && (a193 == 13))){
	    cf = 0;
	    //error_ 10: assert(!//error_ 10);
	    }
	    if((((a121 == 5) && check37(7)) && (a193 == 14))){
	    cf = 0;
	    //error_ 11: assert(!//error_ 11);
	    }
	    if(((check27(9) && (a21 == 12)) && (a193 == 12))){
	    cf = 0;
	    //error_ 12: assert(!//error_ 12);
	    }
	    if(((check29(9) && check37(4)) && (a193 == 14))){
	    cf = 0;
	    //error_ 13: assert(!//error_ 13);
	    }
	    if((((a121 == 4) && check29(9)) && (a193 == 10))){
	    cf = 0;
	    //error_ 14: assert(!//error_ 14);
	    }
	    if((((a59 == 2) && check29(11)) && (a193 == 10))){
	    cf = 0;
	    //error_ 15: assert(!//error_ 15);
	    }
	    if(((check50(4) && (a21 == 7)) && (a193 == 12))){
	    cf = 0;
	    //error_ 16: assert(!//error_ 16);
	    }
	    if(((check29(7) && check37(4)) && (a193 == 14))){
	    cf = 0;
	    //error_ 17: assert(!//error_ 17);
	    }
	    if((((a55 == 12) && check48(11)) && (a193 == 11))){
	    cf = 0;
	    //error_ 18: assert(!//error_ 18);
	    }
	    if((((a35 == 9) && check48(12)) && (a193 == 11))){
	    cf = 0;
	    //error_ 19: assert(!//error_ 19);
	    }
	    if(((check43(9) && (a21 == 13)) && (a193 == 12))){
	    cf = 0;
	    //error_ 20: assert(!//error_ 20);
	    }
	    if(((check46(8) && check42(6)) && (a193 == 15))){
	    cf = 0;
	    //error_ 21: assert(!//error_ 21);
	    }
	    if((((a181 == 5) && (a78 == 7)) && (a193 == 13))){
	    cf = 0;
	    //error_ 22: assert(!//error_ 22);
	    }
	    if((((a8 == 5) && check29(7)) && (a193 == 10))){
	    cf = 0;
	    //error_ 23: assert(!//error_ 23);
	    }
	    if(((check43(13) && check48(10)) && (a193 == 11))){
	    cf = 0;
	    //error_ 24: assert(!//error_ 24);
	    }
	    if((((a59 == 7) && check41(3)) && (a193 == 17))){
	    cf = 0;
	    //error_ 25: assert(!//error_ 25);
	    }
	    if(((check30(11) && check48(9)) && (a193 == 11))){
	    cf = 0;
	    //error_ 26: assert(!//error_ 26);
	    }
	    if((((a63 == 6) && check41(7)) && (a193 == 17))){
	    cf = 0;
	    //error_ 27: assert(!//error_ 27);
	    }
	    if(((check39(12) && (a78 == 10)) && (a193 == 13))){
	    cf = 0;
	    //error_ 28: assert(!//error_ 28);
	    }
	    if(((check30(10) && check48(9)) && (a193 == 11))){
	    cf = 0;
	    //error_ 29: assert(!//error_ 29);
	    }
	    if((((a139 == 11) && check29(6)) && (a193 == 10))){
	    cf = 0;
	    //error_ 30: assert(!//error_ 30);
	    }
	    if((((a52 == 8) && check41(9)) && (a193 == 17))){
	    cf = 0;
	    //error_ 31: assert(!//error_ 31);
	    }
	    if(((check47(9) && check37(2)) && (a193 == 14))){
	    cf = 0;
	    //error_ 32: assert(!//error_ 32);
	    }
	    if(((check24(10) && check42(8)) && (a193 == 15))){
	    cf = 0;
	    //error_ 33: assert(!//error_ 33);
	    }
	    if((((a20 == 1) && check41(2)) && (a193 == 17))){
	    cf = 0;
	    //error_ 34: assert(!//error_ 34);
	    }
	    if((((a159 == 6) && (a78 == 9)) && (a193 == 13))){
	    cf = 0;
	    //error_ 35: assert(!//error_ 35);
	    }
	    if((((a85 == 14) && (a21 == 6)) && (a193 == 12))){
	    cf = 0;
	    //error_ 36: assert(!//error_ 36);
	    }
	    if(((check39(6) && (a78 == 10)) && (a193 == 13))){
	    cf = 0;
	    //error_ 37: assert(!//error_ 37);
	    }
	    if((((a187 == 12) && check29(13)) && (a193 == 10))){
	    cf = 0;
	    //error_ 38: assert(!//error_ 38);
	    }
	    if((((a59 == 3) && check29(11)) && (a193 == 10))){
	    cf = 0;
	    //error_ 39: assert(!//error_ 39);
	    }
	    if(((check30(17) && check48(9)) && (a193 == 11))){
	    cf = 0;
	    //error_ 40: assert(!//error_ 40);
	    }
	    if((((a85 == 16) && (a21 == 6)) && (a193 == 12))){
	    cf = 0;
	    //error_ 41: assert(!//error_ 41);
	    }
	    if((((a52 == 10) && check41(9)) && (a193 == 17))){
	    cf = 0;
	    //error_ 42: assert(!//error_ 42);
	    }
	    if((((a35 == 6) && check29(12)) && (a193 == 10))){
	    cf = 0;
	    //error_ 43: assert(!//error_ 43);
	    }
	    if(((check49(10) && check37(6)) && (a193 == 14))){
	    cf = 0;
	    //error_ 44: assert(!//error_ 44);
	    }
	    if((((a63 == 3) && check41(7)) && (a193 == 17))){
	    cf = 0;
	    //error_ 45: assert(!//error_ 45);
	    }
	    if(((check24(11) && check42(8)) && (a193 == 15))){
	    cf = 0;
	    //error_ 46: assert(!//error_ 46);
	    }
	    if(((check28(14) && check37(8)) && (a193 == 14))){
	    cf = 0;
	    //error_ 47: assert(!//error_ 47);
	    }
	    if((((a59 == 5) && check41(3)) && (a193 == 17))){
	    cf = 0;
	    //error_ 48: assert(!//error_ 48);
	    }
	    if(((check34(6) && (a176 == 7)) && (a193 == 16))){
	    cf = 0;
	    //error_ 49: assert(!//error_ 49);
	    }
	    if(((check46(7) && (a78 == 4)) && (a193 == 13))){
	    cf = 0;
	    //error_ 50: assert(!//error_ 50);
	    }
	    if(((check50(5) && (a21 == 7)) && (a193 == 12))){
	    cf = 0;
	    //error_ 51: assert(!//error_ 51);
	    }
	    if((((a55 == 11) && check48(11)) && (a193 == 11))){
	    cf = 0;
	    //error_ 52: assert(!//error_ 52);
	    }
	    if(((check24(9) && check42(8)) && (a193 == 15))){
	    cf = 0;
	    //error_ 53: assert(!//error_ 53);
	    }
	    if((((a170 == 10) && check42(12)) && (a193 == 15))){
	    cf = 0;
	    //error_ 54: assert(!//error_ 54);
	    }
	    if(((check34(10) && (a176 == 7)) && (a193 == 16))){
	    cf = 0;
	    //error_ 55: assert(!//error_ 55);
	    }
	    if((((a180 == 12) && check37(3)) && (a193 == 14))){
	    cf = 0;
	    //error_ 56: assert(!//error_ 56);
	    }
	    if((((a87 == 9) && (a78 == 5)) && (a193 == 13))){
	    cf = 0;
	    //error_ 57: assert(!//error_ 57);
	    }
	    if((((a187 == 8) && check29(8)) && (a193 == 10))){
	    cf = 0;
	    //error_ 58: assert(!//error_ 58);
	    }
	    if((((a85 == 14) && check48(7)) && (a193 == 11))){
	    cf = 0;
	    //error_ 59: assert(!//error_ 59);
	    }
	    if((((a1 == 3) && (a78 == 8)) && (a193 == 13))){
	    cf = 0;
	    //error_ 60: assert(!//error_ 60);
	    }
	    if((((a35 == 9) && check48(14)) && (a193 == 11))){
	    cf = 0;
	    //error_ 61: assert(!//error_ 61);
	    }
	    if((((a63 == 7) && (a176 == 6)) && (a193 == 16))){
	    cf = 0;
	    //error_ 62: assert(!//error_ 62);
	    }
	    if(((check23(8) && check48(8)) && (a193 == 11))){
	    cf = 0;
	    //error_ 63: assert(!//error_ 63);
	    }
	    if((((a20 == 4) && check41(2)) && (a193 == 17))){
	    cf = 0;
	    //error_ 64: assert(!//error_ 64);
	    }
	    if(((check25(7) && check37(5)) && (a193 == 14))){
	    cf = 0;
	    //error_ 65: assert(!//error_ 65);
	    }
	    if((((a139 == 10) && check29(6)) && (a193 == 10))){
	    cf = 0;
	    //error_ 66: assert(!//error_ 66);
	    }
	    if((((a87 == 11) && check29(10)) && (a193 == 10))){
	    cf = 0;
	    //error_ 67: assert(!//error_ 67);
	    }
	    if((((a180 == 11) && check37(3)) && (a193 == 14))){
	    cf = 0;
	    //error_ 68: assert(!//error_ 68);
	    }
	    if((((a20 == 1) && check42(10)) && (a193 == 15))){
	    cf = 0;
	    //error_ 69: assert(!//error_ 69);
	    }
	    if(((check43(9) && check48(10)) && (a193 == 11))){
	    cf = 0;
	    //error_ 70: assert(!//error_ 70);
	    }
	    if((((a107 == 16) && (a21 == 8)) && (a193 == 12))){
	    cf = 0;
	    //error_ 71: assert(!//error_ 71);
	    }
	    if((((a139 == 14) && check29(6)) && (a193 == 10))){
	    cf = 0;
	    //error_ 72: assert(!//error_ 72);
	    }
	    if((((a35 == 4) && check29(12)) && (a193 == 10))){
	    cf = 0;
	    //error_ 73: assert(!//error_ 73);
	    }
	    if(((check34(4) && (a176 == 7)) && (a193 == 16))){
	    cf = 0;
	    //error_ 74: assert(!//error_ 74);
	    }
	    if(((check49(11) && check37(6)) && (a193 == 14))){
	    cf = 0;
	    //error_ 75: assert(!//error_ 75);
	    }
	    if(((check23(8) && check42(9)) && (a193 == 15))){
	    cf = 0;
	    //error_ 76: assert(!//error_ 76);
	    }
	    if(((check46(2) && check42(6)) && (a193 == 15))){
	    cf = 0;
	    //error_ 77: assert(!//error_ 77);
	    }
	    if((((a121 == 4) && check37(7)) && (a193 == 14))){
	    cf = 0;
	    //error_ 78: assert(!//error_ 78);
	    }
	    if(((check46(4) && check42(6)) && (a193 == 15))){
	    cf = 0;
	    //error_ 79: assert(!//error_ 79);
	    }
	    if((((a78 == 4) && check41(5)) && (a193 == 17))){
	    cf = 0;
	    //error_ 80: assert(!//error_ 80);
	    }
	    if(((check25(5) && check37(5)) && (a193 == 14))){
	    cf = 0;
	    //error_ 81: assert(!//error_ 81);
	    }
	    if(((check29(9) && check41(8)) && (a193 == 17))){
	    cf = 0;
	    //error_ 82: assert(!//error_ 82);
	    }
	    if(((check27(7) && (a21 == 12)) && (a193 == 12))){
	    cf = 0;
	    //error_ 83: assert(!//error_ 83);
	    }
	    if((((a35 == 5) && check48(14)) && (a193 == 11))){
	    cf = 0;
	    //error_ 84: assert(!//error_ 84);
	    }
	    if((((a35 == 5) && check48(12)) && (a193 == 11))){
	    cf = 0;
	    //error_ 85: assert(!//error_ 85);
	    }
	    if(((check43(11) && check48(10)) && (a193 == 11))){
	    cf = 0;
	    //error_ 86: assert(!//error_ 86);
	    }
	    if((((a20 == 5) && check41(2)) && (a193 == 17))){
	    cf = 0;
	    //error_ 87: assert(!//error_ 87);
	    }
	    if((((a180 == 6) && check37(3)) && (a193 == 14))){
	    cf = 0;
	    //error_ 88: assert(!//error_ 88);
	    }
	    if(((check23(13) && check42(9)) && (a193 == 15))){
	    cf = 0;
	    //error_ 89: assert(!//error_ 89);
	    }
	    if(((check25(9) && check37(5)) && (a193 == 14))){
	    cf = 0;
	    //error_ 90: assert(!//error_ 90);
	    }
	    if(((check28(12) && check37(8)) && (a193 == 14))){
	    cf = 0;
	    //error_ 91: assert(!//error_ 91);
	    }
	    if((((a35 == 5) && check29(12)) && (a193 == 10))){
	    cf = 0;
	    //error_ 92: assert(!//error_ 92);
	    }
	    if((((a95 == 7) && check41(6)) && (a193 == 17))){
	    cf = 0;
	    //error_ 93: assert(!//error_ 93);
	    }
	    if(((check33(11) && check42(13)) && (a193 == 15))){
	    cf = 0;
	    //error_ 94: assert(!//error_ 94);
	    }
	    if(((check33(6) && check48(13)) && (a193 == 11))){
	    cf = 0;
	    //error_ 95: assert(!//error_ 95);
	    }
	    if(((check43(8) && check48(10)) && (a193 == 11))){
	    cf = 0;
	    //error_ 96: assert(!//error_ 96);
	    }
	    if((((a35 == 10) && check29(12)) && (a193 == 10))){
	    cf = 0;
	    //error_ 97: assert(!//error_ 97);
	    }
	    if((((a85 == 11) && check42(11)) && (a193 == 15))){
	    cf = 0;
	    //error_ 98: assert(!//error_ 98);
	    }
	    if(((check49(8) && check37(6)) && (a193 == 14))){
	    cf = 0;
	    //error_ 99: assert(!//error_ 99);
	    }
	}
 void calculate_outputm2(int input) {
    if((((input == 1) && (cf==1)) && a32 <= -22)) {
	if((a144 - 20) < a144){
	a144  -=  4 ;}
	 else{	
	a144  -=  0;}
    	cf = 0;
    	a176 = (a193 - 6);
    	update6(a176,a193,0);
    	a193 = (a176 - -12); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 3))) {
	if((a182 - 20) < a182){
	a182  -=  2 ;}
	 else{	
	a182  -=  0;}
    	cf = 0;
    	a59 = (a193 - 8);
    	update44(a193,a8,-1);
    	a193 = ((a59 * a59) + 13); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 2))) {
	if((a32 + 20) > a32){
	a32  +=  3 ;}
	 else{	
	a32  +=  0;}
    	cf = 0;
    	update36(a8,a193,-59);
    	a193 = 14;
    	a187 = (a193 - 7); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
    if(((input == 5) && (cf==1))) {
	if((a168 + 20) > a168){
	a168  +=  2 ;}
	 else{	
	a168  +=  0;}
    	cf = 0;
    	a193 = (a8 + 5);
    	a85 = (a8 + 7);
    	update58(a8,a193,10); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
    if((((input == 4) && (cf==1)) && a115 >= 27)) {
	if((a106 + 20) > a106){
	a106  +=  3 ;}
	 else{	
	a106  +=  0;}
    	cf = 0;
    	a193 = (a8 - -7);
    	a1 = (a8 - 3);
    	a78 = (a1 - -5); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm1(int input) {
    if(((a8 == 6) && (cf==1))) {
    	calculate_outputm2(input);
    } 
}
 void calculate_outputm4(int input) {
    if(((cf==1) && (input == 3))) {
	if((a132 + 20) > a132){
	a132  +=  4 ;}
	 else{	
	a132  +=  0;}
	if((a133 + 20) > a133){
	a133  +=  2 ;}
	 else{	
	a133  +=  0;}
	if((a102 + 20) > a102){
	a102  +=  2 ;}
	 else{	
	a102  +=  0;}
    	cf = 0;
    	a59 = ((a193 + a193) - 16);
    	update43(a59,a121,-4);
    	a193 = (a59 + 13); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((input == 1) && (cf==1)) && a126 == 8364)) {
	if((a32 - 20) < a32){
	a32  -=  1 ;}
	 else{	
	a32  -=  0;}
    	cf = 0;
    	update45(a193,a193,-5);
    	update54(a193,a193,15);
    	a193 = ((a121 / a121) - -14); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if(((input == 2) && (cf==1))) {
	if((a82 - 20) < a82){
	a82  -=  2 ;}
	 else{	
	a82  -=  0;}
    	cf = 0;
    	a121 = ((a193 - a193) + 7);
    	update35(a121,a121,42);
    	a193 = ((a121 / a121) + 13); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 5))) {
	if((a36 + 20) > a36){
	a36  +=  2 ;}
	 else{	
	a36  +=  0;}
    	cf = 0;
    	a20 = (a121 + 2);
    	update43(a121,a121,-2);
    	a193 = ((a20 - a20) - -17); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
    if((((input == 4) && (cf==1)) && (a71 % 2==0))) {
	if((a106 + 20) > a106){
	a106  +=  4 ;}
	 else{	
	a106  +=  0;}
    	cf = 0;
    	update58(a193,a121,8);
    	a193 = 11;
    	a85 = (a193 - -3); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm3(int input) {
    if(((a121 == 5) && (cf==1))) {
    	calculate_outputm4(input);
    } 
}
 void calculate_outputm6(int input) {
    if(((input == 5) && (cf==1))) {
	if((a36 + 20) > a36){
	a36  +=  1 ;}
	 else{	
	a36  +=  0;}
    	cf = 0;
    	a35 = (a85 - 5);
    	update57(a85,a85,-157); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 2))) {
	if((a130 + 20) > a130){
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
    	cf = 0;
    	 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if((((input == 3) && (cf==1)) && a198 <= -44)) {
	if((a166 + 20) > a166){
	a166  +=  4 ;}
	 else{	
	a166  +=  0;}
    	cf = 0;
    	a35 = (a193 - 6);
    	update19(a85,a35,4);
    	a193 = (a85 + -3); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if((((input == 1) && (cf==1)) && a58 >= 23)) {
    	cf = 0;
    	a21 = (a85 - 6);
    	update61(a21,a193,9);
    	a193 = (a21 - -5); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm5(int input) {
    if(((cf==1) && (a85 == 13))) {
    	calculate_outputm6(input);
    } 
}
 void calculate_outputm8(int input) {
    if((((cf==1) && (input == 1)) && a81 == 6156)) {
	if((a175 + 20) > a175){
	a175  +=  2 ;}
	 else{	
	a175  +=  0;}
    	cf = 0;
    	a193 = (a35 + 5);
    	a78 = (a35 + -4);
    	update54(a78,a193,10); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 4)) && a10 >= 23)) {
	if((a130 + 20) > a130){
	a130  +=  1 ;}
	 else{	
	a130  +=  0;}
    	cf = 0;
    	update58(a35,a35,3);
    	update27(a35,a35,-58); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 3))) {
    	cf = 0;
    	a193 = (a35 + 9);
    	a59 = (a35 - 4);
    	update43(a193,a59,10); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if(((input == 5) && (cf==1))) {
	if((a58 - 20) < a58){
	a58  -=  4 ;}
	 else{	
	a58  -=  0;}
    	cf = 0;
    	update43(a193,a35,0);
    	a193 = (a35 - -9);
    	a59 = (a193 - 13); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 2))) {
	if((a162 + 20) > a162){
	a162  +=  2 ;}
	 else{	
	a162  +=  0;}
	if((a54 + 20) > a54){
	a54  +=  2 ;}
	 else{	
	a54  +=  0;}
	if((a166 + 20) > a166){
	a166  +=  4 ;}
	 else{	
	a166  +=  0;}
    	cf = 0;
    	a121 = (a35 - 3);
    	update20(a193,a121,7);
    	a193 = (a121 - -5); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm7(int input) {
    if(((cf==1) && (a35 == 8))) {
    	calculate_outputm8(input);
    } 
}
 void calculate_outputm10(int input) {
    if(((input == 5) && (cf==1))) {
    	cf = 0;
    	a193 = ((a21 * a21) - 65);
    	a176 = ((a193 + a193) - 29);
    	a21 = (a193 - 3); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if(((input == 3) && (cf==1))) {
	if((a106 + 20) > a106){
	a106  +=  1 ;}
	 else{	
	a106  +=  0;}
    	cf = 0;
    	a193 = (a21 - -8);
    	update44(a21,a21,3);
    	a59 = (a21 + -5); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 1)) && a144 >= 21)) {
	if((a10 - 20) < a10){
	a10  -=  2 ;}
	 else{	
	a10  -=  0;}
    	cf = 0;
    	update44(a21,a21,3);
    	a59 = ((a21 - a193) - -10);
    	a193 = ((a59 - a59) + 17); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 4)) && (a131 % 2==0))) {
	if((a115 - 20) < a115){
	a115  -=  3 ;}
	 else{	
	a115  -=  0;}
    	cf = 0;
    	a35 = (a193 - 6);
    	update19(a35,a193,18);
    	a193 = (a35 - -4); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 2))) {
	if((a136 + 20) > a136){
	a136  +=  2 ;}
	 else{	
	a136  +=  0;}
	if((a144 + 20) > a144){
	a144  +=  1 ;}
	 else{	
	a144  +=  0;}
	if((a100 + 20) > a100){
	a100  +=  1 ;}
	 else{	
	a100  +=  0;}
    	cf = 0;
    	a193 = (a21 - -8);
    	update44(a21,a193,12);
    	update30(a21,a21,74); 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
}
 void calculate_outputm9(int input) {
    if(((cf==1) && check26(8))) {
    	calculate_outputm10(input);
    } 
}
 void calculate_outputm12(int input) {
    if((((cf==1) && (input == 3)) && a102 >= 38)) {
	if((a106 - 20) < a106){
	a106  -=  2 ;}
	 else{	
	a106  -=  0;}
    	cf = 0;
    	update44(a21,a193,4);
    	a78 = (a193 - 8);
    	a193 = ((a78 / a78) - -16); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 2))) {
	if((a42 + 20) > a42){
	a42  +=  1 ;}
	 else{	
	a42  +=  0;}
    	cf = 0;
    	update58(a193,a193,12);
    	a35 = ((a193 / a21) - -8);
    	a193 = ((a35 / a35) + 10); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
}
 void calculate_outputm11(int input) {
    if(((cf==1) && check43(7))) {
    	calculate_outputm12(input);
    } 
}
 void calculate_outputm14(int input) {
    if(((input == 3) && (cf==1))) {
    	cf = 0;
    	update57(a193,a193,-155);
    	a193 = (a78 - -7);
    	a35 = ((a78 / a78) - -4); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((input == 4) && (cf==1)) && a106 <= -45)) {
	if((a130 + 20) > a130){
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
    	cf = 0;
    	update43(a78,a78,-9);
    	a193 = (a78 - -13);
    	a52 = (a193 + -9); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
    if(((input == 2) && (cf==1))) {
    	cf = 0;
    	a193 = ((a78 * a78) + -6);
    	update20(a78,a78,1);
    	a8 = (a193 - 4); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 5))) {
	if((a135 - 20) < a135){
	a135  -=  1 ;}
	 else{	
	a135  -=  0;}
    	cf = 0;
    	a193 = ((a78 + a78) + 8);
    	a176 = (a193 + -12);
    	update5(a176,a176,4); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 1)) && a130 <= -29)) {
    	cf = 0;
    	update21(a78,a193,-41);
    	update58(a193,a193,17);
    	a193 = 11; 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm13(int input) {
    if(((cf==1) && check46(4))) {
    	calculate_outputm14(input);
    } 
}
 void calculate_outputm16(int input) {
    if(((cf==1) && (input == 3))) {
    	cf = 0;
    	update44(a193,a187,-3);
    	a193 = (a187 - -10);
    	update30(a193,a187,112); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 5)) && (a18 % 2==0))) {
	if((a115 - 20) < a115){
	a115  -=  3 ;}
	 else{	
	a115  -=  0;}
    	cf = 0;
    	a193 = ((a187 - a187) - -10);
    	update19(a193,a193,6);
    	a139 = ((a193 * a193) + -89); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 2)) && a175 <= -27)) {
	if((a99 - 20) < a99){
	a99  -=  2 ;}
	 else{	
	a99  -=  0;}
    	cf = 0;
    	a176 = (a187 + 2);
    	a193 = (a176 + 7);
    	a55 = ((a176 + a176) + -6); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm15(int input) {
    if(((cf==1) && (a187 == 7))) {
    	calculate_outputm16(input);
    } 
}
 void calculate_outputm18(int input) {
    if((((input == 3) && (cf==1)) && a196 == 480)) {
	if((a198 + 20) > a198){
	a198  +=  2 ;}
	 else{	
	a198  +=  0;}
    	cf = 0;
    	update17(a121,a121,-11);
    	update35(a193,a193,188); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((input == 1) && (cf==1)) && a117 == 2186)) {
	if((a166 + 20) > a166){
	a166  +=  3 ;}
	 else{	
	a166  +=  0;}
    	cf = 0;
    	update59(a193,a121,-8);
    	update35(a193,a193,190); 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
    if(((input == 5) && (cf==1))) {
	if((a36 + 20) > a36){
	a36  +=  2 ;}
	 else{	
	a36  +=  0;}
    	cf = 0;
    	a176 = (a193 + -9);
    	a193 = (a121 + 9);
    	a8 = ((a193 * a193) - 250); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((input == 4) && (cf==1)) && a36 <= -40)) {
	if((a106 + 20) > a106){
	a106  +=  4 ;}
	 else{	
	a106  +=  0;}
    	cf = 0;
    	a121 = (a193 + -9); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
    if((((input == 2) && (cf==1)) && (a162 % 2==0))) {
	if((a166 + 20) > a166){
	a166  +=  1 ;}
	 else{	
	a166  +=  0;}
    	cf = 0;
    	a35 = (a121 - -2);
    	a193 = ((a121 / a35) - -11);
    	update58(a35,a121,4); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
}
 void calculate_outputm17(int input) {
    if(((cf==1) && (a121 == 7))) {
    	calculate_outputm18(input);
    } 
}
 void calculate_outputm20(int input) {
    if(((cf==1) && (input == 4))) {
    	cf = 0;
    	a176 = ((a193 / a193) + 2);
    	a21 = (a193 + -2);
    	a193 = (a176 + 13); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
}
 void calculate_outputm19(int input) {
    if((check33(10) && (cf==1))) {
    	calculate_outputm20(input);
    } 
}
 void calculate_outputm22(int input) {
    if((((input == 2) && (cf==1)) && (a173 % 2==0))) {
	if((a130 + 20) > a130){
	a130  +=  4 ;}
	 else{	
	a130  +=  0;}
    	cf = 0;
    	update30(a193,a176,44);
    	a176 = ((a193 - a193) + 7); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if(((input == 3) && (cf==1))) {
    	cf = 0;
    	a193 = a21;
    	update54(a193,a176,12);
    	a78 = ((a21 + a21) + -22); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((input == 4) && (cf==1)) && a166 <= -44)) {
	if((a166 - 20) < a166){
	a166  -=  2 ;}
	 else{	
	a166  -=  0;}
    	cf = 0;
    	a63 = (a21 + -7);
    	update43(a193,a63,3);
    	a193 = (a176 - -14); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 5))) {
    	cf = 0;
    	a121 = (a193 - 11);
    	update19(a121,a21,17);
    	a193 = (a176 + 7); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm21(int input) {
    if(((a21 == 13) && (cf==1))) {
    	calculate_outputm22(input);
    } 
}
 void calculate_outputm24(int input) {
    if((((input == 4) && (cf==1)) && a19 == 6764)) {
	if((a99 + 20) > a99){
	a99  +=  1 ;}
	 else{	
	a99  +=  0;}
    	cf = 0;
    	update36(a193,a176,-59);
    	update12(a176,a176,-3);
    	a193 = (a176 + 10); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
    if((((input == 2) && (cf==1)) && a50 == 9160)) {
	if((a106 + 20) > a106){
	a106  +=  4 ;}
	 else{	
	a106  +=  0;}
    	cf = 0;
    	update36(a193,a193,-251);
    	a193 = (a176 - -10);
    	update12(a176,a176,-1); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if(((input == 3) && (cf==1))) {
    	cf = 0;
    	update19(a193,a193,8);
    	update44(a176,a176,8);
    	a193 = 17; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm23(int input) {
    if((check22(12) && (cf==1))) {
    	calculate_outputm24(input);
    } 
}
 void calculate_outputm26(int input) {
    if(((input == 5) && (cf==1))) {
	if((a82 - 20) < a82){
	a82  -=  1 ;}
	 else{	
	a82  -=  0;}
    	cf = 0;
    	a193 = ((a176 - a8) + 15);
    	update35(a8,a193,77);
    	a121 = (a8 + 1); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
}
 void calculate_outputm27(int input) {
    if((((input == 1) && (cf==1)) && (a54 % 2==0))) {
	if((a106 + 20) > a106){
	a106  +=  3 ;}
	 else{	
	a106  +=  0;}
    	cf = 0;
    	a95 = ((a193 / a176) - -4);
    	update44(a193,a193,6);
    	a193 = (a95 - -10); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
    if((((input == 3) && (cf==1)) && a168 >= 26)) {
    	cf = 0;
    	update19(a193,a8,1);
    	a121 = (a8 - -2);
    	a193 = ((a121 / a176) - -8); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 4)) && a22 <= -29)) {
	if((a175 + 20) > a175){
	a175  +=  2 ;}
	 else{	
	a175  +=  0;}
    	cf = 0;
    	a193 = ((a176 * a8) + -28);
    	a21 = (a193 - 6);
    	a85 = ((a21 - a193) - -20); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 5))) {
	if((a130 + 20) > a130){
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
    	cf = 0;
    	a121 = a176;
    	update19(a193,a121,-2);
    	a193 = (a8 + 2); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 2)) && a100 >= 31)) {
	if((a115 - 20) < a115){
	a115  -=  2 ;}
	 else{	
	a115  -=  0;}
    	cf = 0;
    	a78 = ((a176 - a193) + 21);
    	update40(a193,a78,6);
    	a193 = (a78 - -3); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm25(int input) {
    if(((cf==1) && (a8 == 6))) {
    	calculate_outputm26(input);
    } 
    if(((cf==1) && (a8 == 8))) {
    	calculate_outputm27(input);
    } 
}
 void calculate_outputm29(int input) {
    if((((input == 4) && (cf==1)) && a42 <= -42)) {
	if((a100 - 20) < a100){
	a100  -=  4 ;}
	 else{	
	a100  -=  0;}
    	cf = 0;
    	update20(a193,a20,18);
    	a139 = ((a193 / a193) - -9);
    	a193 = a139; 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if((((input == 1) && (cf==1)) && a75 == 8590)) {
	if((a32 + 20) > a32){
	a32  +=  3 ;}
	 else{	
	a32  +=  0;}
    	cf = 0;
    	update57(a20,a193,-109);
    	a193 = 11;
    	update47(a193,a193,13); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 5))) {
	if((a182 + 20) > a182){
	a182  +=  1 ;}
	 else{	
	a182  +=  0;}
    	cf = 0;
    	a193 = ((a20 - a20) - -16);
    	a176 = ((a20 / a20) + 4);
    	a8 = (a193 + -8); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 3))) {
	if((a42 - 20) < a42){
	a42  -=  2 ;}
	 else{	
	a42  -=  0;}
    	cf = 0;
    	update48(a193,a193,6);
    	a21 = (a20 + 6);
    	a193 = ((a21 - a21) - -12); 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
    if(((input == 2) && (cf==1))) {
	if((a115 - 20) < a115){
	a115  -=  2 ;}
	 else{	
	a115  -=  0;}
    	cf = 0;
    	update30(a20,a20,42);
    	update44(a193,a20,-6); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
}
 void calculate_outputm28(int input) {
    if(((cf==1) && (a20 == 7))) {
    	calculate_outputm29(input);
    } 
}
 void calculate_outputm31(int input) {
    if((((input == 1) && (cf==1)) && a135 >= 29)) {
	if((a155 + 20) > a155){
	a155  +=  2 ;}
	 else{	
	a155  +=  0;}
    	cf = 0;
    	update57(a59,a193,-24);
    	a193 = ((a59 + a59) - -7);
    	update47(a193,a193,8); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if(((input == 5) && (cf==1))) {
	if((a99 - 20) < a99){
	a99  -=  3 ;}
	 else{	
	a99  -=  0;}
    	cf = 0;
    	 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 2)) && a82 >= 21)) {
	if((a166 + 20) > a166){
	a166  +=  2 ;}
	 else{	
	a166  +=  0;}
    	cf = 0;
    	a193 = ((a59 - a59) + 11);
    	a55 = (a59 + 13);
    	update58(a193,a193,11); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
}
 void calculate_outputm32(int input) {
    if(((input == 3) && (cf==1))) {
	if((a173 + 20) > a173){
	a173  +=  2 ;}
	 else{	
	a173  +=  0;}
	if((a166 - 20) < a166){
	a166  -=  4 ;}
	 else{	
	a166  -=  0;}
	if((a106 - 20) < a106){
	a106  -=  2 ;}
	 else{	
	a106  -=  0;}
	if((a130 - 20) < a130){
	a130  -=  4 ;}
	 else{	
	a130  -=  0;}
	if((a126 + 20) > a126){
	a126  +=  4 ;}
	 else{	
	a126  +=  0;}
	if((a71 + 20) > a71){
	a71  +=  2 ;}
	 else{	
	a71  +=  0;}
	if((a19 + 20) > a19){
	a19  +=  2 ;}
	 else{	
	a19  +=  0;}
	if((a50 + 20) > a50){
	a50  +=  6 ;}
	 else{	
	a50  +=  0;}
	if((a32 - 20) < a32){
	a32  -=  4 ;}
	 else{	
	a32  -=  0;}
	if((a115 + 20) > a115){
	a115  +=  1 ;}
	 else{	
	a115  +=  0;}
	if((a155 - 20) < a155){
	a155  -=  2 ;}
	 else{	
	a155  -=  0;}
	if((a182 + 20) > a182){
	a182  +=  2 ;}
	 else{	
	a182  +=  0;}
	if((a18 + 20) > a18){
	a18  +=  2 ;}
	 else{	
	a18  +=  0;}
	if((a175 - 20) < a175){
	a175  -=  4 ;}
	 else{	
	a175  -=  0;}
	if((a135 + 20) > a135){
	a135  +=  2 ;}
	 else{	
	a135  +=  0;}
	if((a82 + 20) > a82){
	a82  +=  1 ;}
	 else{	
	a82  +=  0;}
	if((a58 + 20) > a58){
	a58  +=  1 ;}
	 else{	
	a58  +=  0;}
	if((a198 - 20) < a198){
	a198  -=  4 ;}
	 else{	
	a198  -=  0;}
	if((a131 + 20) > a131){
	a131  +=  2 ;}
	 else{	
	a131  +=  0;}
    	cf = 0;
    	a193 = (a59 + 7);
    	a35 = ((a59 * a59) + -8);
    	update57(a59,a193,-32); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if(((input == 2) && (cf==1))) {
	if((a42 - 20) < a42){
	a42  -=  4 ;}
	 else{	
	a42  -=  0;}
	if((a117 + 20) > a117){
	a117  +=  4 ;}
	 else{	
	a117  +=  0;}
	if((a38 + 20) > a38){
	a38  +=  4 ;}
	 else{	
	a38  +=  0;}
	if((a168 + 20) > a168){
	a168  +=  1 ;}
	 else{	
	a168  +=  0;}
    	cf = 0;
    	a193 = ((a59 * a59) + -4);
    	a21 = (a59 - -5);
    	update13(a59,a59,-8); 
    	 printf("%d\n", 26); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 1)) && a99 >= 24)) {
	if((a32 + 20) > a32){
	a32  +=  1 ;}
	 else{	
	a32  +=  0;}
    	cf = 0;
    	update36(a59,a59,-12);
    	a193 = (a59 + 10);
    	update20(a193,a59,9); 
    	 printf("%d\n", 20); // fflush(stdout); 
    } 
    if(((input == 5) && (cf==1))) {
	if((a155 + 20) > a155){
	a155  +=  2 ;}
	 else{	
	a155  +=  0;}
    	cf = 0;
    	update43(a193,a193,-9);
    	a52 = (a193 - 14); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 4)) && a132 == 7462)) {
	if((a166 + 20) > a166){
	a166  +=  3 ;}
	 else{	
	a166  +=  0;}
    	cf = 0;
    	a20 = (a59 - -1);
    	update43(a59,a193,-15); 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
}
 void calculate_outputm30(int input) {
    if(((a59 == 2) && (cf==1))) {
    	calculate_outputm31(input);
    } 
    if(((cf==1) && (a59 == 4))) {
    	calculate_outputm32(input);
    } 
}
 void calculate_outputm34(int input) {
    if(((cf==1) && (input == 3))) {
	if((a99 + 20) > a99){
	a99  +=  2 ;}
	 else{	
	a99  +=  0;}
	if((a75 + 20) > a75){
	a75  +=  2 ;}
	 else{	
	a75  +=  0;}
	if((a196 + 20) > a196){
	a196  +=  4 ;}
	 else{	
	a196  +=  0;}
	if((a10 + 20) > a10){
	a10  +=  2 ;}
	 else{	
	a10  +=  0;}
	if((a81 + 20) > a81){
	a81  +=  4 ;}
	 else{	
	a81  +=  0;}
    	cf = 0;
    	update20(a193,a193,25);
    	a193 = 10;
    	a121 = (a193 - 5); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 5))) {
    	cf = 0;
    	update19(a193,a193,9);
    	a121 = ((a193 + a193) - 29);
    	a193 = (a121 - -5); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 2))) {
	if((a115 - 20) < a115){
	a115  -=  4 ;}
	 else{	
	a115  -=  0;}
    	cf = 0;
    	 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
}
 void calculate_outputm33(int input) {
    if(((cf==1) && check34(7))) {
    	calculate_outputm34(input);
    } 
}
 void calculate_outputm36(int input) {
    if((((input == 3) && (cf==1)) && a155 <= -28)) {
	if((a135 - 20) < a135){
	a135  -=  3 ;}
	 else{	
	a135  -=  0;}
    	cf = 0;
    	a187 = (a193 + -5);
    	update19(a187,a193,18);
    	a193 = (a187 - 2); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if(((cf==1) && (input == 2))) {
	if((a155 + 20) > a155){
	a155  +=  4 ;}
	 else{	
	a155  +=  0;}
    	cf = 0;
    	a193 = 11;
    	update58(a193,a193,10);
    	a35 = (a193 + -3); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 1)) && a182 >= 27)) {
	if((a42 + 20) > a42){
	a42  +=  2 ;}
	 else{	
	a42  +=  0;}
    	cf = 0;
    	update43(a193,a193,-7);
    	a63 = (a193 + -14); 
    	 printf("%d\n", 22); // fflush(stdout); 
    } 
}
 void calculate_outputm35(int input) {
    if(((cf==1) && check29(8))) {
    	calculate_outputm36(input);
    } 
}
 void calculate_outputm38(int input) {
    if(((cf==1) && (input == 2))) {
	if((a36 - 20) < a36){
	a36  -=  2 ;}
	 else{	
	a36  -=  0;}
	if((a22 - 20) < a22){
	a22  -=  2 ;}
	 else{	
	a22  -=  0;}
	if((a130 + 20) > a130){
	a130  +=  3 ;}
	 else{	
	a130  +=  0;}
    	cf = 0;
    	update43(a52,a52,-4);
    	update30(a193,a193,282); 
    	 printf("%d\n", 19); // fflush(stdout); 
    } 
    if((((cf==1) && (input == 1)) && a136 >= 35)) {
    	cf = 0;
    	a121 = ((a193 * a52) - 47);
    	update19(a121,a193,22);
    	a193 = ((a121 / a121) + 9); 
    	 printf("%d\n", 23); // fflush(stdout); 
    } 
    if((((input == 5) && (cf==1)) && a38 == 4382)) {
	if((a32 + 20) > a32){
	a32  +=  3 ;}
	 else{	
	a32  +=  0;}
    	cf = 0;
    	a193 = ((a52 * a52) - -6);
    	update45(a193,a193,-10);
    	a85 = (a52 + 8); 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
    if(((input == 3) && (cf==1))) {
	if((a136 - 20) < a136){
	a136  -=  3 ;}
	 else{	
	a136  -=  0;}
    	cf = 0;
    	 
    	 printf("%d\n", 21); // fflush(stdout); 
    } 
    if((((input == 4) && (cf==1)) && (a133 % 2==0))) {
	if((a99 - 20) < a99){
	a99  -=  4 ;}
	 else{	
	a99  -=  0;}
    	cf = 0;
    	update15(a52,a52,6);
    	a21 = (a52 - -9);
    	a193 = a21; 
    	 printf("%d\n", 25); // fflush(stdout); 
    } 
}
 void calculate_outputm37(int input) {
    if(((cf==1) && (a52 == 3))) {
    	calculate_outputm38(input);
    } 
}

 void calculate_output(int input) {
        cf = 1;

    if(((a193 == 10) && (cf==1))) {
    	if((check29(7) && (cf==1))) {
    		calculate_outputm1(input);
    	} 
    	if(((cf==1) && check29(9))) {
    		calculate_outputm3(input);
    	} 
    } 
    if(((cf==1) && (a193 == 11))) {
    	if(((cf==1) && check48(7))) {
    		calculate_outputm5(input);
    	} 
    	if(((cf==1) && check48(12))) {
    		calculate_outputm7(input);
    	} 
    } 
    if(((a193 == 12) && (cf==1))) {
    	if(((a21 == 9) && (cf==1))) {
    		calculate_outputm9(input);
    	} 
    	if(((cf==1) && (a21 == 13))) {
    		calculate_outputm11(input);
    	} 
    } 
    if(((cf==1) && (a193 == 13))) {
    	if(((cf==1) && (a78 == 4))) {
    		calculate_outputm13(input);
    	} 
    } 
    if(((a193 == 14) && (cf==1))) {
    	if((check37(1) && (cf==1))) {
    		calculate_outputm15(input);
    	} 
    	if(((cf==1) && check37(7))) {
    		calculate_outputm17(input);
    	} 
    } 
    if(((a193 == 15) && (cf==1))) {
    	if(((cf==1) && check42(13))) {
    		calculate_outputm19(input);
    	} 
    } 
    if(((a193 == 16) && (cf==1))) {
    	if(((a176 == 3) && (cf==1))) {
    		calculate_outputm21(input);
    	} 
    	if(((a176 == 4) && (cf==1))) {
    		calculate_outputm23(input);
    	} 
    	if(((cf==1) && (a176 == 5))) {
    		calculate_outputm25(input);
    	} 
    } 
    if(((cf==1) && (a193 == 17))) {
    	if(((cf==1) && check41(2))) {
    		calculate_outputm28(input);
    	} 
    	if((check41(3) && (cf==1))) {
    		calculate_outputm30(input);
    	} 
    	if(((cf==1) && check41(4))) {
    		calculate_outputm33(input);
    	} 
    	if((check41(8) && (cf==1))) {
    		calculate_outputm35(input);
    	} 
    	if((check41(9) && (cf==1))) {
    		calculate_outputm37(input);
    	} 
    } 
    errorCheck();

   if((cf==1)) 
    {
    
    }
    	//fprintf(stderr, "Invalid input: %d\n", input); 
}


int main()
{
kappa = 0;
    // main i/o-loop
   int symb;   
    for (int FLAG=0;FLAG<BOUND;FLAG++)
    {
        klee_make_symbolic(&symb, sizeof(int), "symb"); 
        // operate eca engine
        calculate_output(symb);
    }
    
 return 0;

}


