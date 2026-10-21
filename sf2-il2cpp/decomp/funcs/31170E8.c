// FPIPKMIODLH.<>c$$JCIGMJKGONI @ RVA 0x31170E8

bool FPIPKMIODLH_<>c__JCIGMJKGONI(FPIPKMIODLH___c_o *__this,IEFEBEDLHNN_o *n,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
                    /* try { // try from 032170ec to 033170f7 has its CatchHandler @ 03216d70 */
                    /* try { // try from 032170f8 to 033170ff has its CatchHandler @ 03217100 */
  if ((DAT_045665bd & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032170e4 with catch @ 03217100
                       catch(type#2 @ 00000000) { ... } // from try @ 032170f8 with catch @ 03217100
                        */
                    /* try { // try from 03217104 to 03317227 has its CatchHandler @ 03217104
                       catch() { ... } // from try @ 03217104 with catch @ 03217104
                       catch() { ... } // from try @ 032173d0 with catch @ 03217104
                       catch() { ... } // from try @ 0321740c with catch @ 03217104
                       catch() { ... } // from try @ 0321744c with catch @ 03217104
                       catch() { ... } // from try @ 0321748c with catch @ 03217104 */
    __this = (FPIPKMIODLH___c_o *)FUN_01bab630(&StringLiteral_14870);
    DAT_045665bd = 1;
  }
  if ((n != (IEFEBEDLHNN_o *)0x0) &&
     (__this_00 = (n->fields).NPFMOEOIEKM, __this = (FPIPKMIODLH___c_o *)0x0,
     __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Contains(__this_00,StringLiteral_14870,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

