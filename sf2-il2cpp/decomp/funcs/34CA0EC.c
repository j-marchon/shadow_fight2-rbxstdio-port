// Nekki.SF2.GUI.Fight.StyleBar$$AddStrip @ RVA 0x34CA0EC

void Nekki_SF2_GUI_Fight_StyleBar__AddStrip
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,
               Nekki_SF2_GUI_Fight_StyleBarStrip_o *AGNGOOMCNMB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar4;
  System_Collections_Generic_List_StyleBarStrip__o *__this_01;
  Nekki_SF2_GUI_Fight_StyleBarStrip_array *pNVar5;
  
  if ((DAT_0456865c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456865c = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AGNGOOMCNMB,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (AGNGOOMCNMB != (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)AGNGOOMCNMB,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)AGNGOOMCNMB,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar4,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)AGNGOOMCNMB,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar4,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Fight_StyleBarStrip__Init(AGNGOOMCNMB,1.0,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<StyleBarStrip>_Add__;
          __this_01 = (__this->fields).CIKMDLPKCCF;
          if (__this_01 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
            pNVar5 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pNVar5 != (Nekki_SF2_GUI_Fight_StyleBarStrip_array *)0x0) {
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pNVar5->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                pNVar5->m_Items[(int)uVar1] = AGNGOOMCNMB;
                thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,AGNGOOMCNMB);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)AGNGOOMCNMB,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

