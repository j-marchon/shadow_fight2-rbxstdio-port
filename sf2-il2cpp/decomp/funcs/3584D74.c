// Nekki.SF2.GUI.Map.MapScene$$UpdateCurrentZone @ RVA 0x3584D74

void Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_StoryMapContainer_o **ppNVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o **ppNVar3;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar4;
  
  if ((DAT_04568d08 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d08 = 1;
    method = extraout_x1;
  }
  ppNVar3 = &(__this->fields).CAJCGACFIHD;
  pNVar4 = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar2) {
    if (*ppNVar3 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_03684eb0;
    Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled(*ppNVar3,false,(MethodInfo *)0x0);
    *ppNVar3 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
  }
  ppNVar1 = &(__this->fields).DGPJKBMBBNN;
  if ((__this->fields).IAAABJBDEMK != 0) {
    ppNVar1 = (Nekki_SF2_GUI_Map_StoryMapContainer_o **)&(__this->fields).OPPIFBJOLBI;
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)*ppNVar1;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    return;
  }
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    pNVar4 = Nekki_SF2_GUI_Map_MapContainer__GetCurrentZone(__this_00,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      return;
    }
    *ppNVar3 = pNVar4;
    thunk_FUN_01c20e04(ppNVar3,pNVar4);
    if (*ppNVar3 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
      Nekki_SF2_GUI_Map_ZoneScrollItem__Enabled(*ppNVar3,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03684eb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

