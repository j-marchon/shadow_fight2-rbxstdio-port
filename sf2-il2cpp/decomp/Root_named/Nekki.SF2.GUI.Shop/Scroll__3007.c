// TypeDefIndex 3007
// Namespace: Nekki.SF2.GUI.Shop
// public class Scroll : MonoBehaviour
// Fields:
//   private ItemsScroll _itemsScroll; // 0x20
//   private BaseScrollContent ECEJKFAFODM; // 0x28

// ===== public ItemsScroll get_ItemsScroll()  [RVA 0x34A9ECC]
// Nekki.SF2.GUI.Shop.Scroll$$get_ItemsScroll @ RVA 0x34A9ECC

Nekki_SF2_GUI_ItemsScroll_o *
Nekki_SF2_GUI_Shop_Scroll__get_ItemsScroll(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  return (__this->fields)._itemsScroll;
}


// ===== public BaseScrollContent get_BaseScrollContent()  [RVA 0x34A9ED4]
// Nekki.SF2.GUI.Shop.Scroll$$get_BaseScrollContent @ RVA 0x34A9ED4

Nekki_SF2_GUI_BaseScrollContent_o *
Nekki_SF2_GUI_Shop_Scroll__get_BaseScrollContent
          (Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  return (__this->fields).ECEJKFAFODM;
}


// ===== public void Init(BaseScrollContent BJOJABAECKO)  [RVA 0x34A9EDC]
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


// ===== public void AddItem(BaseScrollItem IKKAMAMLIKA)  [RVA 0x34AA044]
// Nekki.SF2.GUI.Shop.Scroll$$AddItem @ RVA 0x34AA044

