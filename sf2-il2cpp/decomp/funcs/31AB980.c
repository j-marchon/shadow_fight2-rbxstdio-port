// GCIFMNHADDF$$IDKIMGGFFNH @ RVA 0x31AB980

void GCIFMNHADDF__IDKIMGGFFNH(GCIFMNHADDF_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  
  if ((DAT_04566b3e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b3e = 1;
    method = extraout_x1;
  }
  while( true ) {
    pNVar2 = (__this->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields)._AOOFDKJAALA_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).IsQuestDialog != false) break;
    (*(pNVar2->klass->vtable)._20_Close.methodPtr)(pNVar2,(pNVar2->klass->vtable)._20_Close.method);
    method = extraout_x1_00;
  }
  return;
}

