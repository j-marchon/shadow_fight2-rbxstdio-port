// ProfitViewer$$LFCEOEEBLMM @ RVA 0x32A5628

void ProfitViewer__LFCEOEEBLMM
               (ProfitViewer_o *__this,System_String_o *CADMJIKLNCN,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Exception_o *__this_00;
  undefined8 uVar3;
  CocosAnimation_o *pCVar4;
  
  if ((DAT_045673ea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673ea = 1;
  }
  pCVar4 = (__this->fields)._profitShine;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pCVar4 = (__this->fields)._profitShine;
  if (pCVar4 != (CocosAnimation_o *)0x0) {
    bVar1 = CocosAnimation__Init(pCVar4,CADMJIKLNCN,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5967);
      pSVar2 = System_String__Concat(pSVar2,CADMJIKLNCN,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
                    /* try { // try from 033a5704 to 034a574f has its CatchHandler @ 033a5704
                       catch() { ... } // from try @ 033a5704 with catch @ 033a5704
                       catch() { ... } // from try @ 033a5788 with catch @ 033a5704
                       catch() { ... } // from try @ 033a57c4 with catch @ 033a5704
                       catch() { ... } // from try @ 033a58b4 with catch @ 033a5704 */
      System_Exception___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
      uVar3 = thunk_FUN_01bb9178(&Method_ProfitViewer_LFCEOEEBLMM__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_00,uVar3);
    }
    pCVar4 = (__this->fields)._profitShine;
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      (pCVar4->fields)._PPEGDOHGLJJ_k__BackingField = 0.05;
      (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

