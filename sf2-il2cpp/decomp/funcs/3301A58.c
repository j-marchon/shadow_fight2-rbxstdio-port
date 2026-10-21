// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$Init @ RVA 0x3301A58

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  UnityEngine_RectTransform_o *parent;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  LabelButton_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *pNVar4;
  BKKENCMPLLF_o *pBVar5;
  System_Action_CPAPMBPHEAB__o *CJNHFNHJHPE;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_StaticFields *pNVar6;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar7;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o **ppNVar8;
  EEHFEPPDBHL_o *pEVar9;
  BKKENCMPLLF_o **ppBVar10;
  EEHFEPPDBHL_o **ppEVar11;
  
  if ((DAT_04567725 & 1) == 0) {
    FUN_01bab630(&System_Action<CPAPMBPHEAB>_TypeInfo);
    FUN_01bab630(&BKKENCMPLLF_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ClanProfileWidget>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_4853);
    FUN_01bab630(&StringLiteral_19344);
    DAT_04567725 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,IMMNELPBGIF);
    DAT_04565b84 = '\x01';
  }
  pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
       pNVar7 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0)) goto LAB_03401e74;
    Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll(pNVar7,pUVar2,pUVar3,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,StringLiteral_19344,
             StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.super.super._btnOK;
  if (__this_00 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(__this_00,StringLiteral_4853,(MethodInfo *)0x0);
    parent = (__this->fields)._profileWidgetMount;
    pUVar2 = (__this->fields)._profileWidgetPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,(UnityEngine_Transform_o *)parent,false,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar2,Method_UnityEngine_GameObject_GetComponent<ClanProfileWidget>__);
      ppNVar8 = &(__this->fields).BBKLDPELJHI;
      *ppNVar8 = pNVar4;
      thunk_FUN_01c20e04(ppNVar8,pNVar4);
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar9 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->
               FIGLLHBDHCN;
      pBVar5 = (BKKENCMPLLF_o *)thunk_FUN_01bda818(BKKENCMPLLF_TypeInfo);
      BKKENCMPLLF___ctor(pBVar5,pEVar9,(MethodInfo *)0x0);
      ppBVar10 = &(__this->fields).FLLHHEODKPH;
      *ppBVar10 = pBVar5;
      thunk_FUN_01c20e04(ppBVar10,pBVar5);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields
                         ->KGOBMNCADHH,(MethodInfo *)0x0);
      if (!bVar1) {
        pBVar5 = *ppBVar10;
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pBVar5 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        BKKENCMPLLF__BOENJKAFOEC
                  (pBVar5,Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields
                          ->KGOBMNCADHH,(MethodInfo *)0x0);
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields;
      pBVar5 = *ppBVar10;
      pEVar9 = pNVar6->FIGLLHBDHCN;
      if (pEVar9 == (EEHFEPPDBHL_o *)0x0) {
        if (pBVar5 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        pEVar9 = (pBVar5->fields)._OGOHLLOEANF_k__BackingField;
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pNVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields;
        }
        pNVar6->FIGLLHBDHCN = pEVar9;
        thunk_FUN_01c20e04(&pNVar6->FIGLLHBDHCN,pEVar9);
      }
      else {
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pEVar9 = Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->
                   FIGLLHBDHCN;
        }
        if (pBVar5 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        ppEVar11 = &(pBVar5->fields)._OGOHLLOEANF_k__BackingField;
        *ppEVar11 = pEVar9;
        thunk_FUN_01c20e04(ppEVar11);
        if (*ppBVar10 == (BKKENCMPLLF_o *)0x0) goto LAB_03401e74;
        BKKENCMPLLF__PEILNGJMJEC(*ppBVar10,1,(MethodInfo *)0x0);
      }
      if (*ppNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__Init
                  (*ppNVar8,(__this->fields).FLLHHEODKPH,(MethodInfo *)0x0);
        pNVar4 = (__this->fields).BBKLDPELJHI;
        CJNHFNHJHPE = (System_Action_CPAPMBPHEAB__o *)
                      thunk_FUN_01bda818(System_Action<CPAPMBPHEAB>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__add_OnInput
                    (pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          if (*ppNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetVisibleJoinTypePanel
                      (*ppNVar8,false,(MethodInfo *)0x0);
            if (*ppNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetTitleAlias
                        (*ppNVar8,StringLiteral_19344,(MethodInfo *)0x0);
              if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished
                  == 0) {
                thunk_FUN_01ba7564();
              }
              bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->
                                 static_fields->KGOBMNCADHH,(MethodInfo *)0x0);
              if (bVar1) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x03401e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(__this->klass->vtable)._39_LLKLEHBDELH.methodPtr)
                        (__this,(__this->klass->vtable)._39_LLKLEHBDELH.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_03401e74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

