// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$UpdateContent @ RVA 0x353A960

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               ODKDFMHHLIP_o *NONPLOOOOAG,MethodInfo *method)

{
  ODKDFMHHLIP_o *pOVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  int iVar8;
  EEGDOGKBLNG_o *pEVar9;
  int64_t iVar10;
  OHDDKGHEEPA_o *__this_00;
  EEOMEMBBGNA_o *pEVar11;
  CJFBGEEIPBA_o *__this_01;
  CHDGOFBHAFI_o *__this_02;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  System_Action_o *pSVar12;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  HCKCBFOGMMJ_o *__this_06;
  GKLPDMLELJF_o *pGVar13;
  System_String_o *pSVar14;
  PLIIGOCLJDL_o *__this_07;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar15;
  UnityEngine_GameObject_o *pUVar16;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_array *values;
  char cVar17;
  ODKDFMHHLIP_Fields *pOVar18;
  ProgressBar_o *pPVar19;
  LabelButton_o *pLVar20;
  Nekki_SF2_GUI_LabelAlias_o *pNVar21;
  Nekki_SF2_GUI_TextButton_o *pNVar22;
  UnityEngine_Events_UnityEvent_o *__this_08;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar23;
  bool_conflict *pbVar24;
  byte bVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Color_o UVar32;
  int32_t local_6c;
  undefined4 local_68;
  int32_t local_64;
  
  if ((DAT_04568ac2 & 1) == 0) {
    FUN_01bab630(&ADOCEKEFHJN_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_HCKCCFCAODO__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_HGPNEDGAAJB__)
    ;
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_18050);
    FUN_01bab630(&StringLiteral_22294);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_16814);
    FUN_01bab630(&StringLiteral_22510);
    DAT_04568ac2 = 1;
  }
  local_64 = 0;
  if (NONPLOOOOAG != (ODKDFMHHLIP_o *)0x0) {
    bVar25 = (ADOCEKEFHJN_TypeInfo->_2).naturalAligment;
    if (bVar25 <= (NONPLOOOOAG->klass->_2).naturalAligment) {
      pOVar1 = NONPLOOOOAG;
      if ((NONPLOOOOAG->klass->_2).typeHierarchy[(ulong)bVar25 - 1] !=
          (Il2CppClass *)ADOCEKEFHJN_TypeInfo) {
        pOVar1 = (ODKDFMHHLIP_o *)0x0;
      }
      if (pOVar1 != (ODKDFMHHLIP_o *)0x0) {
        iVar7 = pOVar1[1].fields.DNPAFIFHKIP;
        (__this->fields).GPLBBNOPMID = pOVar1[1].fields.MOIGDPBNMNI;
        (__this->fields).EIMPNFFLONC = iVar7;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar9 != (EEGDOGKBLNG_o *)0x0) {
          iVar10 = EEGDOGKBLNG__APCMGOCHMGC(pEVar9,(MethodInfo *)0x0);
          pOVar18 = &pOVar1[2].fields;
          lVar26 = pOVar1[1].fields.AAOLHLPDBPN;
          (__this->fields).DLEPGBBEFAK = (int32_t)pOVar18->AAOLHLPDBPN;
          pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar9 != (EEGDOGKBLNG_o *)0x0) {
            iVar7 = EEGDOGKBLNG__IGIHHCEONEM(pEVar9,(MethodInfo *)0x0);
            (__this->fields).CLGKDPLPKGE = (int)pOVar18->AAOLHLPDBPN <= iVar7;
            iVar7 = (__this->fields).EIMPNFFLONC;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = MGNPHCAAEIO__NKGMFCALKAM(iVar7,(MethodInfo *)0x0);
            if (__this_00 == (OHDDKGHEEPA_o *)0x0) {
              bVar5 = false;
            }
            else {
              if ((__this_00->fields).super.HHDBIGKBMEC == false) {
                bVar5 = false;
              }
              else {
                bVar5 = OOMHDDBCBJP__KFMAFEPOEIB((OOMHDDBCBJP_o *)__this_00,(MethodInfo *)0x0);
                if (bVar5) {
                  bVar5 = false;
                }
                else {
                  iVar8 = (*(__this_00->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                                    (__this_00,(__this_00->klass->vtable)._15_AAHLCCCONKI.method);
                  bVar5 = iVar8 == 2;
                }
              }
              if (__this == (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *)0x0)
              goto LAB_0363b4b0;
            }
            (__this->fields).LFKBADICOFG = bVar5;
            if ((__this->fields).LFKBADICOFG == false) {
              bVar25 = 1;
            }
            else {
              bVar25 = (__this->fields).CLGKDPLPKGE ^ 1;
            }
            iVar8 = *(int *)((long)&pOVar1[2].fields.AAOLHLPDBPN + 4);
            iVar2 = pOVar1[2].fields.MOIGDPBNMNI;
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
            if ((pEVar11 != (EEOMEMBBGNA_o *)0x0) &&
               (__this_01 = (pEVar11->fields).GMNJEBCECDA, __this_01 != (CJFBGEEIPBA_o *)0x0)) {
              bVar5 = CJFBGEEIPBA__HOMIFFIACAC(__this_01,(MethodInfo *)0x0);
              if (bVar5) {
                bVar5 = true;
              }
              else {
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                if (__this_02 == (CHDGOFBHAFI_o *)0x0) goto LAB_0363b4b0;
                bVar5 = CHDGOFBHAFI__BHHNJDDGDHF(__this_02,(MethodInfo *)0x0);
              }
              bVar3 = iVar8 != iVar2;
              __this_03 = (__this->fields)._contentButton;
              bVar4 = lVar26 != iVar10;
              if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
                UnityEngine_UI_Selectable__set_interactable
                          ((UnityEngine_UI_Selectable_o *)__this_03,bVar25 != 0,(MethodInfo *)0x0);
                if ((__this->fields).JOBALMMDPAF == false) {
                  __this_04 = (__this->fields)._playersRoot;
                  if (__this_04 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0363b4b0;
                  UVar31 = UnityEngine_RectTransform__get_anchoredPosition3D
                                     (__this_04,(MethodInfo *)0x0);
                  (__this->fields).AJPHAMEDLHP.fields.x = UVar31.fields.x;
                  (__this->fields).AJPHAMEDLHP.fields.y = UVar31.fields.y;
                  (__this->fields).AJPHAMEDLHP.fields.z = UVar31.fields.z;
                }
                pNVar21 = (__this->fields)._invitationMessage;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar6 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pNVar21 = (__this->fields)._invitationMessage;
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                            (pNVar21,(pOVar1->fields).ABCHAOKFLGL,
                             (pNVar21->klass->vtable)._75_set_text.method);
                  pNVar21 = (__this->fields)._invitationMessage;
                  pSVar12 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
                            ((Nekki_SF2_GUI_TextPic_o *)pNVar21,pSVar12,(MethodInfo *)0x0);
                  pNVar21 = (__this->fields)._invitationMessage;
                  pSVar12 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                            ((Nekki_SF2_GUI_TextPic_o *)pNVar21,pSVar12,(MethodInfo *)0x0);
                }
                pNVar21 = (__this->fields)._nick;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar6 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pNVar21 = (__this->fields)._nick;
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                            (pNVar21,NONPLOOOOAG[1].klass,
                             (pNVar21->klass->vtable)._75_set_text.method);
                }
                pNVar22 = (__this->fields)._buttonProfile;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar6 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pNVar22,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pNVar22 = (__this->fields)._buttonProfile;
                  if ((pNVar22 == (Nekki_SF2_GUI_TextButton_o *)0x0) ||
                     (__this_05 = (pNVar22->fields).super.super.super.m_OnClick,
                     __this_05 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0))
                  goto LAB_0363b4b0;
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                            ((UnityEngine_Events_UnityEventBase_o *)__this_05,(MethodInfo *)0x0);
                  pNVar22 = (__this->fields)._buttonProfile;
                  if (pNVar22 == (Nekki_SF2_GUI_TextButton_o *)0x0) goto LAB_0363b4b0;
                  __this_08 = (UnityEngine_Events_UnityEvent_o *)
                              (pNVar22->fields).super.super.super.m_OnClick;
                  call = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_08 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0363b4b0;
                  UnityEngine_Events_UnityEvent__AddListener(__this_08,call,(MethodInfo *)0x0);
                }
                (__this->fields).HOJBIBBGOIH = pOVar1[1].fields.AAOLHLPDBPN;
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_06 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                if (__this_06 != (HCKCBFOGMMJ_o *)0x0) {
                  pGVar13 = HCKCBFOGMMJ__LLEJFHJIBHC
                                      (__this_06,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
                  pNVar21 = (__this->fields)._danLabel;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((pGVar13 != (GKLPDMLELJF_o *)0x0) && (bVar6)) {
                    local_64 = (pGVar13->fields).PEBHLKLGDBM;
                    pNVar21 = (__this->fields)._danLabel;
                    pSVar14 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                    (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                              (pNVar21,pSVar14,(pNVar21->klass->vtable)._75_set_text.method);
                  }
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  __this_07 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                  if (__this_07 != (PLIIGOCLJDL_o *)0x0) {
                    pJVar15 = PLIIGOCLJDL__PDEBCPPCEJP
                                        (__this_07,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
                    if (pJVar15 != (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
                      pNVar23 = (__this->fields)._danImage;
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      bVar6 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pNVar23,(UnityEngine_Object_o *)0x0
                                         ,(MethodInfo *)0x0);
                      if (bVar6) {
                        pNVar23 = (__this->fields)._danImage;
                        if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                  (pNVar23,(pJVar15->fields).KJAIPLMIAGP,(MethodInfo *)0x0);
                      }
                    }
                    pNVar23 = (__this->fields)._bossIcon;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar23,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar23 = (__this->fields)._bossIcon;
                      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pSVar14 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      *(System_String_o **)&(pNVar23->fields).super.m_PixelsPerUnitMultiplier =
                           pSVar14;
                      thunk_FUN_01c20e04(&(pNVar23->fields).super.m_PixelsPerUnitMultiplier);
                      pNVar23 = (__this->fields)._bossIcon;
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                (pNVar23,NONPLOOOOAG[2].monitor,(MethodInfo *)0x0);
                      pNVar23 = (__this->fields)._bossIcon;
                    /* try { // try from 0363afa8 to 0373b097 has its CatchHandler @ 0363afa8
                       catch() { ... } // from try @ 0363afa8 with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b100 with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b13c with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b174 with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b1a4 with catch @ 0363afa8 */
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      (*(pNVar23->klass->vtable)._45_SetNativeSize.methodPtr)
                                (pNVar23,(pNVar23->klass->vtable)._45_SetNativeSize.method);
                      pNVar23 = (__this->fields)._bossIcon;
                      if (bVar25 == 0) {
                        fVar30 = 1.0;
                        fVar29 = 1.0;
                        fVar28 = 1.0;
                        fVar27 = 1.0;
                      }
                      else {
                        fVar27 = (__this->fields)._bossIconRestrictionColor.fields.r;
                        fVar28 = (__this->fields)._bossIconRestrictionColor.fields.g;
                        fVar29 = (__this->fields)._bossIconRestrictionColor.fields.b;
                        fVar30 = (__this->fields)._bossIconRestrictionColor.fields.a;
                      }
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      (*(pNVar23->klass->vtable)._23_set_color.methodPtr)
                                ((ulong)(uint)fVar27,fVar28,fVar29,fVar30,pNVar23,
                                 (pNVar23->klass->vtable)._23_set_color.method);
                    }
                    pNVar23 = (__this->fields)._danRestrictionIcon;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar23,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar23 = (__this->fields)._danRestrictionIcon;
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      pUVar16 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar23,(MethodInfo *)0x0);
                      if ((__this->fields).CLGKDPLPKGE == false) {
                        cVar17 = (__this->fields).LFKBADICOFG;
                      }
                      else {
                        cVar17 = '\0';
                      }
                      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363b4b0;
                      UnityEngine_GameObject__SetActive(pUVar16,cVar17 != '\0',(MethodInfo *)0x0);
                    }
                    pNVar21 = (__this->fields)._danRestrictionNumber;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar21 = (__this->fields)._danRestrictionNumber;
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                      pUVar16 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar21,(MethodInfo *)0x0);
                    /* try { // try from 0363b098 to 0373b09f has its CatchHandler @ 0363b158 */
                      if ((__this->fields).CLGKDPLPKGE == false) {
                    /* try { // try from 0363b0a8 to 0373b0b7 has its CatchHandler @ 0363b154 */
                        cVar17 = (__this->fields).LFKBADICOFG;
                      }
                      else {
                        cVar17 = '\0';
                      }
                      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363b4b0;
                      UnityEngine_GameObject__SetActive(pUVar16,cVar17 != '\0',(MethodInfo *)0x0);
                    /* try { // try from 0363b0c0 to 0373b0cf has its CatchHandler @ 0363b150 */
                      pNVar21 = (__this->fields)._danRestrictionNumber;
                      pSVar14 = System_Int32__ToString((int32_t)pOVar18,(MethodInfo *)0x0);
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                    /* try { // try from 0363b0dc to 0373b0e7 has its CatchHandler @ 0363b144 */
                      (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                                (pNVar21,pSVar14,(pNVar21->klass->vtable)._75_set_text.method);
                    }
                    /* try { // try from 0363b0ec to 0373b0ff has its CatchHandler @ 0363b140 */
                    pNVar21 = (__this->fields)._bossLabel;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 0363b100 to 0373b133 has its CatchHandler @ 0363afa8 */
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar21 = (__this->fields)._bossLabel;
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                      Nekki_SF2_GUI_LabelAlias__set_Alias
                                (pNVar21,(System_String_o *)NONPLOOOOAG[2].klass,(MethodInfo *)0x0);
                    }
                    pPVar19 = (__this->fields)._playersBar;
                    /* try { // try from 0363b134 to 0373b137 has its CatchHandler @ 0363b14c */
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0363b138 to 0373b13b has its CatchHandler @ 0363b148 */
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 0363b13c to 0373b16f has its CatchHandler @ 0363afa8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0ec with catch @ 0363b140
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0dc with catch @ 0363b144
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b138 with catch @ 0363b148
                        */
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pPVar19,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b134 with catch @ 0363b14c
                        */
                    if (bVar6) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0c0 with catch @ 0363b150
                        */
                      pPVar19 = (__this->fields)._playersBar;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0a8 with catch @ 0363b154
                        */
                      if (pPVar19 == (ProgressBar_o *)0x0) goto LAB_0363b4b0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b098 with catch @ 0363b158
                        */
                      (*(pPVar19->klass->vtable)._6_Init.methodPtr)
                                (pPVar19,(pPVar19->klass->vtable)._6_Init.method);
                      pPVar19 = (__this->fields)._playersBar;
                      if (pPVar19 == (ProgressBar_o *)0x0) goto LAB_0363b4b0;
                    /* try { // try from 0363b170 to 0373b173 has its CatchHandler @ 0363b194 */
                    /* try { // try from 0363b174 to 0373b19b has its CatchHandler @ 0363afa8 */
                      (*(pPVar19->klass->vtable)._11_SetValueBorders.methodPtr)
                                (0,(float)pOVar1[2].fields.MOIGDPBNMNI,pPVar19,
                                 (pPVar19->klass->vtable)._11_SetValueBorders.method);
                      pPVar19 = (__this->fields)._playersBar;
                      if (pPVar19 == (ProgressBar_o *)0x0) goto LAB_0363b4b0;
                    /* catch() { ... } // from try @ 0363b170 with catch @ 0363b194 */
                    /* try { // try from 0363b19c to 0373b1a3 has its CatchHandler @ 0363b1b8 */
                    /* try { // try from 0363b1a4 to 0373b1af has its CatchHandler @ 0363afa8 */
                      (*(pPVar19->klass->vtable)._8_SetValue.methodPtr)
                                ((ulong)(uint)(float)*(int *)((long)&pOVar1[2].fields.AAOLHLPDBPN +
                                                             4),0,pPVar19,0,
                                 (pPVar19->klass->vtable)._8_SetValue.method);
                    }
                    pNVar21 = (__this->fields)._playersBarLabel;
                    /* try { // try from 0363b1b0 to 0373b1b7 has its CatchHandler @ 0363b1b8 */
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363b19c with catch @ 0363b1b8
                       catch(type#2 @ 00000000) { ... } // from try @ 0363b1b0 with catch @ 0363b1b8
                        */
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar21 = (__this->fields)._playersBarLabel;
                      local_68 = *(undefined4 *)((long)&pOVar1[2].fields.AAOLHLPDBPN + 4);
                      arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
                      local_6c = pOVar1[2].fields.MOIGDPBNMNI;
                      arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
                      pSVar14 = System_String__Format
                                          (StringLiteral_22294,arg0,arg1,(MethodInfo *)0x0);
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                      (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                                (pNVar21,pSVar14,(pNVar21->klass->vtable)._75_set_text.method);
                    }
                    pLVar20 = (__this->fields)._acceptButton;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pLVar20,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (!bVar6) goto LAB_0363b488;
                    pLVar20 = (__this->fields)._acceptButton;
                    if ((pLVar20 != (LabelButton_o *)0x0) &&
                       (pUVar16 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pLVar20,(MethodInfo *)0x0),
                       pUVar16 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive
                                (pUVar16,bVar4 && (bVar3 && bVar5 == false),(MethodInfo *)0x0);
                      LJLLAKHOFFF__JAEOMHIAHJB
                                ((UnityEngine_UI_Button_o *)(__this->fields)._acceptButton,
                                 (uint)(bVar25 != 0) << 1,true,(MethodInfo *)0x0);
                      pLVar20 = (__this->fields)._acceptButton;
                      if (pLVar20 != (LabelButton_o *)0x0) {
                        lVar26 = 0xbc;
                        if (bVar25 == 0) {
                          lVar26 = 0xb8;
                        }
                        (*(pLVar20->klass->vtable)._51_set_Opacity.methodPtr)
                                  ((ulong)*(uint *)((long)&__this->klass + lVar26),pLVar20,
                                   (pLVar20->klass->vtable)._51_set_Opacity.method);
                        if (!bVar4 || (!bVar3 || bVar5 != false)) {
LAB_0363b488:
                          (__this->fields).JOBALMMDPAF = true;
                          return;
                        }
                        pbVar24 = &NONPLOOOOAG[1].fields.JEFOELMOCEI;
                        pLVar20 = (__this->fields)._acceptButton;
                        if (*(int *)pbVar24 == 0) {
                          if (pLVar20 != (LabelButton_o *)0x0) {
                            LabelButton__set_Alias(pLVar20,StringLiteral_18050,(MethodInfo *)0x0);
                            goto LAB_0363b488;
                          }
                        }
                        else {
                          values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
                          if (values != (System_String_array *)0x0) {
                            if ((int)values->max_length != 0) {
                              values->m_Items[0] = StringLiteral_16814;
                              thunk_FUN_01c20e04(values->m_Items);
                              pSVar14 = System_Int32__ToString((int32_t)pbVar24,(MethodInfo *)0x0);
                              if (1 < (uint)values->max_length) {
                                values->m_Items[1] = pSVar14;
                                thunk_FUN_01c20e04(values->m_Items + 1,pSVar14);
                                if (2 < (uint)values->max_length) {
                                  values->m_Items[2] = StringLiteral_22510;
                                  thunk_FUN_01c20e04(values->m_Items + 2);
                                  if (3 < (uint)values->max_length) {
                                    values->m_Items[3] =
                                         (System_String_o *)NONPLOOOOAG[1].fields.HCNDEELOKHA;
                                    thunk_FUN_01c20e04(values->m_Items + 3);
                                    if (4 < (uint)values->max_length) {
                                      values->m_Items[4] = StringLiteral_22500;
                                      thunk_FUN_01c20e04();
                                      pSVar14 = System_String__Concat(values,(MethodInfo *)0x0);
                                      if (pLVar20 != (LabelButton_o *)0x0) {
                                        LabelButton__set_Alias(pLVar20,pSVar14,(MethodInfo *)0x0);
                                        pLVar20 = (__this->fields)._acceptButton;
                                        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                                        if (pEVar9 != (EEGDOGKBLNG_o *)0x0) {
                                          iVar7 = EEGDOGKBLNG__APFFEAJBAEK
                                                            (pEVar9,NONPLOOOOAG[1].fields.
                                                                    ABCHAOKFLGL,(MethodInfo *)0x0);
                                          if (iVar7 < *(int *)&NONPLOOOOAG[1].fields.JEFOELMOCEI) {
                                            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                                              thunk_FUN_01ba7564();
                                            }
                                            UVar32 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                                            fVar27 = UVar32.fields.a;
                                            fVar28 = UVar32.fields.b;
                                            fVar29 = UVar32.fields.g;
                                            fVar30 = UVar32.fields.r;
                                          }
                                          else {
                                            fVar27 = 1.0;
                                            fVar30 = 0.0;
                                            fVar29 = 0.0;
                                            fVar28 = 0.0;
                                          }
                                          if (pLVar20 != (LabelButton_o *)0x0) {
                                            UVar32.fields.g = fVar29;
                                            UVar32.fields.r = fVar30;
                                            UVar32.fields.a = fVar27;
                                            UVar32.fields.b = fVar28;
                                            LabelButton__set_Color(pLVar20,UVar32,(MethodInfo *)0x0)
                                            ;
                                            goto LAB_0363b488;
                                          }
                                        }
                                      }
                                      goto LAB_0363b4b0;
                                    }
                                  }
                                }
                              }
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8d0();
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
LAB_0363b4b0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}

