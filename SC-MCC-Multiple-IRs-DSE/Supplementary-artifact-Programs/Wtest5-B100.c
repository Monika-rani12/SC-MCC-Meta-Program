//This program is psyco_io_1_true-unreach-call_false-termination.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif
#define BOUND 100
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

        
        klee_make_symbolic(&P1, sizeof(int), "P1");
        klee_make_symbolic(&P2, sizeof(int), "P2");
        klee_make_symbolic(&P3, sizeof(int), "P3");
        klee_make_symbolic(&P4, sizeof(int), "P4");

  int symb[19];


  for (int FLAG=0;FLAG<BOUND;FLAG++) {
       
       klee_make_symbolic(symb, sizeof(int ) * 19, "symb");

    // states
        if (q == 0){      
                 
                if(symb[1]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 2;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
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
        if (q == 1){      

                if(symb[2]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
                    if ( (this_sink != 0) ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[3]){
                  // assume guard
                  if ( ((P2 != 1) && (P1 != 0)) ){ 
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
                    if ( ((P2 != 1) && ((this_sink == 0) && (P1 != 0))) ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[4]){
                  // assume guard
                  if ( !((P2 != 1) && (P1 != 0)) ){ 
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
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
        if (q == 2){      
        
                if(symb[5]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || (dummy != 1)) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[6]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || ( dummy != 1 )) && ((this_sink == 0) || (dummy != 1)) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[7]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || (dummy != 1)) ){ 
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[8]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || (dummy != 1)) && ((this_sink == 0) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[9]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
                    if ( (this_sink != 0) ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[10]){
                  // assume guard
                  if ( ((P2 != 1) && (P1 != 0)) ){ 
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
                    if ( (((this_sink != 0) && (P1 != 0)) && ((P2 != 1) && (P1 != 0))) ) {
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=P1; this_sinkConnected=1; 
                  }
                  continue;
                }
                
                if(symb[11]){
                  // assume guard
                  if ( !((P2 != 1) && (P1 != 0)) ){ 
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
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
        if (q == 3){      
        
                if(symb[12]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[13]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || ( dummy != 1 ))&& ((this_sink == 0) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[14]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[15]){
                  // assume guard
                  if ( (dummy == 1) && ((this_sink != 0) || ( dummy != 1 ))&& ((this_sink == 0) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[16]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
                    if ( (this_sink == 0) ) {
                      goto ERROR;
                    }
                    // state update
                    q = 3;
                    // post condition
                    this_sink=this_sink; this_sinkConnected=this_sinkConnected; 
                  }
                  continue;
                }
                
                if(symb[17]){
                  // assume guard
                  if ( ((P2 != 1) && (P1 != 0)) ){ 
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
                    if ( ((P2 != 1) && ((this_sink == 0) && (P1 != 0))) ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[18]){
                  // assume guard
                  if ( !((P2 != 1) && (P1 != 0)) ){ 
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
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

