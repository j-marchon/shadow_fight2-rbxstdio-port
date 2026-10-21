// Nekki.SF2.GUI.BaseScrollContent$$Clear @ RVA 0x35CC898

/* WARNING: Removing unreachable block (ram,0x036ccc5c) */
/* WARNING: Removing unreachable block (ram,0x036ccd5c) */
/* WARNING: Removing unreachable block (ram,0x036cce34) */

void Nekki_SF2_GUI_BaseScrollContent__Clear
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  System_Collections_IEnumerator_o *pSVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_Component_o *__this_02;
  long *plVar9;
  undefined8 *puVar10;
  System_Action_GameObject__o **ppSVar11;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *method_00;
  System_Collections_IEnumerator_c *pSVar12;
  System_Object_array *pSVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *x_00;
  System_Action_GameObject__o *action;
  float fVar18;
  float fVar19;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar20;
  
  if ((DAT_04568faf & 1) == 0) {
    FUN_01bab630(&System_Action<GameObject>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_BaseScrollContent_<>c_CJPPHPKCFLE__);
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollContent_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_VerticalLayoutGroup_TypeInfo);
    FUN_01bab630(&StringLiteral_3407);
    DAT_04568faf = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_3407,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<GameObject>__ctor__);
  pUVar6 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    pSVar7 = UnityEngine_Transform__GetEnumerator(__this_01,(MethodInfo *)0x0);
    if (pSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar12 = pSVar7->klass;
      uVar2._0_1_ = (pSVar12->_2).rank;
      uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
      uVar15 = (ulong)uVar2;
      if (uVar15 != 0) {
        piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar8 = pSVar12->vtable + *piVar16;
            goto LAB_036ccaac;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_036ccaac:
      uVar15 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if ((uVar15 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01bda71c(pSVar7,System_IDisposable_TypeInfo);
        if (plVar9 == (long *)0x0) goto LAB_036ccc50;
        lVar14 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 == 0) goto LAB_036ccc28;
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_036ccc10;
      }
      pSVar12 = pSVar7->klass;
      uVar3._0_1_ = (pSVar12->_2).rank;
      uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
      uVar15 = (ulong)uVar3;
      if (uVar15 != 0) {
        piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar8 = pSVar12->vtable + (*piVar16 + 1);
            goto LAB_036ccb0c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_036ccb0c:
      __this_02 = (UnityEngine_Component_o *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if (__this_02 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_02);
      }
      pUVar6 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
      lVar14 = Method_System_Collections_Generic_List<GameObject>_Add__;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar13 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar4 = (__this_00->fields)._size;
      if (uVar4 < (uint)pSVar13->max_length) {
        (__this_00->fields)._size = uVar4 + 1;
        pSVar13->m_Items[(int)uVar4] = (Il2CppObject *)pUVar6;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)pUVar6,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_036cce2c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_036ccc10:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_036ccc44;
    }
  }
LAB_036ccc28:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_036ccc44:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_036ccc50:
  if ((Nekki_SF2_GUI_BaseScrollContent_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_BaseScrollContent_<>c_TypeInfo);
  }
  action = Nekki_SF2_GUI_BaseScrollContent_<>c_TypeInfo->static_fields->__9__46_0;
  if (action == (System_Action_GameObject__o *)0x0) {
    if ((Nekki_SF2_GUI_BaseScrollContent_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_BaseScrollContent_<>c_TypeInfo);
    }
    action = (System_Action_GameObject__o *)thunk_FUN_01bda818(System_Action<GameObject>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar11 = &Nekki_SF2_GUI_BaseScrollContent_<>c_TypeInfo->static_fields->__9__46_0;
    *ppSVar11 = action;
    thunk_FUN_01c20e04(ppSVar11,action);
  }
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036cce2c;
  System_Collections_Generic_List<object>__ForEach
            (__this_00,(System_Action_T__o *)action,
             Method_System_Collections_Generic_List<GameObject>_ForEach__);
  Nekki_SF2_GUI_BaseScrollContent__ClearItems(__this,method_00);
  x_00 = (__this->fields)._layout;
  pUVar6 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_036cce2c;
  __this_03 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
  if ((__this_03 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_03->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_03);
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    if (x_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_036ccd7c;
LAB_036ccd9c:
    x_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  }
  else {
    if (x_00 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_036ccd9c;
LAB_036ccd7c:
    bVar1 = (UnityEngine_UI_VerticalLayoutGroup_TypeInfo->_2).naturalAligment;
    if ((x_00->klass->_2).naturalAligment < bVar1) goto LAB_036ccd9c;
    if ((x_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)UnityEngine_UI_VerticalLayoutGroup_TypeInfo) {
      x_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
    }
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
    UVar20 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0);
    fVar19 = UVar20.fields.m_Height;
    fVar18 = UVar20.fields.m_Width;
    if (bVar5) {
      fVar19 = 0.0;
    }
    else {
      fVar18 = 0.0;
    }
    value.fields.y = fVar19;
    value.fields.x = fVar18;
    UnityEngine_RectTransform__set_sizeDelta(__this_03,value,(MethodInfo *)0x0);
    return;
  }
LAB_036cce2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