void Nekki_SF2_GUI_Shop_Scroll__AddItem
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_04568519 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568519 = 1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      Nekki_SF2_GUI_BaseScrollContent__AddItem(pNVar2,IKKAMAMLIKA,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetItems(List<BaseScrollItem> GHAAKPDHIJJ)  [RVA 0x34AA0DC]
// Nekki.SF2.GUI.Shop.Scroll$$SetItems @ RVA 0x34AA0DC

void Nekki_SF2_GUI_Shop_Scroll__SetItems
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,
               System_Collections_Generic_List_BaseScrollItem__o *GHAAKPDHIJJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851a = 1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      Nekki_SF2_GUI_BaseScrollContent__SetItems(pNVar2,GHAAKPDHIJJ,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public virtual void DestroyItems()  [RVA 0x34AA174]
// Nekki.SF2.GUI.Shop.Scroll$$DestroyItems @ RVA 0x34AA174

void Nekki_SF2_GUI_Shop_Scroll__DestroyItems(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851b = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      Nekki_SF2_GUI_BaseScrollContent__DestroyItems(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public virtual void ClearItems()  [RVA 0x34AA1F8]
// Nekki.SF2.GUI.Shop.Scroll$$ClearItems @ RVA 0x34AA1F8

void Nekki_SF2_GUI_Shop_Scroll__ClearItems(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035aa228 to 036aa56f has its CatchHandler @ 035aa228
                       catch() { ... } // from try @ 035aa228 with catch @ 035aa228
                       catch() { ... } // from try @ 035aa594 with catch @ 035aa228
                       catch() { ... } // from try @ 035aa6e4 with catch @ 035aa228
                       catch() { ... } // from try @ 035aa70c with catch @ 035aa228
                       catch() { ... } // from try @ 035aa74c with catch @ 035aa228 */
    DAT_0456851c = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      Nekki_SF2_GUI_BaseScrollContent__ClearItems(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public List<BaseScrollItem> GetItems()  [RVA 0x34AA27C]
// Nekki.SF2.GUI.Shop.Scroll$$GetItems @ RVA 0x34AA27C

System_Collections_Generic_List_BaseScrollItem__o *
Nekki_SF2_GUI_Shop_Scroll__GetItems(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851d = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pNVar2->fields)._Items;
  }
  else {
    __this_00 = (System_Collections_Generic_List_BaseScrollItem__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
  }
  return __this_00;
}


// ===== public void UpdateLayout()  [RVA 0x34AA338]
// Nekki.SF2.GUI.Shop.Scroll$$UpdateLayout @ RVA 0x34AA338

void Nekki_SF2_GUI_Shop_Scroll__UpdateLayout(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  
  if ((DAT_0456851e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851e = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      Nekki_SF2_GUI_BaseScrollContent__UpdateLayout(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void ScrollToItem(BaseScrollItem IKKAMAMLIKA, float PNEIGGOFIOA = 0)  [RVA 0x34AA3BC]
// Nekki.SF2.GUI.Shop.Scroll$$ScrollToItem @ RVA 0x34AA3BC

void Nekki_SF2_GUI_Shop_Scroll__ScrollToItem
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               float PNEIGGOFIOA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  
  if ((DAT_0456851f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456851f = 1;
  }
  pNVar2 = (__this->fields)._itemsScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields)._itemsScroll;
      if (pNVar2 == (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_ItemsScroll__ScrollToItem(pNVar2,IKKAMAMLIKA,PNEIGGOFIOA,(MethodInfo *)0x0);
      if (PNEIGGOFIOA <= 0.001) {
        Nekki_SF2_GUI_Shop_Scroll__UpdateLayout(__this,method_00);
        return;
      }
    }
  }
  return;
}


// ===== public void ScrollToItem(int DPJIDNBJIBG, float PNEIGGOFIOA = 0)  [RVA 0x34AA4A4]
// Nekki.SF2.GUI.Shop.Scroll$$ScrollToItem @ RVA 0x34AA4A4

void Nekki_SF2_GUI_Shop_Scroll__ScrollToItem
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,int32_t DPJIDNBJIBG,float PNEIGGOFIOA,
               MethodInfo *method)

{
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *pMVar1;
  MethodInfo *extraout_x1;
  
  pMVar1 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  if ((DAT_04568520 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04568520 = 1;
    pMVar1 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,pMVar1);
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      pMVar1 = Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__;
      IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      Nekki_SF2_GUI_Shop_Scroll__ScrollToItem(__this,IKKAMAMLIKA,PNEIGGOFIOA,pMVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToBegin()  [RVA 0x34AA544]
// Nekki.SF2.GUI.Shop.Scroll$$ScrollToBegin @ RVA 0x34AA544

void Nekki_SF2_GUI_Shop_Scroll__ScrollToBegin
               (Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  
  if ((DAT_04568521 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035aa570 to 036aa577 has its CatchHandler @ 035aa6f0 */
    DAT_04568521 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._itemsScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 035aa58c to 036aa593 has its CatchHandler @ 035aa6ec */
                    /* try { // try from 035aa594 to 036aa6df has its CatchHandler @ 035aa228 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).ECEJKFAFODM;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).ECEJKFAFODM;
      if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
        IKKAMAMLIKA = Nekki_SF2_GUI_BaseScrollContent__get_FirstItem(pNVar3,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar2 = (__this->fields)._itemsScroll;
        if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
          Nekki_SF2_GUI_ItemsScroll__ScrollToItem(pNVar2,IKKAMAMLIKA,0.0,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void ScrollToEnd()  [RVA 0x34AA634]
// Nekki.SF2.GUI.Shop.Scroll$$ScrollToEnd @ RVA 0x34AA634

void Nekki_SF2_GUI_Shop_Scroll__ScrollToEnd(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  
  if ((DAT_04568522 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568522 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._itemsScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).ECEJKFAFODM;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).ECEJKFAFODM;
      if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
        IKKAMAMLIKA = Nekki_SF2_GUI_BaseScrollContent__get_LastItem(pNVar3,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 035aa6e0 to 036aa6e3 has its CatchHandler @ 035aa6e8 */
                    /* try { // try from 035aa6e4 to 036aa707 has its CatchHandler @ 035aa228 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035aa6e0 with catch @ 035aa6e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035aa58c with catch @ 035aa6ec
                        */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035aa570 with catch @ 035aa6f0
                        */
        if (!bVar1) {
          return;
        }
        pNVar2 = (__this->fields)._itemsScroll;
        if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* try { // try from 035aa708 to 036aa70b has its CatchHandler @ 035aa734 */
                    /* try { // try from 035aa70c to 036aa743 has its CatchHandler @ 035aa228 */
          Nekki_SF2_GUI_ItemsScroll__ScrollToItem(pNVar2,IKKAMAMLIKA,0.0,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void StopMovement()  [RVA 0x34AA724]
// Nekki.SF2.GUI.Shop.Scroll$$StopMovement @ RVA 0x34AA724

void Nekki_SF2_GUI_Shop_Scroll__StopMovement(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar2;
  
                    /* catch() { ... } // from try @ 035aa708 with catch @ 035aa734 */
  if ((DAT_04568523 & 1) == 0) {
                    /* try { // try from 035aa744 to 036aa74b has its CatchHandler @ 035aa760 */
                    /* try { // try from 035aa74c to 036aa757 has its CatchHandler @ 035aa228 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568523 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035aa758 to 036aa75f has its CatchHandler @ 035aa760 */
  pNVar2 = (__this->fields)._itemsScroll;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035aa744 with catch @ 035aa760
                       catch(type#2 @ 00000000) { ... } // from try @ 035aa758 with catch @ 035aa760
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._itemsScroll;
    if (pNVar2 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035aa79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._44_StopMovement.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._44_StopMovement.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int GetCurrentItemIndex()  [RVA 0x34AA7B0]
// Nekki.SF2.GUI.Shop.Scroll$$GetCurrentItemIndex @ RVA 0x34AA7B0

int32_t Nekki_SF2_GUI_Shop_Scroll__GetCurrentItemIndex
                  (Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  
  if ((DAT_04568524 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568524 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
  pNVar3 = (__this->fields).ECEJKFAFODM;
  if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
    x = (pNVar3->fields)._SelectedItem_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return 0;
    }
    __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,method_00);
    pNVar3 = (__this->fields).ECEJKFAFODM;
    if ((pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) &&
       (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
      iVar2 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)(pNVar3->fields)._SelectedItem_k__BackingField,
                         Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BaseScrollItem GetCurrentItem()  [RVA 0x34AA88C]
// Nekki.SF2.GUI.Shop.Scroll$$GetCurrentItem @ RVA 0x34AA88C

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  
  if ((DAT_04568525 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568525 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).ECEJKFAFODM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields).ECEJKFAFODM;
    if (pNVar3 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar2 = (pNVar3->fields)._SelectedItem_k__BackingField;
  }
  return pNVar2;
}


// ===== public int GetIndexOfItem(BaseScrollItem IKKAMAMLIKA)  [RVA 0x34AA90C]
// Nekki.SF2.GUI.Shop.Scroll$$GetIndexOfItem @ RVA 0x34AA90C

int32_t Nekki_SF2_GUI_Shop_Scroll__GetIndexOfItem
                  (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
                  MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *extraout_x1;
  Nekki_SF2_GUI_BaseScrollItem_o *method_00;
  
  method_00 = IKKAMAMLIKA;
  if ((DAT_04568526 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
    DAT_04568526 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,(MethodInfo *)method_00);
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_IndexOf__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BaseScrollItem GetItem(int DPJIDNBJIBG)  [RVA 0x34AA968]
// Nekki.SF2.GUI.Shop.Scroll$$GetItem @ RVA 0x34AA968

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_Shop_Scroll__GetItem
          (Nekki_SF2_GUI_Shop_Scroll_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  if ((DAT_04568527 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04568527 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_Scroll__GetItems(__this,method_00);
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      pNVar1 = (Nekki_SF2_GUI_BaseScrollItem_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BaseScrollItem GetNextItem(BaseScrollItem ANMFBABEMFD)  [RVA 0x34AA9EC]
// Nekki.SF2.GUI.Shop.Scroll$$GetNextItem @ RVA 0x34AA9EC

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_Shop_Scroll__GetNextItem
          (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *ANMFBABEMFD,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar4;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar5;
  
  if ((DAT_04568528 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568528 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)ANMFBABEMFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    iVar2 = Nekki_SF2_GUI_Shop_Scroll__GetIndexOfItem(__this,ANMFBABEMFD,method_00);
    pNVar4 = (__this->fields).ECEJKFAFODM;
    if ((pNVar4 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) ||
       (pSVar5 = (pNVar4->fields)._Items,
       pSVar5 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (iVar2 + 1 < (pSVar5->fields)._size) {
      pNVar3 = Nekki_SF2_GUI_Shop_Scroll__GetItem(__this,iVar2 + 1,method_00);
      return pNVar3;
    }
  }
  return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
}


// ===== public BaseScrollItem GetPrevItem(BaseScrollItem ANMFBABEMFD)  [RVA 0x34AAAB0]
// Nekki.SF2.GUI.Shop.Scroll$$GetPrevItem @ RVA 0x34AAAB0

Nekki_SF2_GUI_BaseScrollItem_o *
Nekki_SF2_GUI_Shop_Scroll__GetPrevItem
          (Nekki_SF2_GUI_Shop_Scroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *ANMFBABEMFD,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  MethodInfo *method_00;
  
  if ((DAT_04568529 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568529 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)ANMFBABEMFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    iVar2 = Nekki_SF2_GUI_Shop_Scroll__GetIndexOfItem(__this,ANMFBABEMFD,method_00);
    if (-1 < iVar2 + -1) {
      pNVar3 = Nekki_SF2_GUI_Shop_Scroll__GetItem(__this,iVar2 + -1,method_00);
      return pNVar3;
    }
  }
  return (Nekki_SF2_GUI_BaseScrollItem_o *)0x0;
}


// ===== public void .ctor()  [RVA 0x34AAB4C]
// Nekki.SF2.GUI.Shop.Scroll$$.ctor @ RVA 0x34AAB4C

void Nekki_SF2_GUI_Shop_Scroll___ctor(Nekki_SF2_GUI_Shop_Scroll_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

