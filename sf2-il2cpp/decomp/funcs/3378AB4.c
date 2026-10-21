// ENFPENIMCIK$$.ctor @ RVA 0x3378AB4

void ENFPENIMCIK___ctor(ENFPENIMCIK_o *__this,ENFPENIMCIK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  ENFPENIMCIK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (ENFPENIMCIK_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
                    /* try { // try from 03478ad8 to 03578adf has its CatchHandler @ 03479c78 */
    thunk_FUN_01c20e04();
                    /* try { // try from 03478ae4 to 03578aeb has its CatchHandler @ 03479c7c */
    (__this->fields).CBIFOEGLMNM = (IBKIPBJJCPG->fields).CBIFOEGLMNM;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
                    /* try { // try from 03478afc to 03578b03 has its CatchHandler @ 03479ab4 */
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

