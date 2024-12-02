  #include<stdio.h>
  #ifdef LLBMC
  #include <llbmc.h>
  #else
  //removed
  #endif
  
  #define BOUND 2 //BOUND 1000
  int kappa;
  int input,output;
  #include <assert.h>
  #include <math.h>
  #include <stdlib.h>
  // inputs
  int inputs[] = {5,1,2,3,4};
  
  int a188 = 1;
  int cf = 1;
  int a70 = 9;
  int a109 = 13;
  int a131 = 10;
  int a191 = 9;
  int a168 = 9;
  int a130 = 6;
  int a57 = 11;
  int a13 = 4;
  int a93 = 11;
  int a104 = 1;
  int a60 = 1;
  int a51 = 11;
  int a133 = 3;
  int a100 = 5;
  int a182 = 7;
  int a147 = 15;
  int a24 = 7;
  int a134 = 8;
  int a110 = 11;
  int a198 = 4;
  int a43 = 5;
  int a183 = 5;
  int a32 = 2;
  int a112 = 7;
  int a192 = 9;
  int a8 = 7;
  int a164 = 14;
  int a59 = 2;
  int a86 = 8;
  int a143 = 7;
  int a177 = 10;
  int a99 = 11;
  int a41 = 10;
  int a158 = 6;
  int a129 = 8;
  int a138 = 9;
  int a48 = 4;
  int a162 = 8;
  int a118 = 9;
  int a76 = 3;
  int a11 = 2;
  int a200 = 8;
  int a153 = 11;
  int a146 = 4;
  int a35 = 4;
  
  
  void errorCheck() {
printf("POINT: 1\n");

  if((((a112==13) && (a86==6)) && (a162==12))){
printf("POINT: 2\n");
  cf = (0);
  //error_0: assert(!//error_0);
  }
printf("POINT: 3\n");

  if((((a99==9) && (a57==7)) && (a162==9))){
printf("POINT: 4\n");
  cf = (0);
  //error_1: assert(!//error_1);
  }
printf("POINT: 5\n");

  if((((a146==3) && (a86==10)) && (a162==12))){
printf("POINT: 6\n");
  cf = (0);
  //error_2: assert(!//error_2);
  }
printf("POINT: 7\n");

  if((((a32==6) && (a177==7)) && (a162==10))){
printf("POINT: 8\n");
  cf = (0);
  //error_3: assert(!//error_3);
  }
printf("POINT: 9\n");

  if((((a188==1) && (a177==5)) && (a162==10))){
printf("POINT: 10\n");
  cf = (0);
  //error_4: assert(!//error_4);
  }
printf("POINT: 11\n");

  if((((a11==5) && (a32==3)) && (a162==7))){
printf("POINT: 12\n");
  cf = (0);
  //error_5: assert(!//error_5);
  }
printf("POINT: 13\n");

  if((((a112==9) && (a32==6)) && (a162==7))){
printf("POINT: 14\n");
  cf = (0);
  //error_6: assert(!//error_6);
  }
printf("POINT: 15\n");

  if((((a13==4) && (a32==5)) && (a162==7))){
printf("POINT: 16\n");
  cf = (0);
  //error_7: assert(!//error_7);
  }
printf("POINT: 17\n");

  if((((a153==12) && (a138==7)) && (a162==13))){
printf("POINT: 18\n");
  cf = (0);
  //error_8: assert(!//error_8);
  }
printf("POINT: 19\n");

  if((((a35==8) && (a183==3)) && (a162==14))){
printf("POINT: 20\n");
  cf = (0);
  //error_9: assert(!//error_9);
  }
printf("POINT: 21\n");

  if((((a11==4) && (a59==9)) && (a162==8))){
printf("POINT: 22\n");
  cf = (0);
  //error_10: assert(!//error_10);
  }
printf("POINT: 23\n");

  if((((a146==9) && (a86==10)) && (a162==12))){
printf("POINT: 24\n");
  cf = (0);
  //error_11: assert(!//error_11);
  }
printf("POINT: 25\n");

  if((((a164==11) && (a138==5)) && (a162==13))){
printf("POINT: 26\n");
  cf = (0);
  //error_12: assert(!//error_12);
  }
printf("POINT: 27\n");

  if((((a146==5) && (a57==11)) && (a162==9))){
printf("POINT: 28\n");
  cf = (0);
  //error_13: assert(!//error_13);
  }
printf("POINT: 29\n");

  if((((a188==3) && (a177==5)) && (a162==10))){
printf("POINT: 30\n");
  cf = (0);
  //error_14: assert(!//error_14);
  }
printf("POINT: 31\n");

  if((((a112==7) && (a32==6)) && (a162==7))){
printf("POINT: 32\n");
  cf = (0);
  //error_15: assert(!//error_15);
  }
printf("POINT: 33\n");

  if((((a99==10) && (a57==7)) && (a162==9))){
printf("POINT: 34\n");
  cf = (0);
  //error_16: assert(!//error_16);
  }
printf("POINT: 35\n");

  if((((a133==5) && (a177==12)) && (a162==10))){
printf("POINT: 36\n");
  cf = (0);
  //error_17: assert(!//error_17);
  }
printf("POINT: 37\n");

  if((((a11==3) && (a59==9)) && (a162==8))){
printf("POINT: 38\n");
  cf = (0);
  //error_18: assert(!//error_18);
  }
printf("POINT: 39\n");

  if((((a188==2) && (a177==5)) && (a162==10))){
printf("POINT: 40\n");
  cf = (0);
  //error_19: assert(!//error_19);
  }
printf("POINT: 41\n");

  if((((a112==12) && (a183==2)) && (a162==14))){
printf("POINT: 42\n");
  cf = (0);
  //error_20: assert(!//error_20);
  }
printf("POINT: 43\n");

  if((((a153==9) && (a138==7)) && (a162==13))){
printf("POINT: 44\n");
  cf = (0);
  //error_21: assert(!//error_21);
  }
printf("POINT: 45\n");

  if((((a147==13) && (a86==11)) && (a162==12))){
printf("POINT: 46\n");
  cf = (0);
  //error_22: assert(!//error_22);
  }
printf("POINT: 47\n");

  if((((a48==1) && (a59==2)) && (a162==8))){
printf("POINT: 48\n");
  cf = (0);
  //error_23: assert(!//error_23);
  }
printf("POINT: 49\n");

  if((((a138==4) && (a32==2)) && (a162==7))){
printf("POINT: 50\n");
  cf = (0);
  //error_24: assert(!//error_24);
  }
printf("POINT: 51\n");

  if((((a13==1) && (a32==5)) && (a162==7))){
printf("POINT: 52\n");
  cf = (0);
  //error_25: assert(!//error_25);
  }
printf("POINT: 53\n");

  if((((a129==4) && (a86==4)) && (a162==12))){
printf("POINT: 54\n");
  cf = (0);
  //error_26: assert(!//error_26);
  }
printf("POINT: 55\n");

  if((((a158==7) && (a76==5)) && (a162==11))){
printf("POINT: 56\n");
  cf = (0);
  //error_27: assert(!//error_27);
  }
printf("POINT: 57\n");

  if((((a35==7) && (a76==0)) && (a162==11))){
printf("POINT: 58\n");
  cf = (0);
  //error_28: assert(!//error_28);
  }
printf("POINT: 59\n");

  if((((a158==2) && (a183==1)) && (a162==14))){
printf("POINT: 60\n");
  cf = (0);
  //error_29: assert(!//error_29);
  }
printf("POINT: 61\n");

  if((((a182==5) && (a177==6)) && (a162==10))){
printf("POINT: 62\n");
  cf = (0);
  //error_30: assert(!//error_30);
  }
printf("POINT: 63\n");

  if((((a51==5) && (a76==6)) && (a162==11))){
printf("POINT: 64\n");
  cf = (0);
  //error_31: assert(!//error_31);
  }
printf("POINT: 65\n");

  if((((a100==10) && (a32==7)) && (a162==7))){
printf("POINT: 66\n");
  cf = (0);
  //error_32: assert(!//error_32);
  }
printf("POINT: 67\n");

  if((((a43==1) && (a138==8)) && (a162==13))){
printf("POINT: 68\n");
  cf = (0);
  //error_33: assert(!//error_33);
  }
printf("POINT: 69\n");

  if((((a35==8) && (a76==0)) && (a162==11))){
printf("POINT: 70\n");
  cf = (0);
  //error_34: assert(!//error_34);
  }
printf("POINT: 71\n");

  if((((a131==9) && (a86==8)) && (a162==12))){
printf("POINT: 72\n");
  cf = (0);
  //error_35: assert(!//error_35);
  }
printf("POINT: 73\n");

  if((((a11==8) && (a32==3)) && (a162==7))){
printf("POINT: 74\n");
  cf = (0);
  //error_36: assert(!//error_36);
  }
printf("POINT: 75\n");

  if((((a138==3) && (a59==6)) && (a162==8))){
printf("POINT: 76\n");
  cf = (0);
  //error_37: assert(!//error_37);
  }
printf("POINT: 77\n");

  if((((a43==4) && (a138==8)) && (a162==13))){
printf("POINT: 78\n");
  cf = (0);
  //error_38: assert(!//error_38);
  }
printf("POINT: 79\n");

  if((((a133==2) && (a177==12)) && (a162==10))){
printf("POINT: 80\n");
  cf = (0);
  //error_39: assert(!//error_39);
  }
printf("POINT: 81\n");

  if((((a131==9) && (a59==5)) && (a162==8))){
printf("POINT: 82\n");
  cf = (0);
  //error_40: assert(!//error_40);
  }
printf("POINT: 83\n");

  if((((a104==8) && (a59==3)) && (a162==8))){
printf("POINT: 84\n");
  cf = (0);
  //error_41: assert(!//error_41);
  }
printf("POINT: 85\n");

  if((((a48==2) && (a59==2)) && (a162==8))){
printf("POINT: 86\n");
  cf = (0);
  //error_42: assert(!//error_42);
  }
printf("POINT: 87\n");

  if((((a200==6) && (a177==10)) && (a162==10))){
printf("POINT: 88\n");
  cf = (0);
  //error_43: assert(!//error_43);
  }
printf("POINT: 89\n");

  if((((a110==11) && (a183==6)) && (a162==14))){
printf("POINT: 90\n");
  cf = (0);
  //error_44: assert(!//error_44);
  }
printf("POINT: 91\n");

  if((((a24==4) && (a177==8)) && (a162==10))){
printf("POINT: 92\n");
  cf = (0);
  //error_45: assert(!//error_45);
  }
printf("POINT: 93\n");

  if((((a200==7) && (a59==4)) && (a162==8))){
printf("POINT: 94\n");
  cf = (0);
  //error_46: assert(!//error_46);
  }
printf("POINT: 95\n");

  if((((a93==7) && (a177==9)) && (a162==10))){
printf("POINT: 96\n");
  cf = (0);
  //error_47: assert(!//error_47);
  }
printf("POINT: 97\n");

  if((((a133==7) && (a86==7)) && (a162==12))){
printf("POINT: 98\n");
  cf = (0);
  //error_48: assert(!//error_48);
  }
printf("POINT: 99\n");

  if((((a133==3) && (a177==12)) && (a162==10))){
printf("POINT: 100\n");
  cf = (0);
  //error_49: assert(!//error_49);
  }
printf("POINT: 101\n");

  if((((a48==0) && (a59==2)) && (a162==8))){
printf("POINT: 102\n");
  cf = (0);
  //error_50: assert(!//error_50);
  }
printf("POINT: 103\n");

  if((((a147==14) && (a86==11)) && (a162==12))){
printf("POINT: 104\n");
  cf = (0);
  //error_51: assert(!//error_51);
  }
printf("POINT: 105\n");

  if((((a104==5) && (a59==3)) && (a162==8))){
printf("POINT: 106\n");
  cf = (0);
  //error_52: assert(!//error_52);
  }
printf("POINT: 107\n");

  if((((a198==7) && (a57==6)) && (a162==9))){
printf("POINT: 108\n");
  cf = (0);
  //error_53: assert(!//error_53);
  }
printf("POINT: 109\n");

  if((((a118==7) && (a138==9)) && (a162==13))){
printf("POINT: 110\n");
  cf = (0);
  //error_54: assert(!//error_54);
  }
printf("POINT: 111\n");

  if((((a131==6) && (a59==5)) && (a162==8))){
printf("POINT: 112\n");
  cf = (0);
  //error_55: assert(!//error_55);
  }
printf("POINT: 113\n");

  if((((a118==3) && (a138==9)) && (a162==13))){
printf("POINT: 114\n");
  cf = (0);
  //error_56: assert(!//error_56);
  }
printf("POINT: 115\n");

  if((((a24==1) && (a177==8)) && (a162==10))){
printf("POINT: 116\n");
  cf = (0);
  //error_57: assert(!//error_57);
  }
printf("POINT: 117\n");

  if((((a60==5) && (a32==8)) && (a162==7))){
printf("POINT: 118\n");
  cf = (0);
  //error_58: assert(!//error_58);
  }
printf("POINT: 119\n");

  if((((a200==9) && (a177==10)) && (a162==10))){
printf("POINT: 120\n");
  cf = (0);
  //error_59: assert(!//error_59);
  }
printf("POINT: 121\n");

  if((((a138==5) && (a59==6)) && (a162==8))){
printf("POINT: 122\n");
  cf = (0);
  //error_60: assert(!//error_60);
  }
printf("POINT: 123\n");

  if((((a147==15) && (a86==11)) && (a162==12))){
printf("POINT: 124\n");
  cf = (0);
  //error_61: assert(!//error_61);
  }
printf("POINT: 125\n");

  if((((a112==6) && (a86==6)) && (a162==12))){
printf("POINT: 126\n");
  cf = (0);
  //error_62: assert(!//error_62);
  }
printf("POINT: 127\n");

  if((((a11==6) && (a32==3)) && (a162==7))){
printf("POINT: 128\n");
  cf = (0);
  //error_63: assert(!//error_63);
  }
printf("POINT: 129\n");

  if((((a112==6) && (a183==2)) && (a162==14))){
printf("POINT: 130\n");
  cf = (0);
  //error_64: assert(!//error_64);
  }
printf("POINT: 131\n");

  if((((a99==6) && (a57==7)) && (a162==9))){
printf("POINT: 132\n");
  cf = (0);
  //error_65: assert(!//error_65);
  }
printf("POINT: 133\n");

  if((((a192==4) && (a59==7)) && (a162==8))){
printf("POINT: 134\n");
  cf = (0);
  //error_66: assert(!//error_66);
  }
printf("POINT: 135\n");

  if((((a51==4) && (a86==5)) && (a162==12))){
printf("POINT: 136\n");
  cf = (0);
  //error_67: assert(!//error_67);
  }
printf("POINT: 137\n");

  if((((a200==2) && (a59==4)) && (a162==8))){
printf("POINT: 138\n");
  cf = (0);
  //error_68: assert(!//error_68);
  }
printf("POINT: 139\n");

  if((((a138==7) && (a59==6)) && (a162==8))){
printf("POINT: 140\n");
  cf = (0);
  //error_69: assert(!//error_69);
  }
printf("POINT: 141\n");

  if((((a99==11) && (a57==7)) && (a162==9))){
printf("POINT: 142\n");
  cf = (0);
  //error_70: assert(!//error_70);
  }
printf("POINT: 143\n");

  if((((a8==4) && (a138==6)) && (a162==13))){
printf("POINT: 144\n");
  cf = (0);
  //error_71: assert(!//error_71);
  }
printf("POINT: 145\n");

  if((((a41==12) && (a138==4)) && (a162==13))){
printf("POINT: 146\n");
  cf = (0);
  //error_72: assert(!//error_72);
  }
printf("POINT: 147\n");

  if((((a99==6) && (a76==4)) && (a162==11))){
printf("POINT: 148\n");
  cf = (0);
  //error_73: assert(!//error_73);
  }
printf("POINT: 149\n");

  if((((a168==11) && (a183==0)) && (a162==14))){
printf("POINT: 150\n");
  cf = (0);
  //error_74: assert(!//error_74);
  }
printf("POINT: 151\n");

  if((((a32==4) && (a177==7)) && (a162==10))){
printf("POINT: 152\n");
  cf = (0);
  //error_75: assert(!//error_75);
  }
printf("POINT: 153\n");

  if((((a112==8) && (a183==2)) && (a162==14))){
printf("POINT: 154\n");
  cf = (0);
  //error_76: assert(!//error_76);
  }
printf("POINT: 155\n");

  if((((a146==4) && (a86==10)) && (a162==12))){
printf("POINT: 156\n");
  cf = (0);
  //error_77: assert(!//error_77);
  }
printf("POINT: 157\n");

  if((((a93==9) && (a177==9)) && (a162==10))){
printf("POINT: 158\n");
  cf = (0);
  //error_78: assert(!//error_78);
  }
printf("POINT: 159\n");

  if((((a200==8) && (a59==4)) && (a162==8))){
printf("POINT: 160\n");
  cf = (0);
  //error_79: assert(!//error_79);
  }
printf("POINT: 161\n");

  if((((a138==8) && (a59==6)) && (a162==8))){
printf("POINT: 162\n");
  cf = (0);
  //error_80: assert(!//error_80);
  }
printf("POINT: 163\n");

  if((((a191==11) && (a57==12)) && (a162==9))){
printf("POINT: 164\n");
  cf = (0);
  //error_81: assert(!//error_81);
  }
printf("POINT: 165\n");

  if((((a188==4) && (a177==5)) && (a162==10))){
printf("POINT: 166\n");
  cf = (0);
  //error_82: assert(!//error_82);
  }
printf("POINT: 167\n");

  if((((a60==1) && (a57==13)) && (a162==9))){
printf("POINT: 168\n");
  cf = (0);
  //error_83: assert(!//error_83);
  }
printf("POINT: 169\n");

  if((((a143==14) && (a76==7)) && (a162==11))){
printf("POINT: 170\n");
  cf = (0);
  //error_84: assert(!//error_84);
  }
printf("POINT: 171\n");

  if((((a168==13) && (a183==0)) && (a162==14))){
printf("POINT: 172\n");
  cf = (0);
  //error_85: assert(!//error_85);
  }
printf("POINT: 173\n");

  if((((a134==5) && (a138==10)) && (a162==13))){
printf("POINT: 174\n");
  cf = (0);
  //error_86: assert(!//error_86);
  }
printf("POINT: 175\n");

  if((((a200==8) && (a177==10)) && (a162==10))){
printf("POINT: 176\n");
  cf = (0);
  //error_87: assert(!//error_87);
  }
printf("POINT: 177\n");

  if((((a51==9) && (a76==6)) && (a162==11))){
printf("POINT: 178\n");
  cf = (0);
  //error_88: assert(!//error_88);
  }
printf("POINT: 179\n");

  if((((a158==4) && (a76==5)) && (a162==11))){
printf("POINT: 180\n");
  cf = (0);
  //error_89: assert(!//error_89);
  }
printf("POINT: 181\n");

  if((((a200==2) && (a86==9)) && (a162==12))){
printf("POINT: 182\n");
  cf = (0);
  //error_90: assert(!//error_90);
  }
printf("POINT: 183\n");

  if((((a146==3) && (a57==9)) && (a162==9))){
printf("POINT: 184\n");
  cf = (0);
  //error_91: assert(!//error_91);
  }
printf("POINT: 185\n");

  if((((a130==5) && (a138==3)) && (a162==13))){
printf("POINT: 186\n");
  cf = (0);
  //error_92: assert(!//error_92);
  }
printf("POINT: 187\n");

  if((((a112==9) && (a86==6)) && (a162==12))){
printf("POINT: 188\n");
  cf = (0);
  //error_93: assert(!//error_93);
  }
printf("POINT: 189\n");

  if((((a138==4) && (a59==6)) && (a162==8))){
printf("POINT: 190\n");
  cf = (0);
  //error_94: assert(!//error_94);
  }
printf("POINT: 191\n");

  if((((a168==7) && (a183==0)) && (a162==14))){
printf("POINT: 192\n");
  cf = (0);
  //error_95: assert(!//error_95);
  }
printf("POINT: 193\n");

  if((((a100==7) && (a32==7)) && (a162==7))){
printf("POINT: 194\n");
  cf = (0);
  //error_96: assert(!//error_96);
  }
printf("POINT: 195\n");

  if((((a158==6) && (a76==5)) && (a162==11))){
printf("POINT: 196\n");
  cf = (0);
  //error_97: assert(!//error_97);
  }
printf("POINT: 197\n");

  if((((a118==7) && (a59==8)) && (a162==8))){
printf("POINT: 198\n");
  cf = (0);
  //error_98: assert(!//error_98);
  }
printf("POINT: 199\n");

  if((((a109==12) && (a57==10)) && (a162==9))){
printf("POINT: 200\n");
  cf = (0);
  //error_99: assert(!//error_99);
  }
  }
  void calculate_outputm2(int input) {
printf("POINT: 201\n");

  if(((cf==1) && (input == 4))){
printf("POINT: 202\n");
  cf = (0);
  a133 = (7);
  a177 = (12);
  a162 = (10);
  printf("%d\n", 21);
  }
  } void calculate_outputm1(int input) {
printf("POINT: 203\n");

  if(((cf==1) && (a70==3))){
printf("POINT: 204\n");
  calculate_outputm2(input);
  }
  } void calculate_outputm4(int input) {
printf("POINT: 205\n");

  if(((input == 1) && (cf==1))){
printf("POINT: 206\n");
  cf = (0);
  a51 = (4);
  a86 = (5);
  a162 = (12);
  printf("%d\n", 21);
  }
printf("POINT: 207\n");

  if(((input == 5) && (cf==1))){
printf("POINT: 208\n");
  cf = (0);
  a147 = (15);
  a86 = (11);
  a162 = (12);
  printf("%d\n", 22);
  }
printf("POINT: 209\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 210\n");
  cf = (0);
  a198 = (9);
  a57 = (6);
  a162 = (9);
  printf("%d\n", 23);
  }
