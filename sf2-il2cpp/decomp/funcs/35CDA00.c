// Nekki.SF2.GUI.BaseScrollContent$$AddItem @ RVA 0x35CDA00

void Nekki_SF2_GUI_BaseScrollContent__AddItem
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  Il2CppObject *__this_00;
  UnityEngine_Object_o *y;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectOffset_o *pUVar10;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_BaseScrollItem_o *item;
  MethodInfo *method_00;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar11;
  Nekki_SF2_GUI_BaseScrollItem_array *pNVar12;
  void **ppvVar13;
  UnityEngine_Events_UnityEvent_o *__this_03;
  UnityEngine_Object_o *x;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Rect_o UVar18;
  
  if ((DAT_04568fb9 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_BaseScrollContent_EPICIHJJOKK_FJANFFAGFAP__);
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollContent_EPICIHJJOKK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_VerticalLayoutGroup_TypeInfo);
    DAT_04568fb9 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_BaseScrollContent_EPICIHJJOKK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_036cde84;
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  ppvVar13 = &__this_00[1].monitor;
  *ppvVar13 = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppvVar13,IKKAMAMLIKA);
  x = *ppvVar13;
  y = (UnityEngine_Object_o *)
      UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar5 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if ((*ppvVar13 == (UnityEngine_Component_o *)0x0) ||
     (pUVar8 = UnityEngine_Component__get_gameObject(*ppvVar13,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036cde84;
  pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar8 == (UnityEngine_GameObject_o *)0x0) ||
     (parent = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
     pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_036cde84;
  UnityEngine_Transform__SetParent(pUVar9,parent,false,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 036cdba0 to 037cdbc7 has its CatchHandler @ 036cdfec */
  if ((pUVar8 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_01 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_036cde84;
  if (__this_01->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_01);
  }
  UVar17 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  fVar15 = UVar17.fields.m_Width;
  UVar17 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
  fVar16 = UVar17.fields.m_Height;
                    /* try { // try from 036cdbfc to 037cdc27 has its CatchHandler @ 036cdfe4 */
  if (((*ppvVar13 == (UnityEngine_Component_o *)0x0) ||
      (pUVar8 = UnityEngine_Component__get_gameObject(*ppvVar13,(MethodInfo *)0x0),
      pUVar8 == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_02 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
     __this_02 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_036cde84;
  if (__this_02->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_02);
  }
  UVar17 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
  UVar18 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
  pSVar11 = (__this->fields)._Items;
  if (pSVar11 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0) goto LAB_036cde84;
  if (0 < (pSVar11->fields)._size) {
    fVar15 = fVar15 - (__this->fields)._additionalContentSize.fields.x;
    fVar16 = fVar16 - (__this->fields)._additionalContentSize.fields.y;
  }
                    /* try { // try from 036cdc58 to 037cdc63 has its CatchHandler @ 036cdfd0 */
  pUVar8 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar8 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
     pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_036cde84;
  UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  pUVar14 = (__this->fields)._layout;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    if (pUVar14 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_036cdc98;
LAB_036cdcb8:
    pUVar14 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  }
  else {
    if (pUVar14 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_036cdcb8;
LAB_036cdc98:
                    /* try { // try from 036cdca8 to 037cdcc3 has its CatchHandler @ 036cdfcc */
    bVar2 = (UnityEngine_UI_VerticalLayoutGroup_TypeInfo->_2).naturalAligment;
    if ((pUVar14->klass->_2).naturalAligment < bVar2) goto LAB_036cdcb8;
                    /* try { // try from 036cdcc4 to 037cddbf has its CatchHandler @ 036cd9d8 */
    if ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)UnityEngine_UI_VerticalLayoutGroup_TypeInfo) {
      pUVar14 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
    }
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar11 = (__this->fields)._Items;
  if (pSVar11 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0) goto LAB_036cde84;
  iVar1 = (pSVar11->fields)._size;
  if (bVar5) {
    if (iVar1 < 1) {
      pUVar14 = (__this->fields)._layout;
      if ((pUVar14 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) ||
         (pUVar10 = (pUVar14->fields).super.m_Padding, pUVar10 == (UnityEngine_RectOffset_o *)0x0))
      goto LAB_036cde84;
      iVar6 = UnityEngine_RectOffset__get_top(pUVar10,(MethodInfo *)0x0);
      pUVar14 = (__this->fields)._layout;
      if ((pUVar14 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) ||
         (pUVar10 = (pUVar14->fields).super.m_Padding, pUVar10 == (UnityEngine_RectOffset_o *)0x0))
      goto LAB_036cde84;
      iVar7 = UnityEngine_RectOffset__get_bottom(pUVar10,(MethodInfo *)0x0);
      fVar16 = (float)(iVar7 + iVar6);
    }
    else {
      fVar16 = fVar16 + (__this->fields).Spacing;
    }
    fVar16 = UVar18.fields.m_Height + fVar16;
  }
  else {
    if (iVar1 < 1) {
      pUVar14 = (__this->fields)._layout;
      if ((pUVar14 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) ||
         (pUVar10 = (pUVar14->fields).super.m_Padding, pUVar10 == (UnityEngine_RectOffset_o *)0x0))
      goto LAB_036cde84;
      iVar6 = UnityEngine_RectOffset__get_left(pUVar10,(MethodInfo *)0x0);
      pUVar14 = (__this->fields)._layout;
      if ((pUVar14 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) ||
         (pUVar10 = (pUVar14->fields).super.m_Padding, pUVar10 == (UnityEngine_RectOffset_o *)0x0))
      goto LAB_036cde84;
      iVar7 = UnityEngine_RectOffset__get_right(pUVar10,(MethodInfo *)0x0);
      fVar15 = (float)(iVar7 + iVar6);
    }
    else {
      fVar15 = fVar15 + (__this->fields).Spacing;
    }
    fVar15 = UVar17.fields.m_Width + fVar15;
  }
  value.fields.y = fVar16 + (__this->fields)._additionalContentSize.fields.y;
  value.fields.x = fVar15 + (__this->fields)._additionalContentSize.fields.x;
  UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
  lVar4 = Method_System_Collections_Generic_List<BaseScrollItem>_Add__;
  pSVar11 = (__this->fields)._Items;
  if (pSVar11 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    item = *ppvVar13;
                    /* try { // try from 036cddc0 to 037cdde7 has its CatchHandler @ 036cdfe8 */
    pNVar12 = (pSVar11->fields)._items;
    (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
    if (pNVar12 != (Nekki_SF2_GUI_BaseScrollItem_array *)0x0) {
      uVar3 = (pSVar11->fields)._size;
      if (uVar3 < (uint)pNVar12->max_length) {
        (pSVar11->fields)._size = uVar3 + 1;
        pNVar12->m_Items[(int)uVar3] = item;
        thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 036cde1c to 037cde47 has its CatchHandler @ 036cdfe0 */
      if (*ppvVar13 != (void *)0x0) {
        __this_03 = *(UnityEngine_Events_UnityEvent_o **)((long)*ppvVar13 + 0x100);
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          Nekki_SF2_GUI_BaseScrollContent__UpdateLayout(__this,method_00);
          return;
        }
      }
    }
  }
LAB_036cde84:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036cde84 to 037cdef7 has its CatchHandler @ 036ce094 */
  FUN_01bab8c8();
}

