// TypeDefIndex 648
// Namespace: Nekki.SF2.GUI
// [Serializable]
// public class BaseScrollContent : MonoBehaviour
// Fields:
//   public BaseScrollContent.SelectItemEvent onSelectItem; // 0x20
//   public BaseScrollContent.ClickItemEvent onClickItem; // 0x28
//   private HorizontalOrVerticalLayoutGroup _layout; // 0x30
//   public float Spacing; // 0x38
//   private Vector2 _additionalContentSize; // 0x3C
//   private bool _centering; // 0x44
//   private RectTransform <Center>k__BackingField; // 0x48
//   private List<BaseScrollItem> _Items; // 0x50
//   private BaseScrollItem <SelectedItem>k__BackingField; // 0x58

// ===== public bool get_Centering()  [RVA 0x35CC660]
// Nekki.SF2.GUI.BaseScrollContent$$get_Centering @ RVA 0x35CC660

bool Nekki_SF2_GUI_BaseScrollContent__get_Centering
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._centering;
}


// ===== public void DestroyItems()  [RVA 0x35CC668]
// Nekki.SF2.GUI.BaseScrollContent$$DestroyItems @ RVA 0x35CC668

void Nekki_SF2_GUI_BaseScrollContent__DestroyItems
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar2;
  UnityEngine_Events_UnityEventBase_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568fad & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    DAT_04568fad = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._Items;
  if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      __this_00 = local_50.fields._current;
      if (!bVar1) break;
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (UnityEngine_Events_UnityEventBase_o *)
                  (((UnityEngine_Component_o *)((long)local_50.fields._current + 0xf0))->fields).
                  super.m_CachedPtr;
      if (__this_01 == (UnityEngine_Events_UnityEventBase_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_Events_UnityEventBase__RemoveAllListeners(__this_01,(MethodInfo *)0x0);
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    pSVar2 = (__this->fields)._Items;
    if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_Center()  [RVA 0x35CC81C]
// Nekki.SF2.GUI.BaseScrollContent$$get_Center @ RVA 0x35CC81C

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_BaseScrollContent__get_Center
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._Center_k__BackingField;
}


// ===== public void set_AdditionalContentSize(Vector2 CJNHFNHJHPE)  [RVA 0x35CC824]
// Nekki.SF2.GUI.BaseScrollContent$$set_AdditionalContentSize @ RVA 0x35CC824

void Nekki_SF2_GUI_BaseScrollContent__set_AdditionalContentSize
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._additionalContentSize.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._additionalContentSize.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public void RemoveItem(BaseScrollItem IKKAMAMLIKA)  [RVA 0x35CC82C]
// Nekki.SF2.GUI.BaseScrollContent$$RemoveItem @ RVA 0x35CC82C

void Nekki_SF2_GUI_BaseScrollContent__RemoveItem
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  
  if ((DAT_04568fae & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    DAT_04568fae = 1;
  }
  __this_00 = (__this->fields)._Items;
  bVar1 = false;
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Remove
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    if ((IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
       (__this_01 = (IKKAMAMLIKA->fields).super.m_OnClick, bVar1 = false,
       __this_01 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}


// ===== public void Clear()  [RVA 0x35CC898]
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
    FUN_01bab630(&StringLiteral_3407/*"BaseScrollContent.Clear gameObject is null"*/);
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
    UnityEngine_Debug__LogError(StringLiteral_3407/*"BaseScrollContent.Clear gameObject is null"*/,(MethodInfo *)0x0);
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


// ===== public void set_TopSpacing(int CJNHFNHJHPE)  [RVA 0x35CD0B0]
// Nekki.SF2.GUI.BaseScrollContent$$set_TopSpacing @ RVA 0x35CD0B0

void Nekki_SF2_GUI_BaseScrollContent__set_TopSpacing
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar1;
  
  pUVar1 = (__this->fields)._layout;
  if ((pUVar1 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
     (__this_00 = (pUVar1->fields).super.m_Padding, __this_00 != (UnityEngine_RectOffset_o *)0x0)) {
    UnityEngine_RectOffset__set_top(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetDistanceToCenter(BaseScrollItem IKKAMAMLIKA)  [RVA 0x35CD0D4]
// Nekki.SF2.GUI.BaseScrollContent$$GetDistanceToCenter @ RVA 0x35CD0D4

float Nekki_SF2_GUI_BaseScrollContent__GetDistanceToCenter
                (Nekki_SF2_GUI_BaseScrollContent_o *__this,
                Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o UVar5;
  
  if ((DAT_04568fb0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fb0 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (__this->fields)._Center_k__BackingField;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_Transform__get_position
                        ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      if ((IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UVar5 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        if (DAT_04560276 == '\0') {
          FUN_01bab630(UVar5.fields.x,UVar5.fields.y,UVar5.fields.z,&System_Math_TypeInfo);
          DAT_04560276 = '\x01';
        }
        fVar3 = UVar4.fields.x - UVar5.fields.x;
        fVar2 = UVar4.fields.y - UVar5.fields.y;
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        return SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}


// ===== public int get_BottomSpacing()  [RVA 0x35CD1EC]
// Nekki.SF2.GUI.BaseScrollContent$$get_BottomSpacing @ RVA 0x35CD1EC

int32_t Nekki_SF2_GUI_BaseScrollContent__get_BottomSpacing
                  (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  
  pUVar2 = (__this->fields)._layout;
  if ((pUVar2 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
     (__this_00 = (pUVar2->fields).super.m_Padding, __this_00 != (UnityEngine_RectOffset_o *)0x0)) {
    iVar1 = UnityEngine_RectOffset__get_bottom(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_SelectedItemRect()  [RVA 0x35CD210]
// Nekki.SF2.GUI.BaseScrollContent$$get_SelectedItemRect @ RVA 0x35CD210

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_BaseScrollContent__get_SelectedItemRect
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  
  if ((DAT_04568fb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568fb1 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._SelectedItem_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_RectTransform_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._SelectedItem_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2->klass != UnityEngine_RectTransform_TypeInfo)) {
      pUVar2 = (UnityEngine_RectTransform_o *)0x0;
    }
  }
  return pUVar2;
}


// ===== public BaseScrollItem GetNearestItem(float HKLGABDKEOD = 0)  [RVA 0x35CD2BC]
// Nekki.SF2.GUI.BaseScrollContent$$GetNearestItem @ RVA 0x35CD2BC

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_BaseScrollContent__GetNearestItem
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,float HKLGABDKEOD,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *x;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_d1;
  undefined4 uVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  uVar10 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_04568fb2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_VerticalLayoutGroup_TypeInfo);
    DAT_04568fb2 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pUVar5 = (__this->fields)._Center_k__BackingField;
  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_036cd514;
  x = (__this->fields)._layout;
  UVar12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._Center_k__BackingField;
  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_036cd514;
  UVar13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
  fVar8 = UVar13.fields.y;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UVar13.fields.x,CONCAT44(uVar10,fVar8),UVar13.fields.z);
    if (x != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_036cd398;
LAB_036cd3b8:
    x = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  }
  else {
    if (x == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_036cd3b8;
LAB_036cd398:
    bVar1 = (UnityEngine_UI_VerticalLayoutGroup_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_036cd3b8;
    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)UnityEngine_UI_VerticalLayoutGroup_TypeInfo) {
      x = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
    }
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._Items;
  fVar11 = UVar12.fields.x;
  fVar2 = fVar8 + HKLGABDKEOD;
  if (!bVar4) {
    fVar11 = UVar12.fields.x + HKLGABDKEOD;
    fVar2 = fVar8;
  }
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    fVar8 = 3.4028235e+38;
    pNVar6 = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
    while( true ) {
      uVar10 = (undefined4)((ulong)local_a8.fields._list >> 0x20);
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      pIVar3 = local_90.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
        return pNVar6;
      }
      if ((Nekki_SF2_GUI_BaseScrollItem_o *)local_90.fields._current ==
          (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) break;
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)local_90.fields._current,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UVar12 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      if (DAT_04560276 == '\0') {
        FUN_01bab630(UVar12.fields.x,CONCAT44(uVar10,UVar12.fields.y),UVar12.fields.z,
                     &System_Math_TypeInfo);
        DAT_04560276 = '\x01';
      }
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar7 = fVar11 - UVar12.fields.x;
      fVar9 = fVar2 - UVar12.fields.y;
      local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      fVar7 = SQRT(fVar7 * fVar7 + fVar9 * fVar9);
      if (fVar7 < fVar8) {
        fVar8 = fVar7;
        pNVar6 = (Nekki_SF2_GUI_BaseScrollItem_o *)pIVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036cd514:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BaseScrollItem get_FirstItem()  [RVA 0x35CD590]
// Nekki.SF2.GUI.BaseScrollContent$$get_FirstItem @ RVA 0x35CD590

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_BaseScrollContent__get_FirstItem
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fb3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04568fb3 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._Items;
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      pNVar1 = (Nekki_SF2_GUI_BaseScrollItem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void set_Center(RectTransform CJNHFNHJHPE)  [RVA 0x35CD60C]
// Nekki.SF2.GUI.BaseScrollContent$$set_Center @ RVA 0x35CD60C

void Nekki_SF2_GUI_BaseScrollContent__set_Center
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,UnityEngine_RectTransform_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._Center_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public Vector2 get_AdditionalContentSize()  [RVA 0x35CD614]
// Nekki.SF2.GUI.BaseScrollContent$$get_AdditionalContentSize @ RVA 0x35CD614

UnityEngine_Vector2_o
Nekki_SF2_GUI_BaseScrollContent__get_AdditionalContentSize
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._additionalContentSize.fields;
}


// ===== public void set_BottomSpacing(int CJNHFNHJHPE)  [RVA 0x35CD61C]
// Nekki.SF2.GUI.BaseScrollContent$$set_BottomSpacing @ RVA 0x35CD61C

void Nekki_SF2_GUI_BaseScrollContent__set_BottomSpacing
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar1;
  
  pUVar1 = (__this->fields)._layout;
  if ((pUVar1 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
     (__this_00 = (pUVar1->fields).super.m_Padding, __this_00 != (UnityEngine_RectOffset_o *)0x0)) {
    UnityEngine_RectOffset__set_bottom(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_RectTransform()  [RVA 0x35CD640]
// Nekki.SF2.GUI.BaseScrollContent$$get_RectTransform @ RVA 0x35CD640

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_BaseScrollContent__get_RectTransform
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04568fb4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568fb4 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
  return pUVar1;
}


// ===== public void ClearItems()  [RVA 0x35CCF1C]
// Nekki.SF2.GUI.BaseScrollContent$$ClearItems @ RVA 0x35CCF1C

void Nekki_SF2_GUI_BaseScrollContent__ClearItems
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568fb5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    DAT_04568fb5 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._Items;
  if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_38.fields._current[0x10].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)local_38.fields._current[0x10].klass,
                 (MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    pSVar2 = (__this->fields)._Items;
    if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Update()  [RVA 0x35CD6A4]
// Nekki.SF2.GUI.BaseScrollContent$$Update @ RVA 0x35CD6A4

void Nekki_SF2_GUI_BaseScrollContent__Update
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *x_00;
  Nekki_SF2_GUI_BaseScrollItem_o **ppNVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *y;
  
  if ((DAT_04568fbc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
    DAT_04568fbc = 1;
    method = extraout_x1;
  }
  x_00 = (__this->fields)._Center_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x = Nekki_SF2_GUI_BaseScrollContent__GetNearestItem(__this,0.0,method_00);
    ppNVar2 = &(__this->fields)._SelectedItem_k__BackingField;
    y = *ppNVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._SelectedItem_k__BackingField = x;
      thunk_FUN_01c20e04(ppNVar2,x);
      __this_00 = (__this->fields).onSelectItem;
      if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)*ppNVar2,
                   Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public BaseScrollItem get_LastItem()  [RVA 0x35CD7A0]
// Nekki.SF2.GUI.BaseScrollContent$$get_LastItem @ RVA 0x35CD7A0

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_BaseScrollContent__get_LastItem
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fb6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04568fb6 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._Items;
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pNVar2 = (Nekki_SF2_GUI_BaseScrollItem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      return pNVar2;
    }
    return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void LJOHHCIMHJP(BaseScrollItem IKKAMAMLIKA)  [RVA 0x35CD818]
// Nekki.SF2.GUI.BaseScrollContent$$LJOHHCIMHJP @ RVA 0x35CD818

void Nekki_SF2_GUI_BaseScrollContent__LJOHHCIMHJP
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *__this_00;
  
  if ((DAT_04568fb7 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
    DAT_04568fb7 = 1;
  }
  __this_00 = (__this->fields).onClickItem;
  if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *)0x0) {
                    /* try { // try from 036cd864 to 037cd8fb has its CatchHandler @ 036cd864
                       catch() { ... } // from try @ 036cd864 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd924 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd960 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd988 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd9c0 with catch @ 036cd864 */
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)IKKAMAMLIKA,
               Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void set_SelectedItem(BaseScrollItem CJNHFNHJHPE)  [RVA 0x35CD870]
// Nekki.SF2.GUI.BaseScrollContent$$set_SelectedItem @ RVA 0x35CD870

void Nekki_SF2_GUI_BaseScrollContent__set_SelectedItem
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._SelectedItem_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void SetItems(List<BaseScrollItem> GHAAKPDHIJJ)  [RVA 0x35CD878]
// Nekki.SF2.GUI.BaseScrollContent$$SetItems @ RVA 0x35CD878

void Nekki_SF2_GUI_BaseScrollContent__SetItems
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               System_Collections_Generic_List_BaseScrollItem__o *GHAAKPDHIJJ,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)GHAAKPDHIJJ;
  if ((DAT_04568fb8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_3408/*"BaseScrollContent.SetItems items is null"*/);
    DAT_04568fb8 = 1;
    method_00 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (GHAAKPDHIJJ == (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
                    /* try { // try from 036cd95c to 037cd95f has its CatchHandler @ 036cd968 */
                    /* try { // try from 036cd960 to 037cd983 has its CatchHandler @ 036cd864 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036cd918 with catch @ 036cd964
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036cd95c with catch @ 036cd968
                        */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036cd8fc with catch @ 036cd96c
                        */
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_3408/*"BaseScrollContent.SetItems items is null"*/,(MethodInfo *)0x0);
  }
  else {
                    /* try { // try from 036cd8fc to 037cd903 has its CatchHandler @ 036cd96c */
    Nekki_SF2_GUI_BaseScrollContent__Clear(__this,method_00);
                    /* try { // try from 036cd918 to 037cd923 has its CatchHandler @ 036cd964 */
                    /* try { // try from 036cd924 to 037cd95b has its CatchHandler @ 036cd864 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_BaseScrollContent__AddItem
                (__this,(Nekki_SF2_GUI_BaseScrollItem_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
  }
                    /* try { // try from 036cd984 to 037cd987 has its CatchHandler @ 036cd9b0 */
                    /* try { // try from 036cd988 to 037cd9b7 has its CatchHandler @ 036cd864 */
  return;
}


// ===== public void AddItem(BaseScrollItem IKKAMAMLIKA)  [RVA 0x35CDA00]
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


// ===== public void .ctor()  [RVA 0x35CDFBC]
// Nekki.SF2.GUI.BaseScrollContent$$.ctor @ RVA 0x35CDFBC

void Nekki_SF2_GUI_BaseScrollContent___ctor
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o **ppNVar1;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *__this_01;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o **ppNVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_02;
  System_Collections_Generic_List_BaseScrollItem__o **ppSVar3;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
                    /* try { // try from 036cdfbc to 037ce003 has its CatchHandler @ 036cd9d8 */
                    /* catch() { ... } // from try @ 036cdfb8 with catch @ 036cdfc4 */
                    /* catch() { ... } // from try @ 036cdfac with catch @ 036cdfc8 */
                    /* catch() { ... } // from try @ 036cdca8 with catch @ 036cdfcc */
                    /* catch() { ... } // from try @ 036cdc58 with catch @ 036cdfd0 */
                    /* catch() { ... } // from try @ 036cdf90 with catch @ 036cdfd4 */
                    /* catch() { ... } // from try @ 036cdfa0 with catch @ 036cdfd8 */
                    /* catch() { ... } // from try @ 036cdf8c with catch @ 036cdfdc */
                    /* catch() { ... } // from try @ 036cde1c with catch @ 036cdfe0 */
                    /* catch() { ... } // from try @ 036cdbfc with catch @ 036cdfe4 */
  if ((DAT_04568fba & 1) == 0) {
                    /* catch() { ... } // from try @ 036cddc0 with catch @ 036cdfe8 */
                    /* catch() { ... } // from try @ 036cdba0 with catch @ 036cdfec */
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
                    /* try { // try from 036ce004 to 037ce007 has its CatchHandler @ 036ce014 */
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
                    /* catch() { ... } // from try @ 036ce004 with catch @ 036ce014 */
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_TypeInfo);
                    /* try { // try from 036ce01c to 037ce08f has its CatchHandler @ 036ce140 */
    DAT_04568fba = 1;
    method = extraout_x1;
  }
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_TypeInfo,method);
  __this_00 = auVar4._0_8_;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent___ctor(__this_00,auVar4._8_8_);
  ppNVar1 = &(__this->fields).onSelectItem;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_TypeInfo);
  __this_01 = auVar4._0_8_;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent___ctor(__this_01,auVar4._8_8_);
  ppNVar2 = &(__this->fields).onClickItem;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
                    /* catch() { ... } // from try @ 036cdf98 with catch @ 036ce090
                       try { // try from 036ce090 to 037ce0ab has its CatchHandler @ 036cd9d8 */
                    /* catch() { ... } // from try @ 036cde84 with catch @ 036ce094 */
  (__this->fields)._additionalContentSize.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
                    /* try { // try from 036ce0ac to 037ce0af has its CatchHandler @ 036ce0bc */
  __this_02 = (System_Collections_Generic_List_BaseScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
  ppSVar3 = &(__this->fields)._Items;
                    /* catch() { ... } // from try @ 036ce0ac with catch @ 036ce0bc */
  *ppSVar3 = __this_02;
                    /* try { // try from 036ce0c4 to 037ce12b has its CatchHandler @ 036ce140 */
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void UpdateLayout()  [RVA 0x35CDEA0]
// Nekki.SF2.GUI.BaseScrollContent$$UpdateLayout @ RVA 0x35CDEA0

void Nekki_SF2_GUI_BaseScrollContent__UpdateLayout
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *layoutRoot;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  
  if ((DAT_04568fbb & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568fbb = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._layout;
                    /* try { // try from 036cdef8 to 037cdf8b has its CatchHandler @ 036cd9d8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._layout;
  if (pUVar2 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              (pUVar2,(__this->fields).Spacing,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._layout;
    if ((pUVar2 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      layoutRoot = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
      }
                    /* try { // try from 036cdf8c to 037cdf8f has its CatchHandler @ 036cdfdc */
                    /* try { // try from 036cdf90 to 037cdf97 has its CatchHandler @ 036cdfd4 */
      if ((layoutRoot != (UnityEngine_RectTransform_o *)0x0) &&
         (layoutRoot->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036cdfb8 to 037cdfbb has its CatchHandler @ 036cdfc4 */
        FUN_01babc64(layoutRoot);
      }
                    /* try { // try from 036cdf98 to 037cdf9f has its CatchHandler @ 036ce090 */
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
                    /* try { // try from 036cdfa0 to 037cdfa7 has its CatchHandler @ 036cdfd8 */
                    /* try { // try from 036cdfa8 to 037cdfab has its CatchHandler @ 036cd9d8 */
                    /* try { // try from 036cdfac to 037cdfaf has its CatchHandler @ 036cdfc8 */
      Nekki_SF2_GUI_BaseScrollContent__JKPBONNNLEI(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036cdfb0 to 037cdfb7 has its CatchHandler @ 036cd9d8 */
  FUN_01bab8c8();
}


// ===== private void JKPBONNNLEI()  [RVA 0x35CD6A8]
// Nekki.SF2.GUI.BaseScrollContent$$JKPBONNNLEI @ RVA 0x35CD6A8

void Nekki_SF2_GUI_BaseScrollContent__JKPBONNNLEI
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *x_00;
  Nekki_SF2_GUI_BaseScrollItem_o **ppNVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *y;
  
  if ((DAT_04568fbc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
    DAT_04568fbc = 1;
    method = extraout_x1;
  }
  x_00 = (__this->fields)._Center_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x = Nekki_SF2_GUI_BaseScrollContent__GetNearestItem(__this,0.0,method_00);
    ppNVar2 = &(__this->fields)._SelectedItem_k__BackingField;
    y = *ppNVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._SelectedItem_k__BackingField = x;
      thunk_FUN_01c20e04(ppNVar2,x);
      __this_00 = (__this->fields).onSelectItem;
      if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)*ppNVar2,
                   Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public List<BaseScrollItem> get_Items()  [RVA 0x35CE174]
// Nekki.SF2.GUI.BaseScrollContent$$get_Items @ RVA 0x35CE174

System_Collections_Generic_List_BaseScrollItem__o *
Nekki_SF2_GUI_BaseScrollContent__get_Items
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._Items;
}


// ===== public void set_Centering(bool CJNHFNHJHPE)  [RVA 0x35CE17C]
// Nekki.SF2.GUI.BaseScrollContent$$set_Centering @ RVA 0x35CE17C

void Nekki_SF2_GUI_BaseScrollContent__set_Centering
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._centering = CJNHFNHJHPE;
  return;
}


// ===== public BaseScrollItem get_SelectedItem()  [RVA 0x35CE188]
// Nekki.SF2.GUI.BaseScrollContent$$get_SelectedItem @ RVA 0x35CE188

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_BaseScrollContent__get_SelectedItem
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._SelectedItem_k__BackingField;
}


// ===== public int get_TopSpacing()  [RVA 0x35CE190]
// Nekki.SF2.GUI.BaseScrollContent$$get_TopSpacing @ RVA 0x35CE190

int32_t Nekki_SF2_GUI_BaseScrollContent__get_TopSpacing
                  (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  
  pUVar2 = (__this->fields)._layout;
  if ((pUVar2 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
     (__this_00 = (pUVar2->fields).super.m_Padding, __this_00 != (UnityEngine_RectOffset_o *)0x0)) {
    iVar1 = UnityEngine_RectOffset__get_top(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