printf("POINT: 211\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 212\n");
  cf = (0);
  a100 = (10);
  printf("%d\n", 23);
  }
printf("POINT: 213\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 214\n");
  cf = (0);
  
  printf("%d\n", 25);
  }
  } void calculate_outputm3(int input) {
printf("POINT: 215\n");

  if(((a100==6) && (cf==1))){
printf("POINT: 216\n");
  calculate_outputm4(input);
  }
  } void calculate_outputm6(int input) {
printf("POINT: 217\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 218\n");
  cf = (0);
  a200 = (7);
  a86 = (9);
  a162 = (12);
  printf("%d\n", 21);
  }
  } void calculate_outputm5(int input) {
printf("POINT: 219\n");

  if(((cf==1) && (a48==4))){
printf("POINT: 220\n");
  calculate_outputm6(input);
  }
  } void calculate_outputm8(int input) {
printf("POINT: 221\n");

  if(((cf==1) && (input == 5))){
printf("POINT: 222\n");
  cf = (0);
  a129 = (4);
  a86 = (4);
  a162 = (12);
  printf("%d\n", 25);
  }
printf("POINT: 223\n");

  if(((input == 3) && (cf==1))){
printf("POINT: 224\n");
  cf = (0);
  a133 = (7);
  a177 = (12);
  a162 = (10);
  printf("%d\n", 21);
  }
printf("POINT: 225\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 226\n");
  cf = (0);
  a133 = (5);
  a177 = (12);
  a162 = (10);
  printf("%d\n", 25);
  }
