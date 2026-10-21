// CMEBCBKGFFL$$IKCJLINAPOA @ RVA 0x3195B6C

System_String_o * CMEBCBKGFFL__IKCJLINAPOA(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *newValue;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a6e & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04566a6e = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar2 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  if (EIJDDKJONFO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__StartsWith(EIJDDKJONFO,pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
    newValue = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
    pSVar2 = System_String__Replace(EIJDDKJONFO,pSVar2,newValue,(MethodInfo *)0x0);
    bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03295c34;
  }
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(EIJDDKJONFO,(MethodInfo *)0x0);
  pSVar2 = EIJDDKJONFO;
  if (!bVar1) {
    return (System_String_o *)0x0;
  }
LAB_03295c34:
  pSVar2 = NEHNBJKKABI__EPMKDIAJEOI(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}

