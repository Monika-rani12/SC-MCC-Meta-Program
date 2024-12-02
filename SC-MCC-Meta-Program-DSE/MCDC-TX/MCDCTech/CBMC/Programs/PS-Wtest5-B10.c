//This program is psyco_io_1_true-unreach-call_false-termination.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else

#endif
#define BOUND 10
// method ids
int m_flush = 1;
int m_PipedOutputStream = 2;
int m_close = 3;
int m_write = 4;
int m_connect_1 = 5;
int m_connect_2 = 6;

int kappa; 

int main() {
kappa = 0;
int dummy = 1;
  int q=0,FLAG=0,i=0;
  int method_id;

  // variables
    int this_sink = 0;
    int this_sinkConnected = 0;
   

        // parameters
        int P1;
        int P2;
        int P3;
        int P4;

        
       __CPROVER_input("P1",P1);
        __CPROVER_input("P2",P2);
        __CPROVER_input("P3",P3);
        __CPROVER_input("P4",P4);

  int symb[19];


printf("POINT: 1\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++) {
printf("POINT: 2\n");
       
       //klee_make_symbolic(symb, sizeof(int ) * 19, "symb");

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
                    method_id = 2;
                    // non-conformance condition 
printf("POINT: 9\n");

                    if ( dummy != 1 ) {
printf("POINT: 10\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=0; this_sinkConnected=0; 
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

                  if ( dummy == 1 ){
printf("POINT: 16\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 17\n");

                    if ( (this_sink != 0) ) {
printf("POINT: 18\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
printf("POINT: 19\n");

                if(symb[3]){
printf("POINT: 20\n");
                  // assume guard
printf("POINT: 21\n");

                  if ( ((P2 != 1)  &&  (P1 != 0)) ){
printf("POINT: 22\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 23\n");

                    if ( ((P2 != 1)  &&  ((this_sink == 0)  &&  (P1 != 0))) ) {
printf("POINT: 24\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
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

                  if ( !((P2 != 1)  &&  (P1 != 0)) ){
printf("POINT: 28\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 29\n");

                    if ( dummy != 1 ) {
printf("POINT: 30\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
printf("POINT: 31\n");

        if (q == 2){
printf("POINT: 32\n");
        
printf("POINT: 33\n");

                if(symb[5]){
printf("POINT: 34\n");
                  // assume guard
printf("POINT: 35\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || (dummy != 1)) ){
printf("POINT: 36\n");
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
printf("POINT: 37\n");

                    if ( dummy != 1 ) {
printf("POINT: 38\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 39\n");

                if(symb[6]){
printf("POINT: 40\n");
                  // assume guard
printf("POINT: 41\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || ( dummy != 1 ))  &&  ((this_sink == 0)  || (dummy != 1)) ){
printf("POINT: 42\n");
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
printf("POINT: 43\n");

                    if ( dummy != 1 ) {
printf("POINT: 44\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 45\n");

                if(symb[7]){
printf("POINT: 46\n");
                  // assume guard
printf("POINT: 47\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || (dummy != 1)) ){
printf("POINT: 48\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 49\n");

                    if ( dummy != 1 ) {
printf("POINT: 50\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 51\n");

                if(symb[8]){
printf("POINT: 52\n");
                  // assume guard
printf("POINT: 53\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || (dummy != 1))  &&  ((this_sink == 0)  || ( dummy != 1 )) ){
printf("POINT: 54\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 55\n");

                    if ( dummy != 1 ) {
printf("POINT: 56\n");
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 57\n");

                if(symb[9]){
printf("POINT: 58\n");
                  // assume guard
printf("POINT: 59\n");

                  if ( dummy == 1 ){
printf("POINT: 60\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 61\n");

                    if ( (this_sink != 0) ) {
printf("POINT: 62\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
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

                  if ( ((P2 != 1)  &&  (P1 != 0)) ){
printf("POINT: 66\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 67\n");

                    if ( (((this_sink != 0)  &&  (P1 != 0))  &&  ((P2 != 1)  &&  (P1 != 0))) ) {
printf("POINT: 68\n");
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=P1; this_sinkConnected=1; 
                  }
                  continue;
                }
                
printf("POINT: 69\n");

                if(symb[11]){
printf("POINT: 70\n");
                  // assume guard
printf("POINT: 71\n");

                  if ( !((P2 != 1)  &&  (P1 != 0)) ){
printf("POINT: 72\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 73\n");

                    if ( dummy != 1 ) {
printf("POINT: 74\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
printf("POINT: 75\n");

        if (q == 3){
printf("POINT: 76\n");
        
printf("POINT: 77\n");

                if(symb[12]){
printf("POINT: 78\n");
                  // assume guard
printf("POINT: 79\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || ( dummy != 1 )) ){
printf("POINT: 80\n");
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
printf("POINT: 81\n");

                    if ( dummy != 1 ) {
printf("POINT: 82\n");
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 83\n");

                if(symb[13]){
printf("POINT: 84\n");
                  // assume guard
printf("POINT: 85\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || ( dummy != 1 )) &&  ((this_sink == 0)  || ( dummy != 1 )) ){
printf("POINT: 86\n");
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
printf("POINT: 87\n");

                    if ( dummy != 1 ) {
printf("POINT: 88\n");
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 89\n");

                if(symb[14]){
printf("POINT: 90\n");
                  // assume guard
printf("POINT: 91\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || ( dummy != 1 )) ){
printf("POINT: 92\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 93\n");

                    if ( dummy != 1 ) {
printf("POINT: 94\n");
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 95\n");

                if(symb[15]){
printf("POINT: 96\n");
                  // assume guard
printf("POINT: 97\n");

                  if ( (dummy == 1)  &&  ((this_sink != 0)  || ( dummy != 1 )) &&  ((this_sink == 0)  || ( dummy != 1 )) ){
printf("POINT: 98\n");
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
printf("POINT: 99\n");

                    if ( dummy != 1 ) {
printf("POINT: 100\n");
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 101\n");

                if(symb[16]){
printf("POINT: 102\n");
                  // assume guard
printf("POINT: 103\n");

                  if ( dummy == 1 ){
printf("POINT: 104\n");
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
printf("POINT: 105\n");

                    if ( (this_sink == 0) ) {
printf("POINT: 106\n");
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
printf("POINT: 107\n");

                if(symb[17]){
printf("POINT: 108\n");
                  // assume guard
printf("POINT: 109\n");

                  if ( ((P2 != 1)  &&  (P1 != 0)) ){
printf("POINT: 110\n");
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
printf("POINT: 111\n");

                    if ( ((P2 != 1)  &&  ((this_sink == 0)  &&  (P1 != 0))) ) {
printf("POINT: 112\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
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

                  if ( !((P2 != 1)  &&  (P1 != 0)) ){
printf("POINT: 116\n");
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
printf("POINT: 117\n");

                    if ( dummy != 1 ) {
printf("POINT: 118\n");
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
   

  } // end while

 ERROR:
 // printf("error \n ");


 
 


 return 0;
 }


