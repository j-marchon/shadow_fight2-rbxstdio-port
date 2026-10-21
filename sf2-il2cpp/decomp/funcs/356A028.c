// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$LOCGOCHBNFM @ RVA 0x356A028

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__LOCGOCHBNFM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_00;
  UnityEngine_Transform_o *parent;
  HJNDPNIMBBG_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_ModelContainer_o **ppNVar4;
  OLKKAIFGGAK_o *__this_02;
  PJKHAJKEHEL_o **ppPVar5;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04568c20 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ModelContainer>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    DAT_04568c20 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__MJCLLBDDLDL(__this,method);
  pPVar1 = PEEIMHCMDND__BHNOCDOCAJD((__this->fields).MLAAJICBOAD,(MethodInfo *)0x0);
  ppPVar5 = &(__this->fields).HMNHABIBKIK;
  *ppPVar5 = pPVar1;
  thunk_FUN_01c20e04(ppPVar5,pPVar1);
  if (*ppPVar5 == (PJKHAJKEHEL_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._modelContainerPrefab;
  if (pNVar2 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    __this_00 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      pUVar3 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar3,parent,
                          Method_UnityEngine_Object_Instantiate<GameObject>__);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pNVar2 = (Nekki_SF2_Core_Fights_ModelContainer_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar3,Method_UnityEngine_GameObject_GetComponent<ModelContainer>__);
        ppNVar4 = &(__this->fields).GHNDNPOHEFO;
        *ppNVar4 = pNVar2;
        thunk_FUN_01c20e04(ppNVar4,pNVar2);
        if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
          Nekki_SF2_Core_Fights_ModelContainer__Init(*ppNVar4,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
            Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_Parameters
                      (*ppNVar4,*ppPVar5,4,StringLiteral_14870,(MethodInfo *)0x0);
            if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
              Nekki_SF2_Core_Fights_ModelContainer__ResetModelPosition(*ppNVar4,(MethodInfo *)0x0);
              if (*ppNVar4 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
                __this_02 = ((*ppNVar4)->fields).MAODNBMLDEG;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04565b7e == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7e = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
                if ((__this_01 != (HJNDPNIMBBG_o *)0x0) &&
                   (EFJKPCADGJH = HJNDPNIMBBG__EMBBBGLKPNN(__this_01,(MethodInfo *)0x0),
                   __this_02 != (OLKKAIFGGAK_o *)0x0)) {
                  OLKKAIFGGAK__HLCMLOBHLDA(__this_02,EFJKPCADGJH,false,(MethodInfo *)0x0);
                  return;
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