printf("POINT: 227\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 228\n");
  cf = (0);
  a158 = (9);
  a76 = (5);
  a162 = (11);
  printf("%d\n", 25);
  }
printf("POINT: 229\n");

  if(((input == 1) && (cf==1))){
printf("POINT: 230\n");
  cf = (0);
  a104 = (8);
  a59 = (3);
  a162 = (8);
  printf("%d\n", 22);
  }
  } void calculate_outputm7(int input) {
printf("POINT: 231\n");

  if(((a198==9) && (cf==1))){
printf("POINT: 232\n");
  calculate_outputm8(input);
  }
  } void calculate_outputm10(int input) {
printf("POINT: 233\n");

  if(((cf==1) && (input == 5))){
printf("POINT: 234\n");
  cf = (0);
  a112 = (9);
  a86 = (6);
  a162 = (12);
  printf("%d\n", 19);
  }
printf("POINT: 235\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 236\n");
  cf = (0);
  a133 = (7);
  a177 = (12);
  a162 = (10);
  printf("%d\n", 21);
  }
printf("POINT: 237\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 238\n");
  cf = (0);
  a130 = (5);
  a138 = (3);
  a162 = (13);
  printf("%d\n", 21);
  }
printf("POINT: 239\n");

  if(((cf==1) && (input == 4))){
printf("POINT: 240\n");
  cf = (0);
  a35 = (8);
  a183 = (3);
  a162 = (14);
  printf("%d\n", 22);
  }
