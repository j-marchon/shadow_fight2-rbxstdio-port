// Nekki.SF2.GUI.Map.MapScene$$SelectZone @ RVA 0x3586744

void Nekki_SF2_GUI_Map_MapScene__SelectZone
               (Nekki_SF2_GUI_Map_MapScene_o *__this,Nekki_SF2_GUI_Map_MapContainer_o *CCJPFANDJIJ,
               int32_t FKKFOKKIGCE,float PNEIGGOFIOA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar2;
  MethodInfo *method_00;
  
  if ((DAT_04568d06 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d06 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)CCJPFANDJIJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (CCJPFANDJIJ != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pNVar2 = Nekki_SF2_GUI_Map_MapContainer__GetZone(CCJPFANDJIJ,FKKFOKKIGCE,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__SelectBattle
                (__this,(pNVar2->fields).KOGBPIPIKFA,PNEIGGOFIOA,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

