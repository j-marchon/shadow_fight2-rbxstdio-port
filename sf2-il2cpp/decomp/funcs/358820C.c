// Nekki.SF2.GUI.Map.MapScene$$UpdateZoneLamps @ RVA 0x358820C

void Nekki_SF2_GUI_Map_MapScene__UpdateZoneLamps
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *x;
  
  if ((DAT_04568d11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d11 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).DGPJKBMBBNN;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__UpdateLamps(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

