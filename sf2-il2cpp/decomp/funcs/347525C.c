// Nekki.SF2.GUI.Map.BattleButton$$OnPointerDown @ RVA 0x347525C

void Nekki_SF2_GUI_Map_BattleButton__OnPointerDown
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568324 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14092);
    DAT_04568324 = 1;
  }
  SFButton__OnPointerDown((SFButton_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).PNDBLOIHIJJ,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092,
             (__this->fields).PNDBLOIHIJJ,(MethodInfo *)0x0);
  return;
}

