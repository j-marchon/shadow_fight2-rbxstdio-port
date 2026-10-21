// Nekki.SF2.GUI.Dialogs.LotteryDialog.HHMLGMLPBOJ$$MCJOKGKOPGG @ RVA 0x328E558

UnityEngine_Vector3_o
Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ__MCJOKGKOPGG
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o *pNVar1;
  UnityEngine_Vector3_Fields UVar2;
  
  pNVar1 = (__this->fields).__4__this;
  if (((pNVar1 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) &&
      (__this_00 = (pNVar1->fields).NAJKNFGDGGI,
      __this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar2 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_localScale(__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

