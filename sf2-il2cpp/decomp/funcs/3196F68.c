// Nekki.SF2.Core.Fights.Controls.ActionButtons$$ShowRanged @ RVA 0x3196F68

void Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowRanged
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnMissile;
  if ((__this_00 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

