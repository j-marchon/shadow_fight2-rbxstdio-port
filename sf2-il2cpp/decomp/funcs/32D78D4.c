// Nekki.SF2.GUI.Pvp.PhaseBox$$GJANJPLLOPH @ RVA 0x32D78D4

Nekki_SF2_GUI_Pvp_PhaseWeapon_o *
Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456759c & 1) == 0) {
    auVar4 = FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseWeapon_TypeInfo);
    DAT_0456759c = 1;
  }
  pNVar2 = (__this->fields)._phases;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
    if ((int)pNVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar3 = (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)pNVar2->m_Items[0];
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Pvp_PhaseWeapon_TypeInfo->_2).naturalAligment;
      if (bVar1 <= (pNVar3->klass->_2).naturalAligment) {
        if ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_Pvp_PhaseWeapon_TypeInfo) {
          return pNVar3;
        }
        return (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0;
      }
    }
    return (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

