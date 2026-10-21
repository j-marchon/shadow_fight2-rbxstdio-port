// GCIFMNHADDF.JLFCOKLPCGO$$OFADDGOGEEO @ RVA 0x31ABF18

bool GCIFMNHADDF_JLFCOKLPCGO__OFADDGOGEEO
               (GCIFMNHADDF_JLFCOKLPCGO_o *__this,GCIFMNHADDF_NFAHLBCFIPD_o *item,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *y;
  
  if ((DAT_04566b45 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b45 = 1;
  }
  if (item != (GCIFMNHADDF_NFAHLBCFIPD_o *)0x0) {
    x = (item->fields).BHDFAAMNDNC;
    y = (__this->fields).dialog;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

