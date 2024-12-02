//This program is psyco_abp_1_false-no-overflow.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else

#endif


#define BOUND 1
// method ids
int m_Protocol = 1;
int m_msg_2 = 2;
int m_recv_ack_2 = 3;
int m_msg_1_1 = 4;
int m_msg_1_2 = 5;
int m_recv_ack_1_1 = 6;
int m_recv_ack_1_2 = 7;
 
int kappa;
int main() {
kappa = 0;
int dummy = 1;
  int q=0,FLAG=0,i=0;

  int method_id;

  // variables
    int this_expect = 0;
    int this_buffer_empty = 0;
   

        // parameters
        int P1;
        int P2;
        int P3;
        int P4;
        int P5;
        int P6;
        int P7;
        int P8;
        int P9;
        
        __CPROVER_input("P1",P1);
        __CPROVER_input("P2",P2);
        __CPROVER_input("P3",P3);
        __CPROVER_input("P4",P4);
        __CPROVER_input("P5",P5);
        
        __CPROVER_input("P6",P6);
        __CPROVER_input("P7",P7);
        __CPROVER_input("P8",P8);
        __CPROVER_input("P9",P9);

   int symb[32];


printf("POINT: 1\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++) {
printf("POINT: 2\n");
       
       //klee_make_symbolic(symb, sizeof(int ) * 32, "symb");
        

        


    // states
printf("POINT: 3\n");

        if (q == 0){      
printf("POINT: 4\n");
               
printf("POINT: 5\n");

                if(symb[1]){
printf("POINT: 6\n");
                  // assume guard
printf("POINT: 7\n");

                  if ( dummy == 1 ){ 
printf("POINT: 8\n");
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
printf("POINT: 9\n");

                    if ( dummy != 1 ) {
printf("POINT: 10\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    this_expect=0; this_buffer_empty=1; 
                  }
                  continue;
                }

          continue;
        }
printf("POINT: 11\n");

        if (q == 1){    
printf("POINT: 12\n");
  
printf("POINT: 13\n");

                if(symb[2]){
printf("POINT: 14\n");
                  // assume guard
printf("POINT: 15\n");

                  if ( !((P1 % 2) != (0 % 2)) ){ 
printf("POINT: 16\n");
                    // record method id
                    method_id = 2;
                    // non-conformance condition 
printf("POINT: 17\n");

                    if ( (((((P1 % 2) != (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  !((P1 % 2) != (0 % 2)))  || ((this_buffer_empty != 1)  &&  !((P1 % 2) != (0 % 2)))) ) {
printf("POINT: 18\n");
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_expect=(this_expect + 1); this_buffer_empty=(1 - this_buffer_empty); 
                  }
                  continue;
                }

printf("POINT: 19\n");

                if(symb[3]){
printf("POINT: 20\n");
                  // assume guard
printf("POINT: 21\n");

                  if ( !(P1 != (((0 + 1) - 1) % 2)) ){ 
printf("POINT: 22\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 23\n");

                    if ( (((P3 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  !(P3 != (((0 + 1) - 1) % 2))) ) {
printf("POINT: 24\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

printf("POINT: 25\n");

                if(symb[4]){
printf("POINT: 26\n");
                  // assume guard
printf("POINT: 27\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  (((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 28\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 29\n");

                    if ( (((((P4 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P4 % 2) != (0 % 2)))  &&  (((P4 % 2) != (0 % 2))  &&  (((P4 % 2) != ((0 + 1) % 2))  &&  ((P4 % 2) != (0 % 2))))) ) {
printf("POINT: 30\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

printf("POINT: 31\n");

                if(symb[5]){
printf("POINT: 32\n");
                  // assume guard
printf("POINT: 33\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  !(((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 34\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 35\n");

                    if ( (((((P6 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P6 % 2) != (0 % 2)))  &&  (((P6 % 2) != (0 % 2))  &&  !(((P6 % 2) != ((0 + 1) % 2))  &&  ((P6 % 2) != (0 % 2))))) ) {
printf("POINT: 36\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

printf("POINT: 37\n");

                if(symb[6]){
printf("POINT: 38\n");
                  // assume guard
printf("POINT: 39\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  ((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 40\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 41\n");

                    if ( ((((P8 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P8 != (((0 + 1) - 1) % 2)))  &&  ((P8 != (((0 + 1) - 1) % 2))  &&  ((P8 != ((((0 + 1) + 1) - 1) % 2))  &&  (P8 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 42\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 43\n");

                if(symb[7]){
printf("POINT: 44\n");
                  // assume guard
printf("POINT: 45\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  !((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 46\n");
                    // record method id
                    method_id = 7;
                    // non-conformance condition 
printf("POINT: 47\n");

                    if ( ((((P9 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P9 != (((0 + 1) - 1) % 2)))  &&  ((P9 != (((0 + 1) - 1) % 2))  &&  !((P9 != ((((0 + 1) + 1) - 1) % 2))  &&  (P9 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 48\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
printf("POINT: 49\n");

        if (q == 2){      
printf("POINT: 50\n");

printf("POINT: 51\n");

                if(symb[8]){
printf("POINT: 52\n");
                  // assume guard
printf("POINT: 53\n");

                  if ( !((P1 % 2) != (0 % 2)) ){ 
printf("POINT: 54\n");
                    // record method id
                    method_id = 2;
                    // non-conformance condition 
printf("POINT: 55\n");

                    if ( ((((P1 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  !((P1 % 2) != (0 % 2))) ) {
printf("POINT: 56\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

printf("POINT: 57\n");

                if(symb[9]){
printf("POINT: 58\n");
                  // assume guard
printf("POINT: 59\n");

                  if ( !(P1 != (((0 + 1) - 1) % 2)) ){ 
printf("POINT: 60\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 61\n");

                    if ( (((P3 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  !(P3 != (((0 + 1) - 1) % 2))) ) {
printf("POINT: 62\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
               
printf("POINT: 63\n");

                if(symb[10]){
printf("POINT: 64\n");
                  // assume guard
printf("POINT: 65\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  (((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 66\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 67\n");

                    if ( (((((P4 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P4 % 2) != (0 % 2)))  &&  (((P4 % 2) != (0 % 2))  &&  (((P4 % 2) != ((0 + 1) % 2))  &&  ((P4 % 2) != (0 % 2))))) ) {
printf("POINT: 68\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
               
printf("POINT: 69\n");

                if(symb[11]){
printf("POINT: 70\n");
                  // assume guard
printf("POINT: 71\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  !(((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 72\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 73\n");

                    if ( (((((P6 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P6 % 2) != (0 % 2)))  &&  (((P6 % 2) != (0 % 2))  &&  !(((P6 % 2) != ((0 + 1) % 2))  &&  ((P6 % 2) != (0 % 2))))) ) {
printf("POINT: 74\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
               
printf("POINT: 75\n");

                if(symb[12]){
printf("POINT: 76\n");
                  // assume guard
printf("POINT: 77\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  ((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 78\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 79\n");

                    if ( ((((P8 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P8 != (((0 + 1) - 1) % 2)))  &&  ((P8 != (((0 + 1) - 1) % 2))  &&  ((P8 != ((((0 + 1) + 1) - 1) % 2))  &&  (P8 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 80\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

printf("POINT: 81\n");

                if(symb[13]){
printf("POINT: 82\n");
                  // assume guard
printf("POINT: 83\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  !((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 84\n");
                    // record method id
                    method_id = 7;
                    // non-conformance condition 
printf("POINT: 85\n");

                    if ( ((((P9 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P9 != (((0 + 1) - 1) % 2)))  &&  ((P9 != (((0 + 1) - 1) % 2))  &&  !((P9 != ((((0 + 1) + 1) - 1) % 2))  &&  (P9 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 86\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
printf("POINT: 87\n");

        if (q == 3){      
printf("POINT: 88\n");
        
printf("POINT: 89\n");

                if(symb[14]){
printf("POINT: 90\n");
                  // assume guard
printf("POINT: 91\n");

                  if ( !((P1 % 2) != (0 % 2)) ){ 
printf("POINT: 92\n");
                    // record method id
                    method_id = 2;
                    // non-conformance condition 
printf("POINT: 93\n");

                    if ( ((((P1 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  !((P1 % 2) != (0 % 2))) ) {
printf("POINT: 94\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 95\n");

                if(symb[15]){
printf("POINT: 96\n");
                  // assume guard
printf("POINT: 97\n");

                  if ( !(P1 != (((0 + 1) - 1) % 2)) ){ 
printf("POINT: 98\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 99\n");

                    if ( (((this_buffer_empty == 1)  &&  !(P3 != (((0 + 1) - 1) % 2)))  || (((P3 != ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  !(P3 != (((0 + 1) - 1) % 2)))) ) {
printf("POINT: 100\n");
                      goto ERROR;
                    }
                    // state update
                    q = 4;
                    // post condition
                    this_expect=this_expect; this_buffer_empty=(1 - this_buffer_empty); 
                  }
                  continue;
                }

printf("POINT: 101\n");

                if(symb[16]){
printf("POINT: 102\n");
                  // assume guard
printf("POINT: 103\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  (((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 104\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 105\n");

                    if ( (((((P4 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P4 % 2) != (0 % 2)))  &&  (((P4 % 2) != (0 % 2))  &&  (((P4 % 2) != ((0 + 1) % 2))  &&  ((P4 % 2) != (0 % 2))))) ) {
printf("POINT: 106\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 107\n");

                if(symb[17]){
printf("POINT: 108\n");
                  // assume guard
printf("POINT: 109\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  !(((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 110\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 111\n");

                    if ( (((((P6 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P6 % 2) != (0 % 2)))  &&  (((P6 % 2) != (0 % 2))  &&  !(((P6 % 2) != ((0 + 1) % 2))  &&  ((P6 % 2) != (0 % 2))))) ) {
printf("POINT: 112\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
               
printf("POINT: 113\n");

                if(symb[18]){
printf("POINT: 114\n");
                  // assume guard
printf("POINT: 115\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  ((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 116\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 117\n");

                    if ( ((((P8 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P8 != (((0 + 1) - 1) % 2)))  &&  ((P8 != (((0 + 1) - 1) % 2))  &&  ((P8 != ((((0 + 1) + 1) - 1) % 2))  &&  (P8 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 118\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 119\n");

                if(symb[19]){
printf("POINT: 120\n");
                  // assume guard
printf("POINT: 121\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  !((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 122\n");
                    // record method id
                    method_id = 7;
                    // non-conformance condition 
printf("POINT: 123\n");

                    if ( ((((P9 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P9 != (((0 + 1) - 1) % 2)))  &&  ((P9 != (((0 + 1) - 1) % 2))  &&  !((P9 != ((((0 + 1) + 1) - 1) % 2))  &&  (P9 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 124\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
printf("POINT: 125\n");

        if (q == 4){      
printf("POINT: 126\n");
        
printf("POINT: 127\n");

                if(symb[20]){
printf("POINT: 128\n");
                  // assume guard
printf("POINT: 129\n");

                  if ( !((P1 % 2) != (0 % 2)) ){ 
printf("POINT: 130\n");
                    // record method id
                    method_id = 2;
                    // non-conformance condition 
printf("POINT: 131\n");

                    if ( ((((P1 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  !((P1 % 2) != (0 % 2))) ) {
printf("POINT: 132\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 133\n");

                if(symb[21]){
printf("POINT: 134\n");
                  // assume guard
printf("POINT: 135\n");

                  if ( !(P1 != (((0 + 1) - 1) % 2)) ){ 
printf("POINT: 136\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 137\n");

                    if ( (((P3 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  !(P3 != (((0 + 1) - 1) % 2))) ) {
printf("POINT: 138\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
               
printf("POINT: 139\n");

                if(symb[22]){
printf("POINT: 140\n");
                  // assume guard
printf("POINT: 141\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  (((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 142\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 143\n");

                    if ( (((((P4 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P4 % 2) != (0 % 2)))  &&  (((P4 % 2) != (0 % 2))  &&  (((P4 % 2) != ((0 + 1) % 2))  &&  ((P4 % 2) != (0 % 2))))) ) {
printf("POINT: 144\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 145\n");

                if(symb[23]){
printf("POINT: 146\n");
                  // assume guard
printf("POINT: 147\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  !(((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 148\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 149\n");

                    if ( ((((((P6 % 2) != (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P6 % 2) != (0 % 2)))  &&  (((P6 % 2) != (0 % 2))  &&  !(((P6 % 2) != ((0 + 1) % 2))  &&  ((P6 % 2) != (0 % 2)))))  || (((this_buffer_empty != 1)  &&  ((P6 % 2) != (0 % 2)))  &&  (((P6 % 2) != (0 % 2))  &&  !(((P6 % 2) != ((0 + 1) % 2))  &&  ((P6 % 2) != (0 % 2)))))) ) {
printf("POINT: 150\n");
                      goto ERROR;
                    }
                    // state update
                    q = 5;
                    // post condition
                    this_expect=(this_expect + 1); this_buffer_empty=(1 - this_buffer_empty); 
                  }
                  continue;
                }
                
printf("POINT: 151\n");

                if(symb[24]){
printf("POINT: 152\n");
                  // assume guard
printf("POINT: 153\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  ((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 154\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 155\n");

                    if ( ((((P8 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P8 != (((0 + 1) - 1) % 2)))  &&  ((P8 != (((0 + 1) - 1) % 2))  &&  ((P8 != ((((0 + 1) + 1) - 1) % 2))  &&  (P8 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 156\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 157\n");

                if(symb[25]){
printf("POINT: 158\n");
                  // assume guard
printf("POINT: 159\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  !((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 160\n");
                    // record method id
                    method_id = 7;
                    // non-conformance condition 
printf("POINT: 161\n");

                    if ( ((((P9 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P9 != (((0 + 1) - 1) % 2)))  &&  ((P9 != (((0 + 1) - 1) % 2))  &&  !((P9 != ((((0 + 1) + 1) - 1) % 2))  &&  (P9 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 162\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
printf("POINT: 163\n");

        if (q == 5){      
printf("POINT: 164\n");
        
printf("POINT: 165\n");

                if(symb[26]){
printf("POINT: 166\n");
                  // assume guard
printf("POINT: 167\n");

                  if ( !((P1 % 2) != (0 % 2)) ){ 
printf("POINT: 168\n");
                    // record method id
                    method_id = 2;
                    // non-conformance condition 
printf("POINT: 169\n");

                    if ( ((((P1 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  !((P1 % 2) != (0 % 2))) ) {
printf("POINT: 170\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 171\n");

                if(symb[27]){
printf("POINT: 172\n");
                  // assume guard
printf("POINT: 173\n");

                  if ( !(P1 != (((0 + 1) - 1) % 2)) ){ 
printf("POINT: 174\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 175\n");

                    if ( (((P3 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  !(P3 != (((0 + 1) - 1) % 2))) ) {
printf("POINT: 176\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 177\n");

                if(symb[28]){
printf("POINT: 178\n");
                  // assume guard
printf("POINT: 179\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  (((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 180\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 181\n");

                    if ( (((((P4 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P4 % 2) != (0 % 2)))  &&  (((P4 % 2) != (0 % 2))  &&  (((P4 % 2) != ((0 + 1) % 2))  &&  ((P4 % 2) != (0 % 2))))) ) {
printf("POINT: 182\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 183\n");

                if(symb[29]){
printf("POINT: 184\n");
                  // assume guard
printf("POINT: 185\n");

                  if ( (((P1 % 2) != (0 % 2))  &&  !(((P1 % 2) != ((0 + 1) % 2))  &&  ((P1 % 2) != (0 % 2)))) ){ 
printf("POINT: 186\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 187\n");

                    if ( (((((P6 % 2) == (this_expect % 2))  &&  (this_buffer_empty == 1))  &&  ((P6 % 2) != (0 % 2)))  &&  (((P6 % 2) != (0 % 2))  &&  !(((P6 % 2) != ((0 + 1) % 2))  &&  ((P6 % 2) != (0 % 2))))) ) {
printf("POINT: 188\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 189\n");

                if(symb[30]){
printf("POINT: 190\n");
                  // assume guard
printf("POINT: 191\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  ((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 192\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 193\n");

                    if ( ((((P8 == ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P8 != (((0 + 1) - 1) % 2)))  &&  ((P8 != (((0 + 1) - 1) % 2))  &&  ((P8 != ((((0 + 1) + 1) - 1) % 2))  &&  (P8 != (((0 + 1) - 1) % 2))))) ) {
printf("POINT: 194\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 195\n");

                if(symb[31]){
printf("POINT: 196\n");
                  // assume guard
printf("POINT: 197\n");

                  if ( ((P1 != (((0 + 1) - 1) % 2))  &&  !((P1 != ((((0 + 1) + 1) - 1) % 2))  &&  (P1 != (((0 + 1) - 1) % 2)))) ){ 
printf("POINT: 198\n");
                    // record method id
                    method_id = 7;
                    // non-conformance condition 
printf("POINT: 199\n");

                    if ( ((((this_buffer_empty == 1)  &&  (P9 != (((0 + 1) - 1) % 2)))  &&  ((P9 != (((0 + 1) - 1) % 2))  &&  !((P9 != ((((0 + 1) + 1) - 1) % 2))  &&  (P9 != (((0 + 1) - 1) % 2)))))  || ((((P9 != ((this_expect - 1) % 2))  &&  (this_buffer_empty != 1))  &&  (P9 != (((0 + 1) - 1) % 2)))  &&  ((P9 != (((0 + 1) - 1) % 2))  &&  !((P9 != ((((0 + 1) + 1) - 1) % 2))  &&  (P9 != (((0 + 1) - 1) % 2)))))) ) {
printf("POINT: 200\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    this_expect=this_expect; this_buffer_empty=(1 - this_buffer_empty); 
                  }
                  continue;
                }

          continue;
        }
   

  } // end while

 ERROR:
  //printf("error \n ");


 
 


 

 
return 0;
}

