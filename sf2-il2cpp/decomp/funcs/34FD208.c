// LHKALFIIJKB$$LJGOKKLMLNN @ RVA 0x34FD208

void LHKALFIIJKB__LJGOKKLMLNN(System_String_o *GPJHCIPBFOG,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  LHKALFIIJKB_c *pLVar2;
  System_Action_o **ppSVar3;
  System_Action_o *pSVar4;
  
  if ((DAT_04568850 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_688);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_689);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568850 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_688,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_689,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,GPJHCIPBFOG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
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
  pLVar2 = LHKALFIIJKB_TypeInfo;
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  if (DAT_04568906 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568906 = '\x01';
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar2->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  pSVar4 = pLVar2->static_fields->BPDJGLJFDGC;
  pLVar2->static_fields->_IKKBHKLDJLD_k__BackingField = true;
  if (pSVar4 != (System_Action_o *)0x0) {
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method);
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar2->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar2 = LHKALFIIJKB_TypeInfo;
  }
  ppSVar3 = &pLVar2->static_fields->BPDJGLJFDGC;
  *ppSVar3 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar3,0);
  return;
}

