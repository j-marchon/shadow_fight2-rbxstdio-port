// NLBPJNEGNNM$$MergeFrom @ RVA 0x35570B4

void NLBPJNEGNNM__MergeFrom(NLBPJNEGNNM_o *__this,NLBPJNEGNNM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  HCFOFHGNBKP_o *pHVar2;
  GLPEFEEGCPM_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  NLBPJNEGNNM_Fields *pNVar5;
  KAMBBJFPLGM_o **ppKVar6;
  HCFOFHGNBKP_o **ppHVar7;
  GLPEFEEGCPM_o **ppGVar8;
  
  if ((DAT_04568b71 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04568b71 = 1;
  }
  if (IBKIPBJJCPG == (NLBPJNEGNNM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar6 = &(__this->fields).OPHCNELIOLD;
    pKVar1 = *ppKVar6;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar1,(MethodInfo *)0x0);
      *ppKVar6 = pKVar1;
                    /* try { // try from 03657140 to 03757147 has its CatchHandler @ 036571fc */
      thunk_FUN_01c20e04(ppKVar6,pKVar1);
      pKVar1 = *ppKVar6;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) goto LAB_0365723c;
    }
                    /* try { // try from 03657150 to 03757163 has its CatchHandler @ 036571f8 */
    KAMBBJFPLGM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).PMMFPJJOPKE != (HCFOFHGNBKP_o *)0x0) {
    ppHVar7 = &(__this->fields).PMMFPJJOPKE;
                    /* try { // try from 03657164 to 03757213 has its CatchHandler @ 03656ff4 */
    pHVar2 = *ppHVar7;
    if (pHVar2 == (HCFOFHGNBKP_o *)0x0) {
      pHVar2 = (HCFOFHGNBKP_o *)thunk_FUN_01bda818(HCFOFHGNBKP_TypeInfo);
      HCFOFHGNBKP___ctor(pHVar2,(MethodInfo *)0x0);
      *ppHVar7 = pHVar2;
      thunk_FUN_01c20e04(ppHVar7,pHVar2);
      pHVar2 = *ppHVar7;
      if (pHVar2 == (HCFOFHGNBKP_o *)0x0) goto LAB_0365723c;
    }
    HCFOFHGNBKP__MergeFrom(pHVar2,(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IIIJBPAFNNF != (GLPEFEEGCPM_o *)0x0) {
    ppGVar8 = &(__this->fields).IIIJBPAFNNF;
    pGVar3 = *ppGVar8;
    if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
      pGVar3 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
      GLPEFEEGCPM___ctor(pGVar3,(MethodInfo *)0x0);
      *ppGVar8 = pGVar3;
      thunk_FUN_01c20e04(ppGVar8,pGVar3);
      pGVar3 = *ppGVar8;
      if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
LAB_0365723c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03657150 with catch @ 036571f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03657140 with catch @ 036571fc
                        */
    GLPEFEEGCPM__MergeFrom(pGVar3,(IBKIPBJJCPG->fields).IIIJBPAFNNF,(MethodInfo *)0x0);
  }
  pNVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pNVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 03657214 to 03757217 has its CatchHandler @ 03657240 */
  pNVar5->CKFPENBPNML = pGVar4;
                    /* try { // try from 03657218 to 0375724f has its CatchHandler @ 03656ff4 */
  thunk_FUN_01c20e04(pNVar5,pGVar4);
  return;
}

