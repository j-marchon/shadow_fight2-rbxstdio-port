// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupActive @ RVA 0x35160C4

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t OHLKNCPBCBL,bool GKGCMGDFHAH,
               MethodInfo *method)

{
  bool bVar1;
  MIBHAJBEMIK_array *GLIELCCFAGL;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)GKGCMGDFHAH;
  if ((DAT_0456892b & 1) == 0) {
    FUN_01bab630(&MIBHAJBEMIK___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456892b = 1;
  }
  GLIELCCFAGL = (MIBHAJBEMIK_array *)FUN_01bab718(MIBHAJBEMIK___TypeInfo,1);
  if (GLIELCCFAGL != (MIBHAJBEMIK_array *)0x0) {
    if ((int)GLIELCCFAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    GLIELCCFAGL->m_Items[0] = OHLKNCPBCBL;
    x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs(__this,GLIELCCFAGL,method_00);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((x != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,GKGCMGDFHAH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

