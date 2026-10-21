// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$set_IsEnabled @ RVA 0x3171354

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_IsEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566924 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566924 = 1;
  }
  (__this->fields).CEPACCGIINO = CJNHFNHJHPE;
  x = (UnityEngine_Object_o *)(__this->fields)._DisabledIcon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    __this_00 = (__this->fields)._DisabledIcon;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive
              (__this_00,(__this->fields).CEPACCGIINO == false,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__GJGDEBECOEO(__this,method_00);
  return;
}

