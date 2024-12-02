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


int check1(int v);
void update(int a, int b, int c);
int getInt();

static int a156 = 11;

int check1(int v)
{
	int temp;
        if(a156 == v){
        temp=1;        
        }
	else{
	temp=0;}
	return (temp);
}
	
void update(int a, int b, int c)
{
	a156 = ((a - b) + c);
}
	
int getInt()
{
	return a156;
}

	// inputs
	int inputs[] = {2,5,3,1,4};

	
	 int a122 = 2;
	 int a57 = 2;
	 int a114 = 11;
	 int a4 = 10;
	 int a50 = 3;
	 int a142 = 11;
	 int a176 = 6;
	 int a28 = 8;
	 int a134 = 7;
	 int a62 = 12;
	 int a94 = 11;
	 int a23 = 11;
	 int a193 = 2;
	 int a35 = 6;
	 int a148 = 9;
	 int a150 = 9;
	 int a138 = 9;
	 int a111 = 13;
	 int a90 = 7;
	 int a89 = 7;
	 int a38 = 10;
	 int a49 = 2;
	 int a44 = 12;
	 int a13 = 1;
	 int a84 = 17;
	 int a180 = 15;
	 int a182 = 7;
	 int a108 = 3;
	 int a188 = 13;
	 int a117 = 5;
	 int a80 = 9;
	 int a172 = 11;
	 int a11 = 6;
	 int a47 = 4;
	 int a137 = 9;
	 int cf = 1;
	 int a113 = 7;
	 int a64 = 10;
	 int a15 = 6;
	 int a164 = 6;
	 int a66 = 7;
	 int a92 = 8;
	 int a5 = 8;
	 int a14 = 1;
	 int a140 = 3;
	 int a185 = 3;
	 int a55 = 8;
	 int a153 = 10;
	 int a159 = 10;
	 int a51 = 1;
	 int a112 = 1;
	 int a125 = 1;
	 int a21 = 1;
	 int a191 = 1;
	 int a16 = 1;
	 int a199 = 1;
	 int a128 = 1;
	 int a72 = 1;
	 int a102 = 0;
	 int a116 = 3;
	 int a68 = 1;
	 int a177 = 1;
	 int a93 = 1;
	 int a157 = 0;
	 int a30 = 1;
	 int a110 = 1;
	 int a160 = 1;
	 int a197 = 2;
	 int a98 = 1;
	 int a8 = 1;
	 int a40 = 1;
	 int a18 = 1;
	 int a86 = 1;
	 int a24 = 1;
	 int a26 = 1;
	 int a32 = 1;
	 int a198 = 1;
	 int a144 = 1;
	 int a129 = 1;
	 int a165 = 1;
	 int a58 = 3;


	void errorCheck() {
	    if((((a92==10) && (a11==5)) && (a28==5))){
	    cf = 0;
	    //error_ 0: assert(!//error_ 0);
	    }
	    if((((a148==5) && (a23==10)) && (a28==9))){
	    cf = 0;
	    //error_ 1: assert(!//error_ 1);
	    }
	    if((((a4==14) && (a23==11)) && (a28==9))){
	    cf = 0;
	    //error_ 2: assert(!//error_ 2);
	    }
	    if((((a14==3) && (a193==6)) && (a28==4))){
	    cf = 0;
	    //error_ 3: assert(!//error_ 3);
	    }
	    if((((a38==10) && (check1(8))) && (a28==8))){
	    cf = 0;
	    //error_ 4: assert(!//error_ 4);
	    }
	    if((((a49==6) && (a5==5)) && (a28==7))){
	    cf = 0;
	    //error_ 5: assert(!//error_ 5);
	    }
	    if((((a185==3) && (a159==9)) && (a28==10))){
	    cf = 0;
	    //error_ 6: assert(!//error_ 6);
	    }
	    if((((a113==5) && (a23==12)) && (a28==9))){
	    cf = 0;
	    //error_ 7: assert(!//error_ 7);
	    }
	    if((((a108==10) && (a182==5)) && (a28==11))){
	    cf = 0;
	    //error_ 8: assert(!//error_ 8);
	    }
	    if((((a94==15) && (a5==11)) && (a28==7))){
	    cf = 0;
	    //error_ 9: assert(!//error_ 9);
	    }
	    if((((a114==9) && (a182==7)) && (a28==11))){
	    cf = 0;
	    //error_ 10: assert(!//error_ 10);
	    }
	    if((((a44==6) && (a122==3)) && (a28==6))){
	    cf = 0;
	    //error_ 11: assert(!//error_ 11);
	    }
	    if((((a150==10) && (check1(5))) && (a28==8))){
	    cf = 0;
	    //error_ 12: assert(!//error_ 12);
	    }
	    if((((a137==13) && (a159==6)) && (a28==10))){
	    cf = 0;
	    //error_ 13: assert(!//error_ 13);
	    }
	    if((((a176==6) && (a122==5)) && (a28==6))){
	    cf = 0;
	    //error_ 14: assert(!//error_ 14);
	    }
	    if((((a13==5) && (a11==10)) && (a28==5))){
	    cf = 0;
	    //error_ 15: assert(!//error_ 15);
	    }
	    if((((a80==10) && (a159==4)) && (a28==10))){
	    cf = 0;
	    //error_ 16: assert(!//error_ 16);
	    }
	    if((((a108==8) && (a182==5)) && (a28==11))){
	    cf = 0;
	    //error_ 17: assert(!//error_ 17);
	    }
	    if((((a164==5) && (a5==10)) && (a28==7))){
	    cf = 0;
	    //error_ 18: assert(!//error_ 18);
	    }
	    if((((a13==4) && (a23==8)) && (a28==9))){
	    cf = 0;
	    //error_ 19: assert(!//error_ 19);
	    }
	    if((((a62==14) && (a193==7)) && (a28==4))){
	    cf = 0;
	    //error_ 20: assert(!//error_ 20);
	    }
	    if((((a92==12) && (a23==9)) && (a28==9))){
	    cf = 0;
	    //error_ 21: assert(!//error_ 21);
	    }
	    if((((a122==8) && (a23==13)) && (a28==9))){
	    cf = 0;
	    //error_ 22: assert(!//error_ 22);
	    }
	    if((((a14==4) && (a193==6)) && (a28==4))){
	    cf = 0;
	    //error_ 23: assert(!//error_ 23);
	    }
	    if((((a185==9) && (a159==9)) && (a28==10))){
	    cf = 0;
	    //error_ 24: assert(!//error_ 24);
	    }
	    if((((a15==9) && (a193==9)) && (a28==4))){
	    cf = 0;
	    //error_ 25: assert(!//error_ 25);
	    }
	    if((((a114==10) && (a182==7)) && (a28==11))){
	    cf = 0;
	    //error_ 26: assert(!//error_ 26);
	    }
	    if((((check1(10)) && (a23==15)) && (a28==9))){
	    cf = 0;
	    //error_ 27: assert(!//error_ 27);
	    }
	    if((((a140==1) && (a5==7)) && (a28==7))){
	    cf = 0;
	    //error_ 28: assert(!//error_ 28);
	    }
	    if((((a66==11) && (a11==6)) && (a28==5))){
	    cf = 0;
	    //error_ 29: assert(!//error_ 29);
	    }
	    if((((a38==16) && (check1(8))) && (a28==8))){
	    cf = 0;
	    //error_ 30: assert(!//error_ 30);
	    }
	    if((((check1(7)) && (a23==15)) && (a28==9))){
	    cf = 0;
	    //error_ 31: assert(!//error_ 31);
	    }
	    if((((a150==5) && (a11==11)) && (a28==5))){
	    cf = 0;
	    //error_ 32: assert(!//error_ 32);
	    }
	    if((((a90==5) && (check1(11))) && (a28==8))){
	    cf = 0;
	    //error_ 33: assert(!//error_ 33);
	    }
	    if((((a23==9) && (a122==4)) && (a28==6))){
	    cf = 0;
	    //error_ 34: assert(!//error_ 34);
	    }
	    if((((a176==6) && (a193==8)) && (a28==4))){
	    cf = 0;
	    //error_ 35: assert(!//error_ 35);
	    }
	    if((((a122==1) && (a182==2)) && (a28==11))){
	    cf = 0;
	    //error_ 36: assert(!//error_ 36);
	    }
	    if((((a164==10) && (a5==10)) && (a28==7))){
	    cf = 0;
	    //error_ 37: assert(!//error_ 37);
	    }
	    if((((a44==8) && (a122==3)) && (a28==6))){
	    cf = 0;
	    //error_ 38: assert(!//error_ 38);
	    }
	    if((((a5==5) && (a122==8)) && (a28==6))){
	    cf = 0;
	    //error_ 39: assert(!//error_ 39);
	    }
	    if((((a113==7) && (check1(10))) && (a28==8))){
	    cf = 0;
	    //error_ 40: assert(!//error_ 40);
	    }
	    if((((a57==9) && (a122==1)) && (a28==6))){
	    cf = 0;
	    //error_ 41: assert(!//error_ 41);
	    }
	    if((((a111==8) && (check1(9))) && (a28==8))){
	    cf = 0;
	    //error_ 42: assert(!//error_ 42);
	    }
	    if((((a150==8) && (a11==11)) && (a28==5))){
	    cf = 0;
	    //error_ 43: assert(!//error_ 43);
	    }
	    if((((a122==6) && (a182==2)) && (a28==11))){
	    cf = 0;
	    //error_ 44: assert(!//error_ 44);
	    }
	    if((((a89==5) && (a193==3)) && (a28==4))){
	    cf = 0;
	    //error_ 45: assert(!//error_ 45);
	    }
	    if((((a142==16) && (check1(6))) && (a28==8))){
	    cf = 0;
	    //error_ 46: assert(!//error_ 46);
	    }
	    if((((a50==1) && (a182==8)) && (a28==11))){
	    cf = 0;
	    //error_ 47: assert(!//error_ 47);
	    }
	    if((((a134==9) && (a11==8)) && (a28==5))){
	    cf = 0;
	    //error_ 48: assert(!//error_ 48);
	    }
	    if((((a117==6) && (a11==7)) && (a28==5))){
	    cf = 0;
	    //error_ 49: assert(!//error_ 49);
	    }
	    if((((a137==12) && (a159==6)) && (a28==10))){
	    cf = 0;
	    //error_ 50: assert(!//error_ 50);
	    }
	    if((((a13==8) && (a11==10)) && (a28==5))){
	    cf = 0;
	    //error_ 51: assert(!//error_ 51);
	    }
	    if((((a140==8) && (a5==7)) && (a28==7))){
	    cf = 0;
	    //error_ 52: assert(!//error_ 52);
	    }
	    if((((a15==6) && (a193==9)) && (a28==4))){
	    cf = 0;
	    //error_ 53: assert(!//error_ 53);
	    }
	    if((((a84==15) && (a193==5)) && (a28==4))){
	    cf = 0;
	    //error_ 54: assert(!//error_ 54);
	    }
	    if((((a13==4) && (a11==10)) && (a28==5))){
	    cf = 0;
	    //error_ 55: assert(!//error_ 55);
	    }
	    if((((a64==13) && (a182==9)) && (a28==11))){
	    cf = 0;
	    //error_ 56: assert(!//error_ 56);
	    }
	    if((((a180==17) && (a182==4)) && (a28==11))){
	    cf = 0;
	    //error_ 57: assert(!//error_ 57);
	    }
	    if((((a57==3) && (a122==1)) && (a28==6))){
	    cf = 0;
	    //error_ 58: assert(!//error_ 58);
	    }
	    if((((a23==8) && (a122==4)) && (a28==6))){
	    cf = 0;
	    //error_ 59: assert(!//error_ 59);
	    }
	    if((((a94==13) && (a5==11)) && (a28==7))){
	    cf = 0;
	    //error_ 60: assert(!//error_ 60);
	    }
	    if((((a137==8) && (a159==6)) && (a28==10))){
	    cf = 0;
	    //error_ 61: assert(!//error_ 61);
	    }
	    if((((a4==15) && (a23==11)) && (a28==9))){
	    cf = 0;
	    //error_ 62: assert(!//error_ 62);
	    }
	    if((((a92==13) && (a159==7)) && (a28==10))){
	    cf = 0;
	    //error_ 63: assert(!//error_ 63);
	    }
	    if((((a137==6) && (a159==6)) && (a28==10))){
	    cf = 0;
	    //error_ 64: assert(!//error_ 64);
	    }
	    if((((a92==6) && (a23==9)) && (a28==9))){
	    cf = 0;
	    //error_ 65: assert(!//error_ 65);
	    }
	    if((((a150==3) && (a11==11)) && (a28==5))){
	    cf = 0;
	    //error_ 66: assert(!//error_ 66);
	    }
	    if((((a176==4) && (a122==5)) && (a28==6))){
	    cf = 0;
	    //error_ 67: assert(!//error_ 67);
	    }
	    if((((a153==8) && (a11==4)) && (a28==5))){
	    cf = 0;
	    //error_ 68: assert(!//error_ 68);
	    }
	    if((((a122==2) && (a182==2)) && (a28==11))){
	    cf = 0;
	    //error_ 69: assert(!//error_ 69);
	    }
	    if((((a113==9) && (a23==12)) && (a28==9))){
	    cf = 0;
	    //error_ 70: assert(!//error_ 70);
	    }
	    if((((a180==15) && (a182==4)) && (a28==11))){
	    cf = 0;
	    //error_ 71: assert(!//error_ 71);
	    }
	    if((((a13==6) && (a159==8)) && (a28==10))){
	    cf = 0;
	    //error_ 72: assert(!//error_ 72);
	    }
	    if((((a38==13) && (check1(8))) && (a28==8))){
	    cf = 0;
	    //error_ 73: assert(!//error_ 73);
	    }
	    if((((a185==4) && (a159==9)) && (a28==10))){
	    cf = 0;
	    //error_ 74: assert(!//error_ 74);
	    }
	    if((((a172==12) && (a23==14)) && (a28==9))){
	    cf = 0;
	    //error_ 75: assert(!//error_ 75);
	    }
	    if((((a35==3) && (a159==5)) && (a28==10))){
	    cf = 0;
	    //error_ 76: assert(!//error_ 76);
	    }
	    if((((a114==13) && (a182==7)) && (a28==11))){
	    cf = 0;
	    //error_ 77: assert(!//error_ 77);
	    }
	    if((((a55==2) && (a5==8)) && (a28==7))){
	    cf = 0;
	    //error_ 78: assert(!//error_ 78);
	    }
	    if((((a90==10) && (check1(11))) && (a28==8))){
	    cf = 0;
	    //error_ 79: assert(!//error_ 79);
	    }
	    if((((a49==3) && (a5==5)) && (a28==7))){
	    cf = 0;
	    //error_ 80: assert(!//error_ 80);
	    }
	    if((((a13==1) && (a23==8)) && (a28==9))){
	    cf = 0;
	    //error_ 81: assert(!//error_ 81);
	    }
	    if((((a188==12) && (a193==2)) && (a28==4))){
	    cf = 0;
	    //error_ 82: assert(!//error_ 82);
	    }
	    if((((a150==9) && (a11==11)) && (a28==5))){
	    cf = 0;
	    //error_ 83: assert(!//error_ 83);
	    }
	    if((((a13==1) && (a11==10)) && (a28==5))){
	    cf = 0;
	    //error_ 84: assert(!//error_ 84);
	    }
	    if((((a92==11) && (a159==7)) && (a28==10))){
	    cf = 0;
	    //error_ 85: assert(!//error_ 85);
	    }
	    if((((a84==13) && (a193==5)) && (a28==4))){
	    cf = 0;
	    //error_ 86: assert(!//error_ 86);
	    }
	    if((((a92==6) && (a11==5)) && (a28==5))){
	    cf = 0;
	    //error_ 87: assert(!//error_ 87);
	    }
	    if((((a134==10) && (a11==8)) && (a28==5))){
	    cf = 0;
	    //error_ 88: assert(!//error_ 88);
	    }
	    if((((a80==3) && (a159==4)) && (a28==10))){
	    cf = 0;
	    //error_ 89: assert(!//error_ 89);
	    }
	    if((((a180==15) && (a182==3)) && (a28==11))){
	    cf = 0;
	    //error_ 90: assert(!//error_ 90);
	    }
	    if((((a153==5) && (a11==4)) && (a28==5))){
	    cf = 0;
	    //error_ 91: assert(!//error_ 91);
	    }
	    if((((a148==8) && (a23==10)) && (a28==9))){
	    cf = 0;
	    //error_ 92: assert(!//error_ 92);
	    }
	    if((((a15==4) && (a193==9)) && (a28==4))){
	    cf = 0;
	    //error_ 93: assert(!//error_ 93);
	    }
	    if((((a64==8) && (a182==9)) && (a28==11))){
	    cf = 0;
	    //error_ 94: assert(!//error_ 94);
	    }
	    if((((a47==8) && (a159==10)) && (a28==10))){
	    cf = 0;
	    //error_ 95: assert(!//error_ 95);
	    }
	    if((((a89==4) && (a5==9)) && (a28==7))){
	    cf = 0;
	    //error_ 96: assert(!//error_ 96);
	    }
	    if((((a111==11) && (check1(9))) && (a28==8))){
	    cf = 0;
	    //error_ 97: assert(!//error_ 97);
	    }
	    if((((a134==11) && (a11==8)) && (a28==5))){
	    cf = 0;
	    //error_ 98: assert(!//error_ 98);
	    }
	    if((((a140==4) && (a5==7)) && (a28==7))){
	    cf = 0;
	    //error_ 99: assert(!//error_ 99);
	    }
	}
 void calculate_outputm2(int input) {
    if(((input == 3) && (cf==1))) {
    	cf = 0;
    	a28 = (a193 + 9);
    	a180 = (a193 + 9);
    	a182 = (a188 + -10);
    	 printf("%d\n", 21); //fflush(stdout);
    }
    if(((cf==1) && (input == 4))) {
	if((a51 - 20) < a51){
	a51  -=  4 ;}
	 else{	
	a51  -=  0;}
	if((a125 + 20) > a125){
	a125  +=  2 ;}
	 else{	
	a125  +=  0;}
	if((a128 - 20) < a128){
	a128  -=  4 ;}
	 else{	
	a128  -=  0;}
	if((a102 + 20) > a102){
	a102  +=  1 ;}
	 else{	
	a102  +=  0;}
	if((a68 - 20) < a68){
	a68  -=  2 ;}
	 else{	
	a68  -=  0;}
	if((a93 + 20) > a93){
	a93  +=  2 ;}
	 else{	
	a93  +=  0;}
	if((a30 - 20) < a30){
	a30  -=  4 ;}
	 else{	
	a30  -=  0;}
    	cf = 0;
    	a28 = ((a188 + a188) + -16);
    	a159 = (a188 - 2);
    	a138 = ((a159 / a28) - -9);
    	 printf("%d\n", 24); //fflush(stdout);
    }
    if(((input == 1) && (cf==1))) {
    	cf = 0;
    	a28 = (a188 + -5);
    	update(a188, a193, -3);
    	a38 = (getInt() - -8);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if(((cf==1) && (input == 5))) {
	if((a112 + 20) > a112){
	a112  +=  1 ;}
	 else{	
	a112  +=  0;}
	if((a21 - 20) < a21){
	a21  -=  4 ;}
	 else{	
	a21  -=  0;}
	if((a72 - 20) < a72){
	a72  -=  4 ;}
	 else{	
	a72  -=  0;}
	if((a116 + 20) > a116){
	a116  +=  1 ;}
	 else{	
	a116  +=  0;}
	if((a177 - 20) < a177){
	a177  -=  4 ;}
	 else{	
	a177  -=  0;}
	if((a157 + 20) > a157){
	a157  +=  1 ;}
	 else{	
	a157  +=  0;}
	if((a110 + 20) > a110){
	a110  +=  4 ;}
	 else{	
	a110  +=  0;}
    	cf = 0;
    	a122 = (a28 + -2);
    	a49 = (a28 - -1);
    	a28 = ((a188 * a122) - 20);
    	 printf("%d\n", 25); //fflush(stdout);
    }
}
 void calculate_outputm1(int input) {
    if(((a188==13) && (cf==1))) {
    	calculate_outputm2(input);
    }
}
 void calculate_outputm4(int input) {
    if((((cf==1) && (input == 4)) && a16 <= -22)) {
    	cf = 0;
    	a28 = ((a193 * a89) + -9);
    	a23 = (a193 + 6);
    	a92 = ((a193 - a28) + 12);
    	 printf("%d\n", 20); //fflush(stdout);
    }
    if(((cf==1) && (input == 5))) {
    	cf = 0;
    	a159 = ((a28 + a89) + -6);
    	a80 = (a28 - -4);
    	a28 = ((a159 / a80) + 10);
    	 printf("%d\n", 20); //fflush(stdout);
    }
    if((((cf==1) && (input == 1)) && a191 == 7440)) {
    	cf = 0;
    	update(a28, 0, 5);
    	a111 = (a193 + 8);
    	a28 = (a89 + 2);
    	 printf("%d\n", 22); //fflush(stdout);
    }
    if((((cf==1) && (input == 3)) && a199 == 680)) {
    	cf = 0;
    	a11 = (a89 - -5);
    	a150 = (a89 + 2);
    	a28 = (a193 - -2);
    	 printf("%d\n", 24); //fflush(stdout);
    }
    if(((cf==1) && (input == 2))) {
    	cf = 0;
    	a182 = (a89 - -2);
    	a50 = (a28 - 2);
    	a28 = (a50 + 9);
    	 printf("%d\n", 25); //fflush(stdout);
    }
}
 void calculate_outputm3(int input) {
    if(((cf==1) && (a89==6))) {
    	calculate_outputm4(input);
    }
}
 void calculate_outputm6(int input) {
    if((((cf==1) && (input == 4)) && a125 == 7256)) {
    	cf = 0;
    	a122 = (a153 + -7);
    	a44 = ((a153 - a28) - -1);
    	a28 = (a153 - 4);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if((((cf==1) && (input == 2)) && a21 <= -28)) {
    	cf = 0;
    	a159 = (a153 - 6);
    	a80 = ((a153 / a159) - -1);
    	a28 = (a11 - -6);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if(((input == 5) && (cf==1))) {
    	cf = 0;
    	a193 = ((a153 / a153) - -2);
    	a89 = ((a193 / a11) - -5);
    	a28 = (a153 + -6);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if(((cf==1) && (input == 3))) {
    	cf = 0;
    	a122 = (a11 + 1);
    	a176 = ((a153 - a11) + -1);
    	a28 = (a176 + 1);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if(((input == 1) && (cf==1))) {
    	cf = 0;
    	a11 = (a153 - 5);
    	a92 = ((a28 * a11) - 12);
    	 printf("%d\n", 25); //fflush(stdout);
    }
}
 void calculate_outputm5(int input) {
    if(((a153==10) && (cf==1))) {
    	calculate_outputm6(input);
    }
}
 void calculate_outputm8(int input) {
    if((((cf==1) && (input == 2)) && a110 == 9480)) {
    	cf = 0;
    	a182 = a11;
    	a108 = (a92 + -3);
    	a28 = ((a108 * a182) + -39);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if(((cf==1) && (input == 5))) {
    	cf = 0;
    	a11 = (a92 - 9);
    	a153 = (a28 + 5);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if((((cf==1) && (input == 3)) && a30 <= -37)) {
    	cf = 0;
    	a134 = (a92 + -2);
    	a11 = (a28 - -3);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if(((cf==1) && (input == 1))) {
    	cf = 0;
    	a5 = ((a28 + a28) + -5);
    	a49 = (a92 - 5);
    	a28 = (a5 - -2);
    	 printf("%d\n", 25); //fflush(stdout);
    }
}
 void calculate_outputm7(int input) {
    if(((cf==1) && (a92==13))) {
    	calculate_outputm8(input);
    }
}
 void calculate_outputm10(int input) {
    if((((input == 4) && (cf==1)) && a68 <= -41)) {
    	cf = 0;
    	a28 = (a122 - -9);
    	a182 = (a28 + -9);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if(((input == 5) && (cf==1))) {
    	cf = 0;
    	a188 = ((a49 - a28) - -14);
    	a193 = ((a28 - a122) + -2);
    	a28 = (a188 - 9);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if(((cf==1) && (input == 3))) {
    	cf = 0;
    	a5 = (a28 + -1);
    	a28 = ((a122 + a122) - -3);
    	a49 = (a5 - -3);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if((((cf==1) && (input == 1)) && a177 <= -25)) {
    	cf = 0;
    	a193 = (a122 - -3);
    	a84 = (a49 + 10);
    	a28 = (a193 + -1);
    	 printf("%d\n", 20); //fflush(stdout);
    }
}
 void calculate_outputm9(int input) {
    if(((cf==1) && (a49==5))) {
    	calculate_outputm10(input);
    }
}
 void calculate_outputm12(int input) {
    if((((input == 1) && (cf==1)) && a157 >= 36)) {
    	cf = 0;
    	a159 = (a122 + 4);
    	a28 = (a122 + a176);
    	a185 = ((a176 - a28) - -8);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if((((cf==1) && (input == 2)) && a93 == 1634)) {
    	cf = 0;
    	a84 = (a176 - -8);
    	a28 = (a84 - 9);
    	a193 = ((a122 / a176) + 4);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if(((input == 4) && (cf==1))) {
    	cf = 0;

    	 printf("%d\n", 26); //fflush(stdout);
    }
}
 void calculate_outputm11(int input) {
    if(((cf==1) && (a176==5))) {
    	calculate_outputm12(input);
    }
}
 void calculate_outputm14(int input) {
    if(((input == 4) && (cf==1))) {
    	cf = 0;
    	a11 = (a5 + -1);
    	a28 = (a11 + 1);
    	a153 = (a49 - -2);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if((((cf==1) && (input == 3)) && a51 <= -23)) {
    	cf = 0;
    	a80 = (a28 - -3);
    	a159 = (a28 - 3);
    	a28 = a80;
    	 printf("%d\n", 20); //fflush(stdout);
    }
    if((((input == 5) && (cf==1)) && a112 >= 33)) {
    	cf = 0;
    	a28 = ((a49 - a5) - -8);
    	a182 = (a28 + -4);
    	a114 = (a182 - -6);
    	 printf("%d\n", 21); //fflush(stdout);
    }
    if(((input == 1) && (cf==1))) {
    	cf = 0;
    	a188 = (a5 - -8);
    	a193 = (a5 + -3);
    	a28 = (a188 - 9);
    	 printf("%d\n", 25); //fflush(stdout);
    }
}
 void calculate_outputm13(int input) {
    if(((a49==8) && (cf==1))) {
    	calculate_outputm14(input);
    }
}
 void calculate_outputm16(int input) {
    if((((input == 3) && (cf==1)) && a160 == 320)) {
    	cf = 0;
    	a122 = ((a111 * getInt()) + -80);
    	a28 = (getInt() - -2);
    	a182 = (a28 + -9);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if((((cf==1) && (input == 1)) && a197 >= 36)) {
    	cf = 0;
    	a90 = (a111 - -1);
    	update(a111, a111, 11);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if(((input == 5) && (cf==1))) {
	if((a16 - 20) < a16){
	a16  -=  2 ;}
	 else{	
	a16  -=  0;}
	if((a197 + 20) > a197){
	a197  +=  2 ;}
	 else{	
	a197  +=  0;}
	if((a198 - 20) < a198){
	a198  -=  2 ;}
	 else{	
	a198  -=  0;}
    	cf = 0;
    	a28 = (getInt() + 1);
    	a159 = (a28 + -3);
    	a92 = (a159 - -1);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if(((cf==1) && (input == 4))) {
    	cf = 0;

    	 printf("%d\n", 25); //fflush(stdout);
    }
    if((((input == 2) && (cf==1)) && a98 == 4092)) {
    	cf = 0;
    	a164 = ((getInt() / a28) - -9);
    	a5 = ((a28 - a164) - -12);
    	a28 = (a5 + -3);
    	 printf("%d\n", 24); //fflush(stdout);
    }
}
 void calculate_outputm15(int input) {
    if(((a111==9) && (cf==1))) {
    	calculate_outputm16(input);
    }
}
 void calculate_outputm18(int input) {
    if(((cf==1) && (input == 2))) {
    	cf = 0;
    	a159 = a90;
    	a28 = (getInt() - 1);
    	a92 = ((a28 / a159) - -7);
    	 printf("%d\n", 22); //fflush(stdout);
    }
    if(((input == 3) && (cf==1))) {
    	cf = 0;
    	a5 = (getInt() - 6);
    	a49 = (a5 + 3);
    	a28 = (getInt() - 4);
    	 printf("%d\n", 21); //fflush(stdout);
    }
}
 void calculate_outputm17(int input) {
    if(((cf==1) && (a90==7))) {
    	calculate_outputm18(input);
    }
}
 void calculate_outputm20(int input) {
    if(((input == 1) && (cf==1))) {
	if((a32 + 20) > a32){
	a32  +=  6 ;}
	 else{	
	a32  +=  0;}
    	cf = 0;
    	a23 = (a4 - -2);
    	update(a23 * a4, 186, 0);
    	 printf("%d\n", 24); //fflush(stdout);
    }
    if(((input == 3) && (cf==1))) {
    	cf = 0;
    	a5 = (a23 + -4);
    	a140 = ((a23 + a5) + -10);
    	a28 = (a23 - 4);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if(((input == 4) && (cf==1))) {
	if((a40 + 20) > a40){
	a40  +=  2 ;}
	 else{	
	a40  +=  0;}
	if((a24 - 20) < a24){
	a24  -=  4 ;}
	 else{	
	a24  -=  0;}
    	cf = 0;
    	a28 = (a4 + -5);
    	update(a23, 2, 0);
    	a111 = ((a23 + getInt()) + -11);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if(((cf==1) && (input == 5))) {
	if((a199 + 20) > a199){
	a199  +=  4 ;}
	 else{	
	a199  +=  0;}
	if((a18 - 20) < a18){
	a18  -=  4 ;}
	 else{	
	a18  -=  0;}
    	cf = 0;
    	a182 = ((a23 - a4) + 6);
    	a28 = ((a182 + a182) + 3);
    	a180 = (a182 + 7);
    	 printf("%d\n", 22); //fflush(stdout);
    }
}
 void calculate_outputm19(int input) {
    if(((a4==13) && (cf==1))) {
    	calculate_outputm20(input);
    }
}
 void calculate_outputm22(int input) {
    if(((input == 4) && (cf==1))) {
	if((a160 + 20) > a160){
	a160  +=  4 ;}
	 else{	
	a160  +=  0;}
	if((a8 + 20) > a8){
	a8  +=  4 ;}
	 else{	
	a8  +=  0;}
	if((a86 + 20) > a86){
	a86  +=  6 ;}
	 else{	
	a86  +=  0;}
    	cf = 0;
    	a159 = (getInt() - 2);
    	a92 = (a28 - 1);
    	a28 = (a23 + -5);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if((((cf==1) && (input == 2)) && a86 == 6328)) {
    	cf = 0;
    	a134 = (a23 + -6);
    	a11 = (getInt() - 1);
    	a28 = (a23 - 10);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if((((input == 3) && (cf==1)) && a24 <= -26)) {
    	cf = 0;
    	a137 = (getInt() - 1);
    	a28 = (a137 + 2);
    	a159 = 6;
    	 printf("%d\n", 22); //fflush(stdout);
    }
    if((((input == 5) && (cf==1)) && a26 == 1498)) {
    	cf = 0;
    	a23 = (getInt() + 4);
    	a122 = (a28 + -1);
    	 printf("%d\n", 26); //fflush(stdout);
    }
}
 void calculate_outputm21(int input) {
    if(((check1(9)) && (cf==1))) {
    	calculate_outputm22(input);
    }
}
 void calculate_outputm24(int input) {
    if((((cf==1) && (input == 3)) && a58 >= 28)) {
    	cf = 0;
    	a14 = (a80 - 4);
    	a193 = (a159 - -2);
    	a28 = (a193 - 2);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if((((cf==1) && (input == 1)) && a129 == 2418)) {
    	cf = 0;
    	a28 = ((a80 - a159) + 1);
    	a11 = (a28 + 5);
    	a13 = a159;
    	 printf("%d\n", 20); //fflush(stdout);
    }
    if(((input == 5) && (cf==1))) {
    	cf = 0;
    	a193 = ((a80 - a159) - 1);
    	a89 = (a80 + -2);
    	a28 = ((a193 + a89) + -5);
    	 printf("%d\n", 20); //fflush(stdout);
    }
    if((((cf==1) && (input == 2)) && a165 <= -24)) {
    	cf = 0;
    	a5 = (a80 + 3);
    	a94 = (a159 - -11);
    	a28 = (a94 - 8);
    	 printf("%d\n", 25); //fflush(stdout);
    }
}
 void calculate_outputm23(int input) {
    if(((cf==1) && (a80==8))) {
    	calculate_outputm24(input);
    }
}
 void calculate_outputm26(int input) {
    if(((cf==1) && (input == 2))) {
	if((a191 + 20) > a191){
	a191  +=  6 ;}
	 else{	
	a191  +=  0;}
	if((a26 + 20) > a26){
	a26  +=  2 ;}
	 else{	
	a26  +=  0;}
	if((a144 + 20) > a144){
	a144  +=  2 ;}
	 else{	
	a144  +=  0;}
	if((a129 + 20) > a129){
	a129  +=  4 ;}
	 else{	
	a129  +=  0;}
	if((a165 - 20) < a165){
	a165  -=  4 ;}
	 else{	
	a165  -=  0;}
    	cf = 0;
    	a4 = (a159 - -6);
    	a23 = (a28 + 1);
    	a28 = (a4 - 4);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if(((cf==1) && (input == 1))) {
    	cf = 0;
    	a89 = (a28 - 4);
    	a193 = (a92 - 5);
    	a28 = ((a159 + a193) - 6);
    	 printf("%d\n", 22); //fflush(stdout);
    }
}
 void calculate_outputm25(int input) {
    if(((cf==1) && (a92==8))) {
    	calculate_outputm26(input);
    }
}
 void calculate_outputm28(int input) {
    if((((cf==1) && (input == 2)) && a102 >= 24)) {
    	cf = 0;
    	a122 = (a28 + -9);
    	a57 = (a159 - 8);
    	a28 = (a122 - -5);
    	 printf("%d\n", 22); //fflush(stdout);
    }
    if(((cf==1) && (input == 4))) {
    	cf = 0;
    	a188 = ((a28 / a159) + 13);
    	a193 = (a138 + -8);
    	a28 = ((a193 + a138) + -8);
    	 printf("%d\n", 24); //fflush(stdout);
    }
    if(((input == 5) && (cf==1))) {
    	cf = 0;
    	a5 = (a138 - 5);
    	a28 = (a159 + -4);
    	a49 = (a5 - -3);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if(((cf==1) && (input == 1))) {
    	cf = 0;

    	 printf("%d\n", 24); //fflush(stdout);
    }
    if((((input == 3) && (cf==1)) && a116 >= 24)) {
    	cf = 0;
    	update(a28, -a28, -13);
    	a23 = (a138 + 5);
    	a28 = (a138 - 1);
    	 printf("%d\n", 25); //fflush(stdout);
    }
}
 void calculate_outputm27(int input) {
    if(((a138==10) && (cf==1))) {
    	calculate_outputm28(input);
    }
}
 void calculate_outputm30(int input) {
    if((((input == 2) && (cf==1)) && a72 <= -48)) {
    	cf = 0;
    	a11 = (a180 + -6);
    	a92 = (a28 - 1);
    	a28 = a11;
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if((((input == 1) && (cf==1)) && a128 <= -37)) {
    	cf = 0;
    	a153 = (a180 - 6);
    	a28 = a153;
    	a11 = (a153 - 1);
    	 printf("%d\n", 25); //fflush(stdout);
    }
    if(((cf==1) && (input == 4))) {
    	cf = 0;

    	 printf("%d\n", 26); //fflush(stdout);
    }
    if(((cf==1) && (input == 3))) {
    	cf = 0;

    	 printf("%d\n", 24); //fflush(stdout);
    }
}
 void calculate_outputm29(int input) {
    if(((cf==1) && (a180==11))) {
    	calculate_outputm30(input);
    }
}
 void calculate_outputm32(int input) {
    if((((input == 4) && (cf==1)) && a40 == 6914)) {
    	cf = 0;
    	a182 = (a28 - 3);
    	a50 = (a180 + -10);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if(((input == 3) && (cf==1))) {
	if((a98 + 20) > a98){
	a98  +=  2 ;}
	 else{	
	a98  +=  0;}
	if((a58 + 20) > a58){
	a58  +=  1 ;}
	 else{	
	a58  +=  0;}
    	cf = 0;
    	a28 = (a180 + -1);
    	a92 = (a182 - -4);
    	a159 = (a28 + -3);
    	 printf("%d\n", 26); //fflush(stdout);
    }
    if((((cf==1) && (input == 1)) && a18 <= -32)) {
    	cf = 0;
    	a28 = ((a180 - a182) - -1);
    	update(a28, -a182, -4);
    	a38 = ((a182 - a182) - -13);
    	 printf("%d\n", 23); //fflush(stdout);
    }
    if((((input == 2) && (cf==1)) && a8 == 5602)) {
    	cf = 0;
    	a159 = (a180 + -5);
    	a137 = ((a182 - a159) - -14);
    	a28 = (a137 - 2);
    	 printf("%d\n", 23); //fflush(stdout);
    }
}
 void calculate_outputm31(int input) {
    if(((a180==11) && (cf==1))) {
    	calculate_outputm32(input);
    }
}
 void calculate_outputm34(int input) {
    if((((cf==1) && (input == 4)) && a32 == 642)) {
    	cf = 0;
    	a28 = (a182 - 3);
    	a11 = ((a50 + a28) - -3);
    	a13 = (a11 + -2);
    	 printf("%d\n", 21); //fflush(stdout);
    }
    if((((input == 3) && (cf==1)) && a144 == 8684)) {
    	cf = 0;
    	a11 = (a50 + 6);
    	a28 = ((a182 - a182) + 5);
    	a134 = ((a11 - a50) + 4);
    	 printf("%d\n", 22); //fflush(stdout);
    }
    if((((cf==1) && (input == 2)) && a198 <= -40)) {
    	cf = 0;
    	a11 = (a182 - -2);
    	a13 = ((a182 / a11) - -5);
    	a28 = (a11 + -5);
    	 printf("%d\n", 21); //fflush(stdout);
    }
    if(((input == 1) && (cf==1))) {
    	cf = 0;

    	 printf("%d\n", 20); //fflush(stdout);
    }
    if(((input == 5) && (cf==1))) {
    	cf = 0;

    	 printf("%d\n", 24); //fflush(stdout);
    }
}
 void calculate_outputm33(int input) {
    if(((a50==2) && (cf==1))) {
    	calculate_outputm34(input);
    }
}

 void calculate_output(int input) {
        cf = 1;

    if(((cf==1) && (a28==4))) {
    	if(((cf==1) && (a193==2))) {
    		calculate_outputm1(input);
    	}
    	if(((a193==3) && (cf==1))) {
    		calculate_outputm3(input);
    	}
    }
    if(((a28==5) && (cf==1))) {
    	if(((cf==1) && (a11==4))) {
    		calculate_outputm5(input);
    	}
    	if(((cf==1) && (a11==5))) {
    		calculate_outputm7(input);
    	}
    }
    if(((a28==6) && (cf==1))) {
    	if(((a122==2) && (cf==1))) {
    		calculate_outputm9(input);
    	}
    	if(((cf==1) && (a122==5))) {
    		calculate_outputm11(input);
    	}
    }
    if(((cf==1) && (a28==7))) {
    	if(((a5==5) && (cf==1))) {
    		calculate_outputm13(input);
    	}
    }
    if(((a28==8) && (cf==1))) {
    	if(((check1(9)) && (cf==1))) {
    		calculate_outputm15(input);
    	}
    	if(((check1(11)) && (cf==1))) {
    		calculate_outputm17(input);
    	}
    }
    if(((a28==9) && (cf==1))) {
    	if(((a23==11) && (cf==1))) {
    		calculate_outputm19(input);
    	}
    	if(((a23==15) && (cf==1))) {
    		calculate_outputm21(input);
    	}
    }
    if(((a28==10) && (cf==1))) {
    	if(((a159==4) && (cf==1))) {
    		calculate_outputm23(input);
    	}
    	if(((cf==1) && (a159==7))) {
    		calculate_outputm25(input);
    	}
    	if(((a159==11) && (cf==1))) {
    		calculate_outputm27(input);
    	}
    }
    if(((cf==1) && (a28==11))) {
    	if(((a182==3) && (cf==1))) {
    		calculate_outputm29(input);
    	}
    	if(((cf==1) && (a182==4))) {
    		calculate_outputm31(input);
    	}
    	if(((a182==8) && (cf==1))) {
    		calculate_outputm33(input);
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


