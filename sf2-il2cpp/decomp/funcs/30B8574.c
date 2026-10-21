// Nekki.SF2.GUI.TextPic$$LKJOHANKEDP @ RVA 0x30B8574

void Nekki_SF2_GUI_TextPic__LKJOHANKEDP(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  UnityEngine_UI_Button_Fields *pUVar5;
  Il2CppObject *KAHAJHDGCFF;
  bool bVar6;
  bool bVar7;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Bounds__o *pSVar8;
  Il2CppObject *pIVar9;
  Il2CppMethodPointer *ppIVar10;
  System_Collections_Generic_HashSet_char__o *HOJFIEJGIHA;
  System_Collections_Generic_HashSet_char__o *NINLELPNDEB;
  System_Collections_Generic_HashSet_char__o *HLBAFDGKOMM;
  undefined8 uVar11;
  long lVar12;
  System_Action_o *pSVar13;
  UnityEngine_Bounds_array *pUVar14;
  Il2CppClass *pIVar15;
  LabelButton_o *pLVar16;
  ulong uVar17;
  int32_t *piVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
                    /* try { // try from 031b8588 to 032b863f has its CatchHandler @ 031b8478 */
  if ((DAT_0456620a & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    DAT_0456620a = 1;
  }
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  lVar12 = *(long *)&(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    /* try { // try from 031b8640 to 032b864f has its CatchHandler @ 031b8650 */
    lVar12 = *(long *)&(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
    if (lVar12 != 0) {
                    /* catch() { ... } // from try @ 031b8570 with catch @ 031b8650
                       catch() { ... } // from try @ 031b8640 with catch @ 031b8650 */
                    /* try { // try from 031b8654 to 032b8657 has its CatchHandler @ 031b8660 */
                    /* try { // try from 031b8658 to 032b8663 has its CatchHandler @ 031b8478 */
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b8654 with catch @ 031b8660
                        */
      bVar6 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
      pSVar13 = (__this->fields).NFECDKAEFJL;
      if ((pSVar13 != (System_Action_o *)0x0) &&
         (__this_00 = (System_Collections_Generic_List_object__o *)
                      (pSVar13->fields).super.super.method,
         __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,__this_00,
                   Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
        local_d0.fields._current = (Il2CppObject *)CONCAT44(fStack_a4,local_a8);
        local_dc = 0.0;
        local_e0 = 0.0;
        local_e4 = 0.0;
        local_d4 = 0.0;
        fVar23 = 0.0;
        fVar31 = 0.0;
        fVar29 = 0.0;
        fVar21 = 0.0;
        fVar24 = 0.0;
        fVar30 = 0.0;
        local_d8 = 0.0;
        fVar26 = 0.0;
        do {
          bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_d0,
                             Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                            );
          KAHAJHDGCFF = local_d0.fields._current;
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_d0,
                       Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__
                      );
            pLVar16 = (__this->fields).JPDGLLDKPHC;
            *(float *)((long)&(__this->fields).GlyphPrefabs + 4) = fVar26;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y = fVar30;
            *(float *)&(__this->fields).ForceUseAlignedBestFit = local_d8;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z = fVar24;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.x = fVar21;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.y = fVar29;
            (__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.x = local_d4;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z = fVar31;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.x = fVar23;
            *(float *)&(__this->fields)._CECMNNLFJKO_k__BackingField = local_e4;
            *(float *)((long)&(__this->fields)._CECMNNLFJKO_k__BackingField + 4) = local_e0;
            (__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.x = local_dc;
            if (pLVar16 != (LabelButton_o *)0x0) {
              pUVar5 = &(pLVar16->fields).super.super.super;
              uVar11._0_4_ = (pUVar5->super).m_Navigation.fields.m_Mode;
              uVar11._4_1_ = (pUVar5->super).m_Navigation.fields.m_WrapAround;
              uVar11._5_3_ = *(undefined3 *)&(pUVar5->super).m_Navigation.fields.field_0x5;
              (*(code *)(pLVar16->fields).super.super.super.super.super.super.
                        m_CancellationTokenSource)
                        ((pLVar16->fields).super.super.super.super.m_Navigation.fields.
                         m_SelectOnLeft,uVar11);
            }
            return;
          }
          OMANDMDCGMF__MLCFOLPGDBO
                    ((UnityEngine_Bounds_o *)&local_b8,
                     (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                     (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_d0.fields._current,
                     (System_Collections_Generic_HashSet_char__o *)0x0,
                     (System_Collections_Generic_HashSet_char__o *)0x0,
                     (System_Collections_Generic_HashSet_char__o *)0x0,(MethodInfo *)0x0);
          lVar12 = Method_System_Collections_Generic_List<Bounds>_Add__;
          fVar25 = local_b8 - fStack_ac;
          fVar27 = fStack_b4 - local_a8;
          fVar28 = fStack_b0 - fStack_a4;
          fVar32 = fVar26 - fVar30;
          if (fVar25 <= fVar26 - fVar30) {
            fVar32 = fVar25;
          }
          fVar19 = local_d8 - fVar24;
          if (fVar27 <= local_d8 - fVar24) {
            fVar19 = fVar27;
          }
          fVar20 = local_d4 - fVar21;
          if (fVar28 <= local_d4 - fVar21) {
            fVar20 = fVar28;
          }
          fVar22 = fVar30 + fVar26;
          if (fVar30 + fVar26 <= fVar25) {
            fVar22 = fVar25;
          }
          fVar26 = fVar24 + local_d8;
          if (fVar24 + local_d8 <= fVar27) {
            fVar26 = fVar27;
          }
          fVar30 = fVar21 + local_d4;
          if (fVar21 + local_d4 <= fVar28) {
            fVar30 = fVar28;
          }
          fVar21 = (fVar22 - fVar32) * 0.5;
          fVar24 = (fVar26 - fVar19) * 0.5;
          fVar27 = local_b8 + fStack_ac;
          fVar25 = (fVar30 - fVar20) * 0.5;
          fVar26 = (fVar32 + fVar21) - fVar21;
          fVar30 = fStack_b4 + local_a8;
          fVar21 = fVar21 + fVar32 + fVar21;
          local_d8 = (fVar19 + fVar24) - fVar24;
          fVar32 = fStack_b0 + fStack_a4;
          fVar24 = fVar24 + fVar19 + fVar24;
          local_d4 = (fVar20 + fVar25) - fVar25;
          if (fVar27 <= fVar26) {
            fVar26 = fVar27;
          }
          if (fVar30 <= local_d8) {
            local_d8 = fVar30;
          }
          if (fVar32 <= local_d4) {
            local_d4 = fVar32;
          }
          fVar25 = fVar25 + fVar20 + fVar25;
          if (fVar21 <= fVar27) {
            fVar21 = fVar27;
          }
          if (fVar24 <= fVar30) {
            fVar24 = fVar30;
          }
          pSVar8 = *(System_Collections_Generic_List_Bounds__o **)
                    &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
          if (fVar25 <= fVar32) {
            fVar25 = fVar32;
          }
          fVar30 = (fVar21 - fVar26) * 0.5;
          fVar24 = (fVar24 - local_d8) * 0.5;
          fVar21 = (fVar25 - local_d4) * 0.5;
          fVar26 = fVar26 + fVar30;
          local_d8 = local_d8 + fVar24;
          local_d4 = local_d4 + fVar21;
          if (pSVar8 == (System_Collections_Generic_List_Bounds__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar14 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pUVar14 == (UnityEngine_Bounds_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (pSVar8->fields)._size;
          if (uVar4 < (uint)pUVar14->max_length) {
            (pSVar8->fields)._size = uVar4 + 1;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.x = local_b8;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.y = fStack_b4;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.z = fStack_b0;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.x = fStack_ac;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.y = local_a8;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.z = fStack_a4;
          }
          else {
            System_Collections_Generic_List<Bounds>__AddWithResize
                      (pSVar8,(UnityEngine_Bounds_o *)&local_b8,
                       *(MethodInfo_269FCFC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          pSVar13 = (__this->fields).NFECDKAEFJL;
          if (bVar6) {
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar15 = pIVar9->klass;
            uVar1._0_1_ = (pIVar15->_2).rank;
            uVar1._1_1_ = (pIVar15->_2).minimumAlignment;
            uVar17 = (ulong)uVar1;
            if (uVar17 != 0) {
              piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                  ppIVar10 = &pIVar15->vtable[*piVar18 + 6].methodPtr;
                  goto LAB_031b8928;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            ppIVar10 = (Il2CppMethodPointer *)FUN_01b81914(pIVar9,DFLJPJMIMHI_TypeInfo,6);
LAB_031b8928:
            HOJFIEJGIHA = (System_Collections_Generic_HashSet_char__o *)
                          (**ppIVar10)(pIVar9,(MethodInfo *)ppIVar10[1]);
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar15 = pIVar9->klass;
            uVar2._0_1_ = (pIVar15->_2).rank;
            uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
            uVar17 = (ulong)uVar2;
            if (uVar17 != 0) {
              piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                  ppIVar10 = &pIVar15->vtable[*piVar18].methodPtr;
                  goto LAB_031b8994;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            ppIVar10 = (Il2CppMethodPointer *)FUN_01b81914(pIVar9,DFLJPJMIMHI_TypeInfo,0);
LAB_031b8994:
            NINLELPNDEB = (System_Collections_Generic_HashSet_char__o *)
                          (**ppIVar10)(pIVar9,(MethodInfo *)ppIVar10[1]);
            if (bVar6) {
              pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                 (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
              if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar15 = pIVar9->klass;
              uVar3._0_1_ = (pIVar15->_2).rank;
              uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
              uVar17 = (ulong)uVar3;
              if (uVar17 != 0) {
                piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                      (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    ppIVar10 = &pIVar15->vtable[*piVar18 + 7].methodPtr;
                    goto LAB_031b8a18;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              ppIVar10 = (Il2CppMethodPointer *)FUN_01b81914(pIVar9,DFLJPJMIMHI_TypeInfo,7);
LAB_031b8a18:
              HLBAFDGKOMM = (System_Collections_Generic_HashSet_char__o *)
                            (**ppIVar10)(pIVar9,(MethodInfo *)ppIVar10[1]);
            }
            else {
              HLBAFDGKOMM = (System_Collections_Generic_HashSet_char__o *)0x0;
            }
          }
          else {
            HLBAFDGKOMM = (System_Collections_Generic_HashSet_char__o *)0x0;
            NINLELPNDEB = (System_Collections_Generic_HashSet_char__o *)0x0;
            HOJFIEJGIHA = (System_Collections_Generic_HashSet_char__o *)0x0;
          }
          OMANDMDCGMF__MLCFOLPGDBO
                    ((UnityEngine_Bounds_o *)&local_b8,
                     (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar13,
                     (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)KAHAJHDGCFF,HOJFIEJGIHA,NINLELPNDEB,
                     HLBAFDGKOMM,(MethodInfo *)0x0);
          lVar12 = Method_System_Collections_Generic_List<Bounds>_Add__;
          fVar25 = local_b8 - fStack_ac;
          fVar27 = fStack_b4 - local_a8;
          fVar28 = fStack_b0 - fStack_a4;
          fVar32 = local_e4 - fVar29;
          if (fVar25 <= local_e4 - fVar29) {
            fVar32 = fVar25;
          }
          fVar19 = local_e0 - fVar31;
          if (fVar27 <= local_e0 - fVar31) {
            fVar19 = fVar27;
          }
          fVar20 = local_dc - fVar23;
          if (fVar28 <= local_dc - fVar23) {
            fVar20 = fVar28;
          }
          fVar22 = fVar29 + local_e4;
          if (fVar29 + local_e4 <= fVar25) {
            fVar22 = fVar25;
          }
          fVar29 = fVar31 + local_e0;
          if (fVar31 + local_e0 <= fVar27) {
            fVar29 = fVar27;
          }
          fVar31 = fVar23 + local_dc;
          if (fVar23 + local_dc <= fVar28) {
            fVar31 = fVar28;
          }
          fVar23 = (fVar22 - fVar32) * 0.5;
          fVar25 = (fVar29 - fVar19) * 0.5;
          fVar29 = local_b8 + fStack_ac;
          fVar27 = (fVar31 - fVar20) * 0.5;
          local_e4 = (fVar32 + fVar23) - fVar23;
          fVar31 = fStack_b4 + local_a8;
          fVar23 = fVar23 + fVar32 + fVar23;
          local_e0 = (fVar19 + fVar25) - fVar25;
          fVar32 = fStack_b0 + fStack_a4;
          fVar25 = fVar25 + fVar19 + fVar25;
          local_dc = (fVar20 + fVar27) - fVar27;
          if (fVar29 <= local_e4) {
            local_e4 = fVar29;
          }
          if (fVar31 <= local_e0) {
            local_e0 = fVar31;
          }
          if (fVar32 <= local_dc) {
            local_dc = fVar32;
          }
          fVar27 = fVar27 + fVar20 + fVar27;
          if (fVar23 <= fVar29) {
            fVar23 = fVar29;
          }
          if (fVar25 <= fVar31) {
            fVar25 = fVar31;
          }
          pSVar8 = *(System_Collections_Generic_List_Bounds__o **)
                    &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
          if (fVar27 <= fVar32) {
            fVar27 = fVar32;
          }
          fVar29 = (fVar23 - local_e4) * 0.5;
          fVar31 = (fVar25 - local_e0) * 0.5;
          local_e4 = local_e4 + fVar29;
          fVar23 = (fVar27 - local_dc) * 0.5;
          local_e0 = local_e0 + fVar31;
          local_dc = local_dc + fVar23;
          if (pSVar8 == (System_Collections_Generic_List_Bounds__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar14 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pUVar14 == (UnityEngine_Bounds_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar4 = (pSVar8->fields)._size;
          if (uVar4 < (uint)pUVar14->max_length) {
            (pSVar8->fields)._size = uVar4 + 1;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.x = local_b8;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.y = fStack_b4;
            pUVar14->m_Items[(int)uVar4].fields.m_Center.fields.z = fStack_b0;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.x = fStack_ac;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.y = local_a8;
            pUVar14->m_Items[(int)uVar4].fields.m_Extents.fields.z = fStack_a4;
          }
          else {
            System_Collections_Generic_List<Bounds>__AddWithResize
                      (pSVar8,(UnityEngine_Bounds_o *)&local_b8,
                       *(MethodInfo_269FCFC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

