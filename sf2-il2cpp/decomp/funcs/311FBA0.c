// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$GetBossAbilityEnabled @ RVA 0x311FBA0

bool Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__GetBossAbilityEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar1 = 0x30;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
    return (bool)*(undefined1 *)(lVar1 + 0x6c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

