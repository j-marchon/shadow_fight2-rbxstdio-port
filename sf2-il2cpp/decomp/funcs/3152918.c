// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$IEIGNFCOIOF @ RVA 0x3152918

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__IEIGNFCOIOF
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *__this_02;
  System_Collections_Generic_List_Transform__o *NLKBNMDMJEB;
  UnityEngine_Component_o *pUVar8;
  Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *extraout_x0_00;
  Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Transform_array *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  UnityEngine_Vector2_o UVar17;
  UnityEngine_Vector2_o UVar18;
  UnityEngine_Vector3_o UVar19;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  
  if ((DAT_04566818 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_get_Count__);
                    /* try { // try from 032529b4 to 033529c3 has its CatchHandler @ 032529c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<Transform>_TypeInfo);
                    /* try { // try from 032529c4 to 033529cb has its CatchHandler @ 032526c4 */
                    /* catch() { ... } // from try @ 0325277c with catch @ 032529c8
                       catch() { ... } // from try @ 032529b4 with catch @ 032529c8 */
    DAT_04566818 = 1;
  }
                    /* try { // try from 032529cc to 033529cf has its CatchHandler @ 032529d8 */
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
                    /* try { // try from 032529d0 to 033529db has its CatchHandler @ 032526c4 */
  local_a0.fields._current = (Il2CppObject *)0x0;
  pUVar5 = (__this->fields).super.super._textsSprite;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032529cc with catch @ 032529d8
                        */
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    iVar4 = UnityEngine_Transform__get_childCount(pUVar6,(MethodInfo *)0x0);
    if (iVar4 < 1) {
                    /* try { // try from 03252dec to 03352dfb has its CatchHandler @ 03253658 */
      return;
    }
    pUVar5 = (__this->fields).super.super._textsSprite;
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar7,0.0,(MethodInfo *)0x0);
      UVar17 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
      __this_02 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UVar18 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
        UVar18.fields.x = UVar17.fields.x;
                    /* try { // try from 03252a6c to 03352d27 has its CatchHandler @ 03252a6c
                       catch() { ... } // from try @ 03252a6c with catch @ 03252a6c
                       catch() { ... } // from try @ 03252fdc with catch @ 03252a6c
                       catch() { ... } // from try @ 03253354 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253438 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253558 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253574 with catch @ 03252a6c
                       catch() { ... } // from try @ 032535d4 with catch @ 03252a6c
                       catch() { ... } // from try @ 032535f0 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253778 with catch @ 03252a6c
                       catch() { ... } // from try @ 0325381c with catch @ 03252a6c */
        UnityEngine_RectTransform__set_sizeDelta(__this_01,UVar18,(MethodInfo *)0x0);
        NLKBNMDMJEB = (System_Collections_Generic_List_Transform__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<Transform>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                   Method_System_Collections_Generic_List<Transform>__ctor__);
        iVar4 = UnityEngine_Transform__get_childCount(pUVar6,(MethodInfo *)0x0);
        if (iVar4 < 1) {
          if (NLKBNMDMJEB == (System_Collections_Generic_List_Transform__o *)0x0) goto LAB_03252e04;
        }
        else {
          iVar16 = 0;
          do {
            pUVar7 = UnityEngine_Transform__GetChild(pUVar6,iVar16,(MethodInfo *)0x0);
            if (((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
                (pUVar5 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                pUVar5 == (UnityEngine_GameObject_o *)0x0)) ||
               (pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
               lVar2 = Method_System_Collections_Generic_List<Transform>_Add__,
               NLKBNMDMJEB == (System_Collections_Generic_List_Transform__o *)0x0))
            goto LAB_03252e04;
            pUVar9 = (NLKBNMDMJEB->fields)._items;
            (NLKBNMDMJEB->fields)._version = (NLKBNMDMJEB->fields)._version + 1;
            if (pUVar9 == (UnityEngine_Transform_array *)0x0) goto LAB_03252e04;
            uVar1 = (NLKBNMDMJEB->fields)._size;
            if (uVar1 < (uint)pUVar9->max_length) {
              (NLKBNMDMJEB->fields)._size = uVar1 + 1;
              pUVar9->m_Items[(int)uVar1] = pUVar7;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                         (Il2CppObject *)pUVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            iVar16 = iVar16 + 1;
            iVar4 = UnityEngine_Transform__get_childCount(pUVar6,(MethodInfo *)0x0);
          } while (iVar16 < iVar4);
        }
        pUVar8 = (UnityEngine_Component_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,0,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<Transform>_get_Item__);
        if ((pUVar8 != (UnityEngine_Component_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
          fVar11 = UVar19.fields.y;
          pUVar8 = (UnityEngine_Component_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,0,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<Transform>_get_Item__);
          if ((pUVar8 != (UnityEngine_Component_o *)0x0) &&
             (pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_Transform_o *)0x0)) {
            UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
            fVar13 = UVar19.fields.y;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_b8,(System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                       Method_System_Collections_Generic_List<Transform>_GetEnumerator__);
            local_a0.fields._index = local_b8.fields._index;
            local_a0.fields._version = local_b8.fields._version;
            local_a0.fields._list = local_b8.fields._list;
            local_a0.fields._current = local_b8.fields._current;
            while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_a0,
                                      Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__
                                     ), __this_00 = local_a0.fields._current, bVar3) {
              if ((UnityEngine_Component_o *)local_a0.fields._current ==
                  (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)local_a0.fields._current,
                                  (MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              if (UVar19.fields.y < fVar11) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03252e14 to 03352e1b has its CatchHandler @ 0325365c */
                  FUN_01bab8c8();
                }
                UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
                fVar11 = UVar19.fields.y;
              }
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              if (fVar13 < UVar19.fields.y) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
                fVar13 = UVar19.fields.y;
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__);
            method_01 = Method_System_Collections_Generic_List<Transform>_get_Item__;
            pUVar8 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,0,
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<Transform>_get_Item__);
            if ((pUVar8 != (UnityEngine_Component_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              fVar15 = (__this->fields).super.super.OAMNJIMNBAC;
              fVar14 = (__this->fields).super.super.NBGPOPHLIFC;
              iVar16 = (NLKBNMDMJEB->fields)._size;
              UVar17 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
              UVar18 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
              __this_03 = extraout_x0;
              if (0 < (NLKBNMDMJEB->fields)._size) {
                fVar15 = fVar15 * 0.9;
                fVar10 = (fVar13 - fVar11) * 0.20000005 * 0.5;
                    /* try { // try from 03252d28 to 03352d4f has its CatchHandler @ 032536c4 */
                fVar13 = fVar13 + fVar10;
                fVar12 = (float)iVar16;
                fVar11 = fVar13 - (fVar11 - fVar10);
                iVar16 = 0;
                do {
                  method_01 = Method_System_Collections_Generic_List<Transform>_get_Item__;
                  pUVar8 = (UnityEngine_Component_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                                      iVar16,(MethodInfo_26E4ADC *)
                                             Method_System_Collections_Generic_List<Transform>_get_Item__
                                     );
                  if (pUVar8 == (UnityEngine_Component_o *)0x0) goto LAB_03252e04;
                  pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0);
                    /* try { // try from 03252d84 to 03352daf has its CatchHandler @ 032536c0 */
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar6,((UVar19.fields.x + 65.0) - fVar15 * 0.5) +
                                    fVar15 * fVar14 * 0.5,(MethodInfo *)0x0);
                  UnityEngine_TransformExtensions__SetLocalPositionY
                            (pUVar6,UVar18.fields.y * 0.25 + 100.0 +
                                    (fVar13 - ((fVar11 + fVar11 / fVar12) / fVar12) * (float)iVar16)
                             ,(MethodInfo *)0x0);
                  iVar16 = iVar16 + 1;
                  __this_03 = extraout_x0_00;
                } while (iVar16 < (NLKBNMDMJEB->fields)._size);
              }
              Nekki_SF2_GUI_Dialogs_StrangerBigDialog__MFGKHNNAJEM(__this_03,NLKBNMDMJEB,method_01);
              Nekki_SF2_GUI_Dialogs_StrangerBigDialog__BDDKKBAOAMO
                        (__this,-20.0 - UVar17.fields.x * 0.5,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_03252e04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

