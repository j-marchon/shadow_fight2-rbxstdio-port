// Nekki.SF2.GUI.Map.MapScene$$DJLEFJMMCMA @ RVA 0x35882CC

void Nekki_SF2_GUI_Map_MapScene__DJLEFJMMCMA
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar4;
  CHDGOFBHAFI_o *pCVar5;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar7;
  System_Action_o *pSVar8;
  PKHMIGFEJCL_o *pPVar9;
  System_String_o **ppSVar10;
  UnityEngine_UI_Button_o *pUVar11;
  
  if ((DAT_04568d12 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d12 = 1;
  }
  (__this->fields).IAAABJBDEMK = 1;
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    pPVar9 = (pNVar2->fields).QuestParameters;
    pSVar3 = MMOGKBGEPGM__GKMAFGODLLG(0x11,(MethodInfo *)0x0);
    if (pPVar9 != (PKHMIGFEJCL_o *)0x0) {
      ppSVar10 = &(pPVar9->fields).CHFDDNODLGP;
      *ppSVar10 = pSVar3;
      thunk_FUN_01c20e04(ppSVar10,pSVar3);
      Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
      Nekki_SF2_GUI_Map_MapScene__MJHDLJOINBP(__this,(__this->fields).FLAMCGAKENN,in_x2);
      pNVar7 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
         (__this_00 = (pNVar7->fields).RaidToggleButton,
         __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
        Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_00,1,(MethodInfo *)0x0);
        pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar4,false,(MethodInfo *)0x0);
          pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
          if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
            Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar4,true,(MethodInfo *)0x0);
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar5 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
            if (pCVar5 != (CHDGOFBHAFI_o *)0x0) {
              pMVar6 = method_01;
              if ((pCVar5->fields).BLELLCNDBHN != false) {
                Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_01);
                pMVar6 = extraout_x1;
              }
              Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,pMVar6);
              Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC(__this,method_02);
              pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
              if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar4,false,(MethodInfo *)0x0);
                pNVar4 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
                if (pNVar4 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                  pMVar6 = (MethodInfo *)0x0;
                  Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar4,true,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,pMVar6);
                  Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,pMVar6);
                  pNVar7 = (__this->fields).FMIFNIIJJNK;
                  if (pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
                    pUVar11 = (pNVar7->fields).RaidMapScrollButton;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar1 = UnityEngine_Object__op_Implicit
                                      ((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0);
                    pMVar6 = extraout_x1_00;
                    if (bVar1) {
                      pNVar7 = (__this->fields).FMIFNIIJJNK;
                      if (((pNVar7 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
                          (pUVar11 = (pNVar7->fields).RaidMapScrollButton,
                          pUVar11 == (UnityEngine_UI_Button_o *)0x0)) ||
                         (__this_01 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar11,
                                                 (MethodInfo *)0x0),
                         __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0368849c;
                      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
                      pMVar6 = extraout_x1_01;
                    }
                    Nekki_SF2_GUI_Map_MapScene__MKEBFHLGMPO(__this,pMVar6);
                    pSVar8 = (__this->fields).KFECPODMONB;
                    if (pSVar8 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03688498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)(pSVar8->fields).super.super.invoke_impl)
                                ((pSVar8->fields).super.super.method_code,
                                 (pSVar8->fields).super.super.method);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0368849c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

