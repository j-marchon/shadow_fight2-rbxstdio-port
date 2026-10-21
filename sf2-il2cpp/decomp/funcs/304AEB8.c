// EGMONPGHHDP$$.ctor @ RVA 0x304AEB8

void EGMONPGHHDP___ctor(EGMONPGHHDP_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  
  if ((DAT_04565e02 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EGMONPGHHDP_<>c_EJLDFLICHHP__);
    FUN_01bab630(&EGMONPGHHDP_<>c_TypeInfo);
    DAT_04565e02 = 1;
    method = extraout_x1;
  }
  (__this->fields).KDCFELHDMKO = -1;
  (__this->fields).ILFGJMNODKJ = -1;
  if ((EGMONPGHHDP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EGMONPGHHDP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = EGMONPGHHDP_<>c_TypeInfo->static_fields->__9__55_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((EGMONPGHHDP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGMONPGHHDP_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &EGMONPGHHDP_<>c_TypeInfo->static_fields->__9__55_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  ppSVar1 = &(__this->fields).DOHDFNOOGAH;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

