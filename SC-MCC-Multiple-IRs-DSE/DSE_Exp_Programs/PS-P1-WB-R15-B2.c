  #include<stdio.h>
  #ifdef LLBMC
  #include <llbmc.h>
  #else
 #include <klee/klee.h>
  #endif
  
  #define BOUND 2 //BOUND 5
  int kappa;
  int input,output;
  #include <assert.h>
  #include <math.h>
  #include <stdlib.h>
  // inputs
  int inputs[] = {2,5,3,1,4};
  
  int a167,a53,a18,a131,a119,a63,a73,a170,a56,a168;
  
  int a164 = 7;
  int a85 = 6;
  int a65 = 11;
  int a61 = 8;
  int a105 = 10;
  int a9 = 5;
  int a69 = 4;
  int a34 = 1;
  int a190 = 9;
  int a159 = 10;
  int a86 = 11;
  int a20 = 14;
  int a29 = 5;
  int a153 = 10;
  int a101 = 10;
  int a10 = 11;
  int a166 = 5;
  int a160 = 6;
  int a31 = 15;
  int a114 = 8;
  int a148 = 7;
  int a1 = 15;
  int a50 = 9;
  int a94 = 10;
  int a123 = 4;
  int a60 = 16;
  int a124 = 11;
  int a158 = 5;
  int a36 = 10;
  int a42 = 11;
  int a144 = 9;
  int cf = 1;
  int a146 = 6;
  int a68 = 7;
  int a95 = 11;
  int a52 = 11;
  int a102 = 10;
  int a151 = 12;
  int a41 = 3;
  int a135 = 6;
  int a193 = 1;
  int a7 = 1;
  int a78 = 0;
  int a134 = -15;
  int a187 = 1;
  int a39 = 0;
  int a185 = 2;
  int a38 = -15;
  int a83 = 1;
  int a186 = 1;
  int a118 = 2;
  int a57 = 0;
  int a165 = -15;
  int a181 = -15;
  int a30 = 0;
  int a26 = 3;
  int a157 = -15;
  
  
  void errorCheck() {
printf("POINT: 1\n");

  if((((a31 == 15) && (a146 == 7)) && (a166 == 9))){
printf("POINT: 2\n");
  cf = 0;
  //error_0: assert(!//error_0);
  }
printf("POINT: 3\n");

  if((((a164 == 10) && (a119 == 4)) && (a166 == 12))){
printf("POINT: 4\n");
  cf = 0;
  //error_1: assert(!//error_1);
  }
printf("POINT: 5\n");

  if((((a158 == 7) && (a146 == 5)) && (a166 == 9))){
printf("POINT: 6\n");
  cf = 0;
  //error_2: assert(!//error_2);
  }
printf("POINT: 7\n");

  if((((a65 == 13) && (a146 == 6)) && (a166 == 9))){
printf("POINT: 8\n");
  cf = 0;
  //error_3: assert(!//error_3);
  }
printf("POINT: 9\n");

  if((((a29 == 3) && (a119 == 6)) && (a166 == 5))){
printf("POINT: 10\n");
  cf = 0;
  //error_4: assert(!//error_4);
  }
printf("POINT: 11\n");

  if((((a36 == 7) && (a151 == 9)) && (a166 == 8))){
printf("POINT: 12\n");
  cf = 0;
  //error_5: assert(!//error_5);
  }
printf("POINT: 13\n");

  if((((a61 == 12) && (a119 == 8)) && (a166 == 5))){
printf("POINT: 14\n");
  cf = 0;
  //error_6: assert(!//error_6);
  }
printf("POINT: 15\n");

  if((((a53 == 16) && (a119 == 9)) && (a166 == 12))){
printf("POINT: 16\n");
  cf = 0;
  //error_7: assert(!//error_7);
  }
printf("POINT: 17\n");

  if((((a159 == 8) && (a119 == 2)) && (a166 == 5))){
printf("POINT: 18\n");
  cf = 0;
  //error_8: assert(!//error_8);
  }
printf("POINT: 19\n");

  if((((a124 == 8) && (a119 == 9)) && (a166 == 5))){
printf("POINT: 20\n");
  cf = 0;
  //error_9: assert(!//error_9);
  }
printf("POINT: 21\n");

  if((((a123 == 4) && (a65 == 14)) && (a166 == 7))){
printf("POINT: 22\n");
  cf = 0;
  //error_10: assert(!//error_10);
  }
printf("POINT: 23\n");

  if((((a9 == 5) && (a105 == 6)) && (a166 == 6))){
printf("POINT: 24\n");
  cf = 0;
  //error_11: assert(!//error_11);
  }
printf("POINT: 25\n");

  if((((a31 == 11) && (a105 == 7)) && (a166 == 6))){
printf("POINT: 26\n");
  cf = 0;
  //error_12: assert(!//error_12);
  }
printf("POINT: 27\n");

  if((((a131 == 12) && (a65 == 16)) && (a166 == 7))){
printf("POINT: 28\n");
  cf = 0;
  //error_13: assert(!//error_13);
  }
printf("POINT: 29\n");

  if((((a69 == 1) && (a146 == 10)) && (a166 == 9))){
printf("POINT: 30\n");
  cf = 0;
  //error_14: assert(!//error_14);
  }
printf("POINT: 31\n");

  if((((a56 == 13) && (a34 == 2)) && (a166 == 10))){
printf("POINT: 32\n");
  cf = 0;
  //error_15: assert(!//error_15);
  }
printf("POINT: 33\n");

  if((((a94 == 8) && (a65 == 10)) && (a166 == 7))){
printf("POINT: 34\n");
  cf = 0;
  //error_16: assert(!//error_16);
  }
printf("POINT: 35\n");

  if((((a61 == 13) && (a119 == 8)) && (a166 == 5))){
printf("POINT: 36\n");
  cf = 0;
  //error_17: assert(!//error_17);
  }
printf("POINT: 37\n");

  if((((a34 == 5) && (a119 == 5)) && (a166 == 5))){
printf("POINT: 38\n");
  cf = 0;
  //error_18: assert(!//error_18);
  }
printf("POINT: 39\n");

  if((((a61 == 8) && (a119 == 8)) && (a166 == 5))){
printf("POINT: 40\n");
  cf = 0;
  //error_19: assert(!//error_19);
  }
printf("POINT: 41\n");

  if((((a63 == 14) && (a151 == 10)) && (a166 == 8))){
printf("POINT: 42\n");
  cf = 0;
  //error_20: assert(!//error_20);
  }
printf("POINT: 43\n");

  if((((a29 == 5) && (a119 == 6)) && (a166 == 5))){
printf("POINT: 44\n");
  cf = 0;
  //error_21: assert(!//error_21);
  }
printf("POINT: 45\n");

  if((((a153 == 6) && (a119 == 6)) && (a166 == 12))){
printf("POINT: 46\n");
  cf = 0;
  //error_22: assert(!//error_22);
  }
printf("POINT: 47\n");

  if((((a9 == 7) && (a105 == 6)) && (a166 == 6))){
printf("POINT: 48\n");
  cf = 0;
  //error_23: assert(!//error_23);
  }
printf("POINT: 49\n");

  if((((a190 == 11) && (a151 == 7)) && (a166 == 8))){
printf("POINT: 50\n");
  cf = 0;
  //error_24: assert(!//error_24);
  }
printf("POINT: 51\n");

  if((((a102 == 16) && (a105 == 10)) && (a166 == 6))){
printf("POINT: 52\n");
  cf = 0;
  //error_25: assert(!//error_25);
  }
printf("POINT: 53\n");

  if((((a36 == 9) && (a119 == 7)) && (a166 == 12))){
printf("POINT: 54\n");
  cf = 0;
  //error_26: assert(!//error_26);
  }
printf("POINT: 55\n");

  if((((a164 == 8) && (a119 == 4)) && (a166 == 12))){
printf("POINT: 56\n");
  cf = 0;
  //error_27: assert(!//error_27);
  }
printf("POINT: 57\n");

  if((((a60 == 10) && (a119 == 8)) && (a166 == 12))){
printf("POINT: 58\n");
  cf = 0;
  //error_28: assert(!//error_28);
  }
printf("POINT: 59\n");

  if((((a102 == 11) && (a105 == 10)) && (a166 == 6))){
printf("POINT: 60\n");
  cf = 0;
  //error_29: assert(!//error_29);
  }
printf("POINT: 61\n");

  if((((a52 == 10) && (a105 == 13)) && (a166 == 6))){
printf("POINT: 62\n");
  cf = 0;
  //error_30: assert(!//error_30);
  }
printf("POINT: 63\n");

  if((((a10 == 11) && (a146 == 11)) && (a166 == 9))){
printf("POINT: 64\n");
  cf = 0;
  //error_31: assert(!//error_31);
  }
printf("POINT: 65\n");

  if((((a124 == 13) && (a146 == 8)) && (a166 == 9))){
printf("POINT: 66\n");
  cf = 0;
  //error_32: assert(!//error_32);
  }
printf("POINT: 67\n");

  if((((a63 == 12) && (a151 == 10)) && (a166 == 8))){
printf("POINT: 68\n");
  cf = 0;
  //error_33: assert(!//error_33);
  }
printf("POINT: 69\n");

  if((((a50 == 8) && (a86 == 11)) && (a166 == 11))){
printf("POINT: 70\n");
  cf = 0;
  //error_34: assert(!//error_34);
  }
printf("POINT: 71\n");

  if((((a69 == 3) && (a146 == 10)) && (a166 == 9))){
printf("POINT: 72\n");
  cf = 0;
  //error_35: assert(!//error_35);
  }
printf("POINT: 73\n");

  if((((a31 == 13) && (a146 == 7)) && (a166 == 9))){
printf("POINT: 74\n");
  cf = 0;
  //error_36: assert(!//error_36);
  }
printf("POINT: 75\n");

  if((((a36 == 7) && (a119 == 3)) && (a166 == 5))){
printf("POINT: 76\n");
  cf = 0;
  //error_37: assert(!//error_37);
  }
printf("POINT: 77\n");

  if((((a68 == 2) && (a65 == 9)) && (a166 == 7))){
printf("POINT: 78\n");
  cf = 0;
  //error_38: assert(!//error_38);
  }
printf("POINT: 79\n");

  if((((a61 == 9) && (a119 == 8)) && (a166 == 5))){
printf("POINT: 80\n");
  cf = 0;
  //error_39: assert(!//error_39);
  }
printf("POINT: 81\n");

  if((((a18 == 12) && (a65 == 15)) && (a166 == 7))){
printf("POINT: 82\n");
  cf = 0;
  //error_40: assert(!//error_40);
  }
printf("POINT: 83\n");

  if((((a124 == 11) && (a34 == 3)) && (a166 == 10))){
printf("POINT: 84\n");
  cf = 0;
  //error_41: assert(!//error_41);
  }
printf("POINT: 85\n");

  if((((a1 == 11) && (a146 == 4)) && (a166 == 9))){
printf("POINT: 86\n");
  cf = 0;
  //error_42: assert(!//error_42);
  }
printf("POINT: 87\n");

  if((((a131 == 10) && (a65 == 16)) && (a166 == 7))){
printf("POINT: 88\n");
  cf = 0;
  //error_43: assert(!//error_43);
  }
printf("POINT: 89\n");

  if((((a158 == 11) && (a146 == 5)) && (a166 == 9))){
printf("POINT: 90\n");
  cf = 0;
  //error_44: assert(!//error_44);
  }
printf("POINT: 91\n");

  if((((a123 == 6) && (a65 == 14)) && (a166 == 7))){
printf("POINT: 92\n");
  cf = 0;
  //error_45: assert(!//error_45);
  }
printf("POINT: 93\n");

  if((((a94 == 13) && (a65 == 10)) && (a166 == 7))){
printf("POINT: 94\n");
  cf = 0;
  //error_46: assert(!//error_46);
  }
printf("POINT: 95\n");

  if((((a50 == 6) && (a86 == 11)) && (a166 == 11))){
printf("POINT: 96\n");
  cf = 0;
  //error_47: assert(!//error_47);
  }
printf("POINT: 97\n");

  if((((a68 == 8) && (a65 == 9)) && (a166 == 7))){
printf("POINT: 98\n");
  cf = 0;
  //error_48: assert(!//error_48);
  }
printf("POINT: 99\n");

  if((((a123 == 8) && (a65 == 14)) && (a166 == 7))){
printf("POINT: 100\n");
  cf = 0;
  //error_49: assert(!//error_49);
  }
printf("POINT: 101\n");

  if((((a18 == 8) && (a105 == 8)) && (a166 == 6))){
printf("POINT: 102\n");
  cf = 0;
  //error_50: assert(!//error_50);
  }
printf("POINT: 103\n");

  if((((a42 == 16) && (a34 == 5)) && (a166 == 10))){
printf("POINT: 104\n");
  cf = 0;
  //error_51: assert(!//error_51);
  }
printf("POINT: 105\n");

  if((((a135 == 3) && (a151 == 14)) && (a166 == 8))){
printf("POINT: 106\n");
  cf = 0;
  //error_52: assert(!//error_52);
  }
printf("POINT: 107\n");

  if((((a34 == 4) && (a119 == 5)) && (a166 == 5))){
printf("POINT: 108\n");
  cf = 0;
  //error_53: assert(!//error_53);
  }
printf("POINT: 109\n");

  if((((a164 == 11) && (a119 == 4)) && (a166 == 12))){
printf("POINT: 110\n");
  cf = 0;
  //error_54: assert(!//error_54);
  }
printf("POINT: 111\n");

  if((((a18 == 9) && (a105 == 8)) && (a166 == 6))){
printf("POINT: 112\n");
  cf = 0;
  //error_55: assert(!//error_55);
  }
printf("POINT: 113\n");

  if((((a148 == 6) && (a65 == 13)) && (a166 == 7))){
printf("POINT: 114\n");
  cf = 0;
  //error_56: assert(!//error_56);
  }
printf("POINT: 115\n");

  if((((a123 == 9) && (a65 == 14)) && (a166 == 7))){
printf("POINT: 116\n");
  cf = 0;
  //error_57: assert(!//error_57);
  }
printf("POINT: 117\n");

  if((((a41 == 8) && (a151 == 8)) && (a166 == 8))){
printf("POINT: 118\n");
  cf = 0;
  //error_58: assert(!//error_58);
  }
printf("POINT: 119\n");

  if((((a95 == 5) && (a105 == 9)) && (a166 == 6))){
printf("POINT: 120\n");
  cf = 0;
  //error_59: assert(!//error_59);
  }
printf("POINT: 121\n");

  if((((a168 == 8) && (a119 == 7)) && (a166 == 5))){
printf("POINT: 122\n");
  cf = 0;
  //error_60: assert(!//error_60);
  }
printf("POINT: 123\n");

  if((((a114 == 13) && (a105 == 12)) && (a166 == 6))){
printf("POINT: 124\n");
  cf = 0;
  //error_61: assert(!//error_61);
  }
printf("POINT: 125\n");

  if((((a158 == 8) && (a146 == 5)) && (a166 == 9))){
printf("POINT: 126\n");
  cf = 0;
  //error_62: assert(!//error_62);
  }
printf("POINT: 127\n");

  if((((a18 == 13) && (a86 == 10)) && (a166 == 11))){
printf("POINT: 128\n");
  cf = 0;
  //error_63: assert(!//error_63);
  }
printf("POINT: 129\n");

  if((((a123 == 5) && (a65 == 14)) && (a166 == 7))){
printf("POINT: 130\n");
  cf = 0;
  //error_64: assert(!//error_64);
  }
printf("POINT: 131\n");

  if((((a153 == 4) && (a34 == 6)) && (a166 == 10))){
printf("POINT: 132\n");
  cf = 0;
  //error_65: assert(!//error_65);
  }
printf("POINT: 133\n");

  if((((a158 == 8) && (a34 == 7)) && (a166 == 10))){
printf("POINT: 134\n");
  cf = 0;
  //error_66: assert(!//error_66);
  }
printf("POINT: 135\n");

  if((((a29 == 6) && (a119 == 6)) && (a166 == 5))){
printf("POINT: 136\n");
  cf = 0;
  //error_67: assert(!//error_67);
  }
printf("POINT: 137\n");

  if((((a131 == 6) && (a65 == 16)) && (a166 == 7))){
printf("POINT: 138\n");
  cf = 0;
  //error_68: assert(!//error_68);
  }
printf("POINT: 139\n");

  if((((a95 == 4) && (a34 == 4)) && (a166 == 10))){
printf("POINT: 140\n");
  cf = 0;
  //error_69: assert(!//error_69);
  }
printf("POINT: 141\n");

  if((((a153 == 11) && (a119 == 6)) && (a166 == 12))){
printf("POINT: 142\n");
  cf = 0;
  //error_70: assert(!//error_70);
  }
printf("POINT: 143\n");

  if((((a168 == 5) && (a119 == 7)) && (a166 == 5))){
printf("POINT: 144\n");
  cf = 0;
  //error_71: assert(!//error_71);
  }
printf("POINT: 145\n");

  if((((a18 == 6) && (a105 == 8)) && (a166 == 6))){
printf("POINT: 146\n");
  cf = 0;
  //error_72: assert(!//error_72);
  }
printf("POINT: 147\n");

  if((((a61 == 12) && (a151 == 13)) && (a166 == 8))){
printf("POINT: 148\n");
  cf = 0;
  //error_73: assert(!//error_73);
  }
printf("POINT: 149\n");

  if((((a170 == 14) && (a86 == 14)) && (a166 == 11))){
printf("POINT: 150\n");
  cf = 0;
  //error_74: assert(!//error_74);
  }
printf("POINT: 151\n");

  if((((a41 == 10) && (a151 == 8)) && (a166 == 8))){
printf("POINT: 152\n");
  cf = 0;
  //error_75: assert(!//error_75);
  }
printf("POINT: 153\n");

  if((((a53 == 9) && (a119 == 9)) && (a166 == 12))){
printf("POINT: 154\n");
  cf = 0;
  //error_76: assert(!//error_76);
  }
printf("POINT: 155\n");

  if((((a69 == 7) && (a151 == 12)) && (a166 == 8))){
printf("POINT: 156\n");
  cf = 0;
  //error_77: assert(!//error_77);
  }
printf("POINT: 157\n");

  if((((a151 == 11) && (a105 == 11)) && (a166 == 6))){
printf("POINT: 158\n");
  cf = 0;
  //error_78: assert(!//error_78);
  }
printf("POINT: 159\n");

  if((((a69 == 1) && (a151 == 12)) && (a166 == 8))){
printf("POINT: 160\n");
  cf = 0;
  //error_79: assert(!//error_79);
  }
printf("POINT: 161\n");

  if((((a95 == 10) && (a34 == 4)) && (a166 == 10))){
printf("POINT: 162\n");
  cf = 0;
  //error_80: assert(!//error_80);
  }
printf("POINT: 163\n");

  if((((a170 == 11) && (a86 == 14)) && (a166 == 11))){
printf("POINT: 164\n");
  cf = 0;
  //error_81: assert(!//error_81);
  }
printf("POINT: 165\n");

  if((((a20 == 7) && (a86 == 13)) && (a166 == 11))){
printf("POINT: 166\n");
  cf = 0;
  //error_82: assert(!//error_82);
  }
printf("POINT: 167\n");

  if((((a146 == 9) && (a86 == 8)) && (a166 == 11))){
printf("POINT: 168\n");
  cf = 0;
  //error_83: assert(!//error_83);
  }
printf("POINT: 169\n");

  if((((a56 == 12) && (a34 == 2)) && (a166 == 10))){
printf("POINT: 170\n");
  cf = 0;
  //error_84: assert(!//error_84);
  }
printf("POINT: 171\n");

  if((((a63 == 10) && (a151 == 10)) && (a166 == 8))){
printf("POINT: 172\n");
  cf = 0;
  //error_85: assert(!//error_85);
  }
printf("POINT: 173\n");

  if((((a135 == 4) && (a151 == 14)) && (a166 == 8))){
printf("POINT: 174\n");
  cf = 0;
  //error_86: assert(!//error_86);
  }
printf("POINT: 175\n");

  if((((a18 == 6) && (a86 == 10)) && (a166 == 11))){
printf("POINT: 176\n");
  cf = 0;
  //error_87: assert(!//error_87);
  }
printf("POINT: 177\n");

  if((((a144 == 14) && (a34 == 1)) && (a166 == 10))){
printf("POINT: 178\n");
  cf = 0;
  //error_88: assert(!//error_88);
  }
printf("POINT: 179\n");

  if((((a101 == 13) && (a65 == 11)) && (a166 == 7))){
printf("POINT: 180\n");
  cf = 0;
  //error_89: assert(!//error_89);
  }
printf("POINT: 181\n");

  if((((a124 == 7) && (a119 == 9)) && (a166 == 5))){
printf("POINT: 182\n");
  cf = 0;
  //error_90: assert(!//error_90);
  }
printf("POINT: 183\n");

  if((((a167 == 9) && (a119 == 3)) && (a166 == 12))){
printf("POINT: 184\n");
  cf = 0;
  //error_91: assert(!//error_91);
  }
printf("POINT: 185\n");

  if((((a61 == 14) && (a151 == 13)) && (a166 == 8))){
printf("POINT: 186\n");
  cf = 0;
  //error_92: assert(!//error_92);
  }
printf("POINT: 187\n");

  if((((a153 == 8) && (a34 == 6)) && (a166 == 10))){
printf("POINT: 188\n");
  cf = 0;
  //error_93: assert(!//error_93);
  }
printf("POINT: 189\n");

  if((((a42 == 14) && (a34 == 5)) && (a166 == 10))){
printf("POINT: 190\n");
  cf = 0;
  //error_94: assert(!//error_94);
  }
printf("POINT: 191\n");

  if((((a1 == 8) && (a146 == 4)) && (a166 == 9))){
printf("POINT: 192\n");
  cf = 0;
  //error_95: assert(!//error_95);
  }
printf("POINT: 193\n");

  if((((a131 == 8) && (a65 == 16)) && (a166 == 7))){
printf("POINT: 194\n");
  cf = 0;
  //error_96: assert(!//error_96);
  }
printf("POINT: 195\n");

  if((((a159 == 15) && (a119 == 2)) && (a166 == 5))){
printf("POINT: 196\n");
  cf = 0;
  //error_97: assert(!//error_97);
  }
printf("POINT: 197\n");

  if((((a18 == 12) && (a105 == 8)) && (a166 == 6))){
printf("POINT: 198\n");
  cf = 0;
  //error_98: assert(!//error_98);
  }
printf("POINT: 199\n");

  if((((a10 == 9) && (a146 == 11)) && (a166 == 9))){
printf("POINT: 200\n");
  cf = 0;
  //error_99: assert(!//error_99);
  }
  }
  void calculate_outputm2(int input) {
printf("POINT: 201\n");

  if((((input == 1) && (cf == 1)) && a83 == 6500)) {
printf("POINT: 202\n");
  cf = 0;
  a151 = (a159 - 1);
  a166 = ((a119 / a159) - -8);
  a41 = (a159 + -1);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 203\n");

  if((((cf == 1) && (input == 4)) && (a38 % 2==0))) {
printf("POINT: 204\n");
printf("POINT: 205\n");

  if((a185 - 20) < a185){
printf("POINT: 206\n");
  a185  -=  2 ;}
  else{
  a185  -=  0;}
  cf = 0;
  a166 = (a119 + 8);
  a34 = ((a166 - a159) - -5);
  a153 = (a166 - 2);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 207\n");

  if(((input == 3) && (cf == 1))) {
printf("POINT: 208\n");
printf("POINT: 209\n");

  if((a39 - 20) < a39){
printf("POINT: 210\n");
  a39  -=  4 ;}
  else{
  a39  -=  0;}
  cf = 0;
  a166 = (a159 + 3);
  a153 = (a159 - -1);
  a119 = (a153 + -4);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 211\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 212\n");
printf("POINT: 213\n");

  if((a118 - 20) < a118){
printf("POINT: 214\n");
  a118  -=  2 ;}
  else{
  a118  -=  0;}
  cf = 0;
  a69 = (a119 - 1);
  a146 = ((a159 / a119) + 6);
  a166 = ((a119 * a69) - -7);
  printf("%d\n", 25); fflush(stdout);
  }
  }
  void calculate_outputm3(int input) {
printf("POINT: 215\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 216\n");
printf("POINT: 217\n");

  if((a118 - 20) < a118){
printf("POINT: 218\n");
  a118  -=  4 ;}
  else{
  a118  -=  0;}
  cf = 0;
  a166 = (a119 - -4);
  a105 = (a159 - 1);
  a95 = (a166 + -1);
  printf("%d\n", 24); fflush(stdout);
  }
printf("POINT: 219\n");

  if(((input == 4) && (cf == 1))) {
printf("POINT: 220\n");
printf("POINT: 221\n");

  if((a118 - 20) < a118){
printf("POINT: 222\n");
  a118  -=  1 ;}
  else{
  a118  -=  0;}
  cf = 0;
  a151 = (a166 + 9);
  a166 = ((a119 - a119) - -8);
  a135 = (a151 + -4);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm1(int input) {
printf("POINT: 223\n");

  if(((cf == 1) && (a159 == 9))) {
printf("POINT: 224\n");
  calculate_outputm2(input);
  }
printf("POINT: 225\n");

  if(((a159 == 10) && (cf == 1))) {
printf("POINT: 226\n");
  calculate_outputm3(input);
  }
  }
  void calculate_outputm5(int input) {
printf("POINT: 227\n");

  if(((input == 3) && (cf == 1))) {
printf("POINT: 228\n");
  cf = 0;
  a151 = (a166 + 9);
  a166 = (a151 - 6);
  a135 = (a151 - 7);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 229\n");

  if(((cf == 1) && (input == 4))) {
printf("POINT: 230\n");
  cf = 0;
  a166 = (a119 - -9);
  a160 = (a119 + 4);
  a119 = (a160 + -5);
  printf("%d\n", 22); fflush(stdout);
  }
printf("POINT: 231\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 232\n");
  cf = 0;
  a119 = (a36 + -4);
  a159 = ((a166 - a166) - -10);
  printf("%d\n", 20); fflush(stdout);
  }
  }
  void calculate_outputm4(int input) {
printf("POINT: 233\n");

  if(((cf == 1) && (a36 == 6))) {
printf("POINT: 234\n");
  calculate_outputm5(input);
  }
  }
  void calculate_outputm7(int input) {
printf("POINT: 235\n");

  if(((input == 3) && (cf == 1))) {
printf("POINT: 236\n");
printf("POINT: 237\n");

  if((a30 + 20) > a30){
printf("POINT: 238\n");
  a30  +=  1 ;}
  else{
  a30  +=  0;}
  cf = 0;
  a166 = (a86 + 2);
  a34 = (a166 + -2);
  a85 = (a166 - 6);
  printf("%d\n", 20); fflush(stdout);
  }
printf("POINT: 239\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 240\n");
printf("POINT: 241\n");

  if((a186 + 20) > a186){
printf("POINT: 242\n");
  a186  +=  4 ;}
  else{
  a186  +=  0;}
  cf = 0;
  a105 = (a119 + 9);
  a166 = (a105 - 7);
  a52 = ((a166 * a105) + -68);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm6(int input) {
printf("POINT: 243\n");

  if(((a86 == 8) && (cf == 1))) {
printf("POINT: 244\n");
  calculate_outputm7(input);
  }
  }
  void calculate_outputm9(int input) {
printf("POINT: 245\n");

  if(((cf == 1) && (input == 1))) {
printf("POINT: 246\n");
  cf = 0;
  a119 = (a166 + -2);
  a36 = ((a166 * a166) - 19);
  printf("%d\n", 20); fflush(stdout);
  }
  }
  void calculate_outputm8(int input) {
printf("POINT: 247\n");

  if(((cf == 1) && (a168 == 4))) {
printf("POINT: 248\n");
  calculate_outputm9(input);
  }
  }
  void calculate_outputm11(int input) {
printf("POINT: 249\n");

  if(((cf == 1) && (input == 4))) {
printf("POINT: 250\n");
  cf = 0;
  a166 = (a61 - -2);
  a153 = (a119 - -2);
  a119 = (a166 - 6);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 251\n");

  if((((input == 3) && (cf == 1)) && a193 >= 32)) {
printf("POINT: 252\n");
  cf = 0;
  a166 = (a119 - -2);
  a34 = ((a61 * a61) - 97);
  a124 = ((a61 + a34) - 2);
  printf("%d\n", 20); fflush(stdout);
  }
printf("POINT: 253\n");

  if(((cf == 1) && (input == 5))) {
printf("POINT: 254\n");
  cf = 0;
  a105 = (a61 - 2);
  a166 = (a61 - 4);
  a18 = (a105 - -4);
  printf("%d\n", 20); fflush(stdout);
  }
printf("POINT: 255\n");

  if(((input == 2) && (cf == 1))) {
printf("POINT: 256\n");
  cf = 0;
  a146 = (a61 + -4);
  a166 = (a119 + 1);
  a65 = ((a146 - a146) + 11);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm10(int input) {
printf("POINT: 257\n");

  if(((cf == 1) && (a61 == 10))) {
printf("POINT: 258\n");
  calculate_outputm11(input);
  }
  }
  void calculate_outputm13(int input) {
printf("POINT: 259\n");

  if(((input == 2) && (cf == 1))) {
printf("POINT: 260\n");
  cf = 0;
  a166 = ((a105 - a105) - -8);
  a73 = ((a95 / a166) - -11);
  a151 = (a166 + 3);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 261\n");

  if(((cf == 1) && (input == 4))) {
printf("POINT: 262\n");
  cf = 0;
  a166 = (a105 - -1);
  a34 = ((a166 / a95) - -7);
  a85 = ((a34 + a166) + -14);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 263\n");

  if((((input == 5) && (cf == 1)) && (a157 % 2==0))) {
printf("POINT: 264\n");
printf("POINT: 265\n");

  if((a30 - 20) < a30){
printf("POINT: 266\n");
  a30  -=  4 ;}
  else{
  a30  -=  0;}
  cf = 0;
  a9 = ((a95 - a105) + 8);
  a105 = a166;
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 267\n");

  if((((cf == 1) && (input == 1)) && a26 >= 22)) {
printf("POINT: 268\n");
  cf = 0;
  a166 = (a105 - -3);
  a119 = ((a105 + a95) - 13);
  a164 = ((a95 * a166) + -86);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 269\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 270\n");
printf("POINT: 271\n");

  if((a78 - 20) < a78){
printf("POINT: 272\n");
  a78  -=  1 ;}
  else{
  a78  -=  0;}
  cf = 0;
  a166 = ((a105 / a105) + 4);
  a119 = (a166 - 3);
  a159 = ((a95 - a119) + 4);
  printf("%d\n", 20); fflush(stdout);
  }
  }
  void calculate_outputm12(int input) {
printf("POINT: 273\n");

  if(((a95 == 8) && (cf == 1))) {
printf("POINT: 274\n");
  calculate_outputm13(input);
  }
  }
  void calculate_outputm15(int input) {
printf("POINT: 275\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 276\n");
printf("POINT: 277\n");

  if((a193 - 20) < a193){
printf("POINT: 278\n");
  a193  -=  4 ;}
  else{
  a193  -=  0;}
  cf = 0;
  a65 = (a102 - 3);
  a166 = ((a102 + a102) + -27);
  a123 = (a166 + -3);
  printf("%d\n", 20); fflush(stdout);
  }
printf("POINT: 279\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 280\n");
printf("POINT: 281\n");

  if((a39 - 20) < a39){
printf("POINT: 282\n");
  a39  -=  4 ;}
  else{
  a39  -=  0;}
  cf = 0;
  a166 = ((a105 - a102) - -19);
  a119 = (a166 - a105);
  a160 = (a119 + 4);
  printf("%d\n", 23); fflush(stdout);
  }
  }
  void calculate_outputm14(int input) {
printf("POINT: 283\n");

  if(((cf == 1) && (a102 == 17))) {
printf("POINT: 284\n");
  calculate_outputm15(input);
  }
  }
  void calculate_outputm17(int input) {
printf("POINT: 285\n");

  if(((input == 4) && (cf == 1))) {
printf("POINT: 286\n");
printf("POINT: 287\n");

  if((a30 - 20) < a30){
printf("POINT: 288\n");
  a30  -=  1 ;}
  else{
  a30  -=  0;}
  cf = 0;
  a61 = (a166 - -3);
  a119 = (a61 - 2);
  a166 = (a61 + -5);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 289\n");

  if(((cf == 1) && (input == 5))) {
printf("POINT: 290\n");
printf("POINT: 291\n");

  if((a57 - 20) < a57){
printf("POINT: 292\n");
  a57  -=  2 ;}
  else{
  a57  -=  0;}
  cf = 0;
  a123 = ((a164 + a166) - 15);
  a65 = (a164 - -1);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 293\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 294\n");
printf("POINT: 295\n");

  if((a187 + 20) > a187){
printf("POINT: 296\n");
  a187  +=  4 ;}
  else{
  a187  +=  0;}
  cf = 0;
  a146 = (a164 - 7);
  a65 = ((a146 - a164) - -18);
  a166 = ((a65 + a65) + -13);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 297\n");

  if((((input == 1) && (cf == 1)) && a57 >= 41)) {
printf("POINT: 298\n");
  cf = 0;
  a151 = (a166 + 2);
  a36 = (a65 + -5);
  a166 = ((a36 + a36) - 6);
  printf("%d\n", 23); fflush(stdout);
  }
  }
  void calculate_outputm16(int input) {
printf("POINT: 299\n");

  if(((cf == 1) && (a164 == 13))) {
printf("POINT: 300\n");
  calculate_outputm17(input);
  }
  }
  void calculate_outputm19(int input) {
printf("POINT: 301\n");

  if(((input == 2) && (cf == 1))) {
printf("POINT: 302\n");
  cf = 0;
  a119 = (a166 - 5);
  a166 = (a119 + 10);
  a160 = (a119 - -5);
  printf("%d\n", 22); fflush(stdout);
  }
  }
  void calculate_outputm18(int input) {
printf("POINT: 303\n");

  if(((a123 == 7) && (cf == 1))) {
printf("POINT: 304\n");
  calculate_outputm19(input);
  }
  }
  void calculate_outputm21(int input) {
printf("POINT: 305\n");

  if(((input == 2) && (cf == 1))) {
printf("POINT: 306\n");
  cf = 0;
  a151 = (a41 + 8);
  a73 = (a166 + 4);
  printf("%d\n", 24); fflush(stdout);
  }
printf("POINT: 307\n");

  if((((input == 4) && (cf == 1)) && a186 <= -28)) {
printf("POINT: 308\n");
printf("POINT: 309\n");

  if((a57 - 20) < a57){
printf("POINT: 310\n");
  a57  -=  3 ;}
  else{
  a57  -=  0;}
  cf = 0;
  a166 = (a41 - -9);
  a119 = ((a41 * a41) - 3);
  a153 = (a41 - -8);
  printf("%d\n", 24); fflush(stdout);
  }
printf("POINT: 311\n");

  if((((input == 1) && (cf == 1)) && a118 >= 43)) {
printf("POINT: 312\n");
  cf = 0;
  a50 = a166;
  a86 = (a151 - -3);
  a166 = a86;
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 313\n");

  if(((cf == 1) && (input == 5))) {
printf("POINT: 314\n");
printf("POINT: 315\n");

  if((a186 - 20) < a186){
printf("POINT: 316\n");
  a186  -=  1 ;}
  else{
  a186  -=  0;}
  cf = 0;
  a65 = ((a151 - a166) + 10);
  a94 = ((a166 / a151) - -12);
  a166 = ((a41 + a65) - 6);
  printf("%d\n", 20); fflush(stdout);
  }
printf("POINT: 317\n");

  if(((input == 3) && (cf == 1))) {
printf("POINT: 318\n");
printf("POINT: 319\n");

  if((a39 - 20) < a39){
printf("POINT: 320\n");
  a39  -=  2 ;}
  else{
  a39  -=  0;}
  cf = 0;
  a151 = (a41 - -8);
  a73 = ((a151 + a166) + -7);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm20(int input) {
printf("POINT: 321\n");

  if(((a41 == 3) && (cf == 1))) {
printf("POINT: 322\n");
  calculate_outputm21(input);
  }
  }
  void calculate_outputm23(int input) {
printf("POINT: 323\n");

  if((((cf == 1) && (input == 5)) && (a134 % 2==0))) {
printf("POINT: 324\n");
printf("POINT: 325\n");

  if((a39 - 20) < a39){
printf("POINT: 326\n");
  a39  -=  3 ;}
  else{
  a39  -=  0;}
  cf = 0;
  a34 = (a151 - 6);
  a166 = ((a73 - a151) + 16);
  a42 = (a166 - -6);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 327\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 328\n");
printf("POINT: 329\n");

  if((a7 + 20) > a7){
printf("POINT: 330\n");
  a7  +=  4 ;}
  else{
  a7  +=  0;}
printf("POINT: 331\n");

  if((a181 + 20) > a181){
printf("POINT: 332\n");
  a181  +=  2 ;}
  else{
  a181  +=  0;}
printf("POINT: 333\n");

  if((a26 + 20) > a26){
printf("POINT: 334\n");
  a26  +=  2 ;}
  else{
  a26  +=  0;}
printf("POINT: 335\n");

  if((a39 - 20) < a39){
printf("POINT: 336\n");
  a39  -=  2 ;}
  else{
  a39  -=  0;}
  cf = 0;
  a166 = (a73 + 1);
  a95 = (a73 + 3);
  a105 = ((a166 - a166) - -9);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 337\n");

  if(((input == 4) && (cf == 1))) {
printf("POINT: 338\n");
printf("POINT: 339\n");

  if((a157 + 20) > a157){
printf("POINT: 340\n");
  a157  +=  2 ;}
  else{
  a157  +=  0;}
printf("POINT: 341\n");

  if((a78 - 20) < a78){
printf("POINT: 342\n");
  a78  -=  1 ;}
  else{
  a78  -=  0;}
  cf = 0;
  a86 = (a73 + a166);
  a20 = (a151 - -1);
  a166 = a151;
  printf("%d\n", 22); fflush(stdout);
  }
printf("POINT: 343\n");

  if(((input == 2) && (cf == 1))) {
printf("POINT: 344\n");
printf("POINT: 345\n");

  if((a78 - 20) < a78){
printf("POINT: 346\n");
  a78  -=  1 ;}
  else{
  a78  -=  0;}
  cf = 0;
  a61 = (a73 + 8);
  a119 = (a61 - 5);
  a166 = (a61 + -8);
  printf("%d\n", 23); fflush(stdout);
  }
  }
  void calculate_outputm24(int input) {
printf("POINT: 347\n");

  if(((cf == 1) && (input == 4))) {
printf("POINT: 348\n");
  cf = 0;
  a166 = (a73 - 6);
  a114 = (a151 + 2);
  a105 = ((a166 / a151) - -12);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 349\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 350\n");
printf("POINT: 351\n");

  if((a186 + 20) > a186){
printf("POINT: 352\n");
  a186  +=  1 ;}
  else{
  a186  +=  0;}
  cf = 0;
  
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 353\n");

  if((((input == 5) && (cf == 1)) && a187 <= -33)) {
printf("POINT: 354\n");
  cf = 0;
  a159 = (a73 - 4);
  a119 = ((a166 / a166) - -1);
  a166 = (a73 + -7);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 355\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 356\n");
printf("POINT: 357\n");

  if((a26 - 20) < a26){
printf("POINT: 358\n");
  a26  -=  3 ;}
  else{
  a26  -=  0;}
  cf = 0;
  
  printf("%d\n", 24); fflush(stdout);
  }
printf("POINT: 359\n");

  if((((input == 1) && (cf == 1)) && a39 >= 40)) {
printf("POINT: 360\n");
printf("POINT: 361\n");

  if((a193 - 20) < a193){
printf("POINT: 362\n");
  a193  -=  1 ;}
  else{
  a193  -=  0;}
  cf = 0;
  a166 = (a151 + -5);
  a105 = (a73 - 5);
  a31 = (a166 + 5);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm22(int input) {
printf("POINT: 363\n");

  if(((a73 == 5) && (cf == 1))) {
printf("POINT: 364\n");
  calculate_outputm23(input);
  }
printf("POINT: 365\n");

  if(((cf == 1) && (a73 == 12))) {
printf("POINT: 366\n");
  calculate_outputm24(input);
  }
  }
  void calculate_outputm26(int input) {
printf("POINT: 367\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 368\n");
  cf = 0;
  a61 = ((a151 - a135) + 3);
  a119 = (a135 + 1);
  a166 = ((a119 + a119) + -11);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 369\n");

  if(((input == 5) && (cf == 1))) {
printf("POINT: 370\n");
  cf = 0;
  a166 = ((a135 + a151) + -14);
  a65 = (a166 + 7);
  a123 = ((a151 + a65) - 19);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm27(int input) {
printf("POINT: 371\n");

  if(((cf == 1) && (input == 5))) {
printf("POINT: 372\n");
  cf = 0;
  a146 = ((a151 + a166) - 11);
  a166 = ((a146 + a151) + -16);
  a10 = ((a166 / a146) + 11);
  printf("%d\n", 24); fflush(stdout);
  }
printf("POINT: 373\n");

  if((((cf == 1) && (input == 1)) && a7 == 9554)) {
printf("POINT: 374\n");
printf("POINT: 375\n");

  if((a185 - 20) < a185){
printf("POINT: 376\n");
  a185  -=  2 ;}
  else{
  a185  -=  0;}
  cf = 0;
  a166 = (a135 - -1);
  a86 = a135;
  a18 = (a86 - -3);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 377\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 378\n");
printf("POINT: 379\n");

  if((a134 + 20) > a134){
printf("POINT: 380\n");
  a134  +=  2 ;}
  else{
  a134  +=  0;}
printf("POINT: 381\n");

  if((a187 + 20) > a187){
printf("POINT: 382\n");
  a187  +=  3 ;}
  else{
  a187  +=  0;}
  cf = 0;
  a151 = (a166 + 3);
  a73 = (a151 - 6);
  printf("%d\n", 20); fflush(stdout);
  }
  }
  void calculate_outputm25(int input) {
printf("POINT: 383\n");

  if(((cf == 1) && (a135 == 7))) {
printf("POINT: 384\n");
  calculate_outputm26(input);
  }
printf("POINT: 385\n");

  if(((a135 == 10) && (cf == 1))) {
printf("POINT: 386\n");
  calculate_outputm27(input);
  }
  }
  void calculate_outputm29(int input) {
printf("POINT: 387\n");

  if(((input == 2) && (cf == 1))) {
printf("POINT: 388\n");
printf("POINT: 389\n");

  if((a78 - 20) < a78){
printf("POINT: 390\n");
  a78  -=  2 ;}
  else{
  a78  -=  0;}
  cf = 0;
  a65 = ((a166 + a146) + -1);
  a123 = ((a166 / a166) - -7);
  a166 = ((a65 + a65) - 21);
  printf("%d\n", 20); fflush(stdout);
  }
printf("POINT: 391\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 392\n");
  cf = 0;
  a86 = ((a146 / a146) + 13);
  a166 = (a146 + 5);
  a170 = (a65 - -1);
  printf("%d\n", 22); fflush(stdout);
  }
printf("POINT: 393\n");

  if(((input == 4) && (cf == 1))) {
printf("POINT: 394\n");
printf("POINT: 395\n");

  if((a193 + 20) > a193){
printf("POINT: 396\n");
  a193  +=  2 ;}
  else{
  a193  +=  0;}
printf("POINT: 397\n");

  if((a78 + 20) > a78){
printf("POINT: 398\n");
  a78  +=  1 ;}
  else{
  a78  +=  0;}
printf("POINT: 399\n");

  if((a39 + 20) > a39){
printf("POINT: 400\n");
  a39  +=  1 ;}
  else{
  a39  +=  0;}
printf("POINT: 401\n");

  if((a185 + 20) > a185){
printf("POINT: 402\n");
  a185  +=  1 ;}
  else{
  a185  +=  0;}
printf("POINT: 403\n");

  if((a83 + 20) > a83){
printf("POINT: 404\n");
  a83  +=  4 ;}
  else{
  a83  +=  0;}
printf("POINT: 405\n");

  if((a118 + 20) > a118){
printf("POINT: 406\n");
  a118  +=  2 ;}
  else{
  a118  +=  0;}
printf("POINT: 407\n");

  if((a57 + 20) > a57){
printf("POINT: 408\n");
  a57  +=  2 ;}
  else{
  a57  +=  0;}
printf("POINT: 409\n");

  if((a165 + 20) > a165){
printf("POINT: 410\n");
  a165  +=  2 ;}
  else{
  a165  +=  0;}
  cf = 0;
  a164 = (a65 + 2);
  a166 = ((a65 / a164) + 7);
  a65 = (a164 + -1);
  printf("%d\n", 25); fflush(stdout);
  }
  }
  void calculate_outputm28(int input) {
printf("POINT: 411\n");

  if(((a65 == 11) && (cf == 1))) {
printf("POINT: 412\n");
  calculate_outputm29(input);
  }
  }
  void calculate_outputm31(int input) {
printf("POINT: 413\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 414\n");
printf("POINT: 415\n");

  if((a78 - 20) < a78){
printf("POINT: 416\n");
  a78  -=  3 ;}
  else{
  a78  -=  0;}
  cf = 0;
  a166 = (a56 + -8);
  a151 = (a34 + 9);
  a73 = (a151 - -1);
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 417\n");

  if(((input == 3) && (cf == 1))) {
printf("POINT: 418\n");
  cf = 0;
  a42 = (a56 + -2);
  a34 = (a166 - 5);
  printf("%d\n", 22); fflush(stdout);
  }
  }
  void calculate_outputm30(int input) {
printf("POINT: 419\n");

  if(((cf == 1) && (a56 == 16))) {
printf("POINT: 420\n");
  calculate_outputm31(input);
  }
  }
  void calculate_outputm33(int input) {
printf("POINT: 421\n");

  if(((cf == 1) && (input == 4))) {
printf("POINT: 422\n");
printf("POINT: 423\n");

  if((a185 - 20) < a185){
printf("POINT: 424\n");
  a185  -=  2 ;}
  else{
  a185  -=  0;}
  cf = 0;
  
  printf("%d\n", 22); fflush(stdout);
  }
  }
  void calculate_outputm32(int input) {
printf("POINT: 425\n");

  if(((a158 == 10) && (cf == 1))) {
printf("POINT: 426\n");
  calculate_outputm33(input);
  }
  }
  void calculate_outputm35(int input) {
printf("POINT: 427\n");

  if(((input == 3) && (cf == 1))) {
printf("POINT: 428\n");
printf("POINT: 429\n");

  if((a193 + 20) > a193){
printf("POINT: 430\n");
  a193  +=  1 ;}
  else{
  a193  +=  0;}
  cf = 0;
  
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 431\n");

  if((((input == 1) && (cf == 1)) && a185 >= 43)) {
printf("POINT: 432\n");
  cf = 0;
  a1 = ((a34 * a85) - 24);
  a166 = ((a85 / a34) - -9);
  a146 = ((a85 * a166) + -32);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 433\n");

  if(((input == 4) && (cf == 1))) {
printf("POINT: 434\n");
  cf = 0;
  a69 = ((a34 / a166) - -7);
  a151 = ((a166 - a69) - -9);
  a166 = (a151 + -4);
  printf("%d\n", 22); fflush(stdout);
  }
  }
  void calculate_outputm34(int input) {
printf("POINT: 435\n");

  if(((a85 == 4) && (cf == 1))) {
printf("POINT: 436\n");
  calculate_outputm35(input);
  }
  }
  void calculate_outputm37(int input) {
printf("POINT: 437\n");

  if(((input == 1) && (cf == 1))) {
printf("POINT: 438\n");
printf("POINT: 439\n");

  if((a185 - 20) < a185){
printf("POINT: 440\n");
  a185  -=  4 ;}
  else{
  a185  -=  0;}
  cf = 0;
  a34 = ((a86 + a20) - 18);
  a166 = ((a34 + a86) - 10);
  a158 = (a86 + -5);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 441\n");

  if((((input == 5) && (cf == 1)) && a30 >= 42)) {
printf("POINT: 442\n");
printf("POINT: 443\n");

  if((a78 - 20) < a78){
printf("POINT: 444\n");
  a78  -=  1 ;}
  else{
  a78  -=  0;}
  cf = 0;
  a105 = a166;
  a151 = a105;
  a166 = (a105 - 5);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 445\n");

  if((((input == 2) && (cf == 1)) && (a181 % 2==0))) {
printf("POINT: 446\n");
  cf = 0;
  a18 = (a166 + -3);
  a105 = (a166 - 3);
  a166 = (a86 - 7);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 447\n");

  if(((cf == 1) && (input == 4))) {
printf("POINT: 448\n");
printf("POINT: 449\n");

  if((a187 + 20) > a187){
printf("POINT: 450\n");
  a187  +=  4 ;}
  else{
  a187  +=  0;}
  cf = 0;
  a151 = a166;
  a73 = (a166 - -1);
  a166 = ((a20 * a20) - 136);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 451\n");

  if(((input == 3) && (cf == 1))) {
printf("POINT: 452\n");
printf("POINT: 453\n");

  if((a30 + 20) > a30){
printf("POINT: 454\n");
  a30  +=  1 ;}
  else{
  a30  +=  0;}
printf("POINT: 455\n");

  if((a187 + 20) > a187){
printf("POINT: 456\n");
  a187  +=  1 ;}
  else{
  a187  +=  0;}
  cf = 0;
  a166 = (a86 - 5);
  a151 = (a166 + 6);
  a135 = (a20 + -2);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm36(int input) {
printf("POINT: 457\n");

  if(((a20 == 12) && (cf == 1))) {
printf("POINT: 458\n");
  calculate_outputm37(input);
  }
  }
  void calculate_outputm39(int input) {
printf("POINT: 459\n");

  if((((cf == 1) && (input == 1)) && (a165 % 2==0))) {
printf("POINT: 460\n");
printf("POINT: 461\n");

  if((a186 + 20) > a186){
printf("POINT: 462\n");
  a186  +=  1 ;}
  else{
  a186  +=  0;}
  cf = 0;
  a166 = ((a170 * a86) + -158);
  a34 = ((a170 * a86) + -167);
  a144 = (a166 + 4);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 463\n");

  if(((cf == 1) && (input == 5))) {
printf("POINT: 464\n");
printf("POINT: 465\n");

  if((a193 - 20) < a193){
printf("POINT: 466\n");
  a193  -=  3 ;}
  else{
  a193  -=  0;}
  cf = 0;
  a166 = ((a86 - a170) + 6);
  a151 = (a166 - -6);
  a135 = (a151 + -10);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 467\n");

  if(((cf == 1) && (input == 4))) {
printf("POINT: 468\n");
  cf = 0;
  a151 = (a170 + -1);
  a166 = (a151 + -3);
  a73 = ((a170 + a86) - 14);
  printf("%d\n", 24); fflush(stdout);
  }
printf("POINT: 469\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 470\n");
printf("POINT: 471\n");

  if((a57 - 20) < a57){
printf("POINT: 472\n");
  a57  -=  3 ;}
  else{
  a57  -=  0;}
  cf = 0;
  a166 = (a86 + -4);
  a34 = ((a166 * a166) + -92);
  a85 = ((a86 - a170) + 2);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 473\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 474\n");
printf("POINT: 475\n");

  if((a187 + 20) > a187){
printf("POINT: 476\n");
  a187  +=  1 ;}
  else{
  a187  +=  0;}
  cf = 0;
  a119 = ((a170 - a166) - -7);
  a166 = (a119 + -3);
  a61 = ((a86 * a86) + -186);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm38(int input) {
printf("POINT: 477\n");

  if(((cf == 1) && (a170 == 12))) {
printf("POINT: 478\n");
  calculate_outputm39(input);
  }
  }
  void calculate_outputm41(int input) {
printf("POINT: 479\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 480\n");
  cf = 0;
  a158 = ((a160 / a166) - -10);
  a34 = (a160 - -1);
  a166 = a158;
  printf("%d\n", 22); fflush(stdout);
  }
printf("POINT: 481\n");

  if(((cf == 1) && (input == 1))) {
printf("POINT: 482\n");
printf("POINT: 483\n");

  if((a193 - 20) < a193){
printf("POINT: 484\n");
  a193  -=  1 ;}
  else{
  a193  -=  0;}
  cf = 0;
  a29 = (a166 + -6);
  a119 = a160;
  a166 = (a119 + -1);
  printf("%d\n", 22); fflush(stdout);
  }
printf("POINT: 485\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 486\n");
  cf = 0;
  a123 = (a160 - -1);
  a65 = (a166 + 2);
  a166 = a123;
  printf("%d\n", 22); fflush(stdout);
  }
  }
  void calculate_outputm42(int input) {
printf("POINT: 487\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 488\n");
printf("POINT: 489\n");

  if((a193 - 20) < a193){
printf("POINT: 490\n");
  a193  -=  4 ;}
  else{
  a193  -=  0;}
  cf = 0;
  a105 = ((a119 - a166) + 20);
  a166 = (a160 + -1);
  a102 = (a166 + 11);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 491\n");

  if(((input == 5) && (cf == 1))) {
printf("POINT: 492\n");
printf("POINT: 493\n");

  if((a193 - 20) < a193){
printf("POINT: 494\n");
  a193  -=  3 ;}
  else{
  a193  -=  0;}
  cf = 0;
  a146 = (a119 + 5);
  a31 = ((a160 - a119) + 10);
  a166 = (a31 + -6);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 495\n");

  if(((input == 4) && (cf == 1))) {
printf("POINT: 496\n");
printf("POINT: 497\n");

  if((a26 - 20) < a26){
printf("POINT: 498\n");
  a26  -=  4 ;}
  else{
  a26  -=  0;}
  cf = 0;
  a166 = (a160 - 2);
  a86 = (a160 + 1);
  a119 = ((a86 * a166) - 36);
  printf("%d\n", 22); fflush(stdout);
  }
printf("POINT: 499\n");

  if(((cf == 1) && (input == 2))) {
printf("POINT: 500\n");
  cf = 0;
  a166 = ((a160 * a119) - 4);
  a34 = a119;
  a56 = ((a34 + a34) - -12);
  printf("%d\n", 22); fflush(stdout);
  }
  }
  void calculate_outputm40(int input) {
printf("POINT: 501\n");

  if(((a160 == 6) && (cf == 1))) {
printf("POINT: 502\n");
  calculate_outputm41(input);
  }
printf("POINT: 503\n");

  if(((a160 == 7) && (cf == 1))) {
printf("POINT: 504\n");
  calculate_outputm42(input);
  }
  }
  void calculate_outputm44(int input) {
printf("POINT: 505\n");

  if((((cf == 1) && (input == 2)) && a78 >= 20)) {
printf("POINT: 506\n");
  cf = 0;
  a86 = ((a153 / a119) - -9);
  a18 = a119;
  a166 = (a153 - -1);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 507\n");

  if(((cf == 1) && (input == 3))) {
printf("POINT: 508\n");
  cf = 0;
  a151 = ((a119 * a153) - 52);
  a166 = a151;
  a41 = (a166 - 5);
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 509\n");

  if(((input == 5) && (cf == 1))) {
printf("POINT: 510\n");
  cf = 0;
  a166 = (a153 + -5);
  a61 = (a153 + 2);
  a119 = (a153 + -2);
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 511\n");

  if(((input == 4) && (cf == 1))) {
printf("POINT: 512\n");
printf("POINT: 513\n");

  if((a187 - 20) < a187){
printf("POINT: 514\n");
  a187  -=  2 ;}
  else{
  a187  -=  0;}
printf("POINT: 515\n");

  if((a38 + 20) > a38){
printf("POINT: 516\n");
  a38  +=  2 ;}
  else{
  a38  +=  0;}
printf("POINT: 517\n");

  if((a186 - 20) < a186){
printf("POINT: 518\n");
  a186  -=  2 ;}
  else{
  a186  -=  0;}
printf("POINT: 519\n");

  if((a78 - 20) < a78){
printf("POINT: 520\n");
  a78  -=  2 ;}
  else{
  a78  -=  0;}
  cf = 0;
  a119 = (a153 + -8);
  a166 = ((a119 / a153) + 5);
  a159 = (a153 + -1);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm43(int input) {
printf("POINT: 521\n");

  if(((cf == 1) && (a153 == 10))) {
printf("POINT: 522\n");
  calculate_outputm44(input);
  }
  }
  
  void calculate_output(int input) {
  cf = 1;
  
printf("POINT: 523\n");

  if(((a166 == 5) && (cf == 1))) {
printf("POINT: 524\n");
printf("POINT: 525\n");

  if(((a119 == 2) && (cf == 1))) {
printf("POINT: 526\n");
  calculate_outputm1(input);
  }
printf("POINT: 527\n");

  if(((cf == 1) && (a119 == 3))) {
printf("POINT: 528\n");
  calculate_outputm4(input);
  }
printf("POINT: 529\n");

  if(((a119 == 4) && (cf == 1))) {
printf("POINT: 530\n");
  calculate_outputm6(input);
  }
printf("POINT: 531\n");

  if(((a119 == 7) && (cf == 1))) {
printf("POINT: 532\n");
  calculate_outputm8(input);
  }
printf("POINT: 533\n");

  if(((a119 == 8) && (cf == 1))) {
printf("POINT: 534\n");
  calculate_outputm10(input);
  }
  }
printf("POINT: 535\n");

  if(((cf == 1) && (a166 == 6))) {
printf("POINT: 536\n");
printf("POINT: 537\n");

  if(((a105 == 9) && (cf == 1))) {
printf("POINT: 538\n");
  calculate_outputm12(input);
  }
printf("POINT: 539\n");

  if(((cf == 1) && (a105 == 10))) {
printf("POINT: 540\n");
  calculate_outputm14(input);
  }
  }
printf("POINT: 541\n");

  if(((a166 == 7) && (cf == 1))) {
printf("POINT: 542\n");
printf("POINT: 543\n");

  if(((a65 == 12) && (cf == 1))) {
printf("POINT: 544\n");
  calculate_outputm16(input);
  }
printf("POINT: 545\n");

  if(((a65 == 14) && (cf == 1))) {
printf("POINT: 546\n");
  calculate_outputm18(input);
  }
  }
printf("POINT: 547\n");

  if(((a166 == 8) && (cf == 1))) {
printf("POINT: 548\n");
printf("POINT: 549\n");

  if(((cf == 1) && (a151 == 8))) {
printf("POINT: 550\n");
  calculate_outputm20(input);
  }
printf("POINT: 551\n");

  if(((cf == 1) && (a151 == 11))) {
printf("POINT: 552\n");
  calculate_outputm22(input);
  }
printf("POINT: 553\n");

  if(((a151 == 14) && (cf == 1))) {
printf("POINT: 554\n");
  calculate_outputm25(input);
  }
  }
printf("POINT: 555\n");

  if(((a166 == 9) && (cf == 1))) {
printf("POINT: 556\n");
printf("POINT: 557\n");

  if(((a146 == 6) && (cf == 1))) {
printf("POINT: 558\n");
  calculate_outputm28(input);
  }
  }
printf("POINT: 559\n");

  if(((a166 == 10) && (cf == 1))) {
printf("POINT: 560\n");
printf("POINT: 561\n");

  if(((a34 == 2) && (cf == 1))) {
printf("POINT: 562\n");
  calculate_outputm30(input);
  }
printf("POINT: 563\n");

  if(((cf == 1) && (a34 == 7))) {
printf("POINT: 564\n");
  calculate_outputm32(input);
  }
printf("POINT: 565\n");

  if(((a34 == 8) && (cf == 1))) {
printf("POINT: 566\n");
  calculate_outputm34(input);
  }
  }
printf("POINT: 567\n");

  if(((cf == 1) && (a166 == 11))) {
printf("POINT: 568\n");
printf("POINT: 569\n");

  if(((cf == 1) && (a86 == 13))) {
printf("POINT: 570\n");
  calculate_outputm36(input);
  }
printf("POINT: 571\n");

  if(((cf == 1) && (a86 == 14))) {
printf("POINT: 572\n");
  calculate_outputm38(input);
  }
  }
printf("POINT: 573\n");

  if(((a166 == 12) && (cf == 1))) {
printf("POINT: 574\n");
printf("POINT: 575\n");

  if(((cf == 1) && (a119 == 2))) {
printf("POINT: 576\n");
  calculate_outputm40(input);
  }
printf("POINT: 577\n");

  if(((a119 == 6) && (cf == 1))) {
printf("POINT: 578\n");
  calculate_outputm43(input);
  }
  }
  errorCheck();
  
printf("POINT: 579\n");

  if((cf == 1)){
printf("POINT: 580\n");
  
  
  }
  //fprintf(stderr, "Invalid input: %d\n", input);
  }
  
  
  int main()
  {
  kappa = 0;
  // main i/o-loop
  int symb;
printf("POINT: 581\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++){
klee_make_symbolic(&symb, sizeof(int ), "symb"); 

klee_make_symbolic(&a167, sizeof(int ), "a167"); 
klee_make_symbolic(&a53, sizeof(int ), "a53"); 
klee_make_symbolic(&a18, sizeof(int ), "a18"); 
klee_make_symbolic(&a131, sizeof(int ), "a131"); 
klee_make_symbolic(&a119, sizeof(int ), "a119"); 
klee_make_symbolic(&a63, sizeof(int ), "a63"); 
klee_make_symbolic(&a73, sizeof(int ), "a73"); 
klee_make_symbolic(&a170, sizeof(int ), "a170"); 
klee_make_symbolic(&a56, sizeof(int ), "a56"); 
klee_make_symbolic(&a168, sizeof(int ), "a168"); 
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a167,a53,a18,a131,a119,a63,a73,a170,a56,a168);
  calculate_output(symb);
  }
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a167,a53,a18,a131,a119,a63,a73,a170,a56,a168);  
  return 0;
  
  }
  
  
