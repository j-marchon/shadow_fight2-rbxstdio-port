// JJPNLEPEAFM$$HMBOKGADCGK @ RVA 0x3532C84

bool JJPNLEPEAFM__HMBOKGADCGK(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this;
  
  bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
  if (bVar1) {
    __this = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
    if (__this == (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__OnBackKeyClicked
              (__this,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  }
  return bVar1;
}