printf("POINT: 241\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 242\n");
  cf = (0);
  a112 = (9);
  a32 = (6);
  a162 = (7);
  printf("%d\n", 20);
  }
  } void calculate_outputm11(int input) {
printf("POINT: 243\n");

  if(((input == 5) && (cf==1))){
printf("POINT: 244\n");
  cf = (0);
  a32 = (1);
  a177 = (7);
  a162 = (10);
  printf("%d\n", 21);
  }
printf("POINT: 245\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 246\n");
  cf = (0);
  a32 = (6);
  a177 = (7);
  a162 = (10);
  printf("%d\n", 20);
  }
printf("POINT: 247\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 248\n");
  cf = (0);
  a32 = (1);
  a177 = (7);
  a162 = (10);
  printf("%d\n", 21);
  }
printf("POINT: 249\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 250\n");
  cf = (0);
  a198 = (9);
  a57 = (6);
  printf("%d\n", 20);
  }
printf("POINT: 251\n");

  if(((input == 1) && (cf==1))){
printf("POINT: 252\n");
  cf = (0);
  a138 = (5);
  a59 = (6);
  a162 = (8);
  printf("%d\n", 22);
  }
  } void calculate_outputm9(int input) {
printf("POINT: 253\n");

  if(((a146==4) && (cf==1))){
printf("POINT: 254\n");
  calculate_outputm10(input);
  }
printf("POINT: 255\n");

  if(((a146==6) && (cf==1))){
printf("POINT: 256\n");
  calculate_outputm11(input);
  }
  } void calculate_outputm13(int input) {
printf("POINT: 257\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 258\n");
  cf = (0);
  a182 = (7);
  printf("%d\n", 19);
  }
