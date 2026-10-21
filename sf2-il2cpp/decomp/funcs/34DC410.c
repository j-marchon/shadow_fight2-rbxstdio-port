// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$MFGPEJCIEEE @ RVA 0x34DC410

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__MFGPEJCIEEE
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  if ((DAT_0456871a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456871a = 1;
  }
  DG_Tweening_ShortcutExtensions__DOKill
            ((UnityEngine_Component_o *)(__this->fields)._background,false,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._screenCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__JEGCBLKOEGN(true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

