// Nekki.SF2.GUI.Fight.TextLine$$NAIMKJJOJBM @ RVA 0x338E548

void Nekki_SF2_GUI_Fight_TextLine__NAIMKJJOJBM
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04567c01 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c01 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).statValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).statValue;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,(__this->fields).CFJPINKJPOD,(pNVar2->klass->vtable)._75_set_text.method);
      __this_00 = (__this->fields).JLKPBAGACID;
      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

