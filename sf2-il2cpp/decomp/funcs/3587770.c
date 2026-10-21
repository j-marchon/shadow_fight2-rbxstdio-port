// Nekki.SF2.GUI.Map.MapScene$$IsSwitchingMapContainers @ RVA 0x3587770

bool Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar3;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *x;
  
  if ((DAT_04568d1c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d1c = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).CLKPHCHEEJA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
    if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03687874;
    bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsMovingNow(pNVar2,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_036877e0;
LAB_0368781c:
    bVar1 = true;
  }
  else {
LAB_036877e0:
    pNVar3 = (__this->fields).OPPIFBJOLBI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar2 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03687874;
      bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsMovingNow(pNVar2,(MethodInfo *)0x0);
      if (bVar1) goto LAB_0368781c;
    }
    x = (__this->fields).DGPJKBMBBNN;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      if (pNVar2 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        bVar1 = Nekki_SF2_GUI_Map_MapContainer__IsMovingNow(pNVar2,(MethodInfo *)0x0);
        return bVar1;
      }
LAB_03687874:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = false;
  }
  return bVar1;
}

