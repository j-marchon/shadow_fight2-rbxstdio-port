// CMEBCBKGFFL$$OLJOOCGKALN @ RVA 0x31960DC

System_String_o * CMEBCBKGFFL__OLJOOCGKALN(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a74 & 1) == 0) {
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04566a74 = 1;
    method = extraout_x1;
  }
  if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_IO_Path_TypeInfo,method);
  }
  bVar1 = System_IO_Path__HasExtension(EIJDDKJONFO,(MethodInfo *)0x0);
  if (bVar1) {
    if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = System_IO_Path__ChangeExtension(EIJDDKJONFO,(System_String_o *)0x0,(MethodInfo *)0x0);
    return pSVar2;
  }
  return EIJDDKJONFO;
}

