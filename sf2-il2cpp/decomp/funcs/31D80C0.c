// LCKCDEKNLOA$$.ctor @ RVA 0x31D80C0

void LCKCDEKNLOA___ctor(LCKCDEKNLOA_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  System_Collections_Generic_List_BOFEMGGNODC__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04566cf7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BOFEMGGNODC>_TypeInfo);
    FUN_01bab630(&Method_LCKCDEKNLOA_<>c_IMCLGPNHPEG__);
    FUN_01bab630(&Method_LCKCDEKNLOA_<>c_PAIEHFKEJNL__);
    FUN_01bab630(&LCKCDEKNLOA_<>c_TypeInfo);
    DAT_04566cf7 = 1;
    method = extraout_x1;
  }
  if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LCKCDEKNLOA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LCKCDEKNLOA_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (LCKCDEKNLOA_o *)0x0) {
    (__this->fields).IGHHPBIADKJ = pSVar3;
    thunk_FUN_01c20e04(&__this->fields,pSVar3);
    if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_1;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((LCKCDEKNLOA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &LCKCDEKNLOA_<>c_TypeInfo->static_fields->__9__9_1;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    ppSVar1 = &(__this->fields).BHHLJDLBINB;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    __this_00 = (System_Collections_Generic_List_BOFEMGGNODC__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BOFEMGGNODC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BOFEMGGNODC>__ctor__);
    ppSVar2 = &(__this->fields).NEIJJHEFLHP;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

