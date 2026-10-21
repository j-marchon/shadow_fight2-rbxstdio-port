// FMIEFKAKOMG$$.ctor @ RVA 0x3280A7C

void FMIEFKAKOMG___ctor(FMIEFKAKOMG_o *__this,FMIEFKAKOMG_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (FMIEFKAKOMG_o *)0x0) {
    pBVar1 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar1 = BECIPDJBAOG__Clone(pBVar1,(MethodInfo *)0x0);
    }
    if (__this != (FMIEFKAKOMG_o *)0x0) {
      (__this->fields).MJIIHOLHNCK = pBVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
        pKVar2 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
                    /* try { // try from 03380b00 to 03480b27 has its CatchHandler @ 03380fb8 */
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

