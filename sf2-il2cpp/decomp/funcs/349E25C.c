// Nekki.SF2.GUI.Map.MapPanel$$SelectBattleByDirection @ RVA 0x349E25C

void Nekki_SF2_GUI_Map_MapPanel__SelectBattleByDirection
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,UnityEngine_Vector2_o FAGFGDBOLDP,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_Scroll_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_01;
  
  if ((DAT_04568479 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_04568479 = 1;
  }
  __this_00 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
                Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_01);
      }
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (__this_01 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattleByDirection
                (__this_01,FAGFGDBOLDP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

