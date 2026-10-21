// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$FPBDGBCLCPF @ RVA 0x3258474

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__FPBDGBCLCPF
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_ScrollDialogElement__o *pSVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar4;
  UnityEngine_UI_ScrollRect_o *pUVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456717e & 1) == 0) {
                    /* try { // try from 0335849c to 034585cb has its CatchHandler @ 0335849c
                       catch() { ... } // from try @ 0335849c with catch @ 0335849c
                       catch() { ... } // from try @ 033585e4 with catch @ 0335849c
                       catch() { ... } // from try @ 033586d8 with catch @ 0335849c
                       catch() { ... } // from try @ 033588b8 with catch @ 0335849c
                       catch() { ... } // from try @ 03358924 with catch @ 0335849c
                       catch() { ... } // from try @ 03358aa8 with catch @ 0335849c
                       catch() { ... } // from try @ 03358bb8 with catch @ 0335849c
                       catch() { ... } // from try @ 03358bf8 with catch @ 0335849c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456717e = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).AALHBGHLAGO;
  if (pSVar2 != (System_Collections_Generic_List_ScrollDialogElement__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ScrollDialogElement>_GetEnumerator__);
    fVar7 = 0.0;
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_MoveNext__
                             ), __this_00 = local_70.fields._current, bVar1) {
      if ((UnityEngine_Component_o *)local_70.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*((UnityEngine_Component_c *)(local_70.fields._current)->klass)[1]._1.image)
                (local_70.fields._current,
                 ((UnityEngine_Component_c *)(local_70.fields._current)->klass)[1]._1.gc_desc);
      pUVar3 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
      }
      else if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033585cc to 034585d3 has its CatchHandler @ 03358a78 */
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
        fVar7 = fVar7 + UVar8.fields.m_Height;
      }
    }
                    /* try { // try from 033585e0 to 034585e3 has its CatchHandler @ 033588e0 */
                    /* try { // try from 033585e4 to 034585f3 has its CatchHandler @ 0335849c */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<ScrollDialogElement>_Dispose__);
    pUVar4 = (__this->fields)._verticalLayoutGroup;
                    /* try { // try from 033585f4 to 03458603 has its CatchHandler @ 033588f4 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
                    /* try { // try from 03358610 to 0345861f has its CatchHandler @ 033588f0 */
      pUVar4 = (__this->fields)._verticalLayoutGroup;
      if ((pUVar4 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
         (pSVar2 = (__this->fields).AALHBGHLAGO,
         pSVar2 == (System_Collections_Generic_List_ScrollDialogElement__o *)0x0))
      goto LAB_03358790;
                    /* try { // try from 03358620 to 03458627 has its CatchHandler @ 033588ec */
      fVar7 = fVar7 + *(float *)&(pUVar4->fields).super.m_ChildScaleWidth *
                      (float)((pSVar2->fields)._size + -1);
    }
    pUVar3 = (__this->fields)._scrollContent;
                    /* try { // try from 0335863c to 0345863f has its CatchHandler @ 033588e8 */
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03358644 to 0345865b has its CatchHandler @ 033588dc */
      UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._scrollContent;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar9.fields.y = fVar7;
        UnityEngine_RectTransform__set_sizeDelta(pUVar3,UVar9,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LBBMPJKOINK(__this,1.0,method_00);
                    /* try { // try from 03358668 to 03458673 has its CatchHandler @ 033588cc */
        pUVar5 = (__this->fields)._scroll;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0335867c to 03458687 has its CatchHandler @ 033588c8 */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        pUVar3 = (UnityEngine_RectTransform_o *)0x0;
                    /* try { // try from 03358690 to 03458697 has its CatchHandler @ 033588c4 */
        if (bVar1) {
          pUVar5 = (__this->fields)._scroll;
          if (pUVar5 == (UnityEngine_UI_ScrollRect_o *)0x0) goto LAB_03358790;
                    /* try { // try from 0335869c to 034586a3 has its CatchHandler @ 033588e4 */
          pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
            pUVar3 = (UnityEngine_RectTransform_o *)0x0;
          }
          else if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
            pUVar3 = (UnityEngine_RectTransform_o *)0x0;
          }
        }
                    /* try { // try from 033586c0 to 034586c7 has its CatchHandler @ 033588bc */
                    /* try { // try from 033586c8 to 034586d7 has its CatchHandler @ 033588c0 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 033586d8 to 03458893 has its CatchHandler @ 0335849c */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        __this_01 = (__this->fields)._scrollContent;
        if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
           (UVar9 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar10 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._scroll;
          if (pUVar5 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)pUVar5,UVar10.fields.y < UVar9.fields.y,
                       (MethodInfo *)0x0);
            pUVar6 = (__this->fields)._slider;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pUVar6 = (__this->fields)._slider;
              if ((pUVar6 == (UnityEngine_UI_Slider_o *)0x0) ||
                 (__this_02 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
                 __this_02 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03358790;
              UnityEngine_GameObject__SetActive
                        (__this_02,UVar10.fields.y < UVar9.fields.y,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
LAB_03358790:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