printf("POINT: 259\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 260\n");
  cf = (0);
  a32 = (2);
  a177 = (7);
  printf("%d\n", 19);
  }
  } void calculate_outputm14(int input) {
printf("POINT: 261\n");

  if(((input == 5) && (cf==1))){
printf("POINT: 262\n");
  cf = (0);
  a153 = (9);
  a138 = (7);
  a162 = (13);
  printf("%d\n", 23);
  }
printf("POINT: 263\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 264\n");
  cf = (0);
  a112 = (7);
  a32 = (6);
  a162 = (7);
  printf("%d\n", 19);
  }
printf("POINT: 265\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 266\n");
  cf = (0);
  a138 = (4);
  a59 = (6);
  a162 = (8);
  printf("%d\n", 21);
  }
printf("POINT: 267\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 268\n");
  cf = (0);
  a133 = (7);
  a86 = (7);
  a162 = (12);
  printf("%d\n", 21);
  }
printf("POINT: 269\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 270\n");
  cf = (0);
  a100 = (6);
  a32 = (7);
  a162 = (7);
  printf("%d\n", 20);
  }
  } void calculate_outputm12(int input) {
printf("POINT: 271\n");

  if(((cf==1) && (a182==3))){
printf("POINT: 272\n");
  calculate_outputm13(input);
  }
printf("POINT: 273\n");

  if(((cf==1) && (a182==7))){
printf("POINT: 274\n");
  calculate_outputm14(input);
  }
  } void calculate_outputm16(int input) {
printf("POINT: 275\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 276\n");
  cf = (0);
  a182 = (3);
  a177 = (6);
  printf("%d\n", 20);
  }
