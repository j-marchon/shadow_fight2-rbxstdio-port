// OJHODFIGFMA$$.ctor @ RVA 0x3240B78

void OJHODFIGFMA___ctor(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o **ppSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar2;
  OJHODFIGFMA_EMMLKOABOHF_o *__this_01;
  OJHODFIGFMA_EMMLKOABOHF_o **ppOVar3;
  IFBJEEAJGEO_o *__this_02;
  IFBJEEAJGEO_o **ppIVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_04567087 & 1) == 0) {
    FUN_01bab630(&System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
    FUN_01bab630(&OJHODFIGFMA_EMMLKOABOHF_TypeInfo);
    FUN_01bab630(&IFBJEEAJGEO_TypeInfo);
    FUN_01bab630(&Method_OJHODFIGFMA_<>c_FMDFGIKBIID__);
    FUN_01bab630(&OJHODFIGFMA_<>c_TypeInfo);
    DAT_04567087 = 1;
    method = extraout_x1;
  }
  if ((OJHODFIGFMA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OJHODFIGFMA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = OJHODFIGFMA_<>c_TypeInfo->static_fields->__9__44_0;
  if (pSVar5 == (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    if ((OJHODFIGFMA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OJHODFIGFMA_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)
             thunk_FUN_01bda818(System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &OJHODFIGFMA_<>c_TypeInfo->static_fields->__9__44_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  if (__this != (OJHODFIGFMA_o *)0x0) {
    (__this->fields).LAFPPPABCJG = pSVar5;
    thunk_FUN_01c20e04(&__this->fields,pSVar5);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
    ppSVar2 = &(__this->fields).GGPHFPNMIIJ;
    *ppSVar2 = (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)__this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    auVar6 = thunk_FUN_01bda818(OJHODFIGFMA_EMMLKOABOHF_TypeInfo);
    __this_01 = auVar6._0_8_;
    OJHODFIGFMA_EMMLKOABOHF___ctor(__this_01,auVar6._8_8_);
    ppOVar3 = &(__this->fields).HEHMPFLAEGE;
    *ppOVar3 = __this_01;
    thunk_FUN_01c20e04(ppOVar3,__this_01);
    __this_02 = (IFBJEEAJGEO_o *)thunk_FUN_01bda818(IFBJEEAJGEO_TypeInfo);
    IFBJEEAJGEO___ctor(__this_02,(MethodInfo *)0x0);
    ppIVar4 = &(__this->fields).APPPNIFKKCH;
    *ppIVar4 = __this_02;
    thunk_FUN_01c20e04(ppIVar4,__this_02);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

