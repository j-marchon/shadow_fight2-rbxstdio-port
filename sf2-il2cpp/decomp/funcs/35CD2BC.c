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

