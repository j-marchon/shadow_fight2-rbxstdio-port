// Nekki.SF2.GUI.Map.MapScene$$Update @ RVA 0x3589494

void Nekki_SF2_GUI_Map_MapScene__Update(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  Nekki_SF2_GUI_Map_StoryMapContainer_o *pNVar5;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar6;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar7;
  
  if ((DAT_04568d20 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_Update__);
    DAT_04568d20 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__Update
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<MapScene>_Update__);
  if ((__this->fields).super.DHKAODBNGNJ == false) {
    return;
  }
  pNVar5 = (__this->fields).DGPJKBMBBNN;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
    Nekki_SF2_GUI_Map_MapContainer__Flashing(pNVar3,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  bVar1 = Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers(__this,method_00);
  pNVar4 = (__this->fields).FMIFNIIJJNK;
  if (pNVar4 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar6 = (pNVar4->fields)._RaidDailyQuestsButton_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar4 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar4 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pNVar6 = (pNVar4->fields)._RaidDailyQuestsButton_k__BackingField,
         pNVar6 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) goto LAB_0368967c;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar6,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
    }
    pNVar7 = (__this->fields).OPPIFBJOLBI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (bVar2) {
        pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
        if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
        Nekki_SF2_GUI_Map_MapContainer__ShowUI(pNVar3,true,(MethodInfo *)0x0);
      }
      pNVar7 = (__this->fields).CLKPHCHEEJA;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
      bVar1 = true;
    }
    else {
      if (bVar2) {
        pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
        if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
        Nekki_SF2_GUI_Map_MapContainer__ShowUI
                  (pNVar3,(__this->fields).IAAABJBDEMK == 1,(MethodInfo *)0x0);
      }
      pNVar5 = (__this->fields).DGPJKBMBBNN;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_0368967c;
      bVar1 = (__this->fields).IAAABJBDEMK == 0;
    }
    Nekki_SF2_GUI_Map_MapContainer__ShowUI(pNVar3,bVar1,(MethodInfo *)0x0);
    return;
  }
LAB_0368967c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

