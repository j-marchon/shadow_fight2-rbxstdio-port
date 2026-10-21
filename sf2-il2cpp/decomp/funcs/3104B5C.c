// MGENAMAJALB$$ANINCFLIDHO @ RVA 0x3104B5C

System_String_o * MGENAMAJALB__ANINCFLIDHO(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045664ec & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_22364);
    DAT_045664ec = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  if (EIJDDKJONFO != (System_String_o *)0x0) {
    bVar1 = System_String__Contains
                      (EIJDDKJONFO,MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return EIJDDKJONFO;
    }
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = System_String__Format
                       (StringLiteral_22364,
                        (Il2CppObject *)MGENAMAJALB_TypeInfo->static_fields->NENINNJGODF,
                        (Il2CppObject *)EIJDDKJONFO,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

