// Nekki.SF2.GUI.Map.MapScene$$PMPKEJKFNOE @ RVA 0x358511C

void Nekki_SF2_GUI_Map_MapScene__PMPKEJKFNOE
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_01;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  System_Action_o *pSVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__LLBIEPFEJPG(__this_00,(MethodInfo *)0x0);
    (__this->fields).IAAABJBDEMK = 0;
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      pPVar6 = (pNVar1->fields).QuestParameters;
      pSVar2 = MMOGKBGEPGM__GKMAFGODLLG(0x10,(MethodInfo *)0x0);
      if (pPVar6 != (PKHMIGFEJCL_o *)0x0) {
        ppSVar7 = &(pPVar6->fields).CHFDDNODLGP;
        *ppSVar7 = pSVar2;
        thunk_FUN_01c20e04(ppSVar7,pSVar2);
        pNVar4 = (__this->fields).FMIFNIIJJNK;
        if ((pNVar4 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
           (__this_01 = (pNVar4->fields).RaidToggleButton,
           __this_01 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
          Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_01,0,(MethodInfo *)0x0);
          pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
          if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
            Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,true,(MethodInfo *)0x0);
            pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
            if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
              Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,false,(MethodInfo *)0x0)
              ;
              Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_00);
              Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_01);
              pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
              if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar3,true,(MethodInfo *)0x0);
                pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
                if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                  method_02 = (MethodInfo *)0x0;
                  Nekki_SF2_GUI_Map_MapContainer__SetTouchEnabled(pNVar3,false,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method_02);
                  Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,method_02);
                  pSVar5 = (__this->fields).CLMHOCHLKBH;
                  if (pSVar5 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03685220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(pSVar5->fields).super.super.invoke_impl)
                              ((pSVar5->fields).super.super.method_code,
                               (pSVar5->fields).super.super.method);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

