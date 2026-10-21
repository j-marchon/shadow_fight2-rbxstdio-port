// OGGBALCBCLL$$PPBANLLIGDK @ RVA 0x318AC98

void OGGBALCBCLL__PPBANLLIGDK(OGGBALCBCLL_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  System_Type_o *pSVar2;
  
  if ((DAT_04566a0e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_5994);
    DAT_04566a0e = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar1 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar2 = (__this->fields)._PAFHGGCMLEG_k__BackingField;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_Type__op_Equality(pSVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = (__this->fields)._DIHHONNHABO_k__BackingField;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Type__op_Equality(pSVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
    if (((!bVar1) &&
        ((__this->fields)._BILAHNNHICB_k__BackingField !=
         (System_Collections_Generic_List_string__o *)0x0)) &&
       ((__this->fields)._JGHJEDPFGCJ_k__BackingField !=
        (System_Collections_Generic_List_string__o *)0x0)) {
      return;
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_5994,(MethodInfo *)0x0);
  return;
}

