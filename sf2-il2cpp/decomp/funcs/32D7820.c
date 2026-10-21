// Nekki.SF2.GUI.Pvp.PhaseBox$$DBKNMAJHPAN @ RVA 0x32D7820

Nekki_SF2_GUI_Pvp_PhaseCharacter_o *
Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04567599 & 1) == 0) {
    auVar4 = FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseCharacter_TypeInfo);
    DAT_04567599 = 1;
  }
  pNVar2 = (__this->fields)._phases;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
    if ((uint)pNVar2->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar3 = (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)pNVar2->m_Items[2];
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Pvp_PhaseCharacter_TypeInfo->_2).naturalAligment;
      if (bVar1 <= (((Nekki_SF2_GUI_Pvp_PhaseItem_c *)pNVar3->klass)->_2).naturalAligment) {
        if ((((Nekki_SF2_GUI_Pvp_PhaseItem_c *)pNVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
            == (Il2CppClass *)Nekki_SF2_GUI_Pvp_PhaseCharacter_TypeInfo) {
          return pNVar3;
        }
        return (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0;
      }
    }
    return (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

