// Nekki.SF2.GUI.TextPic$$HLBPMEDPOMB @ RVA 0x30B4ECC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextPic__HLBPMEDPOMB(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  bool bVar2;
  Nekki_SF2_GUI_TextDebugger_o *pNVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_Collections_Generic_List_Bounds__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_o *pSVar6;
  Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *x;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Rect_o UVar8;
  System_Collections_Generic_List_Bounds__o *local_170 [4];
  System_Collections_Generic_List_Bounds__o *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  System_Collections_Generic_List_T__o *local_130 [2];
  System_Collections_Generic_List_T__o *local_120;
  System_Collections_Generic_List_T__o *local_110 [2];
  System_Collections_Generic_List_T__o *local_100;
  System_Collections_Generic_List_T__o *local_f0 [2];
  System_Collections_Generic_List_T__o *local_e0;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  int32_t iStack_b8;
  int32_t iStack_b4;
  System_Collections_Generic_List_T__o *local_b0;
  UnityEngine_Bounds_o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  undefined8 uStack_78;
  System_Collections_Generic_List_T__o *local_70;
  
  if ((DAT_045661f8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Bounds>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Bounds>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Bounds>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661f8 = 1;
    method = extraout_x1;
  }
  local_70 = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  x = (__this->fields).LHLEDNAJOAK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
  if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
    Nekki_SF2_GUI_TextDebugger__Clear(pNVar3,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).NFECDKAEFJL;
    if ((pSVar6 != (System_Action_o *)0x0) &&
       (pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK,
       pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0)) {
      Nekki_SF2_GUI_TextDebugger__PushGlyphs
                (pNVar3,(System_Collections_Generic_List_IHIFNKAMALG__o *)
                        (pSVar6->fields).super.super.m_target,(MethodInfo *)0x0);
      pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
            local_a8.fields.m_Extents.fields.y = UVar8.fields.m_Height * 0.5;
            local_a8.fields.m_Extents.fields.x = UVar8.fields.m_Width * 0.5;
            local_a8.fields.m_Center.fields.x = UVar7.fields.m_XMin + UVar7.fields.m_Width * 0.5;
            local_a8.fields.m_Center.fields.y = UVar7.fields.m_YMin + UVar7.fields.m_Height * 0.5;
            local_a8.fields.m_Center.fields.z = 0.0;
            local_a8.fields.m_Extents.fields.z = 0.0;
            Nekki_SF2_GUI_TextDebugger__PushRTBounds(pNVar3,&local_a8,(MethodInfo *)0x0);
            pSVar5 = *(System_Collections_Generic_List_Bounds__o **)
                      &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Extents.fields.z;
            if (pSVar5 != (System_Collections_Generic_List_Bounds__o *)0x0) {
              System_Collections_Generic_List<Bounds>__GetEnumerator
                        (&local_d0,pSVar5,
                         Method_System_Collections_Generic_List<Bounds>_GetEnumerator__);
              local_90.fields._index = local_d0.fields._index;
              local_90.fields._version = local_d0.fields._version;
              local_90.fields._list = local_d0.fields._list;
              uStack_78._0_4_ = iStack_b8;
              uStack_78._4_4_ = iStack_b4;
              local_90.fields._current = local_d0.fields._current;
              local_70 = local_b0;
              while (bVar2 = System_Collections_Generic_List_Enumerator<Bounds>__MoveNext
                                       (&local_90,
                                        Method_System_Collections_Generic_List_Enumerator<Bounds>_MoveNext__
                                       ), bVar2) {
                pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                local_d0.fields._current = (Il2CppObject *)local_70;
                local_d0.fields._index = (int32_t)uStack_78;
                local_d0.fields._version = uStack_78._4_4_;
                local_d0.fields._list =
                     (System_Collections_Generic_List_T__o *)local_90.fields._current;
                if (pNVar3 == (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                local_f0[1] = (System_Collections_Generic_List_T__o *)uStack_78;
                local_f0[0] = (System_Collections_Generic_List_T__o *)local_90.fields._current;
                local_e0 = local_70;
                Nekki_SF2_GUI_TextDebugger__PushTextLineBounds
                          (pNVar3,(UnityEngine_Bounds_o *)local_f0,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List_Enumerator<Bounds>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<Bounds>_Dispose__);
              pSVar5 = *(System_Collections_Generic_List_Bounds__o **)
                        &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y;
              if (pSVar5 != (System_Collections_Generic_List_Bounds__o *)0x0) {
                System_Collections_Generic_List<Bounds>__GetEnumerator
                          (&local_d0,pSVar5,
                           Method_System_Collections_Generic_List<Bounds>_GetEnumerator__);
                local_90.fields._index = local_d0.fields._index;
                local_90.fields._version = local_d0.fields._version;
                local_90.fields._list = local_d0.fields._list;
                uStack_78._0_4_ = iStack_b8;
                uStack_78._4_4_ = iStack_b4;
                local_90.fields._current = local_d0.fields._current;
                local_70 = local_b0;
                while (bVar2 = System_Collections_Generic_List_Enumerator<Bounds>__MoveNext
                                         (&local_90,
                                          Method_System_Collections_Generic_List_Enumerator<Bounds>_MoveNext__
                                         ), bVar2) {
                  pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                  local_d0.fields._current = (Il2CppObject *)local_70;
                  local_d0.fields._index = (int32_t)uStack_78;
                  local_d0.fields._version = uStack_78._4_4_;
                  local_d0.fields._list =
                       (System_Collections_Generic_List_T__o *)local_90.fields._current;
                  if (pNVar3 == (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  local_110[1] = (System_Collections_Generic_List_T__o *)uStack_78;
                  local_110[0] = (System_Collections_Generic_List_T__o *)local_90.fields._current;
                  local_100 = local_70;
                  Nekki_SF2_GUI_TextDebugger__PushAlignedTextLineBounds
                            (pNVar3,(UnityEngine_Bounds_o *)local_110,(MethodInfo *)0x0);
                }
                System_Collections_Generic_List_Enumerator<Bounds>__Dispose
                          (&local_90,
                           Method_System_Collections_Generic_List_Enumerator<Bounds>_Dispose__);
                pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                local_d0.fields._current =
                     *(Il2CppObject **)
                      &(__this->fields)._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
                pUVar1 = &(__this->fields)._BAHHBJMJCEM_k__BackingField;
                local_d0.fields._index = (int32_t)(pUVar1->fields).m_Center.fields.x;
                local_d0.fields._version = (int32_t)(pUVar1->fields).m_Center.fields.y;
                local_d0.fields._list =
                     *(System_Collections_Generic_List_T__o **)
                      ((long)&(__this->fields).GlyphPrefabs + 4);
                if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                  local_130[0] = local_d0.fields._list;
                  local_130[1] = (System_Collections_Generic_List_T__o *)local_d0.fields._8_8_;
                  local_120 = (System_Collections_Generic_List_T__o *)local_d0.fields._current;
                  Nekki_SF2_GUI_TextDebugger__PushTextBounds
                            (pNVar3,(UnityEngine_Bounds_o *)local_130,(MethodInfo *)0x0);
                  pNVar3 = (Nekki_SF2_GUI_TextDebugger_o *)(__this->fields).LHLEDNAJOAK;
                  local_170[2] = *(System_Collections_Generic_List_Bounds__o **)
                                  &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Center.
                                   fields.z;
                  pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
                  local_170[1]._0_4_ = (pUVar1->fields).m_Center.fields.x;
                  local_170[1]._4_4_ = (pUVar1->fields).m_Center.fields.y;
                  local_170[0] = (__this->fields)._CECMNNLFJKO_k__BackingField;
                  local_150 = local_170[0];
                  uStack_148 = local_170[1];
                  local_140 = local_170[2];
                  if (pNVar3 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
                    Nekki_SF2_GUI_TextDebugger__PushAlignedTextBounds
                              (pNVar3,(UnityEngine_Bounds_o *)local_170,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