printf("POINT: 277\n");

  if(((input == 3) && (cf==1))){
printf("POINT: 278\n");
  cf = (0);
  a200 = (3);
  a86 = (9);
  a162 = (12);
  printf("%d\n", 21);
  }
  } void calculate_outputm17(int input) {
printf("POINT: 279\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 280\n");
  cf = (0);
  a143 = (14);
  a76 = (7);
  a162 = (11);
  printf("%d\n", 25);
  }
printf("POINT: 281\n");

  if(((input == 5) && (cf==1))){
printf("POINT: 282\n");
  cf = (0);
  a118 = (3);
  a138 = (9);
  a162 = (13);
  printf("%d\n", 20);
  }
printf("POINT: 283\n");

  if(((input == 3) && (cf==1))){
printf("POINT: 284\n");
  cf = (0);
  a35 = (7);
  a76 = (0);
  a162 = (11);
  printf("%d\n", 20);
  }
printf("POINT: 285\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 286\n");
  cf = (0);
  a146 = (6);
  a57 = (9);
  a162 = (9);
  printf("%d\n", 19);
  }
printf("POINT: 287\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 288\n");
  cf = (0);
  a112 = (6);
  a183 = (2);
  a162 = (14);
  printf("%d\n", 20);
  }
  } void calculate_outputm15(int input) {
printf("POINT: 289\n");

  if(((a32==1) && (cf==1))){
printf("POINT: 290\n");
  calculate_outputm16(input);
  }
printf("POINT: 291\n");

  if(((cf==1) && (a32==2))){
printf("POINT: 292\n");
  calculate_outputm17(input);
  }
  } void calculate_outputm19(int input) {
printf("POINT: 293\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 294\n");
  cf = (0);
  a158 = (9);
  a76 = (5);
  a162 = (11);
  printf("%d\n", 25);
  }
  } void calculate_outputm18(int input) {
printf("POINT: 295\n");

  if(((a133==7) && (cf==1))){
printf("POINT: 296\n");
  calculate_outputm19(input);
  }
  } void calculate_outputm21(int input) {
printf("POINT: 297\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 298\n");
  cf = (0);
  a198 = (9);
  a57 = (6);
  a162 = (9);
  printf("%d\n", 25);
  }
printf("POINT: 299\n");

  if(((cf==1) && (input == 4))){
printf("POINT: 300\n");
  cf = (0);
  a146 = (4);
  a57 = (9);
  a162 = (9);
  printf("%d\n", 21);
  }
  } void calculate_outputm20(int input) {
printf("POINT: 301\n");

  if(((cf==1) && (a158==9))){
printf("POINT: 302\n");
  calculate_outputm21(input);
  }
  } void calculate_outputm23(int input) {
printf("POINT: 303\n");

  if(((cf==1) && (input == 5))){
printf("POINT: 304\n");
  cf = (0);
  a146 = (5);
  a86 = (10);
  printf("%d\n", 20);
  }
printf("POINT: 305\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 306\n");
  cf = (0);
  a110 = (10);
  a183 = (6);
  a162 = (14);
  printf("%d\n", 22);
  }
  } void calculate_outputm22(int input) {
printf("POINT: 307\n");

  if(((cf==1) && (a112==11))){
printf("POINT: 308\n");
  calculate_outputm23(input);
  }
  } void calculate_outputm25(int input) {
printf("POINT: 309\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 310\n");
  cf = (0);
  a188 = (3);
  a177 = (5);
  a162 = (10);
  printf("%d\n", 19);
  }
printf("POINT: 311\n");

  if(((input == 3) && (cf==1))){
printf("POINT: 312\n");
  cf = (0);
  a198 = (9);
  a57 = (6);
  a162 = (9);
  printf("%d\n", 22);
  }
printf("POINT: 313\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 314\n");
  cf = (0);
  a200 = (8);
  a59 = (4);
  a162 = (8);
  printf("%d\n", 21);
  }
printf("POINT: 315\n");

  if(((cf==1) && (input == 5))){
printf("POINT: 316\n");
  cf = (0);
  a110 = (6);
  a183 = (6);
  a162 = (14);
  printf("%d\n", 20);
  }
printf("POINT: 317\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 318\n");
  cf = (0);
  a198 = (9);
  a57 = (6);
  a162 = (9);
  printf("%d\n", 20);
  }
  } void calculate_outputm24(int input) {
printf("POINT: 319\n");

  if(((a131==8) && (cf==1))){
printf("POINT: 320\n");
  calculate_outputm25(input);
  }
  } void calculate_outputm27(int input) {
printf("POINT: 321\n");

  if(((input == 3) && (cf==1))){
printf("POINT: 322\n");
  cf = (0);
  a110 = (6);
  a183 = (6);
  a162 = (14);
  printf("%d\n", 20);
  }
printf("POINT: 323\n");

  if(((input == 5) && (cf==1))){
printf("POINT: 324\n");
  cf = (0);
  a13 = (2);
  a183 = (5);
  a162 = (14);
  printf("%d\n", 21);
  }
printf("POINT: 325\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 326\n");
  cf = (0);
  a112 = (11);
  a86 = (6);
  printf("%d\n", 19);
  }
  } void calculate_outputm28(int input) {
printf("POINT: 327\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 328\n");
  cf = (0);
  a146 = (2);
  a86 = (10);
  printf("%d\n", 25);
  }
  } void calculate_outputm26(int input) {
printf("POINT: 329\n");

  if(((cf==1) && (a200==3))){
printf("POINT: 330\n");
  calculate_outputm27(input);
  }
printf("POINT: 331\n");

  if(((a200==7) && (cf==1))){
printf("POINT: 332\n");
  calculate_outputm28(input);
  }
  } void calculate_outputm30(int input) {
printf("POINT: 333\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 334\n");
  cf = (0);
  a70 = (3);
  a32 = (4);
  a162 = (7);
  printf("%d\n", 25);
  }
