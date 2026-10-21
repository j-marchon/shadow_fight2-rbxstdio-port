// Nekki.SF2.GUI.Map.MapScene$$ScrollToItemByName @ RVA 0x35880AC

void Nekki_SF2_GUI_Map_MapScene__ScrollToItemByName
               (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t HONPNKFABKF,MethodInfo *method)

{
  bool_conflict bVar1;
  CHDGOFBHAFI_o *pCVar2;
  FKDLCJJOGIP_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04568d0f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d0f = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    bVar1 = (pCVar2->fields).BLELLCNDBHN;
    if (HONPNKFABKF == 0x11) {
      if (bVar1 == false) {
        Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_00);
        __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
          FKDLCJJOGIP__LGBOGFICFPF(__this_00,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0368816c;
      }
    }
    else if ((HONPNKFABKF == 0x10) && (bVar1 != false)) {
      Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_00);
      return;
    }
    return;
  }
LAB_0368816c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

