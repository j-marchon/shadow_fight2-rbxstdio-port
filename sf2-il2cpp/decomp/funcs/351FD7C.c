// Nekki.SF2.GUI.Fight.PlayerLifeBar$$ABOIEFEPBBF @ RVA 0x351FD7C

void Nekki_SF2_GUI_Fight_PlayerLifeBar__ABOIEFEPBBF
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  FCJBEKHDLAF_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_ResolutionImageSkew__o *pSVar5;
  UnityEngine_Component_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar7;
  PJKHAJKEHEL_o *pPVar8;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar9;
  Nekki_SF2_GUI_ResolutionImageSkew_array *pNVar10;
  System_String_o **ppSVar11;
  int iVar12;
  float fVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
                    /* catch() { ... } // from try @ 0361fd08 with catch @ 0361fd7c */
                    /* catch() { ... } // from try @ 0361fca8 with catch @ 0361fd80 */
                    /* catch() { ... } // from try @ 0361fd68 with catch @ 0361fd84 */
                    /* catch() { ... } // from try @ 0361fce8 with catch @ 0361fd88 */
                    /* catch() { ... } // from try @ 0361fd64 with catch @ 0361fd8c */
                    /* catch() { ... } // from try @ 0361fcf4 with catch @ 0361fd90 */
                    /* catch() { ... } // from try @ 0361fc80 with catch @ 0361fd94 */
  if ((DAT_045689b1 & 1) == 0) {
                    /* catch() { ... } // from try @ 0361fc90 with catch @ 0361fd98 */
                    /* catch() { ... } // from try @ 0361fd5c with catch @ 0361fd9c */
                    /* catch() { ... } // from try @ 0361fd58 with catch @ 0361fda0 */
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* catch() { ... } // from try @ 0361fc6c with catch @ 0361fda4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__);
                    /* try { // try from 0361fdbc to 0371fdbf has its CatchHandler @ 0361fde0 */
                    /* try { // try from 0361fdc0 to 0371fde7 has its CatchHandler @ 0361fb64 */
    DAT_045689b1 = 1;
  }
  pPVar8 = (__this->fields).MFLNIMCFPDK;
  (__this->fields).LockLifeUpdate = false;
  (__this->fields).OEDKOODFCLP = 0.0;
  (__this->fields).DANCJAPPNKJ = 0.0;
  (__this->fields).LLNOECKGCGG = 0;
  (__this->fields).NHDMJMILNKJ = 0;
  (__this->fields).HDFOJFNFNGG = 0.0;
  (__this->fields).HFMAMOEIOOB = 0.0;
  (__this->fields).PCBAEDMJDCC = 0.0;
  if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                    /* catch() { ... } // from try @ 0361fdbc with catch @ 0361fde0 */
                    /* try { // try from 0361fde8 to 0371fdef has its CatchHandler @ 0361fe04 */
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar8->fields).GLOFEDAFAEG.fields,(MethodInfo *)0x0);
    pPVar8 = (__this->fields).MFLNIMCFPDK;
                    /* try { // try from 0361fdf0 to 0371fdfb has its CatchHandler @ 0361fb64 */
    (__this->fields).PACENOHGIGO = iVar3;
    if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 0361fdfc to 0371fe03 has its CatchHandler @ 0361fe04 */
                    /* catch() { ... } // from try @ 0361fde8 with catch @ 0361fe04
                       catch() { ... } // from try @ 0361fdfc with catch @ 0361fe04 */
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar8->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
      (__this->fields).AFHDCNAMJMP = iVar3;
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
        iVar3 = FCJBEKHDLAF__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._healthBar;
        if (iVar3 == 0x11) {
          if (pNVar9 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_03620260;
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar9,
                     (__this->fields)._pvpFirst_HealthBarSpriteName,(MethodInfo *)0x0);
          pNVar9 = (__this->fields)._hitBar;
          if (pNVar9 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_03620260;
          ppSVar11 = &(__this->fields)._pvpFirst_HitBarSpriteName;
        }
        else {
          if (pNVar9 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_03620260;
          ppSVar11 = &(__this->fields)._raidHealthBarSpriteName;
          if ((__this->fields).PACENOHGIGO < 1) {
            ppSVar11 = &(__this->fields)._healthBarSpriteName;
          }
        }
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar9,*ppSVar11,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._healthBar;
        if ((pNVar9 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
          pNVar9 = (__this->fields)._hitBar;
          if ((pNVar9 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            method_02 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
            pSVar5 = (__this->fields).HONNHINBNAJ;
            if (pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0) {
              pNVar9 = (__this->fields)._hitBar;
              pNVar10 = (pSVar5->fields)._items;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (pNVar10 != (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0) {
                uVar1 = (pSVar5->fields)._size;
                if (uVar1 < (uint)pNVar10->max_length) {
                  (pSVar5->fields)._size = uVar1 + 1;
                  pNVar10->m_Items[(int)uVar1] = pNVar9;
                  thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar1);
                }
                else {
                  method_02 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar5,
                             (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                }
                lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
                pSVar5 = (__this->fields).HONNHINBNAJ;
                if (pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0) {
                  pNVar9 = (__this->fields)._healthBar;
                  pNVar10 = (pSVar5->fields)._items;
                  (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                  if (pNVar10 != (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0) {
                    uVar1 = (pSVar5->fields)._size;
                    if (uVar1 < (uint)pNVar10->max_length) {
                      (pSVar5->fields)._size = uVar1 + 1;
                      pNVar10->m_Items[(int)uVar1] = pNVar9;
                      thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar1);
                    }
                    else {
                      method_02 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      ;
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar5,
                                 (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                    }
                    /* try { // try from 0361ffcc to 0372013f has its CatchHandler @ 0361ffcc
                       catch() { ... } // from try @ 0361ffcc with catch @ 0361ffcc
                       catch() { ... } // from try @ 036202b0 with catch @ 0361ffcc
                       catch() { ... } // from try @ 03620360 with catch @ 0361ffcc
                       catch() { ... } // from try @ 03620368 with catch @ 0361ffcc
                       catch() { ... } // from try @ 03620438 with catch @ 0361ffcc */
                    iVar7 = (__this->fields).PACENOHGIGO;
                    if (1 < iVar7) {
                      iVar12 = 1;
                      do {
                        pNVar9 = Nekki_SF2_GUI_Fight_PlayerLifeBar__BBEJMLOCNNM
                                           (__this,(__this->fields)._hitBar,method_02);
                        lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
                        pSVar5 = (__this->fields).HONNHINBNAJ;
                        if (pSVar5 == (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                        goto LAB_03620260;
                        pNVar10 = (pSVar5->fields)._items;
                        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                        if (pNVar10 == (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0)
                        goto LAB_03620260;
                        uVar1 = (pSVar5->fields)._size;
                        if (uVar1 < (uint)pNVar10->max_length) {
                          (pSVar5->fields)._size = uVar1 + 1;
                          pNVar10->m_Items[(int)uVar1] = pNVar9;
                          thunk_FUN_01c20e04();
                        }
                        else {
                          method_02 = *(MethodInfo **)
                                       (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar5,
                                     (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                        }
                        pNVar9 = Nekki_SF2_GUI_Fight_PlayerLifeBar__BBEJMLOCNNM
                                           (__this,(__this->fields)._healthBar,method_02);
                        lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
                        pSVar5 = (__this->fields).HONNHINBNAJ;
                        if (pSVar5 == (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                        goto LAB_03620260;
                        pNVar10 = (pSVar5->fields)._items;
                        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                        if (pNVar10 == (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0)
                        goto LAB_03620260;
                        uVar1 = (pSVar5->fields)._size;
                        if (uVar1 < (uint)pNVar10->max_length) {
                          (pSVar5->fields)._size = uVar1 + 1;
                          pNVar10->m_Items[(int)uVar1] = pNVar9;
                          thunk_FUN_01c20e04();
                        }
                        else {
                          method_02 = *(MethodInfo **)
                                       (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar5,
                                     (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                        }
                        iVar7 = (__this->fields).PACENOHGIGO;
                        iVar12 = iVar12 + 1;
                      } while (iVar12 < iVar7);
                    }
                    if ((iVar7 < 1) || (iVar12 = (__this->fields).AFHDCNAMJMP, iVar12 < 1)) {
                      pPVar8 = (__this->fields).MFLNIMCFPDK;
                      if (pPVar8 == (PJKHAJKEHEL_o *)0x0) goto LAB_03620260;
                      local_40.fakeValueActive = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValueActive
                      ;
                      local_40.inited = (pPVar8->fields).JNFNFEJAGGN.fields.inited;
                      local_40._18_2_ =
                           *(undefined2 *)&(pPVar8->fields).JNFNFEJAGGN.fields.field_0x12;
                      local_40.hiddenValueOldByte4.fields =
                           (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                      local_40.fakeValue = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValue;
                      local_40.currentCryptoKey =
                           (pPVar8->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                      local_40.hiddenValue = (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValue;
                      fVar13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                          &local_40,(MethodInfo *)0x0);
                      if (fVar13 <= 1.0) {
                        fVar13 = 1.0;
                      }
                      (__this->fields).AIGDHMHBAFN = fVar13;
                      (__this->fields).PACENOHGIGO = 1;
                      (__this->fields).AFHDCNAMJMP = 1;
                    }
                    else {
                      (__this->fields).AIGDHMHBAFN = (float)iVar12 / (float)iVar7;
                    }
                    pSVar5 = (__this->fields).HONNHINBNAJ;
                    /* try { // try from 03620140 to 03720167 has its CatchHandler @ 0362039c */
                    if (((pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                        && (pUVar6 = (UnityEngine_Component_o *)
                                     System_Collections_Generic_List<object>__get_Item
                                               ((System_Collections_Generic_List_object__o *)pSVar5,
                                                1,
                                                Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__
                                               ), pUVar6 != (UnityEngine_Component_o *)0x0)) &&
                       (pUVar4 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0),
                       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                      (**(code **)&pUVar6->klass[1]._2.naturalAligment)
                                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar6,
                                 pUVar6->klass[1].vtable._0_Equals.methodPtr);
                      pSVar5 = (__this->fields).HONNHINBNAJ;
                    /* try { // try from 0362019c to 037201c7 has its CatchHandler @ 03620398 */
                      if (((pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                          && (pUVar6 = (UnityEngine_Component_o *)
                                       System_Collections_Generic_List<object>__get_Item
                                                 ((System_Collections_Generic_List_object__o *)
                                                  pSVar5,0,
                                                  Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__
                                                 ), pUVar6 != (UnityEngine_Component_o *)0x0)) &&
                         (pUVar4 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0),
                         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                        (**(code **)&pUVar6->klass[1]._2.naturalAligment)
                                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar6,
                                   pUVar6->klass[1].vtable._0_Equals.methodPtr);
                        pPVar8 = (__this->fields).MFLNIMCFPDK;
                        if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                          local_60.fakeValueActive =
                               (pPVar8->fields).JNFNFEJAGGN.fields.fakeValueActive;
                          local_60.inited = (pPVar8->fields).JNFNFEJAGGN.fields.inited;
                          local_60._18_2_ =
                               *(undefined2 *)&(pPVar8->fields).JNFNFEJAGGN.fields.field_0x12;
                          local_60.hiddenValueOldByte4.fields =
                               (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                          local_60.fakeValue = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValue;
                          local_60.currentCryptoKey =
                               (pPVar8->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                          local_60.hiddenValue = (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValue;
                    /* try { // try from 03620204 to 0372020b has its CatchHandler @ 03620380 */
                          fVar13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                              &local_60,(MethodInfo *)0x0);
                          (__this->fields).HDFOJFNFNGG = fVar13;
                          (__this->fields).LLNOECKGCGG = 0;
                    /* try { // try from 03620214 to 0372021b has its CatchHandler @ 0362038c */
                          Nekki_SF2_GUI_Fight_PlayerLifeBar__JCCAPMJPHOM(__this,fVar13,method_00);
                          pPVar8 = (__this->fields).MFLNIMCFPDK;
                          if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 03620224 to 03720233 has its CatchHandler @ 03620390 */
                            local_80.fakeValueActive =
                                 (pPVar8->fields).JNFNFEJAGGN.fields.fakeValueActive;
                            local_80.inited = (pPVar8->fields).JNFNFEJAGGN.fields.inited;
                            local_80._18_2_ =
                                 *(undefined2 *)&(pPVar8->fields).JNFNFEJAGGN.fields.field_0x12;
                            local_80.hiddenValueOldByte4.fields =
                                 (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                            local_80.fakeValue = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValue;
                            local_80.currentCryptoKey =
                                 (pPVar8->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                            local_80.hiddenValue = (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValue;
                    /* try { // try from 03620238 to 0372024b has its CatchHandler @ 03620378 */
                            fVar13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                               ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *
                                                )&local_80,(MethodInfo *)0x0);
                            (__this->fields).HFMAMOEIOOB = fVar13;
                            (__this->fields).NHDMJMILNKJ = 0;
                            Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN(__this,fVar13,method_01);
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
      }
    }
  }
LAB_03620260:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