printf("POINT: 335\n");

  if(((cf==1) && (input == 4))){
printf("POINT: 336\n");
  cf = (0);
  a32 = (1);
  a177 = (7);
  a162 = (10);
  printf("%d\n", 23);
  }
  } void calculate_outputm31(int input) {
printf("POINT: 337\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 338\n");
  cf = (0);
  a200 = (3);
  a86 = (9);
  printf("%d\n", 21);
  }
printf("POINT: 339\n");

  if(((cf==1) && (input == 5))){
printf("POINT: 340\n");
  cf = (0);
  a112 = (6);
  a86 = (6);
  printf("%d\n", 20);
  }
printf("POINT: 341\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 342\n");
  cf = (0);
  a200 = (3);
  a86 = (9);
  printf("%d\n", 21);
  }
printf("POINT: 343\n");

  if(((input == 1) && (cf==1))){
printf("POINT: 344\n");
  cf = (0);
  a147 = (14);
  a86 = (11);
  printf("%d\n", 25);
  }
printf("POINT: 345\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 346\n");
  cf = (0);
  a168 = (7);
  a183 = (0);
  a162 = (14);
  printf("%d\n", 21);
  }
  } void calculate_outputm29(int input) {
printf("POINT: 347\n");

  if(((cf==1) && (a146==2))){
printf("POINT: 348\n");
  calculate_outputm30(input);
  }
printf("POINT: 349\n");

  if(((a146==5) && (cf==1))){
printf("POINT: 350\n");
  calculate_outputm31(input);
  }
  } void calculate_outputm33(int input) {
printf("POINT: 351\n");

  if(((cf==1) && (input == 5))){
printf("POINT: 352\n");
  cf = (0);
  a188 = (1);
  a177 = (5);
  a162 = (10);
  printf("%d\n", 22);
  }
printf("POINT: 353\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 354\n");
  cf = (0);
  a146 = (2);
  a86 = (10);
  a162 = (12);
  printf("%d\n", 25);
  }
printf("POINT: 355\n");

  if(((input == 4) && (cf==1))){
printf("POINT: 356\n");
  cf = (0);
  a192 = (4);
  a59 = (7);
  a162 = (8);
  printf("%d\n", 22);
  }
printf("POINT: 357\n");

  if(((input == 1) && (cf==1))){
printf("POINT: 358\n");
  cf = (0);
  a168 = (13);
  a183 = (0);
  a162 = (14);
  printf("%d\n", 21);
  }
printf("POINT: 359\n");

  if(((cf==1) && (input == 2))){
printf("POINT: 360\n");
  cf = (0);
  a133 = (3);
  a177 = (12);
  a162 = (10);
  printf("%d\n", 21);
  }
  } void calculate_outputm32(int input) {
printf("POINT: 361\n");

  if(((cf==1) && (a43==3))){
printf("POINT: 362\n");
  calculate_outputm33(input);
  }
  } void calculate_outputm35(int input) {
printf("POINT: 363\n");

  if(((input == 5) && (cf==1))){
printf("POINT: 364\n");
  cf = (0);
  a43 = (3);
  a138 = (8);
  a162 = (13);
  printf("%d\n", 22);
  }
printf("POINT: 365\n");

  if(((cf==1) && (input == 3))){
printf("POINT: 366\n");
  cf = (0);
  a133 = (2);
  a177 = (12);
  a162 = (10);
  printf("%d\n", 21);
  }
printf("POINT: 367\n");

  if(((input == 1) && (cf==1))){
printf("POINT: 368\n");
  cf = (0);
  a48 = (2);
  a59 = (2);
  a162 = (8);
  printf("%d\n", 20);
  }
printf("POINT: 369\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 370\n");
  cf = (0);
  a24 = (1);
  a177 = (8);
  a162 = (10);
  printf("%d\n", 21);
  }
  } void calculate_outputm34(int input) {
printf("POINT: 371\n");

  if(((cf==1) && (a13==2))){
printf("POINT: 372\n");
  calculate_outputm35(input);
  }
  } void calculate_outputm37(int input) {
printf("POINT: 373\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 374\n");
  cf = (0);
  a168 = (11);
  a183 = (0);
  printf("%d\n", 20);
  }
printf("POINT: 375\n");

  if(((input == 3) && (cf==1))){
printf("POINT: 376\n");
  cf = (0);
  a146 = (9);
  a86 = (10);
  a162 = (12);
  printf("%d\n", 23);
  }
printf("POINT: 377\n");

  if(((cf==1) && (input == 5))){
printf("POINT: 378\n");
  cf = (0);
  a131 = (8);
  a86 = (8);
  a162 = (12);
  printf("%d\n", 19);
  }
printf("POINT: 379\n");

  if(((input == 1) && (cf==1))){
printf("POINT: 380\n");
  cf = (0);
  a138 = (4);
  a32 = (2);
  a162 = (7);
  printf("%d\n", 20);
  }
