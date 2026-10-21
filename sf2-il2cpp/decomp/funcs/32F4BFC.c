// NCNJEIBHGBH$$MKIGGEJHHMH @ RVA 0x32F4BFC

Nekki_SF2_GUI_Map_MapButton_o *
NCNJEIBHGBH__MKIGGEJHHMH
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButton_o *pNVar1;
  FKNCNNOOOIO_o *CJNHFNHJHPE;
  MethodInfo *in_x4;
  undefined1 local_38 [8];
  bool local_28 [4];
  int32_t local_24;
  
  if ((DAT_04567683 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8822);
    DAT_04567683 = 1;
  }
  local_24 = 0;
  local_38 = (undefined1  [8])0x0;
  local_28[0] = false;
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8822,(MethodInfo *)0x0);
  }
  else {
    method = (MethodInfo *)local_38;
    NCNJEIBHGBH__LFFLJMNNBBN(__this,&local_24,(int64_t *)method,local_28,in_x4);
    if (0 < local_24) {
      pNVar1 = NCNJEIBHGBH__KIGNIOMCNAP(__this,KCAHJMFOIAG,method);
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
        CJNHFNHJHPE = (pNVar1->fields).AEPNEAIEKOL;
        (pNVar1->fields).UseEventTimerPos = true;
        if (CJNHFNHJHPE != (FKNCNNOOOIO_o *)0x0) {
          (CJNHFNHJHPE->fields).ALLCFABAGOB = (int64_t)local_38;
          Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_MapButton__Refresh(pNVar1,(MethodInfo *)0x0);
          return pNVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  pNVar1 = NCNJEIBHGBH__CANNODKGOME(__this,KCAHJMFOIAG,method);
  return pNVar1;
}

