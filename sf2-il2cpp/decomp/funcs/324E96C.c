// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$DeleteSlot @ RVA 0x324E96C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DeleteSlot
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NFIGEAOPJKM,
               MethodInfo *method)

{
  bool bVar1;
  NLPJLHOEAOE_o *__this_00;
  System_Xml_XmlNode_o *pSVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  FPPKHNNABAD_o *__this_01;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  System_String_o *pSVar4;
  PKHMIGFEJCL_o *pPVar5;
  undefined8 *puVar6;
  int32_t local_24;
  
  local_24 = NFIGEAOPJKM;
  if ((DAT_04567112 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_AONJACIMAPN__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15454);
    FUN_01bab630(&StringLiteral_4585);
    FUN_01bab630(&StringLiteral_6730);
    FUN_01bab630(&StringLiteral_6731);
    DAT_04567112 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    pSVar2 = NLPJLHOEAOE__MBLEGLIMGHP(__this_00,NFIGEAOPJKM,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_15454,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      return;
    }
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar3,0x3f,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        puVar6 = &StringLiteral_6731;
LAB_0334eb84:
        UnityEngine_Debug__Log((Il2CppObject *)*puVar6,(MethodInfo *)0x0);
        return;
      }
      pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
         (pPVar5 = (pNVar3->fields).QuestParameters, pPVar5 != (PKHMIGFEJCL_o *)0x0)) {
        (pPVar5->fields).DODHDMOKABD = NFIGEAOPJKM;
        pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          __this_01 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                                (pNVar3,StringLiteral_4585,(MethodInfo *)0x0);
          CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                        thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_01 != (FPPKHNNABAD_o *)0x0) {
            FPPKHNNABAD__EIAAJACOKDP(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
            pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
              Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar3,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              puVar6 = &StringLiteral_6730;
              goto LAB_0334eb84;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

