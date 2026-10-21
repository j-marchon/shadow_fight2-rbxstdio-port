// Nekki.SF2.GUI.Menu.MainMenu$$ShowDojoProgressBar @ RVA 0x356B2AC

void Nekki_SF2_GUI_Menu_MainMenu__ShowDojoProgressBar
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Action_MenuAdvertisingButton__o **ppSVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *__this_03;
  System_Action_MenuAdvertisingButton__o *action;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *pNVar6;
  System_Collections_Generic_List_MenuAdvertisingButton__o *x;
  
  if ((DAT_04568c3f & 1) == 0) {
    FUN_01bab630(&System_Action<MenuAdvertisingButton>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_<>c_FEMDOJINHKN__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_16007);
    FUN_01bab630(&StringLiteral_1606);
    DAT_04568c3f = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(__this_00,StringLiteral_16007,0,(MethodInfo *)0x0);
  if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
    return;
  }
  bVar1 = System_String__op_Inequality
                    ((pMVar4->fields).JAICMIMBIOA,StringLiteral_1606,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar6 = (__this->fields).KLPEJDHIIGF;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_01 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)(__this->fields).KLPEJDHIIGF;
    if (__this_01 == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) goto LAB_0366b580;
    bVar1 = Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__get_BattlePassExists
                      (__this_01,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_0366b42c;
    pNVar6 = (__this->fields).KLPEJDHIIGF;
  }
  else {
LAB_0366b42c:
    x = (__this->fields).ADBHOMPFAPK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar6 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
    if (pNVar6 == (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) goto LAB_0366b580;
    Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__UpdateRaidItemPack(pNVar6,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
    if (pNVar6 == (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) goto LAB_0366b580;
    bVar1 = Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__get_ItemExists(pNVar6,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar6 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
  }
  if ((pNVar6 != (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MainMenu__IDMLEMPNLFH(__this,method_00);
    if (CJNHFNHJHPE) {
      iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (((float)iVar2 / (float)iVar3 < 1.6125984) &&
         (__this_03 = (System_Collections_Generic_List_object__o *)
                      (__this->fields)._F2P_SpacerWidthLerpParams,
         __this_03 != (System_Collections_Generic_List_object__o *)0x0)) {
        if ((Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->static_fields->__9__127_0;
        if (action == (System_Action_MenuAdvertisingButton__o *)0x0) {
          if ((Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_MenuAdvertisingButton__o *)
                   thunk_FUN_01bda818(System_Action<MenuAdvertisingButton>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar5 = &Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->static_fields->__9__127_0;
          *ppSVar5 = action;
          thunk_FUN_01c20e04(ppSVar5,action);
        }
        System_Collections_Generic_List<object>__ForEach
                  (__this_03,(System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
        return;
      }
    }
    return;
  }
LAB_0366b580:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

