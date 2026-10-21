// Nekki.SF2.GUI.Shop.Scroll$$Init @ RVA 0x34A9EDC

void Nekki_SF2_GUI_Shop_Scroll__Init
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollContent_o *BJOJABAECKO,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_BaseScrollContent_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_BaseScrollContent_o **ppNVar3;
  UnityEngine_RectTransform_o **ppUVar4;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar5;
  
  if ((DAT_04568518 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568518 = 1;
  }
  ppNVar3 = &(__this->fields).ECEJKFAFODM;
  *ppNVar3 = BJOJABAECKO;
  thunk_FUN_01c20e04(ppNVar3,BJOJABAECKO);
  pNVar5 = (__this->fields)._itemsScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._itemsScroll;
      if ((pNVar5 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
        pNVar5 = (__this->fields)._itemsScroll;
        if (pNVar5 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
          (pNVar5->fields).scrollContent = (__this->fields).ECEJKFAFODM;
          thunk_FUN_01c20e04(&(pNVar5->fields).scrollContent);
          __this_01 = (__this->fields).ECEJKFAFODM;
          if (__this_01 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
            pNVar5 = (__this->fields)._itemsScroll;
            __this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar2 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0),
               pNVar5 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0)) {
              if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
                 (pUVar2->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pUVar2);
              }
              ppUVar4 = &(pNVar5->fields).super.m_Content;
              *ppUVar4 = pUVar2;
              thunk_FUN_01c20e04(ppUVar4,pUVar2);
              pNVar5 = (__this->fields)._itemsScroll;
              if (pNVar5 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                Nekki_SF2_GUI_ItemsScroll__Init(pNVar5,(MethodInfo *)0x0);
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
  return;
}

