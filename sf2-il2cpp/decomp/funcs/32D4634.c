// KILNKIOAMLO$$.ctor @ RVA 0x32D4634

void KILNKIOAMLO___ctor(KILNKIOAMLO_o *__this,MethodInfo *method)

{
  System_Action_MEMHEPBAJJA__o **ppSVar1;
  System_Action_PKHMIGFEJCL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_MEMHEPBAJJA__o *pSVar3;
  System_Action_PKHMIGFEJCL__o *pSVar4;
  
  if ((DAT_04567527 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_EKBJCNLEMME__);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_NAKGFOAHNPG__);
    FUN_01bab630(&BOFEMGGNODC_<>c_TypeInfo);
    DAT_04567527 = 1;
    method = extraout_x1;
  }
  if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BOFEMGGNODC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_0;
  if (pSVar3 == (System_Action_MEMHEPBAJJA__o *)0x0) {
    if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BOFEMGGNODC_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_MEMHEPBAJJA__o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (KILNKIOAMLO_o *)0x0) {
    ppSVar1 = &(__this->fields).super.EKJDIBEOCDF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_1;
    if (pSVar4 == (System_Action_PKHMIGFEJCL__o *)0x0) {
      if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_PKHMIGFEJCL__o *)
               thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).super.BHHLJDLBINB;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

