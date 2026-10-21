// HCKCBFOGMMJ$$.ctor @ RVA 0x31CE3D8

void HCKCBFOGMMJ___ctor(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_00;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o **ppSVar1;
  IKCANHIFLGJ_o *__this_01;
  IKCANHIFLGJ_o **ppIVar2;
  KKLJIDJBFEI_o *pKVar3;
  System_Action_o *CJNHFNHJHPE;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  MethodInfo *extraout_x1;
  DCHAJIMIFHP_o *__this_02;
  
  if ((DAT_04566c89 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&Method_HCKCBFOGMMJ_AKEKGJAFBOC__);
    FUN_01bab630(&Method_HCKCBFOGMMJ_JGLGAMMLMGF__);
    FUN_01bab630(&IKCANHIFLGJ_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>__ctor__);
    FUN_01bab630(&StringLiteral_20480);
    DAT_04566c89 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>__ctor__);
  ppSVar1 = &(__this->fields).CMJNDHHGCBI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (IKCANHIFLGJ_o *)thunk_FUN_01bda818(IKCANHIFLGJ_TypeInfo);
  IKCANHIFLGJ___ctor(__this_01,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields).HDPMNCIAOFO;
  *ppIVar2 = __this_01;
  thunk_FUN_01c20e04(ppIVar2,__this_01);
  JICOLGELJGE<object>___ctor((JICOLGELJGE_T__o *)__this,Method_JICOLGELJGE<LFELBGMCDHD>__ctor__);
  pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__HKAALOKPBPG(pKVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
      __this_02 = (pKVar3->fields).super.FNHOHLGNHGN;
      EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__MPFFOIIBAKO(__this_02,StringLiteral_20480,EKDIECDFOIO,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

