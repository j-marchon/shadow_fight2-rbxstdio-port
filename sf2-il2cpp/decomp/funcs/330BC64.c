// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$OnClick @ RVA 0x330BC64

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__OnClick
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t HONPNKFABKF;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  FFHKCJAOPLI_o *__this_03;
  MethodInfo *method_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  MethodInfo *method_01;
  System_String_o *pSVar4;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  CBLABOPKBKD_o *pCVar5;
  
  if ((DAT_04567783 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15553);
    FUN_01bab630(&StringLiteral_11430);
    FUN_01bab630(&StringLiteral_3315);
    FUN_01bab630(&StringLiteral_15791);
    DAT_04567783 = 1;
  }
  pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((pCVar5->fields).BGHFADDGPAD,StringLiteral_3315,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Menu_MenuAdvertisingButton__IONKKHOGGJM
                ((Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *)0x1,method_02);
    }
    pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
    if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
      method_04 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality
                        ((pCVar5->fields).BGHFADDGPAD,StringLiteral_11430,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BBFLOHNAIEH(__this,method_03);
        goto LAB_0340beb0;
      }
      pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
      if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                          ((pCVar5->fields).super._HOHLBKMCIDD_k__BackingField,(MethodInfo *)0x0);
        pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
        if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
          if (bVar1) {
            bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pCVar5->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
            if (bVar1) goto LAB_0340beb0;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
            if ((pCVar5 != (CBLABOPKBKD_o *)0x0) &&
               (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField,
               __this_00 != (DOPEEDABNEK_o *)0x0)) {
              __this_01 = DOPEEDABNEK__CKKIPBAIEMN
                                    (__this_00,(pCVar5->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
              if (__this_01 == (HOOAAGABMBL_o *)0x0) {
                pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
                if (pCVar5 == (CBLABOPKBKD_o *)0x0) goto LAB_0340bf24;
                pSVar4 = System_String__Concat
                                   (StringLiteral_15553,(pCVar5->fields).BMGMGAAPFGO,
                                    StringLiteral_15791,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
              }
              else {
                __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                HONPNKFABKF = HOOAAGABMBL__LHILOAKFKLP(__this_01,(MethodInfo *)0x0);
                __this_03 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                FFHKCJAOPLI___ctor(__this_03,HONPNKFABKF,__this_01,(System_String_o *)0x0,
                                   (System_String_o *)0x0,(MethodInfo *)0x0);
                if (__this_02 == (NDPMLPGANCI_o *)0x0) goto LAB_0340bf24;
                NDPMLPGANCI__EKPAFDJIAGI
                          (__this_02,4,(Il2CppObject *)__this_03,(System_Action_object__o *)0x0,true
                           ,(MethodInfo *)0x0);
              }
LAB_0340beb0:
              EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pSVar4 = (pCVar5->fields).super._HOHLBKMCIDD_k__BackingField;
            if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Application__OpenURL(pSVar4,(MethodInfo *)0x0);
            pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance(method_00);
            if (((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
                (pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField,
                pCVar5 != (CBLABOPKBKD_o *)0x0)) &&
               (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
              (pPVar3->fields).JEMIJCDAKLB = (pCVar5->fields).super._HOHLBKMCIDD_k__BackingField;
              method_01 = (MethodInfo *)thunk_FUN_01c20e04();
                    /* try { // try from 0340bea0 to 0350c037 has its CatchHandler @ 0340bea0
                       catch() { ... } // from try @ 0340bea0 with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c1f4 with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c2b4 with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c32c with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c36c with catch @ 0340bea0 */
              pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance(method_01);
              if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x50,method_04);
                goto LAB_0340beb0;
              }
            }
          }
        }
      }
    }
  }
LAB_0340bf24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

