// Nekki.SF2.GUI.Dialogs.LotteryDialog$$JNPPMPMIPGN @ RVA 0x3287628

void Nekki_SF2_GUI_Dialogs_LotteryDialog__JNPPMPMIPGN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,UnityEngine_Vector3_o OOGPLJBADCD,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  __this_00 = (__this->fields).NAJKNFGDGGI;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localScale(__this_01,OOGPLJBADCD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

