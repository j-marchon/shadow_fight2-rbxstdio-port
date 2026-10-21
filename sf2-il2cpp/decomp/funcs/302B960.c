// Nekki.SF2.GUI.SimpleScroll$$AddItem @ RVA 0x302B960

void Nekki_SF2_GUI_SimpleScroll__AddItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               bool FKNKAMAGHAI,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t index;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *pMVar5;
  System_Object_array *pSVar6;
  long lVar7;
  float fVar8;
  UnityEngine_Vector2_Fields UVar9;
  UnityEngine_Vector2_Fields UVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Vector2_o value;
  float local_50;
  float local_40;
  
  if ((DAT_04565cc1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cc1 = 1;
  }
  lVar7 = Method_System_Collections_Generic_List<BaseScrollItem>_Add__;
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)IKKAMAMLIKA;
        thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,IKKAMAMLIKA);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
        (*(IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.methodPtr)
                  (IKKAMAMLIKA,(ulong)FKNKAMAGHAI,
                   (IKKAMAMLIKA->klass->vtable)._47_EnableVisibility.method);
        pMVar5 = method_00;
        if ((__this->fields).super.m_Vertical != false) {
          bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
          pMVar5 = extraout_x1;
          if (bVar2) {
            pUVar3 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
            UnityEngine_RectTransform__set_pivot
                      (pUVar3,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pMVar5 = extraout_x1_00;
          }
          bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar5);
          pMVar5 = extraout_x1_01;
          if (bVar2) {
            pUVar3 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
            UnityEngine_RectTransform__set_pivot
                      (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
            pMVar5 = extraout_x1_02;
          }
        }
        if (((__this->fields).super.m_Horizontal != false) &&
           (bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar5), bVar2)) {
          pUVar3 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0);
          __this_01 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(IKKAMAMLIKA,(MethodInfo *)0x0)
          ;
          if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
          UVar11 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
          UVar11.fields.y = (float)((ulong)UVar11.fields >> 0x20);
          UVar11.fields.x = 0.5;
          UnityEngine_RectTransform__set_pivot(pUVar3,UVar11,(MethodInfo *)0x0);
        }
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).super.m_Content;
        if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
           (parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar4,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
          index = Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN(__this,method_01);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetSiblingIndex(pUVar4,index,(MethodInfo *)0x0);
            lVar7 = *(long *)&(__this->fields)._snapEase;
            *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 1;
            *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x18) < 2) {
                *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 3) = 1;
                return;
              }
              pMVar5 = extraout_x1_03;
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fa75 = '\x01';
                pMVar5 = extraout_x1_04;
              }
              local_50 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
              local_40 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
              if (((__this->fields).super.m_Vertical != false) &&
                 (fVar8 = local_50, bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar5)
                 , pMVar5 = extraout_x1_05, bVar2)) {
                (*(IKKAMAMLIKA->klass->vtable)._51_get_Size.methodPtr)
                          (IKKAMAMLIKA,(IKKAMAMLIKA->klass->vtable)._51_get_Size.method);
                pUVar3 = (__this->fields).super.m_Content;
                if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
                UVar11 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
                lVar7 = *(long *)&(__this->fields).ANKHPKGAHCA;
                if (lVar7 == 0) goto LAB_0312bcf0;
                local_40 = (1.0 - UVar11.fields.y) * -fVar8 - *(float *)(lVar7 + 0x60);
                pMVar5 = extraout_x1_06;
              }
              if (((__this->fields).super.m_Horizontal != false) &&
                 (bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar5), bVar2)) {
                fVar8 = (float)(*(IKKAMAMLIKA->klass->vtable)._51_get_Size.methodPtr)
                                         (IKKAMAMLIKA,
                                          (IKKAMAMLIKA->klass->vtable)._51_get_Size.method);
                pUVar3 = (__this->fields).super.m_Content;
                if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312bcf0;
                UVar11 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
                lVar7 = *(long *)&(__this->fields).ANKHPKGAHCA;
                if (lVar7 == 0) goto LAB_0312bcf0;
                local_50 = fVar8 * (1.0 - UVar11.fields.x) + *(float *)(lVar7 + 0x60);
              }
              pUVar3 = (__this->fields).super.m_Content;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
                value.fields.x = local_50 + UVar11.fields.x;
                value.fields.y = local_40 + UVar11.fields.y;
                UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value,(MethodInfo *)0x0);
                UVar9 = (__this->fields).super.m_ContentStartPosition.fields;
                pUVar3 = (__this->fields).super.m_Content;
                UVar10.x = local_50 + UVar9.x;
                UVar10.y = local_40 + UVar9.y;
                (__this->fields).super.m_ContentStartPosition.fields = UVar10;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar11 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0)
                  ;
                  (__this->fields).IFDBJFNPOEK.fields.x = UVar11.fields.x;
                  (__this->fields).IFDBJFNPOEK.fields.y = UVar11.fields.y;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0312bcf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

