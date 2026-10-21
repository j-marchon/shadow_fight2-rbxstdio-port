// LHKALFIIJKB$$FEJIKBIBCJB @ RVA 0x34FEF24

void LHKALFIIJKB__FEJIKBIBCJB(System_Action_o *HJNIEEICBFA,MethodInfo *method)

{
  bool_conflict bVar1;
  LHKALFIIJKB_c *method_00;
  bool bVar2;
  System_Action_o **ppSVar3;
  Core_Network_ServerProvider_o *__this;
  System_Action_bool__JSONNode__object__o *GFNABKGEGJA;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *GPJHCIPBFOG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar4;
  
  if ((DAT_04568840 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_JSONNode,_object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_668);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_669);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_JKJGJBJJPNB__);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568840 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
  ppSVar3 = &LHKALFIIJKB_TypeInfo->static_fields->BPDJGLJFDGC;
  *ppSVar3 = HJNIEEICBFA;
  thunk_FUN_01c20e04(ppSVar3,HJNIEEICBFA);
  LHKALFIIJKB_TypeInfo->static_fields->JDMCKMLFGBL = true;
  bVar2 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if (!bVar2) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_668,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_669,(MethodInfo *)0x0);
    GPJHCIPBFOG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    method_01 = extraout_x1_00;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
      method_01 = extraout_x1_01;
    }
    LHKALFIIJKB__LJGOKKLMLNN(GPJHCIPBFOG,method_01);
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    bVar1 = (pAVar4->fields).CFAEDJGDNPO;
    if ((bVar1 != false) && (bVar2 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0), !bVar2)) {
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04568907 == '\0') {
        FUN_01bab630(&LHKALFIIJKB_TypeInfo);
        DAT_04568907 = '\x01';
      }
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = LHKALFIIJKB_TypeInfo;
      LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
      LHKALFIIJKB__CLIHAFJDHKO((MethodInfo *)method_00);
      return;
    }
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04568907 == '\0') {
      FUN_01bab630(&LHKALFIIJKB_TypeInfo);
      DAT_04568907 = '\x01';
    }
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = true;
    __this = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
    GFNABKGEGJA = (System_Action_bool__JSONNode__object__o *)
                  thunk_FUN_01bda818(System_Action<bool,_JSONNode,_object>_TypeInfo);
    System_Action<bool,_object,_object>___ctor();
    if (__this != (Core_Network_ServerProvider_o *)0x0) {
      Core_Network_ServerProvider__RestoreDump
                (__this,bVar1 == false,GFNABKGEGJA,5000,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

