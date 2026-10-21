// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$MMCHECDCGKF @ RVA 0x357390C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__MMCHECDCGKF
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03673940 to 03773967 has its CatchHandler @ 0367397c */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__UpdateProgressBar(__this,method_00);
    return;
  }
  return;
}

