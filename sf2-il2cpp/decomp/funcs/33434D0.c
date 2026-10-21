// OHPOFOPJIMB$$.ctor @ RVA 0x33434D0

void OHPOFOPJIMB___ctor(OHPOFOPJIMB_o *__this,int32_t BCFACBMOMKI,int32_t MABGFLNNGKH,
                       MethodInfo *method)

{
  System_Action_OHPOFOPJIMB__o **ppSVar1;
  System_Action_OHPOFOPJIMB__o *pSVar2;
  
  if ((DAT_045679ab & 1) == 0) {
    FUN_01bab630(&System_Action<OHPOFOPJIMB>_TypeInfo);
    FUN_01bab630(&Method_OHPOFOPJIMB_<>c_HDAOPCEMBJO__);
    FUN_01bab630(&OHPOFOPJIMB_<>c_TypeInfo);
    DAT_045679ab = 1;
  }
  if ((OHPOFOPJIMB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = OHPOFOPJIMB_<>c_TypeInfo->static_fields->__9__8_0;
  if (pSVar2 == (System_Action_OHPOFOPJIMB__o *)0x0) {
    if ((OHPOFOPJIMB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Action_OHPOFOPJIMB__o *)thunk_FUN_01bda818(System_Action<OHPOFOPJIMB>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &OHPOFOPJIMB_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (OHPOFOPJIMB_o *)0x0) {
    ppSVar1 = &(__this->fields).BHHLJDLBINB;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).EAFPDFHFBOM = MABGFLNNGKH;
    (__this->fields)._GEMCDLIDIBB_k__BackingField = BCFACBMOMKI;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

