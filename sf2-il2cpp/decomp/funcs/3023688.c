// LHOMEBJDFLD$$.ctor @ RVA 0x3023688

void LHOMEBJDFLD___ctor(LHOMEBJDFLD_o *__this,MethodInfo *method)

{
  System_Action_bool__o **ppSVar1;
  PGICCMFLDPI_o *pPVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  PGICCMFLDPI_o **ppPVar4;
  System_Action_bool__o *pSVar5;
  System_DateTime_Fields local_28;
  
  if ((DAT_04565c73 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_LHOMEBJDFLD_<>c_KOPCKFBLPBD__);
    FUN_01bab630(&LHOMEBJDFLD_<>c_TypeInfo);
    DAT_04565c73 = 1;
    method = extraout_x1;
  }
  local_28._dateData = 0;
  if ((LHOMEBJDFLD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHOMEBJDFLD_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = LHOMEBJDFLD_<>c_TypeInfo->static_fields->__9__10_0;
  if (pSVar5 == (System_Action_bool__o *)0x0) {
    if ((LHOMEBJDFLD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHOMEBJDFLD_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    ppSVar1 = &LHOMEBJDFLD_<>c_TypeInfo->static_fields->__9__10_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  if (__this != (LHOMEBJDFLD_o *)0x0) {
    (__this->fields).KEGLPIKPCOJ = pSVar5;
    thunk_FUN_01c20e04(&__this->fields,pSVar5);
    (__this->fields).AKKOPIGJABD = -1;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
    PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
    ppPVar4 = &(__this->fields).LCHIIFDNJMA;
    *ppPVar4 = pPVar2;
    thunk_FUN_01c20e04(ppPVar4,pPVar2);
    pPVar2 = *ppPVar4;
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_28._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
    iVar3 = System_DateTime__ToBinary((System_DateTime_o)&local_28,(MethodInfo *)0x0);
    if (pPVar2 != (PGICCMFLDPI_o *)0x0) {
      (pPVar2->fields).GDKPGIBMFPA = iVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

