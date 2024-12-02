  #include<stdio.h>
  #ifdef LLBMC
  #include <llbmc.h>
  #else
  //removed
  #endif
  
  #define BOUND 4 //BOUND 5
  int kappa;
  int input,output;
  #include <assert.h>
  #include <math.h>
  #include <stdlib.h>
  // inputs
  int inputs[] = {2,5,3,1,4};
  
int a114,a36,a59,a107,a17,a84,a123,a73,a128,a152;

  int a94 = 15;
  int a74 = 9;
  int a195 = 9;
  int a61 = 7;
  int a168 = 11;
  int a117 = 6;
  int a185 = 3;
  int a163 = 3;
  int a149 = 9;
  int a23 = 4;
  int a109 = 3;
  int a89 = 6;
  int a95 = 1;
  int a58 = 13;
  int a4 = 4;
  int a180 = 13;
  int a16 = 11;
  int a150 = 14;
  int a190 = 11;
  int a41 = 1;
  int a122 = 10;
  int a164 = 8;
  int a173 = 9;
  int a105 = 2;
  int cf = 1;
  int a44 = 6;
  int a33 = 15;
  int a43 = 2;
  int a200 = 12;
  int a68 = 4;
  int a144 = 8;
  int a82 = 15;
  int a102 = 11;
  int a113 = 9;
  int a45 = 14;
  int a40 = 11;
  int a91 = 12;
  int a42 = 10;
  int a21 = 9;
  int a76 = 7;
  int a39 = 11;
  int a72 = 14;
  int a64 = 5;
  int a88 = 2;
  int a151 = 1;
  int a125 = 1;
  int a86 = 1;
  int a146 = 1;
  int a197 = 3;
  int a62 = 1;
  int a56 = 1;
  int a49 = 1;
  int a182 = 1;
  int a177 = 1;
  int a83 = 2;
  int a3 = 1;
  int a50 = 1;
  int a155 = 0;
  int a160 = 1;
  int a175 = 1;
  int a171 = 1;
  int a60 = 1;
  int a158 = 1;
  int a2 = 0;
  int a157 = 1;
  int a97 = 0;
  int a170 = 1;
  int a24 = 1;
  int a29 = 2;
  int a198 = 2;
  int a162 = 3;
  int a145 = 1;
  int a51 = 1;
  int a189 = 1;
  int a108 = 1;
  int a124 = 1;
  int a141 = 1;
  
  
  void errorCheck() {
printf("POINT: 1\n");

  if((((a173 == 8) && (a44 == 12)) && (a33 == 15))){
printf("POINT: 2\n");
  cf = 0;
  //error_0: assert(!//error_0);
  }
printf("POINT: 3\n");

  if((((a173 == 14) && (a44 == 12)) && (a33 == 15))){
printf("POINT: 4\n");
  cf = 0;
  //error_1: assert(!//error_1);
  }
printf("POINT: 5\n");

  if((((a74 == 10) && (a72 == 8)) && (a33 == 8))){
printf("POINT: 6\n");
  cf = 0;
  //error_2: assert(!//error_2);
  }
printf("POINT: 7\n");

  if((((a150 == 13) && (a91 == 9)) && (a33 == 9))){
printf("POINT: 8\n");
  cf = 0;
  //error_3: assert(!//error_3);
  }
printf("POINT: 9\n");

  if((((a64 == 9) && (a128 == 15)) && (a33 == 11))){
printf("POINT: 10\n");
  cf = 0;
  //error_4: assert(!//error_4);
  }
printf("POINT: 11\n");

  if((((a73 == 12) && (a113 == 11)) && (a33 == 13))){
printf("POINT: 12\n");
  cf = 0;
  //error_5: assert(!//error_5);
  }
printf("POINT: 13\n");

  if((((a59 == 11) && (a113 == 6)) && (a33 == 13))){
printf("POINT: 14\n");
  cf = 0;
  //error_6: assert(!//error_6);
  }
printf("POINT: 15\n");

  if((((a144 == 11) && (a195 == 12)) && (a33 == 12))){
printf("POINT: 16\n");
  cf = 0;
  //error_7: assert(!//error_7);
  }
printf("POINT: 17\n");

  if((((a95 == 3) && (a128 == 9)) && (a33 == 11))){
printf("POINT: 18\n");
  cf = 0;
  //error_8: assert(!//error_8);
  }
printf("POINT: 19\n");

  if((((a190 == 10) && (a200 == 9)) && (a33 == 14))){
printf("POINT: 20\n");
  cf = 0;
  //error_9: assert(!//error_9);
  }
printf("POINT: 21\n");

  if((((a39 == 14) && (a91 == 10)) && (a33 == 9))){
printf("POINT: 22\n");
  cf = 0;
  //error_10: assert(!//error_10);
  }
printf("POINT: 23\n");

  if((((a105 == 6) && (a200 == 6)) && (a33 == 14))){
printf("POINT: 24\n");
  cf = 0;
  //error_11: assert(!//error_11);
  }
printf("POINT: 25\n");

  if((((a144 == 6) && (a195 == 12)) && (a33 == 12))){
printf("POINT: 26\n");
  cf = 0;
  //error_12: assert(!//error_12);
  }
printf("POINT: 27\n");

  if((((a107 == 5) && (a72 == 13)) && (a33 == 8))){
printf("POINT: 28\n");
  cf = 0;
  //error_13: assert(!//error_13);
  }
printf("POINT: 29\n");

  if((((a163 == 5) && (a200 == 13)) && (a33 == 14))){
printf("POINT: 30\n");
  cf = 0;
  //error_14: assert(!//error_14);
  }
printf("POINT: 31\n");

  if((((a123 == 4) && (a113 == 7)) && (a33 == 13))){
printf("POINT: 32\n");
  cf = 0;
  //error_15: assert(!//error_15);
  }
printf("POINT: 33\n");

  if((((a150 == 16) && (a91 == 9)) && (a33 == 9))){
printf("POINT: 34\n");
  cf = 0;
  //error_16: assert(!//error_16);
  }
printf("POINT: 35\n");

  if((((a72 == 14) && (a200 == 12)) && (a33 == 14))){
printf("POINT: 36\n");
  cf = 0;
  //error_17: assert(!//error_17);
  }
printf("POINT: 37\n");

  if((((a23 == 8) && (a72 == 9)) && (a33 == 8))){
printf("POINT: 38\n");
  cf = 0;
  //error_18: assert(!//error_18);
  }
printf("POINT: 39\n");

  if((((a42 == 8) && (a128 == 14)) && (a33 == 11))){
printf("POINT: 40\n");
  cf = 0;
  //error_19: assert(!//error_19);
  }
printf("POINT: 41\n");

  if((((a43 == 8) && (a200 == 7)) && (a33 == 14))){
printf("POINT: 42\n");
  cf = 0;
  //error_20: assert(!//error_20);
  }
printf("POINT: 43\n");

  if((((a68 == 9) && (a91 == 14)) && (a33 == 9))){
printf("POINT: 44\n");
  cf = 0;
  //error_21: assert(!//error_21);
  }
printf("POINT: 45\n");

  if((((a168 == 8) && (a200 == 11)) && (a33 == 14))){
printf("POINT: 46\n");
  cf = 0;
  //error_22: assert(!//error_22);
  }
printf("POINT: 47\n");

  if((((a17 == 4) && (a94 == 11)) && (a33 == 10))){
printf("POINT: 48\n");
  cf = 0;
  //error_23: assert(!//error_23);
  }
printf("POINT: 49\n");

  if((((a82 == 9) && (a94 == 13)) && (a33 == 10))){
printf("POINT: 50\n");
  cf = 0;
  //error_24: assert(!//error_24);
  }
printf("POINT: 51\n");

  if((((a164 == 10) && (a91 == 11)) && (a33 == 9))){
printf("POINT: 52\n");
  cf = 0;
  //error_25: assert(!//error_25);
  }
printf("POINT: 53\n");

  if((((a152 == 5) && (a195 == 9)) && (a33 == 12))){
printf("POINT: 54\n");
  cf = 0;
  //error_26: assert(!//error_26);
  }
printf("POINT: 55\n");

  if((((a4 == 3) && (a94 == 8)) && (a33 == 10))){
printf("POINT: 56\n");
  cf = 0;
  //error_27: assert(!//error_27);
  }
printf("POINT: 57\n");

  if((((a89 == 10) && (a91 == 12)) && (a33 == 9))){
printf("POINT: 58\n");
  cf = 0;
  //error_28: assert(!//error_28);
  }
printf("POINT: 59\n");

  if((((a68 == 10) && (a91 == 14)) && (a33 == 9))){
printf("POINT: 60\n");
  cf = 0;
  //error_29: assert(!//error_29);
  }
printf("POINT: 61\n");

  if((((a39 == 15) && (a91 == 10)) && (a33 == 9))){
printf("POINT: 62\n");
  cf = 0;
  //error_30: assert(!//error_30);
  }
printf("POINT: 63\n");

  if((((a173 == 10) && (a44 == 12)) && (a33 == 15))){
printf("POINT: 64\n");
  cf = 0;
  //error_31: assert(!//error_31);
  }
printf("POINT: 65\n");

  if((((a72 == 11) && (a128 == 8)) && (a33 == 11))){
printf("POINT: 66\n");
  cf = 0;
  //error_32: assert(!//error_32);
  }
printf("POINT: 67\n");

  if((((a36 == 11) && (a128 == 12)) && (a33 == 11))){
printf("POINT: 68\n");
  cf = 0;
  //error_33: assert(!//error_33);
  }
printf("POINT: 69\n");

  if((((a95 == 2) && (a128 == 9)) && (a33 == 11))){
printf("POINT: 70\n");
  cf = 0;
  //error_34: assert(!//error_34);
  }
printf("POINT: 71\n");

  if((((a76 == 8) && (a91 == 8)) && (a33 == 9))){
printf("POINT: 72\n");
  cf = 0;
  //error_35: assert(!//error_35);
  }
printf("POINT: 73\n");

  if((((a144 == 4) && (a195 == 12)) && (a33 == 12))){
printf("POINT: 74\n");
  cf = 0;
  //error_36: assert(!//error_36);
  }
printf("POINT: 75\n");

  if((((a109 == 8) && (a72 == 10)) && (a33 == 8))){
printf("POINT: 76\n");
  cf = 0;
  //error_37: assert(!//error_37);
  }
printf("POINT: 77\n");

  if((((a163 == 7) && (a200 == 13)) && (a33 == 14))){
printf("POINT: 78\n");
  cf = 0;
  //error_38: assert(!//error_38);
  }
printf("POINT: 79\n");

  if((((a173 == 11) && (a44 == 12)) && (a33 == 15))){
printf("POINT: 80\n");
  cf = 0;
  //error_39: assert(!//error_39);
  }
printf("POINT: 81\n");

  if((((a72 == 13) && (a128 == 8)) && (a33 == 11))){
printf("POINT: 82\n");
  cf = 0;
  //error_40: assert(!//error_40);
  }
printf("POINT: 83\n");

  if((((a68 == 6) && (a91 == 14)) && (a33 == 9))){
printf("POINT: 84\n");
  cf = 0;
  //error_41: assert(!//error_41);
  }
printf("POINT: 85\n");

  if((((a72 == 9) && (a128 == 8)) && (a33 == 11))){
printf("POINT: 86\n");
  cf = 0;
  //error_42: assert(!//error_42);
  }
printf("POINT: 87\n");

  if((((a149 == 9) && (a91 == 7)) && (a33 == 9))){
printf("POINT: 88\n");
  cf = 0;
  //error_43: assert(!//error_43);
  }
printf("POINT: 89\n");

  if((((a36 == 9) && (a128 == 12)) && (a33 == 11))){
printf("POINT: 90\n");
  cf = 0;
  //error_44: assert(!//error_44);
  }
printf("POINT: 91\n");

  if((((a122 == 6) && (a44 == 11)) && (a33 == 15))){
printf("POINT: 92\n");
  cf = 0;
  //error_45: assert(!//error_45);
  }
printf("POINT: 93\n");

  if((((a76 == 14) && (a72 == 12)) && (a33 == 8))){
printf("POINT: 94\n");
  cf = 0;
  //error_46: assert(!//error_46);
  }
printf("POINT: 95\n");

  if((((a185 == 6) && (a94 == 14)) && (a33 == 10))){
printf("POINT: 96\n");
  cf = 0;
  //error_47: assert(!//error_47);
  }
printf("POINT: 97\n");

  if((((a72 == 14) && (a128 == 8)) && (a33 == 11))){
printf("POINT: 98\n");
  cf = 0;
  //error_48: assert(!//error_48);
  }
printf("POINT: 99\n");

  if((((a72 == 11) && (a94 == 15)) && (a33 == 10))){
printf("POINT: 100\n");
  cf = 0;
  //error_49: assert(!//error_49);
  }
printf("POINT: 101\n");

  if((((a84 == 9) && (a72 == 11)) && (a33 == 8))){
printf("POINT: 102\n");
  cf = 0;
  //error_50: assert(!//error_50);
  }
printf("POINT: 103\n");

  if((((a102 == 12) && (a113 == 9)) && (a33 == 13))){
printf("POINT: 104\n");
  cf = 0;
  //error_51: assert(!//error_51);
  }
printf("POINT: 105\n");

  if((((a117 == 10) && (a44 == 8)) && (a33 == 15))){
printf("POINT: 106\n");
  cf = 0;
  //error_52: assert(!//error_52);
  }
printf("POINT: 107\n");

  if((((a76 == 12) && (a72 == 12)) && (a33 == 8))){
printf("POINT: 108\n");
  cf = 0;
  //error_53: assert(!//error_53);
  }
printf("POINT: 109\n");

  if((((a42 == 6) && (a128 == 14)) && (a33 == 11))){
printf("POINT: 110\n");
  cf = 0;
  //error_54: assert(!//error_54);
  }
printf("POINT: 111\n");

  if((((a122 == 7) && (a200 == 8)) && (a33 == 14))){
printf("POINT: 112\n");
  cf = 0;
  //error_55: assert(!//error_55);
  }
printf("POINT: 113\n");

  if((((a21 == 8) && (a94 == 12)) && (a33 == 10))){
printf("POINT: 114\n");
  cf = 0;
  //error_56: assert(!//error_56);
  }
printf("POINT: 115\n");

  if((((a73 == 14) && (a113 == 11)) && (a33 == 13))){
printf("POINT: 116\n");
  cf = 0;
  //error_57: assert(!//error_57);
  }
printf("POINT: 117\n");

  if((((a40 == 12) && (a195 == 11)) && (a33 == 12))){
printf("POINT: 118\n");
  cf = 0;
  //error_58: assert(!//error_58);
  }
printf("POINT: 119\n");

  if((((a109 == 2) && (a72 == 10)) && (a33 == 8))){
printf("POINT: 120\n");
  cf = 0;
  //error_59: assert(!//error_59);
  }
printf("POINT: 121\n");

  if((((a123 == 10) && (a113 == 7)) && (a33 == 13))){
printf("POINT: 122\n");
  cf = 0;
  //error_60: assert(!//error_60);
  }
printf("POINT: 123\n");

  if((((a173 == 7) && (a44 == 12)) && (a33 == 15))){
printf("POINT: 124\n");
  cf = 0;
  //error_61: assert(!//error_61);
  }
printf("POINT: 125\n");

  if((((a59 == 13) && (a113 == 6)) && (a33 == 13))){
printf("POINT: 126\n");
  cf = 0;
  //error_62: assert(!//error_62);
  }
printf("POINT: 127\n");

  if((((a164 == 5) && (a91 == 11)) && (a33 == 9))){
printf("POINT: 128\n");
  cf = 0;
  //error_63: assert(!//error_63);
  }
printf("POINT: 129\n");

  if((((a164 == 8) && (a91 == 11)) && (a33 == 9))){
printf("POINT: 130\n");
  cf = 0;
  //error_64: assert(!//error_64);
  }
printf("POINT: 131\n");

  if((((a173 == 12) && (a44 == 12)) && (a33 == 15))){
printf("POINT: 132\n");
  cf = 0;
  //error_65: assert(!//error_65);
  }
printf("POINT: 133\n");

  if((((a82 == 8) && (a91 == 13)) && (a33 == 9))){
printf("POINT: 134\n");
  cf = 0;
  //error_66: assert(!//error_66);
  }
printf("POINT: 135\n");

  if((((a42 == 12) && (a128 == 14)) && (a33 == 11))){
printf("POINT: 136\n");
  cf = 0;
  //error_67: assert(!//error_67);
  }
printf("POINT: 137\n");

  if((((a68 == 11) && (a91 == 14)) && (a33 == 9))){
printf("POINT: 138\n");
  cf = 0;
  //error_68: assert(!//error_68);
  }
printf("POINT: 139\n");

  if((((a109 == 6) && (a72 == 10)) && (a33 == 8))){
printf("POINT: 140\n");
  cf = 0;
  //error_69: assert(!//error_69);
  }
printf("POINT: 141\n");

  if((((a4 == 5) && (a94 == 8)) && (a33 == 10))){
printf("POINT: 142\n");
  cf = 0;
  //error_70: assert(!//error_70);
  }
printf("POINT: 143\n");

  if((((a89 == 8) && (a91 == 12)) && (a33 == 9))){
printf("POINT: 144\n");
  cf = 0;
  //error_71: assert(!//error_71);
  }
printf("POINT: 145\n");

  if((((a114 == 10) && (a128 == 13)) && (a33 == 11))){
printf("POINT: 146\n");
  cf = 0;
  //error_72: assert(!//error_72);
  }
printf("POINT: 147\n");

  if((((a190 == 16) && (a200 == 9)) && (a33 == 14))){
printf("POINT: 148\n");
  cf = 0;
  //error_73: assert(!//error_73);
  }
printf("POINT: 149\n");

  if((((a72 == 9) && (a94 == 15)) && (a33 == 10))){
printf("POINT: 150\n");
  cf = 0;
  //error_74: assert(!//error_74);
  }
printf("POINT: 151\n");

  if((((a76 == 10) && (a91 == 8)) && (a33 == 9))){
printf("POINT: 152\n");
  cf = 0;
  //error_75: assert(!//error_75);
  }
printf("POINT: 153\n");

  if((((a76 == 14) && (a200 == 10)) && (a33 == 14))){
printf("POINT: 154\n");
  cf = 0;
  //error_76: assert(!//error_76);
  }
printf("POINT: 155\n");

  if((((a82 == 12) && (a91 == 13)) && (a33 == 9))){
printf("POINT: 156\n");
  cf = 0;
  //error_77: assert(!//error_77);
  }
printf("POINT: 157\n");

  if((((a163 == 8) && (a200 == 13)) && (a33 == 14))){
printf("POINT: 158\n");
  cf = 0;
  //error_78: assert(!//error_78);
  }
printf("POINT: 159\n");

  if((((a36 == 15) && (a128 == 12)) && (a33 == 11))){
printf("POINT: 160\n");
  cf = 0;
  //error_79: assert(!//error_79);
  }
printf("POINT: 161\n");

  if((((a58 == 11) && (a94 == 9)) && (a33 == 10))){
printf("POINT: 162\n");
  cf = 0;
  //error_80: assert(!//error_80);
  }
printf("POINT: 163\n");

  if((((a72 == 12) && (a128 == 8)) && (a33 == 11))){
printf("POINT: 164\n");
  cf = 0;
  //error_81: assert(!//error_81);
  }
printf("POINT: 165\n");

  if((((a61 == 9) && (a195 == 14)) && (a33 == 12))){
printf("POINT: 166\n");
  cf = 0;
  //error_82: assert(!//error_82);
  }
printf("POINT: 167\n");

  if((((a16 == 8) && (a94 == 10)) && (a33 == 10))){
printf("POINT: 168\n");
  cf = 0;
  //error_83: assert(!//error_83);
  }
printf("POINT: 169\n");

  if((((a40 == 13) && (a195 == 11)) && (a33 == 12))){
printf("POINT: 170\n");
  cf = 0;
  //error_84: assert(!//error_84);
  }
printf("POINT: 171\n");

  if((((a39 == 16) && (a44 == 9)) && (a33 == 15))){
printf("POINT: 172\n");
  cf = 0;
  //error_85: assert(!//error_85);
  }
printf("POINT: 173\n");

  if((((a64 == 4) && (a128 == 15)) && (a33 == 11))){
printf("POINT: 174\n");
  cf = 0;
  //error_86: assert(!//error_86);
  }
printf("POINT: 175\n");

  if((((a200 == 7) && (a195 == 10)) && (a33 == 12))){
printf("POINT: 176\n");
  cf = 0;
  //error_87: assert(!//error_87);
  }
printf("POINT: 177\n");

  if((((a185 == 6) && (a128 == 11)) && (a33 == 11))){
printf("POINT: 178\n");
  cf = 0;
  //error_88: assert(!//error_88);
  }
printf("POINT: 179\n");

  if((((a122 == 10) && (a200 == 8)) && (a33 == 14))){
printf("POINT: 180\n");
  cf = 0;
  //error_89: assert(!//error_89);
  }
printf("POINT: 181\n");

  if((((a109 == 3) && (a72 == 10)) && (a33 == 8))){
printf("POINT: 182\n");
  cf = 0;
  //error_90: assert(!//error_90);
  }
printf("POINT: 183\n");

  if((((a74 == 13) && (a72 == 8)) && (a33 == 8))){
printf("POINT: 184\n");
  cf = 0;
  //error_91: assert(!//error_91);
  }
printf("POINT: 185\n");

  if((((a105 == 9) && (a44 == 6)) && (a33 == 15))){
printf("POINT: 186\n");
  cf = 0;
  //error_92: assert(!//error_92);
  }
printf("POINT: 187\n");

  if((((a72 == 11) && (a200 == 12)) && (a33 == 14))){
printf("POINT: 188\n");
  cf = 0;
  //error_93: assert(!//error_93);
  }
printf("POINT: 189\n");

  if((((a180 == 13) && (a113 == 8)) && (a33 == 13))){
printf("POINT: 190\n");
  cf = 0;
  //error_94: assert(!//error_94);
  }
printf("POINT: 191\n");

  if((((a149 == 12) && (a91 == 7)) && (a33 == 9))){
printf("POINT: 192\n");
  cf = 0;
  //error_95: assert(!//error_95);
  }
printf("POINT: 193\n");

  if((((a173 == 9) && (a44 == 12)) && (a33 == 15))){
printf("POINT: 194\n");
  cf = 0;
  //error_96: assert(!//error_96);
  }
printf("POINT: 195\n");

  if((((a105 == 5) && (a200 == 6)) && (a33 == 14))){
printf("POINT: 196\n");
  cf = 0;
  //error_97: assert(!//error_97);
  }
printf("POINT: 197\n");

  if((((a58 == 13) && (a94 == 9)) && (a33 == 10))){
printf("POINT: 198\n");
  cf = 0;
  //error_98: assert(!//error_98);
  }
printf("POINT: 199\n");

  if((((a74 == 9) && (a72 == 8)) && (a33 == 8))){
printf("POINT: 200\n");
  cf = 0;
  //error_99: assert(!//error_99);
  }
  }
  void calculate_outputm2(int input) {
printf("POINT: 201\n");

  if((((cf == 1) && (input  ==  1)) && a60  ==  8684)) {
printf("POINT: 202\n");
  cf = 0;
  a180 = (a72 - -4);
  a33 = ((a72 * a72) - 68);
  a113 = (a180 + -5);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 203\n");

  if(((cf == 1) && (input  ==  4))) {
printf("POINT: 204\n");
  cf = 0;
  a73 = (a23 - -4);
  a33 = (a73 + 3);
  a113 = ((a23 - a23) - -11);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 205\n");

  if(((input  ==  2) && (cf == 1))) {
printf("POINT: 206\n");
  cf = 0;
  
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 207\n");

  if((((cf == 1) && (input  ==  5)) && a158  ==  9212)) {
printf("POINT: 208\n");
  cf = 0;
  a200 = (a33 - -3);
  a168 = ((a23 - a200) + 13);
  a33 = ((a72 * a200) - 85);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 209\n");

  if((((cf == 1) && (input  ==  3)) && a2 >= 42)) {
printf("POINT: 210\n");
  cf = 0;
  a91 = (a33 - -6);
  a68 = (a91 - 3);
  a33 = ((a72 - a23) - -6);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm1(int input) {
printf("POINT: 211\n");

  if(((cf == 1) && (a23 == 6))) {
printf("POINT: 212\n");
  calculate_outputm2(input);
  }
  }
  void calculate_outputm4(int input) {
printf("POINT: 213\n");

  if(((input  ==  2) && (cf == 1))) {
printf("POINT: 214\n");
  cf = 0;
  
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 215\n");

  if(((cf == 1) && (input  ==  4))) {
printf("POINT: 216\n");
  cf = 0;
  a195 = ((a72 - a107) - -7);
  a144 = (a33 + -1);
  a33 = (a107 - -4);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm5(int input) {
printf("POINT: 217\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 218\n");
printf("POINT: 219\n");

  if((a155 + 20) > a155){
printf("POINT: 220\n");
  a155  +=  1 ;}
  else{
  a155  +=  0;}
  cf = 0;
  a45 = ((a107 + a107) + -5);
  a113 = (a72 - 1);
  a33 = ((a45 / a113) + 12);
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 221\n");

  if((((input  ==  3) && (cf == 1)) && a125  ==  9328)) {
printf("POINT: 222\n");
  cf = 0;
  a72 = (a33 + 2);
  a109 = (a33 - 6);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 223\n");

  if((((input  ==  5) && (cf == 1)) && a86  ==  2270)) {
printf("POINT: 224\n");
  cf = 0;
  a33 = (a72 - -2);
  a44 = (a72 + -1);
  a173 = (a33 - 3);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 225\n");

  if(((input  ==  4) && (cf == 1))) {
printf("POINT: 226\n");
printf("POINT: 227\n");

  if((a160 + 20) > a160){
printf("POINT: 228\n");
  a160  +=  4 ;}
  else{
  a160  +=  0;}
  cf = 0;
  a195 = (a72 + -6);
  a33 = (a195 + 5);
  a41 = ((a195 + a195) - 6);
  printf("%d\n", 22); fflush(stdout);
  }
printf("POINT: 229\n");

  if((((cf == 1) && (input  ==  2)) && a146 <= -46)) {
printf("POINT: 230\n");
  cf = 0;
  a91 = (a72 - -1);
  a33 = ((a91 * a107) + -117);
  a68 = ((a33 + a91) + -17);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm3(int input) {
printf("POINT: 231\n");

  if(((cf == 1) && (a107 == 8))) {
printf("POINT: 232\n");
  calculate_outputm4(input);
  }
printf("POINT: 233\n");

  if(((cf == 1) && (a107 == 9))) {
printf("POINT: 234\n");
  calculate_outputm5(input);
  }
  }
  void calculate_outputm7(int input) {
printf("POINT: 235\n");

  if(((input  ==  2) && (cf == 1))) {
printf("POINT: 236\n");
  cf = 0;
  a113 = (a82 + 2);
  a73 = (a113 - 1);
  a33 = (a73 - -3);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 237\n");

  if((((input  ==  3) && (cf == 1)) && a157 >= 32)) {
printf("POINT: 238\n");
  cf = 0;
  a94 = (a91 + -4);
  a33 = (a82 - -1);
  a58 = ((a82 - a91) + 17);
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 239\n");

  if(((input  ==  4) && (cf == 1))) {
printf("POINT: 240\n");
  cf = 0;
  a33 = a91;
  a113 = (a33 - 2);
  a73 = (a33 + -3);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 241\n");

  if((((input  ==  1) && (cf == 1)) && a97 >= 40)) {
printf("POINT: 242\n");
  cf = 0;
  a33 = (a82 - -6);
  a173 = (a82 - 1);
  a44 = ((a33 + a33) - 18);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 243\n");

  if((((input  ==  5) && (cf == 1)) && a170  ==  9914)) {
printf("POINT: 244\n");
  cf = 0;
  a94 = (a33 + 4);
  a33 = (a82 - -1);
  printf("%d\n", 25); fflush(stdout);
  }
  }
  void calculate_outputm6(int input) {
printf("POINT: 245\n");

  if(((cf == 1) && (a82 == 9))) {
printf("POINT: 246\n");
  calculate_outputm7(input);
  }
  }
  void calculate_outputm9(int input) {
printf("POINT: 247\n");

  if(((input  ==  5) && (cf == 1))) {
printf("POINT: 248\n");
  cf = 0;
  
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm10(int input) {
printf("POINT: 249\n");

  if((((input  ==  1) && (cf == 1)) && a145 <= -20)) {
printf("POINT: 250\n");
  cf = 0;
  a33 = ((a94 + a94) - 11);
  a91 = ((a16 - a33) - -11);
  a82 = ((a16 / a91) + 12);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 251\n");

  if(((cf == 1) && (input  ==  3))) {
printf("POINT: 252\n");
  cf = 0;
  
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 253\n");

  if((((cf == 1) && (input  ==  5)) && a162 >= 28)) {
printf("POINT: 254\n");
  cf = 0;
  a33 = ((a94 * a16) - 98);
  a195 = ((a94 + a94) - 9);
  a40 = ((a195 / a16) + 12);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 255\n");

  if(((input  ==  2) && (cf == 1))) {
printf("POINT: 256\n");
  cf = 0;
  
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 257\n");

  if(((cf == 1) && (input  ==  4))) {
printf("POINT: 258\n");
  cf = 0;
  a195 = ((a94 * a94) - 88);
  a33 = (a94 + 2);
  a144 = ((a94 + a195) - 15);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm8(int input) {
printf("POINT: 259\n");

  if(((cf == 1) && (a16 == 9))) {
printf("POINT: 260\n");
  calculate_outputm9(input);
  }
printf("POINT: 261\n");

  if(((cf == 1) && (a16 == 11))) {
printf("POINT: 262\n");
  calculate_outputm10(input);
  }
  }
  void calculate_outputm12(int input) {
printf("POINT: 263\n");

  if((((input  ==  1) && (cf == 1)) && a29 >= 48)) {
printf("POINT: 264\n");
  cf = 0;
  a72 = ((a21 * a94) + -97);
  a94 = (a72 - -4);
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 265\n");

  if((((cf == 1) && (input  ==  4)) && a198 >= 48)) {
printf("POINT: 266\n");
  cf = 0;
  a33 = ((a94 - a21) + 12);
  a44 = (a33 - 3);
  a173 = (a44 + -2);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 267\n");

  if(((input  ==  3) && (cf == 1))) {
printf("POINT: 268\n");
  cf = 0;
  a33 = (a94 + 1);
  a113 = (a21 - -2);
  a73 = (a33 + -3);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 269\n");

  if((((cf == 1) && (input  ==  2)) && a24  ==  5180)) {
printf("POINT: 270\n");
  cf = 0;
  a128 = (a94 - 4);
  a72 = ((a21 - a21) - -14);
  a33 = (a21 + 2);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm11(int input) {
printf("POINT: 271\n");

  if(((a21 == 9) && (cf == 1))) {
printf("POINT: 272\n");
  calculate_outputm12(input);
  }
  }
  void calculate_outputm14(int input) {
printf("POINT: 273\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 274\n");
  cf = 0;
  a33 = ((a72 / a72) - -13);
  a200 = (a94 - 5);
  a76 = ((a72 + a33) - 18);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 275\n");

  if(((cf == 1) && (input  ==  3))) {
printf("POINT: 276\n");
  cf = 0;
  a33 = (a72 - -1);
  a44 = ((a72 / a72) - -11);
  a173 = (a72 + -5);
  printf("%d\n", 25); fflush(stdout);
  }
  }
  void calculate_outputm13(int input) {
printf("POINT: 277\n");

  if(((cf == 1) && (a72 == 14))) {
printf("POINT: 278\n");
  calculate_outputm14(input);
  }
  }
  void calculate_outputm16(int input) {
printf("POINT: 279\n");

  if(((cf == 1) && (input  ==  5))) {
printf("POINT: 280\n");
printf("POINT: 281\n");

  if((a88 + 20) > a88){
printf("POINT: 282\n");
  a88  +=  1 ;}
  else{
  a88  +=  0;}
printf("POINT: 283\n");

  if((a151 + 20) > a151){
printf("POINT: 284\n");
  a151  +=  2 ;}
  else{
  a151  +=  0;}
  cf = 0;
  a200 = ((a33 * a33) - 134);
  a33 = ((a200 + a41) - 4);
  a76 = (a200 + -1);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 285\n");

  if((((input  ==  2) && (cf == 1)) && a177 <= -36)) {
printf("POINT: 286\n");
  cf = 0;
  a113 = (a41 + -2);
  a33 = (a195 - -6);
  a59 = (a33 + -2);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 287\n");

  if((((input  ==  3) && (cf == 1)) && a182  ==  9474)) {
printf("POINT: 288\n");
  cf = 0;
  a33 = (a195 - -2);
  a91 = (a195 - -4);
  a164 = (a33 + -4);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 289\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 290\n");
  cf = 0;
  a33 = (a195 - -6);
  a113 = (a195 - -5);
  a45 = (a113 + 4);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 291\n");

  if(((cf == 1) && (input  ==  4))) {
printf("POINT: 292\n");
printf("POINT: 293\n");

  if((a56 + 20) > a56){
printf("POINT: 294\n");
  a56  +=  1 ;}
  else{
  a56  +=  0;}
  cf = 0;
  a94 = (a195 - -3);
  a33 = a94;
  a16 = (a94 + 1);
  printf("%d\n", 21); fflush(stdout);
  }
  }
  void calculate_outputm15(int input) {
printf("POINT: 295\n");

  if(((cf == 1) && (a41 == 8))) {
printf("POINT: 296\n");
  calculate_outputm16(input);
  }
  }
  void calculate_outputm18(int input) {
printf("POINT: 297\n");

  if(((input  ==  4) && (cf == 1))) {
printf("POINT: 298\n");
  cf = 0;
  a195 = a33;
  a144 = (a195 + -5);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 299\n");

  if(((input  ==  1) && (cf == 1))) {
printf("POINT: 300\n");
  cf = 0;
  a33 = ((a200 + a195) + -11);
  a94 = (a195 + 2);
  a21 = ((a94 * a195) - 111);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm19(int input) {
printf("POINT: 301\n");

  if(((input  ==  3) && (cf == 1))) {
printf("POINT: 302\n");
  cf = 0;
  a33 = (a200 - 4);
  a72 = ((a200 - a200) + 13);
  a107 = (a72 + -5);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 303\n");

  if(((cf == 1) && (input  ==  2))) {
printf("POINT: 304\n");
  cf = 0;
  a195 = a200;
  a144 = ((a195 / a200) + 6);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm17(int input) {
printf("POINT: 305\n");

  if(((a200 == 11) && (cf == 1))) {
printf("POINT: 306\n");
  calculate_outputm18(input);
  }
printf("POINT: 307\n");

  if(((cf == 1) && (a200 == 12))) {
printf("POINT: 308\n");
  calculate_outputm19(input);
  }
  }
  void calculate_outputm21(int input) {
printf("POINT: 309\n");

  if(((cf == 1) && (input  ==  5))) {
printf("POINT: 310\n");
  cf = 0;
  a33 = (a195 - -2);
  a102 = a40;
  a113 = ((a40 * a102) + -72);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 311\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 312\n");
  cf = 0;
  a200 = (a33 + -2);
  a76 = ((a195 * a200) + -99);
  a33 = (a40 - -5);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 313\n");

  if(((input  ==  3) && (cf == 1))) {
printf("POINT: 314\n");
  cf = 0;
  a72 = ((a40 + a33) + -7);
  a94 = (a72 - -1);
  a33 = (a72 - 4);
  printf("%d\n", 23); fflush(stdout);
  }
  }
  void calculate_outputm20(int input) {
printf("POINT: 315\n");

  if(((a40 == 9) && (cf == 1))) {
printf("POINT: 316\n");
  calculate_outputm21(input);
  }
  }
  void calculate_outputm23(int input) {
printf("POINT: 317\n");

  if((((cf == 1) && (input  ==  3)) && a175  ==  8300)) {
printf("POINT: 318\n");
  cf = 0;
  a91 = (a195 - 5);
  a33 = ((a91 * a144) + -40);
  a149 = (a144 + 2);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 319\n");

  if((((input  ==  2) && (cf == 1)) && a171  ==  1996)) {
printf("POINT: 320\n");
  cf = 0;
  a44 = (a144 + -1);
  a105 = (a33 - 3);
  a33 = (a195 - -3);
  printf("%d\n", 21); fflush(stdout);
  }
printf("POINT: 321\n");

  if((((cf == 1) && (input  ==  5)) && a155 >= 46)) {
printf("POINT: 322\n");
  cf = 0;
  a33 = (a144 + 8);
  a173 = (a195 + -1);
  a44 = a195;
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 323\n");

  if(((cf == 1) && (input  ==  4))) {
printf("POINT: 324\n");
printf("POINT: 325\n");

  if((a49 - 20) < a49){
printf("POINT: 326\n");
  a49  -=  2 ;}
  else{
  a49  -=  0;}
printf("POINT: 327\n");

  if((a83 + 20) > a83){
printf("POINT: 328\n");
  a83  +=  2 ;}
  else{
  a83  +=  0;}
printf("POINT: 329\n");

  if((a162 + 20) > a162){
printf("POINT: 330\n");
  a162  +=  1 ;}
  else{
  a162  +=  0;}
printf("POINT: 331\n");

  if((a51 - 20) < a51){
printf("POINT: 332\n");
  a51  -=  4 ;}
  else{
  a51  -=  0;}
printf("POINT: 333\n");

  if((a124 + 20) > a124){
printf("POINT: 334\n");
  a124  +=  2 ;}
  else{
  a124  +=  0;}
  cf = 0;
  a200 = (a195 + -2);
  a76 = (a144 - -4);
  a33 = (a144 + 7);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 335\n");

  if((((input  ==  1) && (cf == 1)) && a160  ==  1108)) {
printf("POINT: 336\n");
  cf = 0;
  a17 = (a195 - 8);
  a94 = (a195 - 1);
  a33 = (a17 + 6);
  printf("%d\n", 23); fflush(stdout);
  }
  }
  void calculate_outputm22(int input) {
printf("POINT: 337\n");

  if(((cf == 1) && (a144 == 7))) {
printf("POINT: 338\n");
  calculate_outputm23(input);
  }
  }
  void calculate_outputm25(int input) {
printf("POINT: 339\n");

  if(((cf == 1) && (input  ==  2))) {
printf("POINT: 340\n");
  cf = 0;
  a94 = (a33 - 3);
  a16 = ((a94 - a33) + 12);
  a33 = ((a16 - a113) + 8);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 341\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 342\n");
  cf = 0;
  a33 = (a123 + 6);
  a190 = (a123 - -4);
  a200 = (a190 + -3);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm24(int input) {
printf("POINT: 343\n");

  if(((a123 == 8) && (cf == 1))) {
printf("POINT: 344\n");
  calculate_outputm25(input);
  }
  }
  void calculate_outputm27(int input) {
printf("POINT: 345\n");

  if(((input  ==  5) && (cf == 1))) {
printf("POINT: 346\n");
  cf = 0;
  a113 = (a102 - -2);
  a73 = (a102 - -1);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 347\n");

  if(((input  ==  3) && (cf == 1))) {
printf("POINT: 348\n");
  cf = 0;
  a113 = (a102 + -2);
  a123 = ((a102 + a113) + -8);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 349\n");

  if(((input  ==  4) && (cf == 1))) {
printf("POINT: 350\n");
  cf = 0;
  a113 = (a33 + -2);
  a73 = (a33 - 1);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm26(int input) {
printf("POINT: 351\n");

  if(((a102 == 9) && (cf == 1))) {
printf("POINT: 352\n");
  calculate_outputm27(input);
  }
  }
  void calculate_outputm29(int input) {
printf("POINT: 353\n");

  if(((input  ==  5) && (cf == 1))) {
printf("POINT: 354\n");
printf("POINT: 355\n");

  if((a2 + 20) > a2){
printf("POINT: 356\n");
  a2  +=  1 ;}
  else{
  a2  +=  0;}
  cf = 0;
  a21 = (a113 + -2);
  a33 = ((a21 + a73) - 9);
  a94 = (a21 + 3);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 357\n");

  if(((cf == 1) && (input  ==  4))) {
printf("POINT: 358\n");
printf("POINT: 359\n");

  if((a170 + 20) > a170){
printf("POINT: 360\n");
  a170  +=  4 ;}
  else{
  a170  +=  0;}
printf("POINT: 361\n");

  if((a198 + 20) > a198){
printf("POINT: 362\n");
  a198  +=  2 ;}
  else{
  a198  +=  0;}
  cf = 0;
  a72 = (a33 + -4);
  a23 = (a113 - 5);
  a33 = (a72 - 1);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 363\n");

  if(((input  ==  1) && (cf == 1))) {
printf("POINT: 364\n");
printf("POINT: 365\n");

  if((a60 + 20) > a60){
printf("POINT: 366\n");
  a60  +=  2 ;}
  else{
  a60  +=  0;}
printf("POINT: 367\n");

  if((a158 + 20) > a158){
printf("POINT: 368\n");
  a158  +=  4 ;}
  else{
  a158  +=  0;}
printf("POINT: 369\n");

  if((a157 + 20) > a157){
printf("POINT: 370\n");
  a157  +=  1 ;}
  else{
  a157  +=  0;}
printf("POINT: 371\n");

  if((a97 + 20) > a97){
printf("POINT: 372\n");
  a97  +=  1 ;}
  else{
  a97  +=  0;}
printf("POINT: 373\n");

  if((a24 + 20) > a24){
printf("POINT: 374\n");
  a24  +=  2 ;}
  else{
  a24  +=  0;}
printf("POINT: 375\n");

  if((a29 + 20) > a29){
printf("POINT: 376\n");
  a29  +=  2 ;}
  else{
  a29  +=  0;}
  cf = 0;
  a91 = a33;
  a33 = (a113 + -2);
  a82 = a33;
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm28(int input) {
printf("POINT: 377\n");

  if(((a73 == 10) && (cf == 1))) {
printf("POINT: 378\n");
  calculate_outputm29(input);
  }
  }
  void calculate_outputm31(int input) {
printf("POINT: 379\n");

  if((((cf == 1) && (input  ==  3)) && a83 >= 36)) {
printf("POINT: 380\n");
  cf = 0;
  a91 = ((a45 - a33) - -7);
  a149 = ((a33 - a33) - -12);
  a33 = (a149 + -3);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 381\n");

  if(((input  ==  4) && (cf == 1))) {
printf("POINT: 382\n");
  cf = 0;
  a72 = (a113 + 1);
  a33 = (a45 + -5);
  a107 = (a33 - -1);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 383\n");

  if(((input  ==  5) && (cf == 1))) {
printf("POINT: 384\n");
printf("POINT: 385\n");

  if((a86 + 20) > a86){
printf("POINT: 386\n");
  a86  +=  4 ;}
  else{
  a86  +=  0;}
printf("POINT: 387\n");

  if((a197 + 20) > a197){
printf("POINT: 388\n");
  a197  +=  2 ;}
  else{
  a197  +=  0;}
printf("POINT: 389\n");

  if((a177 - 20) < a177){
printf("POINT: 390\n");
  a177  -=  2 ;}
  else{
  a177  -=  0;}
printf("POINT: 391\n");

  if((a3 + 20) > a3){
printf("POINT: 392\n");
  a3  +=  2 ;}
  else{
  a3  +=  0;}
printf("POINT: 393\n");

  if((a145 - 20) < a145){
printf("POINT: 394\n");
  a145  -=  4 ;}
  else{
  a145  -=  0;}
  cf = 0;
  a200 = (a113 - 2);
  a76 = (a33 - 2);
  a33 = (a76 + 3);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 395\n");

  if((((cf == 1) && (input  ==  2)) && a3  ==  4092)) {
printf("POINT: 396\n");
  cf = 0;
  a33 = (a45 - 5);
  a72 = (a113 + -4);
  a74 = (a72 + 2);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 397\n");

  if((((cf == 1) && (input  ==  1)) && a50  ==  6014)) {
printf("POINT: 398\n");
  cf = 0;
  a72 = ((a45 * a113) - 145);
  a33 = ((a72 - a45) - -10);
  a84 = ((a33 / a113) - -9);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm32(int input) {
printf("POINT: 399\n");

  if((((cf == 1) && (input  ==  2)) && a189 >= 35)) {
printf("POINT: 400\n");
  cf = 0;
  a33 = (a45 + -7);
  a91 = ((a113 + a33) - 7);
  a68 = (a113 + -3);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 401\n");

  if(((input  ==  4) && (cf == 1))) {
printf("POINT: 402\n");
  cf = 0;
  a72 = (a45 - 3);
  a107 = ((a33 / a72) + 8);
  a33 = (a107 + -1);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 403\n");

  if((((input  ==  1) && (cf == 1)) && a108 <= -22)) {
printf("POINT: 404\n");
  cf = 0;
  a72 = (a33 - 5);
  a74 = (a33 - 4);
  a33 = a72;
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 405\n");

  if((((cf == 1) && (input  ==  3)) && a51 <= -30)) {
printf("POINT: 406\n");
  cf = 0;
  a113 = (a33 - 6);
  a123 = ((a113 + a45) - 19);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 407\n");

  if(((cf == 1) && (input  ==  5))) {
printf("POINT: 408\n");
printf("POINT: 409\n");

  if((a62 + 20) > a62){
printf("POINT: 410\n");
  a62  +=  2 ;}
  else{
  a62  +=  0;}
printf("POINT: 411\n");

  if((a108 - 20) < a108){
printf("POINT: 412\n");
  a108  -=  4 ;}
  else{
  a108  -=  0;}
  cf = 0;
  a33 = ((a45 * a113) + -178);
  a200 = (a45 + -6);
  a76 = ((a113 * a200) - 109);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm30(int input) {
printf("POINT: 413\n");

  if(((a45 == 13) && (cf == 1))) {
printf("POINT: 414\n");
  calculate_outputm31(input);
  }
printf("POINT: 415\n");

  if(((cf == 1) && (a45 == 16))) {
printf("POINT: 416\n");
  calculate_outputm32(input);
  }
  }
  void calculate_outputm34(int input) {
printf("POINT: 417\n");

  if(((input  ==  5) && (cf == 1))) {
printf("POINT: 418\n");
  cf = 0;
  a123 = ((a190 * a190) - 136);
  a113 = (a190 + -5);
  a33 = (a113 + 6);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 419\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 420\n");
  cf = 0;
  
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 421\n");

  if(((input  ==  2) && (cf == 1))) {
printf("POINT: 422\n");
  cf = 0;
  a33 = (a200 + 4);
  a113 = ((a33 - a190) - -6);
  a123 = (a200 + -1);
  printf("%d\n", 23); fflush(stdout);
  }
  }
  void calculate_outputm33(int input) {
printf("POINT: 423\n");

  if(((a190 == 12) && (cf == 1))) {
printf("POINT: 424\n");
  calculate_outputm34(input);
  }
  }
  void calculate_outputm36(int input) {
printf("POINT: 425\n");

  if((((cf == 1) && (input  ==  5)) && a124  ==  3976)) {
printf("POINT: 426\n");
  cf = 0;
  a91 = (a33 - 1);
  a33 = ((a200 + a76) + -10);
  a82 = (a91 - 5);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 427\n");

  if((((input  ==  4) && (cf == 1)) && a141 >= 32)) {
printf("POINT: 428\n");
  cf = 0;
  a128 = (a76 - -5);
  a42 = ((a200 - a128) + 10);
  a33 = (a128 + -3);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 429\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 430\n");
  cf = 0;
  a33 = (a200 - 2);
  a72 = (a76 + 4);
  a107 = ((a33 * a76) + -63);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 431\n");

  if(((cf == 1) && (input  ==  3))) {
printf("POINT: 432\n");
printf("POINT: 433\n");

  if((a171 + 20) > a171){
printf("POINT: 434\n");
  a171  +=  4 ;}
  else{
  a171  +=  0;}
  cf = 0;
  a33 = (a76 - -3);
  a144 = ((a200 / a33) + 7);
  a195 = ((a200 / a200) - -11);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 435\n");

  if(((cf == 1) && (input  ==  2))) {
printf("POINT: 436\n");
  cf = 0;
  a33 = ((a76 * a200) + -78);
  a195 = (a76 - 2);
  a41 = (a195 + 1);
  printf("%d\n", 22); fflush(stdout);
  }
  }
  void calculate_outputm37(int input) {
printf("POINT: 437\n");

  if(((cf == 1) && (input  ==  5))) {
printf("POINT: 438\n");
  cf = 0;
  a195 = ((a200 + a33) - 14);
  a200 = (a33 - 3);
  a33 = ((a76 + a200) - 9);
  printf("%d\n", 25); fflush(stdout);
  }
printf("POINT: 439\n");

  if(((cf == 1) && (input  ==  2))) {
printf("POINT: 440\n");
  cf = 0;
  a33 = (a76 + 2);
  a195 = (a33 + -2);
  a200 = (a195 + 2);
  printf("%d\n", 26); fflush(stdout);
  }
  }
  void calculate_outputm38(int input) {
printf("POINT: 441\n");

  if((((input  ==  5) && (cf == 1)) && a151  ==  5178)) {
printf("POINT: 442\n");
  cf = 0;
  a200 = (a33 - 5);
  a190 = ((a33 + a76) + -9);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 443\n");

  if(((input  ==  4) && (cf == 1))) {
printf("POINT: 444\n");
  cf = 0;
  a33 = (a200 + -2);
  a107 = (a76 - 6);
  a72 = (a33 - -5);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 445\n");

  if(((cf == 1) && (input  ==  2))) {
printf("POINT: 446\n");
printf("POINT: 447\n");

  if((a146 - 20) < a146){
printf("POINT: 448\n");
  a146  -=  2 ;}
  else{
  a146  -=  0;}
printf("POINT: 449\n");

  if((a50 + 20) > a50){
printf("POINT: 450\n");
  a50  +=  2 ;}
  else{
  a50  +=  0;}
printf("POINT: 451\n");

  if((a175 + 20) > a175){
printf("POINT: 452\n");
  a175  +=  6 ;}
  else{
  a175  +=  0;}
printf("POINT: 453\n");

  if((a189 + 20) > a189){
printf("POINT: 454\n");
  a189  +=  1 ;}
  else{
  a189  +=  0;}
printf("POINT: 455\n");

  if((a141 + 20) > a141){
printf("POINT: 456\n");
  a141  +=  1 ;}
  else{
  a141  +=  0;}
  cf = 0;
  a72 = ((a200 + a33) - 11);
  a107 = ((a76 * a33) - 145);
  a33 = ((a200 + a200) + -12);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 457\n");

  if((((input  ==  3) && (cf == 1)) && a88 >= 22)) {
printf("POINT: 458\n");
  cf = 0;
  a61 = (a76 + -2);
  a195 = a33;
  a33 = (a61 - -3);
  printf("%d\n", 19); fflush(stdout);
  }
printf("POINT: 459\n");

  if(((cf == 1) && (input  ==  1))) {
printf("POINT: 460\n");
printf("POINT: 461\n");

  if((a182 + 20) > a182){
printf("POINT: 462\n");
  a182  +=  6 ;}
  else{
  a182  +=  0;}
  cf = 0;
  a33 = ((a76 - a200) + 14);
  a44 = (a33 - 6);
  a39 = (a44 - -3);
  printf("%d\n", 25); fflush(stdout);
  }
  }
  void calculate_outputm35(int input) {
printf("POINT: 463\n");

  if(((cf == 1) && (a76 == 9))) {
printf("POINT: 464\n");
  calculate_outputm36(input);
  }
printf("POINT: 465\n");

  if(((a76 == 10) && (cf == 1))) {
printf("POINT: 466\n");
  calculate_outputm37(input);
  }
printf("POINT: 467\n");

  if(((a76 == 11) && (cf == 1))) {
printf("POINT: 468\n");
  calculate_outputm38(input);
  }
  }
  void calculate_outputm40(int input) {
printf("POINT: 469\n");

  if(((input  ==  2) && (cf == 1))) {
printf("POINT: 470\n");
  cf = 0;
  a195 = ((a105 * a33) - 19);
  a33 = (a195 - -1);
  a40 = (a105 - -7);
  printf("%d\n", 23); fflush(stdout);
  }
  }
  void calculate_outputm39(int input) {
printf("POINT: 471\n");

  if(((cf == 1) && (a105 == 2))) {
printf("POINT: 472\n");
  calculate_outputm40(input);
  }
  }
  void calculate_outputm42(int input) {
printf("POINT: 473\n");

  if(((cf == 1) && (input  ==  3))) {
printf("POINT: 474\n");
printf("POINT: 475\n");

  if((a125 + 20) > a125){
printf("POINT: 476\n");
  a125  +=  2 ;}
  else{
  a125  +=  0;}
  cf = 0;
  a144 = (a33 + -8);
  a195 = (a144 + 5);
  a33 = (a44 + 3);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 477\n");

  if((((cf == 1) && (input  ==  1)) && a197 >= 41)) {
printf("POINT: 478\n");
  cf = 0;
  a76 = ((a33 / a33) - -9);
  a91 = (a44 + -1);
  a33 = ((a76 * a91) + -71);
  printf("%d\n", 23); fflush(stdout);
  }
printf("POINT: 479\n");

  if((((input  ==  4) && (cf == 1)) && a49 <= -21)) {
printf("POINT: 480\n");
  cf = 0;
  a128 = a33;
  a64 = (a33 - 6);
  a33 = (a39 + -1);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 481\n");

  if((((input  ==  5) && (cf == 1)) && a62  ==  1634)) {
printf("POINT: 482\n");
  cf = 0;
  a39 = ((a44 / a33) - -16);
  printf("%d\n", 26); fflush(stdout);
  }
printf("POINT: 483\n");

  if((((cf == 1) && (input  ==  2)) && a56 >= 40)) {
printf("POINT: 484\n");
  cf = 0;
  a105 = (a39 - 7);
  a200 = (a105 + 1);
  a33 = (a44 + 5);
  printf("%d\n", 19); fflush(stdout);
  }
  }
  void calculate_outputm41(int input) {
printf("POINT: 485\n");

  if(((cf == 1) && (a39 == 12))) {
printf("POINT: 486\n");
  calculate_outputm42(input);
  }
  }
  
  void calculate_output(int input) {
  cf = 1;
  
printf("POINT: 487\n");

  if(((cf == 1) && (a33 == 8))) {
printf("POINT: 488\n");
printf("POINT: 489\n");

  if(((a72 == 9) && (cf == 1))) {
printf("POINT: 490\n");
  calculate_outputm1(input);
  }
printf("POINT: 491\n");

  if(((cf == 1) && (a72 == 13))) {
printf("POINT: 492\n");
  calculate_outputm3(input);
  }
  }
printf("POINT: 493\n");

  if(((a33 == 9) && (cf == 1))) {
printf("POINT: 494\n");
printf("POINT: 495\n");

  if(((cf == 1) && (a91 == 13))) {
printf("POINT: 496\n");
  calculate_outputm6(input);
  }
  }
printf("POINT: 497\n");

  if(((cf == 1) && (a33 == 10))) {
printf("POINT: 498\n");
printf("POINT: 499\n");

  if(((a94 == 10) && (cf == 1))) {
printf("POINT: 500\n");
  calculate_outputm8(input);
  }
printf("POINT: 501\n");

  if(((cf == 1) && (a94 == 12))) {
printf("POINT: 502\n");
  calculate_outputm11(input);
  }
printf("POINT: 503\n");

  if(((cf == 1) && (a94 == 15))) {
printf("POINT: 504\n");
  calculate_outputm13(input);
  }
  }
printf("POINT: 505\n");

  if(((cf == 1) && (a33 == 12))) {
printf("POINT: 506\n");
printf("POINT: 507\n");

  if(((cf == 1) && (a195 == 7))) {
printf("POINT: 508\n");
  calculate_outputm15(input);
  }
printf("POINT: 509\n");

  if(((cf == 1) && (a195 == 10))) {
printf("POINT: 510\n");
  calculate_outputm17(input);
  }
printf("POINT: 511\n");

  if(((a195 == 11) && (cf == 1))) {
printf("POINT: 512\n");
  calculate_outputm20(input);
  }
printf("POINT: 513\n");

  if(((cf == 1) && (a195 == 12))) {
printf("POINT: 514\n");
  calculate_outputm22(input);
  }
  }
printf("POINT: 515\n");

  if(((a33 == 13) && (cf == 1))) {
printf("POINT: 516\n");
printf("POINT: 517\n");

  if(((cf == 1) && (a113 == 7))) {
printf("POINT: 518\n");
  calculate_outputm24(input);
  }
printf("POINT: 519\n");

  if(((a113 == 9) && (cf == 1))) {
printf("POINT: 520\n");
  calculate_outputm26(input);
  }
printf("POINT: 521\n");

  if(((cf == 1) && (a113 == 11))) {
printf("POINT: 522\n");
  calculate_outputm28(input);
  }
printf("POINT: 523\n");

  if(((a113 == 12) && (cf == 1))) {
printf("POINT: 524\n");
  calculate_outputm30(input);
  }
  }
printf("POINT: 525\n");

  if(((cf == 1) && (a33 == 14))) {
printf("POINT: 526\n");
printf("POINT: 527\n");

  if(((a200 == 9) && (cf == 1))) {
printf("POINT: 528\n");
  calculate_outputm33(input);
  }
printf("POINT: 529\n");

  if(((a200 == 10) && (cf == 1))) {
printf("POINT: 530\n");
  calculate_outputm35(input);
  }
  }
printf("POINT: 531\n");

  if(((a33 == 15) && (cf == 1))) {
printf("POINT: 532\n");
printf("POINT: 533\n");

  if(((cf == 1) && (a44 == 6))) {
printf("POINT: 534\n");
  calculate_outputm39(input);
  }
printf("POINT: 535\n");

  if(((cf == 1) && (a44 == 9))) {
printf("POINT: 536\n");
  calculate_outputm41(input);
  }
  }
  errorCheck();
  
printf("POINT: 537\n");

  if((cf == 1)){
printf("POINT: 538\n");
  
  
  }
  //fprintf(stderr, "Invalid input: %d\n", input);
  }
  
    
int main()
  {
  kappa = 0;
  // main i/o-loop

printf("POINT: 539\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++){
int symb = nondet_int(); __CPROVER_input("symb",symb);  

__CPROVER_input("a114",a114);
__CPROVER_input("a36",a36);
__CPROVER_input("a59",a59);
__CPROVER_input("a107",a107);
__CPROVER_input("a17",a17);
__CPROVER_input("a84",a84);
__CPROVER_input("a123",a123);
__CPROVER_input("a73",a73);
__CPROVER_input("a128",a128);
__CPROVER_input("a152",a152); 
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a114,a36,a59,a107,a17,a84,a123,a73,a128,a152);

  calculate_output(symb);
  }
  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a114,a36,a59,a107,a17,a84,a123,a73,a128,a152); 
  return 0;
  
  }
  
    
