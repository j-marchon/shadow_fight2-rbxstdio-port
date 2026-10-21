// Nekki.SF2.GUI.Map.MapScene$$MKEBFHLGMPO @ RVA 0x3584230

void Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar5;
  PKHMIGFEJCL_o *pPVar6;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *x;
  UnityEngine_UI_Button_o *pUVar7;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar8;
  
  if ((DAT_04568d0e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PAODHPJCAPN<MEJIKMPNBNL>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d0e = 1;
    method = extraout_x1;
  }
  x = (__this->fields).OPPIFBJOLBI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar5 = (__this->fields).FMIFNIIJJNK;
    if (pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) goto LAB_036843f4;
    pUVar7 = (pNVar5->fields).RaidMapScrollButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    if (bVar2) {
      iVar1 = (__this->fields).KFKABLNIFDP;
      iVar3 = DJNBJHPDKDP__PAODHPJCAPN<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).JFANFALIFFE,
                         Method_DJNBJHPDKDP_PAODHPJCAPN<MEJIKMPNBNL>__);
      pNVar5 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pUVar7 = (pNVar5->fields).RaidMapScrollButton, pUVar7 == (UnityEngine_UI_Button_o *)0x0))
      goto LAB_036843f4;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar7,iVar1 != iVar3,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         ((pUVar7 = (pNVar5->fields).RaidMapScrollButton, pUVar7 == (UnityEngine_UI_Button_o *)0x0
          || (__this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_GameObject_o *)0x0)))) goto LAB_036843f4;
      UnityEngine_GameObject__SetActive(__this_00,iVar1 != iVar3,(MethodInfo *)0x0);
    }
    pNVar5 = (__this->fields).FMIFNIIJJNK;
    if (pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) goto LAB_036843f4;
    pNVar8 = (pNVar5->fields).RaidToggleButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar8,(MethodInfo *)0x0);
    if (bVar2) {
      pNVar5 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar5 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pNVar8 = (pNVar5->fields).RaidToggleButton,
         pNVar8 == (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) goto LAB_036843f4;
      (pNVar8->fields).DIGKFGIEOAJ = (__this->fields).KFKABLNIFDP != 0;
      bVar2 = Nekki_SF2_GUI_Map_MapScene__IsSwitchingMapContainers(__this,method_00);
      Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable
                (pNVar8,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
    }
  }
  if ((__this->fields).IAAABJBDEMK != 1) {
    return;
  }
  pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar4->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar6->fields).PGFEMFBAJAG = (__this->fields).KFKABLNIFDP;
    pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar4,0x45,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036843f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

