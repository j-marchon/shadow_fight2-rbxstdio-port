// Nekki.SF2.GUI.Map.MapScene$$FFFFAHJOOJP @ RVA 0x3584EB4

void Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar1;
  int iVar2;
  bool bVar3;
  int32_t DPJIDNBJIBG;
  MethodInfo *extraout_x1;
  MEJIKMPNBNL_o *pMVar4;
  System_String_o *DHMHOAAOHEK;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar5;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  
  if ((DAT_04568cff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cff = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).CAJCGACFIHD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    iVar2 = (__this->fields).IAAABJBDEMK;
    ppNVar1 = &(__this->fields).DGPJKBMBBNN;
    if (iVar2 != 0) {
      ppNVar1 = (Nekki_SF2_GUI_Map_StoryMapContainer_o **)&(__this->fields).OPPIFBJOLBI;
    }
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar3) {
      pNVar5 = (__this->fields).CAJCGACFIHD;
      if (pNVar5 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(pNVar5,(MethodInfo *)0x0);
        pNVar5 = (__this->fields).CAJCGACFIHD;
        if (((pNVar5 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) &&
            (pMVar4 = (pNVar5->fields).IAJBEJGMIMM, pMVar4 != (MEJIKMPNBNL_o *)0x0)) &&
           (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)) {
          DHMHOAAOHEK = (pMVar4->fields).DEKCPPOJFEH;
          DPJIDNBJIBG = Nekki_SF2_GUI_Map_MapContainer__GetCurrentItemIndex
                                  (__this_00,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_MapContainer__SetCurrentZone
                    (__this_00,DPJIDNBJIBG,DHMHOAAOHEK,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_MapContainer__SetLampsVisible(__this_00,iVar2 == 0,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

