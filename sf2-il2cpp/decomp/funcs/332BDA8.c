// Nekki.SF2.GUI.Fight.ComboModel$$CCLACGABBDP @ RVA 0x332BDA8

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL,
          MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  UnityEngine_RectTransform_o *pUVar5;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *__this_01;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_array *pNVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_Vector2_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Rect_o UVar16;
  
  if ((DAT_045678d4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_get_Item__);
    DAT_045678d4 = 1;
  }
  if (ANGBPBINHBL != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
    fVar11 = (__this->fields).JOHMFEFNLPI.fields.y;
    pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(ANGBPBINHBL,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      fVar10 = 0.0;
      if ((__this->fields).NKKPNCHMEHC != 0) {
        fVar10 = 1.0;
      }
      UVar12.fields.y = 0.5;
      UVar12.fields.x = fVar10;
      UnityEngine_RectTransform__set_pivot(pUVar5,UVar12,(MethodInfo *)0x0);
      fVar10 = (__this->fields).PJINFMLCNGI;
      pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(ANGBPBINHBL,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar5,(UnityEngine_Vector2_o)(__this->fields).FHMKAKCKNAF.fields,
                   (MethodInfo *)0x0);
        pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(ANGBPBINHBL,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar5,(UnityEngine_Vector2_o)(__this->fields).CKILNMCNMKA.fields,
                     (MethodInfo *)0x0);
          pSVar6 = (__this->fields).EGHLGEIJLAM;
          if (pSVar6 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
            iVar1 = (pSVar6->fields)._size;
            if (0 < iVar1) {
              pIVar7 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,iVar1 + -1,
                                  Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_get_Item__
                                 );
              if ((pIVar7 == (Il2CppObject *)0x0) || (pIVar7[1].klass == (Il2CppClass *)0x0))
              goto LAB_0342c06c;
              pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                                 ((Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar7[1].klass,
                                  (MethodInfo *)0x0);
              __this_00 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                                    (ANGBPBINHBL,(MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0342c06c;
              UVar14 = UnityEngine_Transform__get_localPosition
                                 ((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
              UVar15 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
              UVar12 = UnityEngine_RectTransform__get_pivot(pUVar5,(MethodInfo *)0x0);
              if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0342c06c;
              UVar16 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
              UVar13 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
              fVar11 = ((UVar14.fields.y - UVar15.fields.m_Height * UVar12.fields.y) -
                       UVar16.fields.m_Height * UVar13.fields.y) + -40.0;
            }
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Transform__SetParent(pUVar8,parent,false,(MethodInfo *)0x0);
              pUVar8 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                UVar14.fields.y = fVar11;
                UVar14.fields.x = fVar10;
                UVar14.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition(pUVar8,UVar14,(MethodInfo *)0x0);
                __this_01 = (Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *)
                            thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_TypeInfo);
                Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH___ctor(__this_01,(MethodInfo *)0x0);
                iVar4 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                                  (__this_02,(ANGBPBINHBL->fields)._LMAILJNFCKH_k__BackingField,0,
                                   method_00);
                if (__this_01 != (Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *)0x0) {
                  (__this_01->fields).KAEBCKDNFHH = ANGBPBINHBL;
                  (__this_01->fields).KPOBFGCNFAG = iVar4;
                  thunk_FUN_01c20e04(&__this_01->fields,ANGBPBINHBL);
                  iVar1 = (ANGBPBINHBL->fields)._LMAILJNFCKH_k__BackingField;
                  (__this_01->fields).BGHFADDGPAD = iVar1;
                  (__this_01->fields).IPPKJMDIGKJ = iVar1 == 4;
                  lVar3 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__;
                  pSVar6 = (__this->fields).EGHLGEIJLAM;
                  if (pSVar6 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
                    pNVar9 = (pSVar6->fields)._items;
                    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                    if (pNVar9 != (Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_array *)0x0) {
                      uVar2 = (pSVar6->fields)._size;
                      if (uVar2 < (uint)pNVar9->max_length) {
                        (pSVar6->fields)._size = uVar2 + 1;
                        pNVar9->m_Items[(int)uVar2] = __this_01;
                        thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar2,__this_01);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar6,
                                   (Il2CppObject *)__this_01,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      }
                      return __this_01;
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
LAB_0342c06c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

