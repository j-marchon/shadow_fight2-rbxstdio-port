// Nekki.SF2.GUI.Map.BattleButton$$BIDLPMOMPND @ RVA 0x34751B8

System_String_o *
Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
          (System_String_o *BJGIKNDJJFO,int32_t NKIAFKKEOBI,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04568323 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo);
    DAT_04568323 = 1;
  }
  local_48.klass = (System_Enum_c *)Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = NKIAFKKEOBI;
  pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(BJGIKNDJJFO,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}

