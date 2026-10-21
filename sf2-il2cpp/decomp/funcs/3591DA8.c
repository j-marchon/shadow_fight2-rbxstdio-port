// Nekki.SF2.GUI.Profile.BattlePassPanel$$ECIMACJIPAE @ RVA 0x3591DA8

void Nekki_SF2_GUI_Profile_BattlePassPanel__ECIMACJIPAE
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
               EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,bool DEELHIOKJMK,
               MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *__this_00;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *extraout_x1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *method_00;
  int iVar2;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar3;
  System_Collections_Generic_List_PIJBHIFGBCK__o *pSVar4;
  UnityEngine_GameObject_o **ppUVar5;
  UnityEngine_Object_o *x;
  
  method_00 = MLOLBLIGDHM;
  if ((DAT_04568d79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d79 = 1;
    method_00 = extraout_x1;
  }
  if (!DEELHIOKJMK) {
    if (MLOLBLIGDHM == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03691ed0;
    if ((MLOLBLIGDHM->fields)._PMDFLHCJAGH_k__BackingField == false) {
      if ((__this->fields).APPMGPBDDFD != false) {
        (__this->fields).APPMGPBDDFD = false;
        return;
      }
      pEVar3 = (__this->fields)._scroller;
      if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
        if ((pEVar3->fields)._scrollPosition <= 0.0) {
          iVar2 = 0;
        }
        else {
          pSVar4 = (__this->fields).IBBJADAIGIL;
          if (pSVar4 == (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) goto LAB_03691ed0;
          iVar2 = (pSVar4->fields)._size + -1;
        }
        (__this->fields).KEEBABPJPJK = iVar2;
        Nekki_SF2_GUI_Profile_BattlePassPanel__PGMEJIGDFIK(__this,(MethodInfo *)method_00);
        return;
      }
      goto LAB_03691ed0;
    }
  }
  __this_00 = (__this->fields)._btnGetReward;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
    ppUVar5 = &(__this->fields).BFGECCFLJBM;
    x = (UnityEngine_Object_o *)*ppUVar5;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (*ppUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(*ppUVar5,false,(MethodInfo *)0x0);
      *ppUVar5 = (UnityEngine_GameObject_o *)0x0;
      thunk_FUN_01c20e04(ppUVar5,0);
      return;
    }
  }
LAB_03691ed0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

