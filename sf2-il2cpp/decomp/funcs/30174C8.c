// ECENNHNBAME$$HEDBAJDHFAC @ RVA 0x30174C8

System_String_o * ECENNHNBAME__HEDBAJDHFAC(ECENNHNBAME_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar1;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_04565bdb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_19752);
    DAT_04565bdb = 1;
    method = extraout_x1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if (pEVar1 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_19752,(MethodInfo *)0x0);
    ppSVar3 = &string_TypeInfo->static_fields->Empty;
  }
  else {
    pEVar2 = (pEVar1->fields).EJNDOMGCGFL;
    if (pEVar2 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppSVar3 = &(pEVar2->fields).OBBONHJFLBG;
  }
  return *ppSVar3;
}

