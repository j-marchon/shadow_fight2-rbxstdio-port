// GCIFMNHADDF.BNFLBFKMCAG$$NHBPEJLCPFK @ RVA 0x31ABF88

bool GCIFMNHADDF_BNFLBFKMCAG__NHBPEJLCPFK
               (GCIFMNHADDF_BNFLBFKMCAG_o *__this,Nekki_SF2_GUI_Dialogs_BaseDialog_o *item,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *y;
  
  if ((DAT_04566b46 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b46 = 1;
  }
  y = (__this->fields).dialog;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  return bVar1;
}

