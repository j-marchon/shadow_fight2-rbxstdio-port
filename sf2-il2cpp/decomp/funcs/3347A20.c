// Nekki.SF2.GUI.Map.ZoneScrollItem$$UpdateBattleHidden @ RVA 0x3347A20

void Nekki_SF2_GUI_Map_ZoneScrollItem__UpdateBattleHidden
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_BattleButton_o *BECCOGAMKJL;
  MethodInfo *method_00;
  
  if ((DAT_045679d0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679d0 = 1;
  }
  BECCOGAMKJL = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle(__this,BANHBMINMMP,method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)BECCOGAMKJL,
                     (MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Map_ZoneScrollItem__GPAECDJPJPF(__this,BECCOGAMKJL,method_00);
    return;
  }
  return;
}

