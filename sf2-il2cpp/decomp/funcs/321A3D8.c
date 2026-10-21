// BKKPAKHJDKB$$.ctor @ RVA 0x321A3D8

void BKKPAKHJDKB___ctor(BKKPAKHJDKB_o *__this,MethodInfo *method)

{
  System_Action_BKKPAKHJDKB__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_BKKPAKHJDKB__o *pSVar2;
  
  if ((DAT_04566ef5 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_BKKPAKHJDKB_<>c_IMCLGPNHPEG__);
    FUN_01bab630(&BKKPAKHJDKB_<>c_TypeInfo);
    DAT_04566ef5 = 1;
    method = extraout_x1;
  }
  if ((BKKPAKHJDKB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BKKPAKHJDKB_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = BKKPAKHJDKB_<>c_TypeInfo->static_fields->__9__9_0;
  if (pSVar2 == (System_Action_BKKPAKHJDKB__o *)0x0) {
    if ((BKKPAKHJDKB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BKKPAKHJDKB_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_BKKPAKHJDKB__o *)thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &BKKPAKHJDKB_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (BKKPAKHJDKB_o *)0x0) {
    ppSVar1 = &(__this->fields).IDLOEOMGHOO;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).HHJIJKJCEOF = -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

