// BKMLILFFPIH$$.ctor @ RVA 0x3047020

void BKMLILFFPIH___ctor(BKMLILFFPIH_o *__this,BKMLILFFPIH_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BKMLILFFPIH_o *)0x0) {
    pBVar1 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar1 = BECIPDJBAOG__Clone(pBVar1,(MethodInfo *)0x0);
    }
    if (__this != (BKMLILFFPIH_o *)0x0) {
      (__this->fields).MJIIHOLHNCK = pBVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
                    /* try { // try from 03147084 to 03247093 has its CatchHandler @ 0314710c */
        pKVar2 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 031470a0 to 032470ab has its CatchHandler @ 03147108 */
      (__this->fields).CKFPENBPNML = pGVar3;
                    /* try { // try from 031470ac to 03247123 has its CatchHandler @ 03146fb0 */
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