printf("POINT: 381\n");

  if(((cf==1) && (input == 4))){
printf("POINT: 382\n");
  cf = (0);
  a104 = (5);
  a59 = (3);
  a162 = (8);
  printf("%d\n", 21);
  }
  } void calculate_outputm38(int input) {
printf("POINT: 383\n");

  if(((cf==1) && (input == 4))){
printf("POINT: 384\n");
  cf = (0);
  
  printf("%d\n", 22);
  }
printf("POINT: 385\n");

  if(((input == 5) && (cf==1))){
printf("POINT: 386\n");
  cf = (0);
  a112 = (11);
  a86 = (6);
  a162 = (12);
  printf("%d\n", 19);
  }
printf("POINT: 387\n");

  if(((input == 3) && (cf==1))){
printf("POINT: 388\n");
  cf = (0);
  a158 = (4);
  a76 = (5);
  a162 = (11);
  printf("%d\n", 19);
  }
printf("POINT: 389\n");

  if(((input == 2) && (cf==1))){
printf("POINT: 390\n");
  cf = (0);
  a200 = (6);
  a177 = (10);
  a162 = (10);
  printf("%d\n", 22);
  }
printf("POINT: 391\n");

  if(((cf==1) && (input == 1))){
printf("POINT: 392\n");
  cf = (0);
  a112 = (12);
  a183 = (2);
  printf("%d\n", 22);
  }
  } void calculate_outputm36(int input) {
printf("POINT: 393\n");

  if(((a110==6) && (cf==1))){
printf("POINT: 394\n");
  calculate_outputm37(input);
  }
printf("POINT: 395\n");

  if(((a110==10) && (cf==1))){
printf("POINT: 396\n");
  calculate_outputm38(input);
  }
  }
  void calculate_output(int input) {
  cf = (1);
  
printf("POINT: 397\n");

  if(((cf==1) && (a162==7))){
printf("POINT: 398\n");
printf("POINT: 399\n");

  if(((a32==4) && (cf==1))){
printf("POINT: 400\n");
  calculate_outputm1(input);
  }
printf("POINT: 401\n");

  if(((cf==1) && (a32==7))){
printf("POINT: 402\n");
  calculate_outputm3(input);
  }
  }
printf("POINT: 403\n");

  if(((a162==8) && (cf==1))){
printf("POINT: 404\n");
printf("POINT: 405\n");

  if(((cf==1) && (a59==2))){
printf("POINT: 406\n");
  calculate_outputm5(input);
  }
  }
printf("POINT: 407\n");

  if(((cf==1) && (a162==9))){
printf("POINT: 408\n");
printf("POINT: 409\n");

  if(((cf==1) && (a57==6))){
printf("POINT: 410\n");
  calculate_outputm7(input);
  }
printf("POINT: 411\n");

  if(((a57==9) && (cf==1))){
printf("POINT: 412\n");
  calculate_outputm9(input);
  }
  }
printf("POINT: 413\n");

  if(((a162==10) && (cf==1))){
printf("POINT: 414\n");
printf("POINT: 415\n");

  if(((cf==1) && (a177==6))){
printf("POINT: 416\n");
  calculate_outputm12(input);
  }
printf("POINT: 417\n");

  if(((a177==7) && (cf==1))){
printf("POINT: 418\n");
  calculate_outputm15(input);
  }
printf("POINT: 419\n");

  if(((cf==1) && (a177==12))){
printf("POINT: 420\n");
  calculate_outputm18(input);
  }
  }
printf("POINT: 421\n");

  if(((cf==1) && (a162==11))){
printf("POINT: 422\n");
printf("POINT: 423\n");

  if(((cf==1) && (a76==5))){
printf("POINT: 424\n");
  calculate_outputm20(input);
  }
  }
printf("POINT: 425\n");

  if(((a162==12) && (cf==1))){
printf("POINT: 426\n");
printf("POINT: 427\n");

  if(((a86==6) && (cf==1))){
printf("POINT: 428\n");
  calculate_outputm22(input);
  }
printf("POINT: 429\n");

  if(((a86==8) && (cf==1))){
printf("POINT: 430\n");
  calculate_outputm24(input);
  }
printf("POINT: 431\n");

  if(((cf==1) && (a86==9))){
printf("POINT: 432\n");
  calculate_outputm26(input);
  }
printf("POINT: 433\n");

  if(((cf==1) && (a86==10))){
printf("POINT: 434\n");
  calculate_outputm29(input);
  }
  }
printf("POINT: 435\n");

  if(((cf==1) && (a162==13))){
printf("POINT: 436\n");
printf("POINT: 437\n");

  if(((cf==1) && (a138==8))){
printf("POINT: 438\n");
  calculate_outputm32(input);
  }
  }
printf("POINT: 439\n");

  if(((a162==14) && (cf==1))){
printf("POINT: 440\n");
printf("POINT: 441\n");

  if(((a183==5) && (cf==1))){
printf("POINT: 442\n");
  calculate_outputm34(input);
  }
printf("POINT: 443\n");

  if(((cf==1) && (a183==6))){
printf("POINT: 444\n");
  calculate_outputm36(input);
  }
  }
  errorCheck();
  
printf("POINT: 445\n");

  if((cf==1)){
printf("POINT: 446\n");
  
  
  }
  //fprintf(stderr, "Invalid input: %d\n", input);
  }
  
  
  int main()
  {
  kappa = 0;
  // main i/o-loop
  int symb;
printf("POINT: 447\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++){
int symb; scanf("%d",&symb);   
  calculate_output(symb);
  }
  
  return 0;
  
  }
