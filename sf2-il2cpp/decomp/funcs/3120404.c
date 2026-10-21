// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$EKAMMIMDIPJ @ RVA 0x3120404

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__EKAMMIMDIPJ
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               bool LODKPINFHCO,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  SFButton_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar6;
  
  if ((DAT_04566620 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10978);
    FUN_01bab630(&StringLiteral_10979);
    DAT_04566620 = 1;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((!bVar1) || ((LODKPINFHCO && ((__this->fields).ILIAKNEMPHH == 1)))) {
      return;
    }
    pSVar3 = (__this->fields).NJHJPOAKMNP;
    (__this->fields).ILIAKNEMPHH = 1;
    if (pSVar3 != (SFButton_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,-15.0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).NJHJPOAKMNP;
      if ((pSVar3 != (SFButton_o *)0x0) &&
         (pNVar5 = (Nekki_SF2_GUI_ResolutionImage_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pSVar3,
                              Method_UnityEngine_Component_GetComponent<ResolutionImage>__),
         pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_10978,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).IELNFDNPDEM;
        if (pSVar3 != (SFButton_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,15.0,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).IELNFDNPDEM;
          if ((pSVar3 != (SFButton_o *)0x0) &&
             (pNVar5 = (Nekki_SF2_GUI_ResolutionImage_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pSVar3,
                                  Method_UnityEngine_Component_GetComponent<ResolutionImage>__),
             pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar5,StringLiteral_10979,(MethodInfo *)0x0);
            pNVar6 = (__this->fields).MAAPMDHDDGL;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Implicit
                              ((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
            if (bVar1) {
              pNVar6 = (__this->fields).MAAPMDHDDGL;
              if ((pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) ||
                 (pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                 pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032205e4;
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            }
            pNVar6 = (__this->fields).JMAFDBBBNEC;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Implicit
                              ((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
            method_00 = extraout_x1;
            if (bVar1) {
              pNVar6 = (__this->fields).JMAFDBBBNEC;
              if ((pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) ||
                 (pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                 pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032205e4;
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
              method_00 = extraout_x1_00;
            }
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Refresh(__this,method_00);
            if (!LODKPINFHCO) {
              return;
            }
            EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_032205e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

