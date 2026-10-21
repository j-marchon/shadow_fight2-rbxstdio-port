// Nekki.SF2.GUI.Dialogs.EventDialog$$GLJGIJNALCA @ RVA 0x3581828

void Nekki_SF2_GUI_Dialogs_EventDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar6;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04568cd2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RectTransform>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RectTransform>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RectTransform>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>__ctor__);
                    /* try { // try from 036818b8 to 03781957 has its CatchHandler @ 036818b8
                       catch() { ... } // from try @ 036818b8 with catch @ 036818b8
                       catch() { ... } // from try @ 03681960 with catch @ 036818b8
                       catch() { ... } // from try @ 036819a8 with catch @ 036818b8
                       catch() { ... } // from try @ 036819cc with catch @ 036818b8
                       catch() { ... } // from try @ 03681a0c with catch @ 036818b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<RectTransform>_TypeInfo);
    DAT_04568cd2 = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RectTransform>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<RectTransform>__ctor__);
  pUVar4 = (__this->fields)._storyParent1;
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
    pUVar4 = (__this->fields)._storyParent1;
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
                    /* try { // try from 03681958 to 0378195f has its CatchHandler @ 036819b0 */
    }
    else {
                    /* try { // try from 03681960 to 037819a3 has its CatchHandler @ 036818b8 */
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar4 = (__this->fields)._storyParent2;
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
    pUVar4 = (__this->fields)._storyParent2;
                    /* try { // try from 036819a4 to 037819a7 has its CatchHandler @ 036819ac */
    pSVar6 = (__this_00->fields)._items;
                    /* try { // try from 036819a8 to 037819c7 has its CatchHandler @ 036818b8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036819a4 with catch @ 036819ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681958 with catch @ 036819b0
                        */
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
                    /* try { // try from 036819c8 to 037819cb has its CatchHandler @ 036819f4 */
                    /* try { // try from 036819cc to 03781a03 has its CatchHandler @ 036818b8 */
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* catch() { ... } // from try @ 036819c8 with catch @ 036819f4 */
  pUVar4 = (__this->fields)._raidParent1;
                    /* try { // try from 03681a04 to 03781a0b has its CatchHandler @ 03681a20 */
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
                    /* try { // try from 03681a0c to 03781a17 has its CatchHandler @ 036818b8 */
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
                    /* try { // try from 03681a18 to 03781a1f has its CatchHandler @ 03681a20 */
    pUVar4 = (__this->fields)._raidParent1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03681a04 with catch @ 03681a20
                       catch(type#2 @ 00000000) { ... } // from try @ 03681a18 with catch @ 03681a20
                        */
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar4 = (__this->fields)._raidParent2;
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
    pUVar4 = (__this->fields)._raidParent2;
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar5 = (__this->fields).super._content;
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
     pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._innerStripe;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 03681b5c to 03781bf7 has its CatchHandler @ 03681b5c
                       catch() { ... } // from try @ 03681b5c with catch @ 03681b5c
                       catch() { ... } // from try @ 03681c00 with catch @ 03681b5c
                       catch() { ... } // from try @ 03681c40 with catch @ 03681b5c
                       catch() { ... } // from try @ 03681c64 with catch @ 03681b5c
                       catch() { ... } // from try @ 03681ca4 with catch @ 03681b5c */
        fVar7 = (UVar8.fields.y - UVar9.fields.y) / (float)(__this_00->fields)._size;
        if (300.0 < fVar7) {
          fVar7 = 300.0;
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_58,__this_00,
                   Method_System_Collections_Generic_List<RectTransform>_GetEnumerator__);
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_58,
                             Method_System_Collections_Generic_List_Enumerator<RectTransform>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<RectTransform>_Dispose__);
            return;
          }
          if ((UnityEngine_RectTransform_o *)local_58.fields._current ==
              (UnityEngine_RectTransform_o *)0x0) break;
          UVar9.fields.x = UVar8.fields.x;
          UVar9.fields.y = fVar7;
          UnityEngine_RectTransform__set_sizeDelta
                    ((UnityEngine_RectTransform_o *)local_58.fields._current,UVar9,(MethodInfo *)0x0
                    );
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
LAB_03681bd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

