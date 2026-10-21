// TypeDefIndex 1190
// Namespace: Nekki.SF2.GUI.Shop
// public class ItemsPanel : MonoBehaviour, CPFMNHBNOEN, MLIIECFHJAM
// Fields:
//   private Slider _slider; // 0x20
//   private TableView _TableView; // 0x28
//   private GameObject _CellPrefab; // 0x30
//   private float _InactiveCellOpacity; // 0x38
//   private float _ActiveCellOpacity; // 0x3C
//   private ItemsPanel.NCKBCCJJHGI _OnItemSelected; // 0x40
//   private ItemsPanel.BINPIFNIONG _OnItemDoubleClick; // 0x48
//   private UnityEvent _OnDragBegin; // 0x50
//   private UnityEvent _OnDragEnd; // 0x58
//   private static Dictionary<POIJDKLHHKO, HOOAAGABMBL> FNKAMGMEILJ; // 0x0
//   public bool DisableSorting; // 0x60
//   private bool PMDCABLGDGF; // 0x61
//   private Vector2 HGCMLPDPFIK; // 0x64
//   private float LKOBHGOBICA; // 0x6C
//   private List<HOOAAGABMBL> BAADKBDJJPJ; // 0x70
//   private ShopTableViewCell HCMDPJADLOL; // 0x78
//   private int AINAHFKFDKG; // 0x80
//   private int PEGHCDPFFHB; // 0x84

// ===== public HOOAAGABMBL get_SelectedItemInfo()  [RVA 0x310D320]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_SelectedItemInfo @ RVA 0x310D320

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar3;
  
                    /* catch() { ... } // from try @ 0320d2f8 with catch @ 0320d33c */
  if ((DAT_0456655a & 1) == 0) {
                    /* try { // try from 0320d344 to 0330d34b has its CatchHandler @ 0320d360 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0320d34c to 0330d357 has its CatchHandler @ 0320d1b4 */
    DAT_0456655a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0320d358 to 0330d35f has its CatchHandler @ 0320d360 */
  pNVar3 = (__this->fields).HCMDPJADLOL;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320d344 with catch @ 0320d360
                       catch(type#2 @ 00000000) { ... } // from try @ 0320d358 with catch @ 0320d360
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pHVar2 = (HOOAAGABMBL_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields).HCMDPJADLOL;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = (pNVar3->fields).IHKJJFAEEHM;
  }
  return pHVar2;
}


// ===== public UnityEvent get_OnDragEnd()  [RVA 0x310D3A0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_OnDragEnd @ RVA 0x310D3A0

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_OnDragEnd
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnDragEnd;
}


// ===== public float get_Spacing()  [RVA 0x310D3A8]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_Spacing @ RVA 0x310D3A8

