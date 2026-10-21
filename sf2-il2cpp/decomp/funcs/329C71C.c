// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$NBMBGKIMBBE @ RVA 0x329C71C

TabView_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,int32_t PAPNCMCIJNN,
          MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t FKIGDGJPIAC;
  UnityEngine_Component_o *pUVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *pNVar5;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o **ppNVar6;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *pNVar7;
  System_Action_object__o **ppSVar8;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *pNVar9;
  System_Action_object__o *pSVar10;
  System_Action_object__c *pSVar11;
  
  if ((DAT_045673a6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ClanInfoView>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<FindClanView>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<MembersClanView>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ClanInfoView>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<FindClanView>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<MembersClanView>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673a6 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_0339cac4;
  FKIGDGJPIAC = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
  if (PAPNCMCIJNN == 2) {
    pNVar7 = (__this->fields).BJHMGKHMGLH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o **)&(__this->fields).BJHMGKHMGLH;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar7 = (__this->fields)._tabFindClanPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar2 = (UnityEngine_Component_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pNVar7,
                          Method_UnityEngine_Object_Instantiate<FindClanView>__);
      if (pUVar2 == (UnityEngine_Component_o *)0x0) goto LAB_0339cac4;
      pNVar7 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)
               UnityEngine_Component__GetComponent<object>
                         (pUVar2,Method_UnityEngine_Component_GetComponent<FindClanView>__);
      *ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)pNVar7;
      thunk_FUN_01c20e04(ppNVar6,pNVar7);
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)*ppNVar6 ==
        (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)0x0) goto LAB_0339cac4;
    Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__Init
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)*ppNVar6,(MethodInfo *)0x0);
LAB_0339c9b0:
    pNVar5 = *ppNVar6;
  }
  else {
    if (PAPNCMCIJNN == 1) {
      pNVar5 = (__this->fields).NNNOHBNKKPP;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppNVar6 = &(__this->fields).NNNOHBNKKPP;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields)._tabGeneralInfoPrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar2 = (UnityEngine_Component_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pNVar5,
                            Method_UnityEngine_Object_Instantiate<ClanInfoView>__);
        if (pUVar2 == (UnityEngine_Component_o *)0x0) goto LAB_0339cac4;
        pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)
                 UnityEngine_Component__GetComponent<object>
                           (pUVar2,Method_UnityEngine_Component_GetComponent<ClanInfoView>__);
        *ppNVar6 = pNVar5;
        thunk_FUN_01c20e04(ppNVar6,pNVar5);
      }
      if (*ppNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)0x0) goto LAB_0339cac4;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__Init(*ppNVar6,FKIGDGJPIAC,(MethodInfo *)0x0);
      goto LAB_0339c9b0;
    }
    pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)0x0;
    if (PAPNCMCIJNN == 0) {
      pNVar9 = (__this->fields).CFJDODBFDKL;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o **)&(__this->fields).CFJDODBFDKL;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar9 = (__this->fields)._tabMembersPrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar2 = (UnityEngine_Component_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pNVar9,
                            Method_UnityEngine_Object_Instantiate<MembersClanView>__);
        if (pUVar2 == (UnityEngine_Component_o *)0x0) goto LAB_0339cac4;
        pNVar9 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)
                 UnityEngine_Component__GetComponent<object>
                           (pUVar2,Method_UnityEngine_Component_GetComponent<MembersClanView>__);
        *ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)pNVar9;
        thunk_FUN_01c20e04(ppNVar6,pNVar9);
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)*ppNVar6 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)0x0) goto LAB_0339cac4;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__Init
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)*ppNVar6,FKIGDGJPIAC,
                 (__this->fields)._viewsMountPoint,(MethodInfo *)0x0);
      goto LAB_0339c9b0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (TabView_o *)pNVar5;
  }
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)0x0) {
    ppSVar8 = &(pNVar5->fields).super.OnCloseClickAction;
    pSVar10 = *ppSVar8;
    pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    if (__this != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *)0x0) {
      System_Action<object>___ctor();
      pSVar3 = System_Delegate__Combine((System_Delegate_o *)pSVar10,pSVar3,(MethodInfo *)0x0);
      pSVar11 = System_Action<object>_TypeInfo;
      if (pSVar3 == (System_Delegate_o *)0x0) {
        lVar4 = 0;
        *ppSVar8 = (System_Action_object__o *)0x0;
      }
      else {
        pSVar10 = (System_Action_object__o *)
                  thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
        if (pSVar10 == (System_Action_object__o *)0x0) {
LAB_0339ca54:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar3,pSVar11);
        }
        *ppSVar8 = pSVar10;
        pSVar11 = System_Action<object>_TypeInfo;
        lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
        if (lVar4 == 0) goto LAB_0339ca54;
      }
      thunk_FUN_01c20e04(ppSVar8,lVar4);
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._viewsMountPoint;
      if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        return (TabView_o *)pNVar5;
      }
    }
  }
LAB_0339cac4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

