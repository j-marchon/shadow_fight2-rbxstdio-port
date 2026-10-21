// MatchingDialog.IIHAHEEPLAB$$MoveNext @ RVA 0x342D82C

bool MatchingDialog_IIHAHEEPLAB__MoveNext(MatchingDialog_IIHAHEEPLAB_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_o *__this_00;
  HJEODECHNDG_o *pHVar1;
  UnityEngine_WaitForSeconds_o *__this_01;
  CPNHNIKFGFB_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  MatchingDialog_o *__this_03;
  int iVar3;
  
  if ((DAT_04568151 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    FUN_01bab630(&StringLiteral_5962);
    DAT_04568151 = 1;
    method = extraout_x1;
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 1) {
    __this_03 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_02 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_02 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK(__this_02,0x29c2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_5962,(MethodInfo *)0x0);
      if (__this_03 != (MatchingDialog_o *)0x0) {
        MatchingDialog__DAPAJLBAJPJ(__this_03,method_00);
        return false;
      }
    }
  }
  else {
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((__this_00 != (JMDPBFOCHHP_o *)0x0) &&
       (pHVar1 = JMDPBFOCHHP__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0),
       pHVar1 != (HJEODECHNDG_o *)0x0)) {
      iVar3 = (pHVar1->fields)._HJOGHCLHGDF_k__BackingField;
      __this_01 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_01,(float)iVar3 / 1000.0,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_01;
      thunk_FUN_01c20e04(ppIVar2,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