float Nekki_SF2_GUI_Shop_ItemsPanel__get_Spacing
                (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    return (pNVar1->fields)._spacing;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float SizeForRowInTableView(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x310D3C4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$SizeForRowInTableView @ RVA 0x310D3C4

float Nekki_SF2_GUI_Shop_ItemsPanel__SizeForRowInTableView
                (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
                int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return (__this->fields).LKOBHGOBICA;
}


// ===== public void set_Spacing(float CJNHFNHJHPE)  [RVA 0x310D3CC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$set_Spacing @ RVA 0x310D3CC

void Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__set_Spacing(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RememberSelection(HOOAAGABMBL ENJAFEOHNIH)  [RVA 0x310D3E8]
// Nekki.SF2.GUI.Shop.ItemsPanel$$RememberSelection @ RVA 0x310D3E8

void Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,HOOAAGABMBL_o *ENJAFEOHNIH,
               MethodInfo *method)

{
  HOOAAGABMBL_o *extraout_x1;
  HOOAAGABMBL_o *method_00;
  long lVar1;
  System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *__this_00;
  
  method_00 = ENJAFEOHNIH;
  if ((DAT_0456655b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_set_Item__)
    ;
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_0456655b = 1;
    method_00 = extraout_x1;
  }
  if ((ENJAFEOHNIH == (HOOAAGABMBL_o *)0x0) &&
     (ENJAFEOHNIH = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo
                              (__this,(MethodInfo *)method_00), ENJAFEOHNIH == (HOOAAGABMBL_o *)0x0)
     ) {
    return;
  }
  if ((Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  __this_00 = Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((**(long **)(lVar1 + 0xb8) != 0) &&
     (__this_00 != (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)0x0)) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               *(int32_t *)(**(long **)(lVar1 + 0xb8) + 0x218),(Il2CppObject *)ENJAFEOHNIH,
               Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ItemSize(Vector2 CJNHFNHJHPE)  [RVA 0x310D4E4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$set_ItemSize @ RVA 0x310D4E4

void Nekki_SF2_GUI_Shop_ItemsPanel__set_ItemSize
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).HGCMLPDPFIK.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields).HGCMLPDPFIK.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== private void ELGDDCNOLJL(float CJNHFNHJHPE)  [RVA 0x310D4EC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ELGDDCNOLJL @ RVA 0x310D4EC

void Nekki_SF2_GUI_Shop_ItemsPanel__ELGDDCNOLJL
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *pUVar1;
  
  pUVar1 = (__this->fields)._slider;
  if (pUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0320d508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._48_SetValueWithoutNotify.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._48_SetValueWithoutNotify.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ShopTableViewCell get_SelectedCell()  [RVA 0x310D510]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_SelectedCell @ RVA 0x310D510

Nekki_SF2_GUI_Shop_ShopTableViewCell_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedCell
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).HCMDPJADLOL;
}


// ===== public bool ScrollToNextItem(float GGMALJLKHHB = 0, int JGEFFOIOPFI = 1)  [RVA 0x310D518]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToNextItem @ RVA 0x310D518

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToNextItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float GGMALJLKHHB,int32_t JGEFFOIOPFI,
               MethodInfo *method)

{
  int JDEFJPHCNMM;
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_TableView_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *x;
  
  if ((DAT_0456655c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456655c = 1;
  }
  x = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = (__this->fields).BAADKBDJJPJ;
    if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      __this_00 = (__this->fields)._TableView;
      JDEFJPHCNMM = (__this->fields).AINAHFKFDKG + JGEFFOIOPFI;
      iVar1 = (pSVar3->fields)._size + -1;
      if (iVar1 <= JDEFJPHCNMM) {
        JDEFJPHCNMM = iVar1;
      }
      (__this->fields).AINAHFKFDKG = JDEFJPHCNMM;
      if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
        goto LAB_0320d5cc;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0320d5cc:
  return (bool)(~bVar2 & 1);
}


// ===== public void Free()  [RVA 0x310D5EC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$Free @ RVA 0x310D5EC

void Nekki_SF2_GUI_Shop_ItemsPanel__Free(Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar4;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  
  if ((DAT_0456655d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_DBICODDPEAG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_EHPMHOHOPGA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_ELGDDCNOLJL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_PPJKNGDPLOM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
    DAT_0456655d = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._TableView;
  if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_00 = (pNVar3->fields).onSelectCell;
    pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo,method);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar1,
                 Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
      pNVar3 = (__this->fields)._TableView;
      if ((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (pNVar4 = (pNVar3->fields).IDIMFLMKDMD, pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0))
      {
        pUVar5 = (pNVar4->fields).onDragBegin;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._TableView;
          if ((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
             (pNVar4 = (pNVar3->fields).IDIMFLMKDMD,
             pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
            pUVar5 = (pNVar4->fields).onDragEnd;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
              pNVar3 = (__this->fields)._TableView;
              if ((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
                 (pNVar4 = (pNVar3->fields).IDIMFLMKDMD,
                 pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
                __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                            (pNVar4->fields).super.m_OnValueChanged;
                pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                UnityEngine_Events_UnityAction<Vector2>___ctor();
                if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                  UnityEngine_Events_UnityEvent<Vector2>__RemoveListener
                            (__this_01,pUVar1,
                             Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ReloadSelectedItem()  [RVA 0x310D7DC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ReloadSelectedItem @ RVA 0x310D7DC

void Nekki_SF2_GUI_Shop_ItemsPanel__ReloadSelectedItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_ItemsPanel__EHPMHOHOPGA(__this,(Nekki_SF2_GUI_TableViewCell_o *)0x0,in_x2);
  return;
}


// ===== private static void .cctor()  [RVA 0x310DB28]
// Nekki.SF2.GUI.Shop.ItemsPanel$$.cctor @ RVA 0x310DB28

void Nekki_SF2_GUI_Shop_ItemsPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *__this;
  
  if ((DAT_0456655e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo);
    DAT_0456655e = 1;
  }
  __this = (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>__ctor__);
  Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields,__this);
  return;
}


// ===== public void set_CurrentItems(List<HOOAAGABMBL> CJNHFNHJHPE)  [RVA 0x310DBC0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$set_CurrentItems @ RVA 0x310DBC0

void Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Collections_Generic_List_HOOAAGABMBL__o *CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar1;
  
  if (CJNHFNHJHPE == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return;
  }
  Nekki_SF2_GUI_Shop_ItemsPanel__NPILGOBEDEI(__this,CJNHFNHJHPE,method);
  ppSVar1 = &(__this->fields).BAADKBDJJPJ;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<HOOAAGABMBL> get_CurrentItems()  [RVA 0x310DD0C]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_CurrentItems @ RVA 0x310DD0C

System_Collections_Generic_List_HOOAAGABMBL__o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_CurrentItems
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).BAADKBDJJPJ;
}


// ===== public HOOAAGABMBL GetLastBoughtItem(bool MHKEJNCJFFM = False)  [RVA 0x310DD14]
// Nekki.SF2.GUI.Shop.ItemsPanel$$GetLastBoughtItem @ RVA 0x310DD14

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetLastBoughtItem
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,bool MHKEJNCJFFM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  HOOAAGABMBL_o *ANMFBABEMFD;
  int index;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_0456655f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_0456655f = 1;
  }
  pSVar3 = (__this->fields).BAADKBDJJPJ;
  if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 < 1) {
      return (HOOAAGABMBL_o *)0x0;
    }
    index = 0;
    pHVar4 = (HOOAAGABMBL_o *)0x0;
    do {
      ANMFBABEMFD = (HOOAAGABMBL_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      bVar2 = HCAICJLDDJO__MINAKLNNDBL(ANMFBABEMFD,MHKEJNCJFFM,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = (__this->fields).BAADKBDJJPJ;
        if (pSVar3 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) break;
        pHVar4 = (HOOAAGABMBL_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      }
      if (iVar1 + -1 == index) {
        return pHVar4;
      }
      pSVar3 = (__this->fields).BAADKBDJJPJ;
      index = index + 1;
    } while (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ShopTableViewCell GetCellByName(string AFKICLAFDKC)  [RVA 0x310DDE8]
// Nekki.SF2.GUI.Shop.ItemsPanel$$GetCellByName @ RVA 0x310DDE8

Nekki_SF2_GUI_Shop_ShopTableViewCell_o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetCellByName
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  KELJDKIIHMM_o *pKVar4;
  HOOAAGABMBL_o *pHVar5;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04566560 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
    DAT_04566560 = 1;
  }
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._currentValue = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields)._TableView;
  if ((((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
       (pKVar4 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField, pKVar4 == (KELJDKIIHMM_o *)0x0)) ||
      (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField,
      __this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
     (__this_01 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (__this_00,
                             Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
            (&local_68,__this_01,
             Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
            );
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._dictionary = local_68.fields._dictionary;
  local_50.fields._currentValue = local_68.fields._currentValue;
  do {
    bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                      );
    pNVar6 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)local_50.fields._currentValue;
    if (!bVar2) {
      pNVar6 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)local_50.fields._currentValue ==
        (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo->_2).naturalAligment;
    if (((((Nekki_SF2_GUI_Shop_ShopTableViewCell_c *)(local_50.fields._currentValue)->klass)->_2).
         naturalAligment < bVar1) ||
       ((((Nekki_SF2_GUI_Shop_ShopTableViewCell_c *)(local_50.fields._currentValue)->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(local_50.fields._currentValue);
    }
    pHVar5 = ((Nekki_SF2_GUI_Shop_ShopTableViewCell_Fields *)
             ((long)local_50.fields._currentValue + 0x10))->IHKJJFAEEHM;
    if (pHVar5 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((pHVar5->fields)._COIPKAKHDFP_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar2);
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
            );
  return pNVar6;
}


// ===== public HOOAAGABMBL GetDiscountItem()  [RVA 0x310DFE0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$GetDiscountItem @ RVA 0x310DFE0

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetDiscountItem
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  HOOAAGABMBL_o *pHVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  long lVar5;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar6;
  HOOAAGABMBL_o *pHVar7;
  HOOAAGABMBL_o *pHVar8;
  HOOAAGABMBL_o *pHVar9;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04566561 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_04566561 = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).BAADKBDJJPJ;
  if (__this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  pHVar6 = (HOOAAGABMBL_o *)0x0;
  pHVar8 = (HOOAAGABMBL_o *)0x0;
  pHVar9 = (HOOAAGABMBL_o *)0x0;
  do {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      __this_00 = local_58.fields._current;
      pHVar7 = pHVar6;
      if (!bVar3) goto LAB_0320e104;
      if ((HOOAAGABMBL_o *)local_58.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar5 = (*(((HOOAAGABMBL_c *)(local_58.fields._current)->klass)->vtable)._6_PDECHBMCBDB.
                methodPtr)(local_58.fields._current,0,
                           (((HOOAAGABMBL_c *)(local_58.fields._current)->klass)->vtable).
                           _6_PDECHBMCBDB.method);
      iVar4 = HOOAAGABMBL__DAFPKDKDOJF((HOOAAGABMBL_o *)__this_00,0,(MethodInfo *)0x0);
    } while (lVar5 == 0);
    pHVar1 = (HOOAAGABMBL_o *)__this_00;
    if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
      pHVar1 = pHVar8;
    }
    bVar3 = *(char *)(lVar5 + 0x79) == '\0';
    pHVar2 = (HOOAAGABMBL_o *)__this_00;
    if (pHVar9 != (HOOAAGABMBL_o *)0x0 || bVar3) {
      pHVar2 = pHVar9;
    }
    pHVar7 = (HOOAAGABMBL_o *)__this_00;
    if (pHVar8 != (HOOAAGABMBL_o *)0x0 && (pHVar9 != (HOOAAGABMBL_o *)0x0 || bVar3)) {
      pHVar7 = pHVar6;
    }
    pHVar6 = pHVar7;
    pHVar7 = (HOOAAGABMBL_o *)__this_00;
    pHVar8 = pHVar1;
    pHVar9 = pHVar2;
  } while (iVar4 != 1);
LAB_0320e104:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
  return pHVar7;
}


// ===== public void ScrollToItem(string JEPIGCLHAMI, float GGMALJLKHHB = 0)  [RVA 0x310E1A8]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToItem @ RVA 0x310E1A8

void Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,System_String_o *JEPIGCLHAMI,
               float GGMALJLKHHB,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t JDEFJPHCNMM;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Il2CppObject *pIVar7;
  Il2CppObject *item;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566562 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04566562 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(JEPIGCLHAMI,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pSVar5 = (__this->fields).BAADKBDJJPJ;
  if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    pIVar3 = (Il2CppObject *)0x0;
    while (pIVar7 = pIVar3,
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                            ), pIVar3 = local_60.fields._current, item = pIVar7, bVar4) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__op_Equality
                        (local_60.fields._current[1].monitor,JEPIGCLHAMI,(MethodInfo *)0x0);
      item = pIVar3;
      if (bVar4) break;
      if (pIVar3[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__StartsWith(pIVar3[1].monitor,JEPIGCLHAMI,(MethodInfo *)0x0);
      if (!bVar4) {
        pIVar3 = pIVar7;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    if (item == (Il2CppObject *)0x0) {
      return;
    }
    pSVar5 = (__this->fields).BAADKBDJJPJ;
    if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      JDEFJPHCNMM = System_Collections_Generic_List<object>__IndexOf
                              ((System_Collections_Generic_List_object__o *)pSVar5,item,
                               Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
      __this_00 = (__this->fields)._TableView;
      if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
        pSVar5 = (__this->fields).BAADKBDJJPJ;
        if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          iVar1 = (pSVar5->fields)._size;
          pUVar6 = (__this->fields)._slider;
          iVar2 = iVar1 + -1;
          if (iVar2 == 0 || iVar1 < 1) {
            if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
              (*(pUVar6->klass->vtable)._48_SetValueWithoutNotify.methodPtr)
                        (0,pUVar6,(pUVar6->klass->vtable)._48_SetValueWithoutNotify.method);
              return;
            }
          }
          else if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
            (*(pUVar6->klass->vtable)._48_SetValueWithoutNotify.methodPtr)
                      ((ulong)(uint)((float)JDEFJPHCNMM / (float)iVar2),pUVar6,
                       (pUVar6->klass->vtable)._48_SetValueWithoutNotify.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsTutorialBlockActive()  [RVA 0x310E414]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsTutorialBlockActive @ RVA 0x310E414

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsTutorialBlockActive
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NPILGOBEDEI(List<HOOAAGABMBL> BCECKFJCLKB)  [RVA 0x310DC10]
// Nekki.SF2.GUI.Shop.ItemsPanel$$NPILGOBEDEI @ RVA 0x310DC10

void Nekki_SF2_GUI_Shop_ItemsPanel__NPILGOBEDEI
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Collections_Generic_List_HOOAAGABMBL__o *BCECKFJCLKB,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *__this_00;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04566563 & 1) == 0) {
    FUN_01bab630(&System_Comparison<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Sort__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_PJLHIKOOGNO__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_TypeInfo);
    DAT_04566563 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_TypeInfo);
  Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *)0x0) {
    (__this_00->fields).p_items = BCECKFJCLKB;
    thunk_FUN_01c20e04(&__this_00->fields,BCECKFJCLKB);
    if ((__this->fields).DisableSorting != false) {
      return;
    }
    __this_01 = (__this_00->fields).p_items;
    comparison = (System_Comparison_T__o *)
                 thunk_FUN_01bda818(System_Comparison<HOOAAGABMBL>_TypeInfo);
    System_Comparison<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_01,comparison,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_Sort__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void TableViewDoubleClickCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x310E438]
// Nekki.SF2.GUI.Shop.ItemsPanel$$TableViewDoubleClickCellForRow @ RVA 0x310E438

void Nekki_SF2_GUI_Shop_ItemsPanel__TableViewDoubleClickCellForRow
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *__this_00;
  Nekki_SF2_GUI_TableView_o *extraout_x1;
  
  if ((DAT_04566564 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__,HDFMPLDOEJG,
                 JDEFJPHCNMM);
    DAT_04566564 = 1;
    HDFMPLDOEJG = extraout_x1;
  }
  __this_00 = (__this->fields)._OnItemDoubleClick;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
               (Il2CppObject *)(__this->fields).HCMDPJADLOL,
               Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,HDFMPLDOEJG);
}


// ===== public void TableViewDidHighlightCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x310E48C]
// Nekki.SF2.GUI.Shop.ItemsPanel$$TableViewDidHighlightCellForRow @ RVA 0x310E48C

void Nekki_SF2_GUI_Shop_ItemsPanel__TableViewDidHighlightCellForRow
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return;
}


// ===== private void ELGDDCNOLJL(Vector2 CJNHFNHJHPE)  [RVA 0x310E490]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ELGDDCNOLJL @ RVA 0x310E490

void Nekki_SF2_GUI_Shop_ItemsPanel__ELGDDCNOLJL
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_Slider_o *pUVar1;
  
  pUVar1 = (__this->fields)._slider;
  if (pUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0320e4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._48_SetValueWithoutNotify.methodPtr)
              (1.0 - CJNHFNHJHPE.fields.y,pUVar1,
               (pUVar1->klass->vtable)._48_SetValueWithoutNotify.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x);
}


// ===== public ItemsPanel.BINPIFNIONG get_OnItemDoubleClick()  [RVA 0x310E4BC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_OnItemDoubleClick @ RVA 0x310E4BC

Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_OnItemDoubleClick
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnItemDoubleClick;
}


// ===== public bool get_IsLastCellSelected()  [RVA 0x310E4C4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsLastCellSelected @ RVA 0x310E4C4

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsLastCellSelected
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar5;
  
  if ((DAT_04566565 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566565 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar5 = (__this->fields).HCMDPJADLOL;
    if ((pNVar5 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) ||
       (pNVar4 = (__this->fields)._TableView, pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0))
    goto LAB_0320e57c;
    iVar1 = (pNVar5->fields).super.FIMCNHGPCNA;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    if (iVar1 == iVar3 + -1) {
      return true;
    }
  }
  pNVar4 = (__this->fields)._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = (__this->fields).AINAHFKFDKG;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    return iVar1 == iVar3 + -1;
  }
LAB_0320e57c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsEmpty()  [RVA 0x310E580]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsEmpty @ RVA 0x310E580

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsEmpty
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566566 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
    DAT_04566566 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).BAADKBDJJPJ,
                     Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
  return bVar1;
}


// ===== public TableViewCell CellForRowInTableView(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x310E5C8]
// Nekki.SF2.GUI.Shop.ItemsPanel$$CellForRowInTableView @ RVA 0x310E5C8

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Shop_ItemsPanel__CellForRowInTableView
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
          int32_t JDEFJPHCNMM,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_Func_string__bool__o **ppSVar3;
  long lVar4;
  System_String_o *pSVar5;
  System_String_o *str3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar6;
  EOAOCPLIKOI_StaticFields *pEVar7;
  System_Func_string__bool__o *IMNBAFCEDMA;
  int32_t local_38;
  int32_t local_34;
  
  local_34 = JDEFJPHCNMM;
  if ((DAT_04566567 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<ShopTableViewCell>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_NEPCOPEIAKL__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_8119/*"ItemsPanel::CellForRowInTableView: Cant get Item for row: "*/);
    FUN_01bab630(&StringLiteral_338/*" _CurrentItems.Count: "*/);
    DAT_04566567 = 1;
  }
  local_38 = 0;
  if (-1 < JDEFJPHCNMM) {
    pSVar6 = (__this->fields).BAADKBDJJPJ;
    if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0320e950;
    if (JDEFJPHCNMM < (pSVar6->fields)._size) {
      if ((HDFMPLDOEJG != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (__this_00 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)
                      Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                                (HDFMPLDOEJG,JDEFJPHCNMM,
                                 Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<ShopTableViewCell>__
                                ), __this_00 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0)) {
        (*(__this_00->klass->vtable)._12_set_Opacity.methodPtr)
                  ((ulong)(uint)(__this->fields)._InactiveCellOpacity,__this_00,
                   (__this_00->klass->vtable)._12_set_Opacity.method);
        (__this_00->fields)._BFMLDOLAEKH_k__BackingField = (__this->fields)._InactiveCellOpacity;
        (__this_00->fields)._DJOIAMEIMOG_k__BackingField.fields =
             (__this->fields).HGCMLPDPFIK.fields;
        Nekki_SF2_GUI_Shop_ShopTableViewCell__set_IconPanelActive
                  (__this_00,(__this->fields).PMDCABLGDGF,(MethodInfo *)0x0);
        (__this_00->fields).MaxAllowedSize = (__this->fields).LKOBHGOBICA;
        pSVar6 = (__this->fields).BAADKBDJJPJ;
        if (pSVar6 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          IKKAMAMLIKA = (HOOAAGABMBL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,JDEFJPHCNMM,
                                   Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          Nekki_SF2_GUI_Shop_ShopTableViewCell__SetItemInfo(__this_00,IKKAMAMLIKA,(MethodInfo *)0x0)
          ;
          (__this->fields).PEGHCDPFFHB = (__this->fields).PEGHCDPFFHB + 1;
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar7 = EOAOCPLIKOI_TypeInfo->static_fields;
          if (pEVar7->ABJLMAOEEEE == false) {
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
          iVar1 = (__this->fields).PEGHCDPFFHB;
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pEVar7 = EOAOCPLIKOI_TypeInfo->static_fields;
          }
          if (iVar1 < pEVar7->LHKIPKIGEHA) {
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
          if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          IMNBAFCEDMA = Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__90_0;
          if (IMNBAFCEDMA == (System_Func_string__bool__o *)0x0) {
            if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            IMNBAFCEDMA = (System_Func_string__bool__o *)
                          thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            ppSVar3 = &Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__90_0;
            *ppSVar3 = IMNBAFCEDMA;
            thunk_FUN_01c20e04(ppSVar3,IMNBAFCEDMA);
          }
          if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = AMHFFFODDOC__GMAJCILJMAN(IMNBAFCEDMA,(MethodInfo *)0x0);
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
          }
          if (iVar2 < EOAOCPLIKOI_TypeInfo->static_fields->LHKIPKIGEHA) {
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
          lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8) !=
              (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
            Nekki_SF2_GUI_Shop_ShopScene__TryClearAtlasCacheItemImages
                      ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8),
                       (MethodInfo *)0x0);
            (__this->fields).PEGHCDPFFHB = 0;
            return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
          }
        }
      }
      goto LAB_0320e950;
    }
  }
  pSVar5 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).BAADKBDJJPJ;
  if (pSVar6 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    local_38 = (pSVar6->fields)._size;
    str3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat
                       (StringLiteral_8119/*"ItemsPanel::CellForRowInTableView: Cant get Item for row: "*/,pSVar5,StringLiteral_338/*" _CurrentItems.Count: "*/,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  }
LAB_0320e950:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<HOOAAGABMBL> GetBoughtItems(bool MHKEJNCJFFM = False)  [RVA 0x310E954]
// Nekki.SF2.GUI.Shop.ItemsPanel$$GetBoughtItems @ RVA 0x310E954

System_Collections_Generic_List_HOOAAGABMBL__o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetBoughtItems
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,bool MHKEJNCJFFM,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_o *pHVar6;
  HOOAAGABMBL_array *pHVar7;
  int index;
  
  if ((DAT_04566568 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    DAT_04566568 = 1;
  }
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  pSVar5 = (__this->fields).BAADKBDJJPJ;
  if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar5->fields)._size;
    if (iVar1 < 1) {
      return __this_00;
    }
    index = 0;
    do {
      pHVar6 = (HOOAAGABMBL_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      bVar4 = HCAICJLDDJO__MINAKLNNDBL(pHVar6,MHKEJNCJFFM,(MethodInfo *)0x0);
      if (bVar4) {
        pSVar5 = (__this->fields).BAADKBDJJPJ;
        if ((pSVar5 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) ||
           (pHVar6 = (HOOAAGABMBL_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
           lVar3 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__,
           __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) break;
        pHVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pHVar7 == (HOOAAGABMBL_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pHVar7->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pHVar7->m_Items[(int)uVar2] = pHVar6;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar6,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (iVar1 + -1 == index) {
        return __this_00;
      }
      pSVar5 = (__this->fields).BAADKBDJJPJ;
      index = index + 1;
    } while (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PPJKNGDPLOM()  [RVA 0x310EAC8]
// Nekki.SF2.GUI.Shop.ItemsPanel$$PPJKNGDPLOM @ RVA 0x310EAC8

void Nekki_SF2_GUI_Shop_ItemsPanel__PPJKNGDPLOM
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnDragBegin;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x310EAE4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$.ctor @ RVA 0x310EAE4

void Nekki_SF2_GUI_Shop_ItemsPanel___ctor
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *__this_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o **ppNVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *__this_01;
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o **ppNVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_02;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566569 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566569 = 1;
    method = extraout_x1;
  }
  (__this->fields)._InactiveCellOpacity = 0.5;
  (__this->fields)._ActiveCellOpacity = 1.0;
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields)._OnItemSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_TypeInfo);
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG___ctor(__this_01,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._OnItemDoubleClick;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragBegin;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragEnd;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  (__this->fields).PMDCABLGDGF = true;
  (__this->fields).HGCMLPDPFIK.fields.x = 0.0;
  (__this->fields).HGCMLPDPFIK.fields.y = 0.0;
  __this_02 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar5 = &(__this->fields).BAADKBDJJPJ;
  *ppSVar5 = __this_02;
  thunk_FUN_01c20e04(ppSVar5,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ScrollToLastItemWithoutEnchantments()  [RVA 0x310EC58]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToLastItemWithoutEnchantments @ RVA 0x310EC58

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastItemWithoutEnchantments
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Func_HOOAAGABMBL__bool__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG;
  
  if ((DAT_0456656a & 1) == 0) {
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_DKEAODMCHIG__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
    DAT_0456656a = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  DFHDGELMHHG = Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__73_0;
  if (DFHDGELMHHG == (System_Func_HOOAAGABMBL__bool__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo,method);
    }
    DFHDGELMHHG = (System_Func_HOOAAGABMBL__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    in_x2 = Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_DKEAODMCHIG__;
    System_Func<object,_bool>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__73_0;
    *ppSVar2 = DFHDGELMHHG;
    thunk_FUN_01c20e04(ppSVar2,DFHDGELMHHG);
  }
  if (__this != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__BDABFHFADAC(__this,DFHDGELMHHG,in_x2);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IconPanelActive()  [RVA 0x310EE14]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IconPanelActive @ RVA 0x310EE14

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IconPanelActive
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).PMDCABLGDGF;
}


// ===== public bool ScrollToPrevItem(float GGMALJLKHHB = 0, int JGEFFOIOPFI = 1)  [RVA 0x310EE1C]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToPrevItem @ RVA 0x310EE1C

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToPrevItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float GGMALJLKHHB,int32_t JGEFFOIOPFI,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *x;
  
  if ((DAT_0456656b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456656b = 1;
  }
  x = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_00 = (__this->fields)._TableView;
    uVar1 = (__this->fields).AINAHFKFDKG - JGEFFOIOPFI;
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    (__this->fields).AINAHFKFDKG = uVar1;
    if (__this_00 == (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,uVar1,GGMALJLKHHB,(MethodInfo *)0x0);
  }
  return (bool)(~bVar2 & 1);
}


// ===== public HOOAAGABMBL GetFirstBoughtItem(bool MHKEJNCJFFM = False)  [RVA 0x310EED0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$GetFirstBoughtItem @ RVA 0x310EED0

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetFirstBoughtItem
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,bool MHKEJNCJFFM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  HOOAAGABMBL_o *pHVar4;
  int index;
  
  if ((DAT_0456656c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_0456656c = 1;
  }
  pSVar3 = (__this->fields).BAADKBDJJPJ;
  if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 < 1) {
      return (HOOAAGABMBL_o *)0x0;
    }
    index = 0;
    do {
      pHVar4 = (HOOAAGABMBL_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      bVar2 = HCAICJLDDJO__MINAKLNNDBL(pHVar4,MHKEJNCJFFM,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = (__this->fields).BAADKBDJJPJ;
        if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          pHVar4 = (HOOAAGABMBL_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          return pHVar4;
        }
        break;
      }
      if (iVar1 + -1 == index) {
        return (HOOAAGABMBL_o *)0x0;
      }
      pSVar3 = (__this->fields).BAADKBDJJPJ;
      index = index + 1;
    } while (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x310EF9C]
// Nekki.SF2.GUI.Shop.ItemsPanel$$Init @ RVA 0x310EF9C

void Nekki_SF2_GUI_Shop_ItemsPanel__Init(Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar4;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  
  if ((DAT_0456656d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_DBICODDPEAG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_EHPMHOHOPGA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_ELGDDCNOLJL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_PPJKNGDPLOM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    DAT_0456656d = 1;
  }
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    (pNVar1->fields).KFCHMBGIPJK = (__this->fields)._CellPrefab;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._TableView;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__Init
                (pNVar1,(CPFMNHBNOEN_o *)__this,(MLIIECFHJAM_o *)__this,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._TableView;
      if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        __this_00 = (pNVar1->fields).onSelectCell;
        pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar2,
                     Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
          pNVar1 = (__this->fields)._TableView;
          if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            pNVar4 = (pNVar1->fields).IDIMFLMKDMD;
            (pNVar1->fields)._MinScrollVelocity = 100.0;
            if (pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
              pUVar5 = (pNVar4->fields).onDragBegin;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar3,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._TableView;
                if ((pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
                   (pNVar4 = (pNVar1->fields).IDIMFLMKDMD,
                   pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
                  pUVar5 = (pNVar4->fields).onDragEnd;
                  pUVar3 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar3,(MethodInfo *)0x0);
                    pNVar1 = (__this->fields)._TableView;
                    if ((pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
                       (pNVar4 = (pNVar1->fields).IDIMFLMKDMD,
                       pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
                      __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                  (pNVar4->fields).super.m_OnValueChanged;
                      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                      UnityEngine_Events_UnityAction<Vector2>___ctor();
                      if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                        UnityEngine_Events_UnityEvent<Vector2>__AddListener
                                  (__this_01,pUVar2,
                                   Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateScrollItems(List<HOOAAGABMBL> BCECKFJCLKB)  [RVA 0x310F1C0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$UpdateScrollItems @ RVA 0x310F1C0

void Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Collections_Generic_List_HOOAAGABMBL__o *BCECKFJCLKB,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).BAADKBDJJPJ = BCECKFJCLKB;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(__this,method_00);
  return;
}


// ===== public bool get_IsFirstCellSelected()  [RVA 0x310F2A0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsFirstCellSelected @ RVA 0x310F2A0

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsFirstCellSelected
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar2;
  
  if ((DAT_0456656e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456656e = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HCMDPJADLOL;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).super.FIMCNHGPCNA == 0) {
      return true;
    }
  }
  return (__this->fields).AINAHFKFDKG == 0;
}


// ===== public float get_RowSize()  [RVA 0x310F330]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_RowSize @ RVA 0x310F330

float Nekki_SF2_GUI_Shop_ItemsPanel__get_RowSize
                (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).LKOBHGOBICA;
}


// ===== private bool NIGJNNJIOGE(Func<HOOAAGABMBL, bool> DFHDGELMHHG)  [RVA 0x310F338]
// Nekki.SF2.GUI.Shop.ItemsPanel$$NIGJNNJIOGE @ RVA 0x310F338

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Shop_ItemsPanel__NIGJNNJIOGE
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  Il2CppObject *pIVar3;
  ulong uVar4;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_0456656f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_0456656f = 1;
  }
  pSVar2 = (__this->fields).BAADKBDJJPJ;
  if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    if (iVar1 < 1) {
      return false;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_26E4ADC *)
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      if (DFHDGELMHHG == (System_Func_HOOAAGABMBL__bool__o *)0x0) break;
      uVar4 = (*(code *)(DFHDGELMHHG->fields).super.super.invoke_impl)
                        ((DFHDGELMHHG->fields).super.super.method_code,pIVar3,
                         (DFHDGELMHHG->fields).super.super.method);
      if ((uVar4 & 1) != 0) {
        pSVar2 = (__this->fields).BAADKBDJJPJ;
        if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          if (pIVar3 != (Il2CppObject *)0x0) {
            Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar3[1].monitor,0.0,method_00);
            return true;
          }
          return false;
        }
        break;
      }
      if (iVar1 + -1 == index) {
        return false;
      }
      pSVar2 = (__this->fields).BAADKBDJJPJ;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DBICODDPEAG()  [RVA 0x310F430]
// Nekki.SF2.GUI.Shop.ItemsPanel$$DBICODDPEAG @ RVA 0x310F430

void Nekki_SF2_GUI_Shop_ItemsPanel__DBICODDPEAG
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnDragEnd;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool BDABFHFADAC(Func<HOOAAGABMBL, bool> DFHDGELMHHG)  [RVA 0x310ED40]
// Nekki.SF2.GUI.Shop.ItemsPanel$$BDABFHFADAC @ RVA 0x310ED40

bool Nekki_SF2_GUI_Shop_ItemsPanel__BDABFHFADAC
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  ulong uVar2;
  MethodInfo *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  int32_t index;
  
  if ((DAT_04566570 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_04566570 = 1;
  }
  pSVar3 = (__this->fields).BAADKBDJJPJ;
  if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    index = (pSVar3->fields)._size;
    do {
      index = index + -1;
      if (index < 0) {
        return false;
      }
      pSVar3 = (__this->fields).BAADKBDJJPJ;
      if ((pSVar3 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) ||
         (pIVar1 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
         DFHDGELMHHG == (System_Func_HOOAAGABMBL__bool__o *)0x0)) goto LAB_0320ee10;
      uVar2 = (*(code *)(DFHDGELMHHG->fields).super.super.invoke_impl)
                        ((DFHDGELMHHG->fields).super.super.method_code,pIVar1,
                         (DFHDGELMHHG->fields).super.super.method);
    } while ((uVar2 & 1) == 0);
    pSVar3 = (__this->fields).BAADKBDJJPJ;
    if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_26E4ADC *)
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar1[1].monitor,0.0,method_00);
      }
      return pIVar1 != (Il2CppObject *)0x0;
    }
  }
LAB_0320ee10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int NumberOfRowsInTableView(TableView HDFMPLDOEJG)  [RVA 0x310F44C]
// Nekki.SF2.GUI.Shop.ItemsPanel$$NumberOfRowsInTableView @ RVA 0x310F44C

int32_t Nekki_SF2_GUI_Shop_ItemsPanel__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
                  MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = HDFMPLDOEJG;
  auVar2._0_8_ = __this;
  if ((DAT_04566571 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04566571 = 1;
  }
  pSVar1 = (__this->fields).BAADKBDJJPJ;
  if (pSVar1 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void set_IconPanelActive(bool CJNHFNHJHPE)  [RVA 0x310F494]
// Nekki.SF2.GUI.Shop.ItemsPanel$$set_IconPanelActive @ RVA 0x310F494

void Nekki_SF2_GUI_Shop_ItemsPanel__set_IconPanelActive
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PMDCABLGDGF = CJNHFNHJHPE;
  return;
}


// ===== private void EHPMHOHOPGA(TableViewCell HBHBCBJANIC)  [RVA 0x310D7E4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$EHPMHOHOPGA @ RVA 0x310D7E4

void Nekki_SF2_GUI_Shop_ItemsPanel__EHPMHOHOPGA
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t IDPMJOKDHNP;
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *__this_00;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar4;
  PlayerData_o *__this_02;
  RaidConfig_o *__this_03;
  RaidConfig_EFAJBOEHPLJ_o *pJVar5;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar6;
  HOOAAGABMBL_o *pHVar7;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_04;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o **ppNVar8;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar9;
  
  if ((DAT_04566572 & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_Invoke__);
    DAT_04566572 = 1;
  }
  if (HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo->_2).naturalAligment;
    if ((HBHBCBJANIC->klass->_2).naturalAligment < bVar1) {
      HBHBCBJANIC = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
    }
    else if ((HBHBCBJANIC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Shop_ShopTableViewCell_TypeInfo) {
      HBHBCBJANIC = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
    }
  }
  ppNVar8 = &(__this->fields).HCMDPJADLOL;
  pNVar9 = *ppNVar8;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = *ppNVar8;
    if (pNVar9 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) goto LAB_0320db24;
    (*(pNVar9->klass->vtable)._12_set_Opacity.methodPtr)
              ((__this->fields)._InactiveCellOpacity,pNVar9,
               (pNVar9->klass->vtable)._12_set_Opacity.method);
  }
  *ppNVar8 = (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC;
  thunk_FUN_01c20e04(ppNVar8,HBHBCBJANIC);
  pNVar9 = *ppNVar8;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC !=
      (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
    pNVar9 = (__this->fields).HCMDPJADLOL;
    (__this->fields).AINAHFKFDKG =
         (((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC)->fields).super.FIMCNHGPCNA;
    if (pNVar9 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
      (*(pNVar9->klass->vtable)._12_set_Opacity.methodPtr)
                ((__this->fields)._ActiveCellOpacity,pNVar9,
                 (pNVar9->klass->vtable)._12_set_Opacity.method);
      pNVar9 = (__this->fields).HCMDPJADLOL;
      if ((pNVar9 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) &&
         (__this_00 = (__this->fields)._OnItemSelected,
         __this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *)0x0)) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                   (Il2CppObject *)(pNVar9->fields).IHKJJFAEEHM,
                   Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_Invoke__);
        lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if (**(long **)(lVar3 + 0xb8) != 0) {
          if ((*(int *)(**(long **)(lVar3 + 0xb8) + 0x218) == 6) &&
             (pHVar7 = (((Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)HBHBCBJANIC)->fields).IHKJJFAEEHM
             , pHVar7 != (HOOAAGABMBL_o *)0x0)) {
            bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
            if ((bVar1 <= (pHVar7->klass->_2).naturalAligment) &&
               ((pHVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) {
              if (DAT_04565b84 == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                DAT_04565b84 = '\x01';
              }
              pNVar6 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                       _JPDNDPEAJAL_k__BackingField;
              if (((pNVar6 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
                  (pHVar7[1].klass != (HOOAAGABMBL_c *)0x0)) &&
                 (__this_01 = (System_Collections_Generic_List_object__o *)
                              ((pHVar7[1].klass)->_1).implementedInterfaces,
                 __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
                __this_04 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar6->fields)._energy;
                if (((__this_01->fields)._size < 1) ||
                   (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                       (__this_01,0,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                                       ), pIVar4 == (Il2CppObject *)0x0)) {
                  if (__this_04 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__ForceUpdateCoins(__this_04,(MethodInfo *)0x0)
                    ;
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon(__this_04,(MethodInfo *)0x0);
                    return;
                  }
                }
                else {
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if ((__this_02 != (PlayerData_o *)0x0) &&
                     (IDPMJOKDHNP = PlayerData__APFFEAJBAEK
                                              (__this_02,(System_String_o *)pIVar4[1].klass,
                                               (MethodInfo *)0x0),
                     __this_04 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0)) {
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoins
                              (__this_04,IDPMJOKDHNP,(MethodInfo *)0x0);
                    __this_03 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    if ((__this_03 != (RaidConfig_o *)0x0) &&
                       (pJVar5 = RaidConfig__BHJOLIJDBLO
                                           (__this_03,(System_String_o *)pIVar4[1].klass,
                                            (MethodInfo *)0x0),
                       pJVar5 != (RaidConfig_EFAJBOEHPLJ_o *)0x0)) {
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoinsIcon
                                (__this_04,(pJVar5->fields).super.APBICPEOMOM,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto LAB_0320db24;
            }
          }
          return;
        }
      }
    }
  }
LAB_0320db24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void TableViewDidSelectCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x310F4A0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$TableViewDidSelectCellForRow @ RVA 0x310F4A0

void Nekki_SF2_GUI_Shop_ItemsPanel__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,0.5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ScrollToBestPaymentItem()  [RVA 0x310F4C4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToBestPaymentItem @ RVA 0x310F4C4

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToBestPaymentItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  long lVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566573 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_4204/*"Casket_Gems"*/);
    DAT_04566573 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar4._8_8_ = method;
  auVar4._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar4 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar4._8_8_);
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar3 + 0xb8) + 0x218) == 5) {
      __this_00 = (__this->fields).BAADKBDJJPJ;
      if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0320f640;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        pIVar1 = local_48.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          goto LAB_0320f620;
        }
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_48.fields._current[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (MethodInfo *)0x0;
        bVar2 = System_String__Contains
                          (local_48.fields._current[1].monitor,StringLiteral_4204/*"Casket_Gems"*/,(MethodInfo *)0x0)
        ;
      } while (!bVar2);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar1[1].monitor,0.0,method_00);
      bVar2 = true;
    }
    else {
LAB_0320f620:
      bVar2 = false;
    }
    return bVar2;
  }
LAB_0320f640:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ScrollToDiscountItem()  [RVA 0x310F6C4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToDiscountItem @ RVA 0x310F6C4

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToDiscountItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  HOOAAGABMBL_o *pHVar3;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((DAT_04566574 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04566574 = 1;
    method = extraout_x1;
  }
  auVar4._8_8_ = method;
  auVar4._0_8_ = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(*(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20) + 0x135) & 1)
      == 0) {
    auVar4 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620();
  }
  lVar2 = **(long **)(auVar5._0_8_ + 0xb8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x218) == 5) {
      pHVar3 = Nekki_SF2_GUI_Shop_ItemsPanel__GetDiscountItem(__this,auVar5._8_8_);
      bVar1 = false;
      if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this,(pHVar3->fields)._COIPKAKHDFP_k__BackingField,0.0,in_x2);
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ScrollToLastSelection()  [RVA 0x310F770]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToLastSelection @ RVA 0x310F770

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *__this_00;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  long lVar3;
  System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *pSVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04566575 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_get_Item__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_LPCLNILHHOF__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04566575 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG___ctor(__this_00,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  pSVar4 = Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if ((**(long **)(lVar3 + 0xb8) != 0) &&
     (pSVar4 != (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                       *(int32_t *)(**(long **)(lVar3 + 0xb8) + 0x218),
                       Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_ContainsKey__
                      );
    if (!bVar1) {
      return false;
    }
    if ((Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    pSVar4 = Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((((**(long **)(lVar3 + 0xb8) != 0) &&
         (pSVar4 != (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)0x0)) &&
        (pIVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                             *(int32_t *)(**(long **)(lVar3 + 0xb8) + 0x218),
                             Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_get_Item__
                            ), pIVar2 != (Il2CppObject *)0x0)) &&
       (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *)0x0)) {
      (__this_00->fields).lastSelectedItemName = pIVar2[1].monitor;
      thunk_FUN_01c20e04();
      __this_01 = (__this->fields).BAADKBDJJPJ;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__;
        pIVar2 = System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_01,match,
                            (MethodInfo_26E5414 *)
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
        if (pIVar2 == (Il2CppObject *)0x0) {
          return false;
        }
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar2[1].monitor,0.0,method_00);
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector2 get_ItemSize()  [RVA 0x310F9A4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_ItemSize @ RVA 0x310F9A4

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_ItemsPanel__get_ItemSize
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields).HGCMLPDPFIK.fields;
}


// ===== public UnityEvent get_OnDragBegin()  [RVA 0x310F9AC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_OnDragBegin @ RVA 0x310F9AC

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_OnDragBegin
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnDragBegin;
}


// ===== public void UpdateScrollItems()  [RVA 0x310F1DC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$UpdateScrollItems @ RVA 0x310F1DC

void Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  Nekki_SF2_GUI_TableView_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar3;
  
  if ((DAT_04566576 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566576 = 1;
    method = extraout_x1;
  }
  pHVar2 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this,method);
  Nekki_SF2_GUI_Shop_ItemsPanel__NPILGOBEDEI(__this,(__this->fields).BAADKBDJJPJ,in_x2);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).HCMDPJADLOL;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((pHVar2 != (HOOAAGABMBL_o *)0x0) && (bVar1)) {
      pNVar3 = (__this->fields).HCMDPJADLOL;
      if (pNVar3 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) goto LAB_0320f29c;
      if (pHVar2 != (pNVar3->fields).IHKJJFAEEHM) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,0.0,method_00);
        return;
      }
    }
    return;
  }
LAB_0320f29c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ScrollToNewItem()  [RVA 0x310F9B4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToNewItem @ RVA 0x310F9B4

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToNewItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_o *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_Fields *pNVar1;
  HOOAAGABMBL_o *pHVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04566577 & 1) == 0) {
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_DBIDGAECFFC__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_TypeInfo);
    DAT_04566577 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_o *)0x0) {
    pNVar1 = &__this_00->fields;
    pNVar1->itemToSelect = (HOOAAGABMBL_o *)0x0;
    thunk_FUN_01c20e04(pNVar1,0);
    __this_01 = (__this->fields).BAADKBDJJPJ;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__;
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 (MethodInfo_26E57EC *)Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__
                );
      pHVar2 = pNVar1->itemToSelect;
      if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,0.0,method_00);
      }
      return pHVar2 != (HOOAAGABMBL_o *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TableView get_TableView()  [RVA 0x310FAC4]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_TableView @ RVA 0x310FAC4

Nekki_SF2_GUI_TableView_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_TableView
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._TableView;
}


// ===== public bool ScrollToEquippedItem()  [RVA 0x310FACC]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToEquippedItem @ RVA 0x310FACC

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToEquippedItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *__this_00;
  System_Predicate_IGFGDDANEPE__o **ppSVar2;
  System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Roster_o *pAVar3;
  GGHCLMEFIGO_o *pGVar4;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar5;
  System_Predicate_IGFGDDANEPE__o *match;
  
  if ((DAT_04566578 & 1) == 0) {
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_HJHKHGCOMIB__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_FindAll__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_JGOBFMONINJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
    DAT_04566578 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI___ctor(__this_00,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (Roster_o *)0x0) &&
     (pGVar4 = (pAVar3->fields).OIDPLCLELEN, pGVar4 != (GGHCLMEFIGO_o *)0x0)) {
    pSVar5 = (pGVar4->fields).DPOPJKJLDEE;
    if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__72_0;
    if (match == (System_Predicate_IGFGDDANEPE__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = (System_Predicate_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Predicate<IGFGDDANEPE>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__72_0;
      *ppSVar2 = match;
      thunk_FUN_01c20e04(ppSVar2,match);
    }
    if ((pSVar5 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) &&
       (pSVar5 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
                 System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)pSVar5,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<IGFGDDANEPE>_FindAll__),
       __this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *)0x0)) {
      (__this_00->fields).equipedItems = pSVar5;
      thunk_FUN_01c20e04();
      DFHDGELMHHG = (System_Func_HOOAAGABMBL__bool__o *)
                    thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
      method_00 = Method_Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_HJHKHGCOMIB__;
      System_Func<object,_bool>___ctor();
      bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__NIGJNNJIOGE(__this,DFHDGELMHHG,method_00);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToItem(HOOAAGABMBL ANMFBABEMFD, float GGMALJLKHHB = 0)  [RVA 0x310F420]
// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToItem @ RVA 0x310F420

void Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,float GGMALJLKHHB
               ,MethodInfo *method)

{
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
              (__this,(ANMFBABEMFD->fields)._COIPKAKHDFP_k__BackingField,GGMALJLKHHB,method);
    return;
  }
  return;
}


// ===== public void SliderValueChanged(float CJNHFNHJHPE)  [RVA 0x310FCD0]
// Nekki.SF2.GUI.Shop.ItemsPanel$$SliderValueChanged @ RVA 0x310FCD0

void Nekki_SF2_GUI_Shop_ItemsPanel__SliderValueChanged
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int JDEFJPHCNMM;
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  double dVar3;
  double __x;
  float fVar4;
  double local_18;
  
  pNVar2 = (__this->fields)._TableView;
  if (pNVar2 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_0320fe08;
  iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar2,(MethodInfo *)0x0);
  if (DAT_04561501 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04561501 = '\x01';
  }
  fVar4 = (float)(iVar1 + -1) * CJNHFNHJHPE;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __x = (double)fVar4;
  dVar3 = modf(__x,&local_18);
  if (0.0 <= fVar4) {
    if (dVar3 == 0.5) {
      dVar3 = 1.0;
      goto LAB_0320fd7c;
    }
    local_18 = (double)(long)(__x + 0.5);
  }
  else if (dVar3 == -0.5) {
    dVar3 = -1.0;
LAB_0320fd7c:
    if (((long)local_18 & 1U) != 0) {
      local_18 = local_18 + dVar3;
    }
  }
  else {
    local_18 = (double)(long)(__x + -0.5);
  }
  pNVar2 = (__this->fields)._TableView;
  JDEFJPHCNMM = -0x80000000;
  if (local_18 != INFINITY) {
    JDEFJPHCNMM = (int)local_18;
  }
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__GetCurrentCellRow(pNVar2,(MethodInfo *)0x0);
    if (JDEFJPHCNMM == iVar1) {
      return;
    }
    pNVar2 = (__this->fields)._TableView;
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0320fe08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSelection()  [RVA 0x310FE0C]
// Nekki.SF2.GUI.Shop.ItemsPanel$$SetSelection @ RVA 0x310FE0C

void Nekki_SF2_GUI_Shop_ItemsPanel__SetSelection
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToDiscountItem(__this,method);
  if ((((!bVar1) &&
       (bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToNewItem(__this,method_00), !bVar1)) &&
      (bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection(__this,method_01), !bVar1)) &&
     ((bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToEquippedItem(__this,method_02), !bVar1 &&
      (bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToBestPaymentItem(__this,method_03), !bVar1))))
  {
    __this_00 = (__this->fields)._TableView;
    if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,0,0.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public ItemsPanel.NCKBCCJJHGI get_OnItemSelected()  [RVA 0x310FE74]
// Nekki.SF2.GUI.Shop.ItemsPanel$$get_OnItemSelected @ RVA 0x310FE74

Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *
Nekki_SF2_GUI_Shop_ItemsPanel__get_OnItemSelected
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnItemSelected;
}


// ===== public void set_RowSize(float CJNHFNHJHPE)  [RVA 0x310FE7C]
// Nekki.SF2.GUI.Shop.ItemsPanel$$set_RowSize @ RVA 0x310FE7C

void Nekki_SF2_GUI_Shop_ItemsPanel__set_RowSize
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LKOBHGOBICA = CJNHFNHJHPE;
  return;
}

