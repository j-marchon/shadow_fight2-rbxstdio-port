// Nekki.SF2.GUI.Fight.EndFightScreen$$OnDestroy @ RVA 0x2FEFED4

void Nekki_SF2_GUI_Fight_EndFightScreen__OnDestroy
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

