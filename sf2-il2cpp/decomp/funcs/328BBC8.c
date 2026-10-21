// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PJMHKMDNNKF @ RVA 0x328BBC8

UnityEngine_Vector3_o
Nekki_SF2_GUI_Dialogs_LotteryDialog__PJMHKMDNNKF
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).NAJKNFGDGGI;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_localScale(__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

