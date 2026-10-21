// Nekki.SF2.GUI.Map.MapScene$$SelectBattle @ RVA 0x3585B88

void Nekki_SF2_GUI_Map_MapScene__SelectBattle
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,float PNEIGGOFIOA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *y;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *y_00;
  
  if ((DAT_04568cf9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cf9 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    return;
  }
  pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685d0c;
  bVar1 = Nekki_SF2_GUI_Map_MapContainer__HasBattle(pNVar2,BANHBMINMMP,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)0x0;
  if (bVar1) {
    pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    if (__this_00 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03685d0c;
    bVar1 = Nekki_SF2_GUI_Map_MapContainer__HasBattle(__this_00,BANHBMINMMP,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  y = (__this->fields).DGPJKBMBBNN;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((bVar1) && (method_00 = extraout_x1, (__this->fields).IAAABJBDEMK != 0)) {
LAB_03685ccc:
    Nekki_SF2_GUI_Map_MapScene__OIFGCKKJBLI(__this,method_00);
  }
  else {
    y_00 = (__this->fields).OPPIFBJOLBI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0
                      );
    if ((bVar1) && (method_00 = extraout_x1_00, (__this->fields).IAAABJBDEMK != 1))
    goto LAB_03685ccc;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__SelectBattle(pNVar2,BANHBMINMMP,PNEIGGOFIOA,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_01);
    Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_02);
    return;
  }
LAB_03685d0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

