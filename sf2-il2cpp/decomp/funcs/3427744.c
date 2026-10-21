// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$DCGKJKKNCEP @ RVA 0x3427744

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DCGKJKKNCEP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar2;
  int64_t iVar3;
  System_String_o *pSVar4;
  CHDGOFBHAFI_o *pCVar5;
  DG_Tweening_Sequence_o *pDVar6;
  System_Single_array *LLPEAMNMGML;
  UnityEngine_GameObject_o *pUVar7;
  DG_Tweening_Core_DOGetter_int__o **ppDVar8;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *pDVar9;
  ProgressLabelButton_o *__this_01;
  LabelButton_o *pLVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  long lVar13;
  DG_Tweening_Sequence_o **ppDVar14;
  DG_Tweening_Core_DOGetter_int__o *getter;
  long lVar15;
  float fVar16;
  
  if ((DAT_04568125 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_DNDFMKKBDDJ__);
    FUN_01bab630(&float___TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Tween>__);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_3A0B090895FEF4534B8C9BA7F9852C4A1122BF2036B87AC283D2089EA1E53EDF
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_PPPNDALJNCM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568125 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
     (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0), pPVar2 != (PGICCMFLDPI_o *)0x0
     )) {
    lVar13 = (pPVar2->fields).GDKPGIBMFPA;
    lVar15 = (__this->fields).PBACPHGLOFJ;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    iVar3 = LIIFLGALGNK__KBDEFJMHGFJ(lVar15 - lVar13,0,0x7fffffffffffffff,(MethodInfo *)0x0);
    pNVar12 = (__this->fields)._timeLabel;
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGFEKJBMGEB_TypeInfo);
    }
    pSVar4 = NGFEKJBMGEB__BCGDPKJNJCH
                       (iVar3 / 1000,true,true,3599999 < iVar3,86399999 < iVar3,StringLiteral_2086,
                        true,true,true,true,StringLiteral_1,StringLiteral_1,StringLiteral_1,
                        StringLiteral_1,(MethodInfo *)0x0);
    if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar12->klass->vtable)._75_set_text.methodPtr)
                (pNVar12,pSVar4,(pNVar12->klass->vtable)._75_set_text.method);
                    /* try { // try from 0352793c to 036279fb has its CatchHandler @ 0352793c
                       catch() { ... } // from try @ 0352793c with catch @ 0352793c
                       catch() { ... } // from try @ 03527a14 with catch @ 0352793c
                       catch() { ... } // from try @ 03527a6c with catch @ 0352793c
                       catch() { ... } // from try @ 03527a9c with catch @ 0352793c */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar5 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar5 != (CHDGOFBHAFI_o *)0x0) {
        IIPPMAOIKHB = (pCVar5->fields).AABMLCNHHPN;
        if (IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) {
          fVar16 = (float)(IIPPMAOIKHB->fields).IKNCNGMNPPK * 0.25 + 0.5;
          lVar13 = -0x8000000000000000;
          if (fVar16 != INFINITY) {
            lVar13 = (long)fVar16;
          }
          if ((iVar3 <= lVar13) &&
             (ppDVar14 = &(__this->fields).NEBFELNKBFG, *ppDVar14 == (DG_Tweening_Sequence_o *)0x0))
          {
            pNVar12 = (__this->fields)._timeLabel;
            if (pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03527ce8;
            (*(pNVar12->klass->vtable)._23_set_color.methodPtr)
                      (0x3f800000,0,0,0x3f800000,pNVar12,
                       (pNVar12->klass->vtable)._23_set_color.method);
            if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            (__this->fields).NEBFELNKBFG = pDVar6;
            thunk_FUN_01c20e04(ppDVar14,pDVar6);
                    /* try { // try from 035279fc to 03627a03 has its CatchHandler @ 03527a50 */
                    /* try { // try from 03527a0c to 03627a13 has its CatchHandler @ 03527a4c */
            LLPEAMNMGML = (System_Single_array *)FUN_01bab718(float___TypeInfo,8);
                    /* try { // try from 03527a14 to 03627a67 has its CatchHandler @ 0352793c */
            pMVar11 = (MethodInfo *)0x0;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)LLPEAMNMGML,
                       Field_<PrivateImplementationDetails>_3A0B090895FEF4534B8C9BA7F9852C4A1122BF2036B87AC283D2089EA1E53EDF
                       ,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__POLDKNNNAIN(__this,0.08,LLPEAMNMGML,pMVar11)
            ;
            DG_Tweening_TweenSettingsExtensions__AppendInterval
                      ((__this->fields).NEBFELNKBFG,1.0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527a0c with catch @ 03527a4c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035279fc with catch @ 03527a50
                        */
            DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                      ((Il2CppObject *)(__this->fields).NEBFELNKBFG,-1,0,
                       Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
          }
                    /* try { // try from 03527a68 to 03627a6b has its CatchHandler @ 03527a8c */
                    /* try { // try from 03527a6c to 03627a93 has its CatchHandler @ 0352793c */
          bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IIPPMAOIKHB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03527a68 with catch @ 03527a8c */
                    /* try { // try from 03527a94 to 03627a9b has its CatchHandler @ 03527ab0 */
          if (((bVar1) || (bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IIPPMAOIKHB,(MethodInfo *)0x0), bVar1))
             || (bVar1 = OOBBAGLCFPF__EJBFAOJGGNB(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
            pNVar12 = (__this->fields)._waitingResultLabel;
            if ((pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            pMVar11 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_02);
            (__this->fields).JAJAHBKJECF = false;
          }
          else {
            pNVar12 = (__this->fields)._waitingResultLabel;
                    /* try { // try from 03527a9c to 03627aa7 has its CatchHandler @ 0352793c */
                    /* try { // try from 03527aa8 to 03627aaf has its CatchHandler @ 03527ab0 */
            if ((pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03527a94 with catch @ 03527ab0
                       catch(type#2 @ 00000000) { ... } // from try @ 03527aa8 with catch @ 03527ab0
                        */
            pMVar11 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
            if ((__this->fields).JAJAHBKJECF == false) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_00);
              if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0)
              {
                thunk_FUN_01ba7564();
              }
              getter = Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->
                       __9__73_0;
              if (getter == (DG_Tweening_Core_DOGetter_int__o *)0x0) {
                if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished ==
                    0) {
                  thunk_FUN_01ba7564();
                }
                getter = (DG_Tweening_Core_DOGetter_int__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
                DG_Tweening_Core_DOGetter<int>___ctor();
                ppDVar8 = &Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->
                           __9__73_0;
                *ppDVar8 = getter;
                thunk_FUN_01c20e04(ppDVar8,getter);
              }
              setter = (DG_Tweening_Core_DOSetter_int__o *)
                       thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
              DG_Tweening_Core_DOSetter<int>___ctor();
              if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pDVar9 = DG_Tweening_DOTween__To(getter,setter,3,2.8,(MethodInfo *)0x0);
              (__this->fields).ENDLGPAGCBA = (DG_Tweening_Tween_o *)pDVar9;
              thunk_FUN_01c20e04(&(__this->fields).ENDLGPAGCBA);
              pMVar11 = (MethodInfo *)0x0;
              DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                        ((Il2CppObject *)(__this->fields).ENDLGPAGCBA,-1,0,
                         Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Tween>__);
              (__this->fields).JAJAHBKJECF = true;
            }
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible(__this,false,pMVar11);
            pNVar12 = (__this->fields)._finishHimLabel;
            if ((pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            __this_01 = (__this->fields)._btnFight;
            if ((__this_01 == (ProgressLabelButton_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            pLVar10 = (__this->fields)._btnFinalFight;
            if ((pLVar10 == (LabelButton_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar10,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            pLVar10 = (__this->fields)._btnExit;
            if ((pLVar10 == (LabelButton_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar10,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            pMVar11 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC(__this,method_01);
          }
          bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IIPPMAOIKHB,(MethodInfo *)0x0);
          if (bVar1) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState(__this,false,pMVar11);
            return;
          }
        }
        return;
      }
    }
  }
LAB_03527ce8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

