// TypeDefIndex 1287
// Namespace: Nekki.SF2.GUI.Shop.Forge
// public class RecipePriceUI : MonoBehaviour
// Fields:
//   private GameObject _MaterialPriceUIPrefab; // 0x20
//   private GameObject _MaterialsParent; // 0x28
//   private List<MaterialPriceUI> MIOLFPIJMDH; // 0x30
//   private BFBONKPKBNL MHJAFBPAKEG; // 0x38

// ===== public MaterialPriceUI get_LastMaterial()  [RVA 0x31511C4]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$get_LastMaterial @ RVA 0x31511C4

Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *
Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_LastMaterial
          (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *pNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456680b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_get_Item__);
    DAT_0456680b = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pNVar2 = (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          Method_System_Collections_Generic_List<MaterialPriceUI>_get_Item__);
      return pNVar2;
    }
    return (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void LPNCEHPFOAF()  [RVA 0x315123C]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$LPNCEHPFOAF @ RVA 0x315123C

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__LPNCEHPFOAF
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool value;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__HGAOLJDNEPM(__this,method);
  if ((__this->fields).MHJAFBPAKEG == (BFBONKPKBNL_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03251290;
    value = false;
  }
  else {
    Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__CMHFHILJHOL(__this,method_00);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
LAB_03251290:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value = true;
  }
  UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
  return;
}


// ===== public void set_IsPriceVisible(bool CJNHFNHJHPE)  [RVA 0x31515B0]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$set_IsPriceVisible @ RVA 0x31515B0

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_IsPriceVisible
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,bool CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456680c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    DAT_0456680c = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)0x0) break;
      Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_IsPriceVisible
                ((Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)local_38.fields._current,CJNHFNHJHPE,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BFBONKPKBNL get_RecipePrice()  [RVA 0x3151708]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$get_RecipePrice @ RVA 0x3151708

BFBONKPKBNL_o *
Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_RecipePrice
          (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  return (__this->fields).MHJAFBPAKEG;
}


// ===== public List<int> get_Prices()  [RVA 0x3151710]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$get_Prices @ RVA 0x3151710

System_Collections_Generic_List_int__o *
Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_Prices
          (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t item;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_01;
  MethodInfo *extraout_x1;
  System_Int32_array *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456680d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_0456680d = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  __this_01 = (__this->fields).MIOLFPIJMDH;
  if (__this_01 == (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__
                      );
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
      return __this_00;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_50.fields._current[3].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                       ((long)local_50.fields._current[3].monitor + 0x18),(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<int>_Add__;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) break;
    pSVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar4 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar4->m_Items[(int)uVar1] = item;
    }
    else {
      System_Collections_Generic_List<int>__AddWithResize
                (__this_00,item,
                 *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CMHFHILJHOL()  [RVA 0x3151478]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$CMHFHILJHOL @ RVA 0x3151478

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__CMHFHILJHOL
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  undefined8 uVar2;
  MethodInfo *in_x2;
  BFBONKPKBNL_o *pBVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456680e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    DAT_0456680e = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pBVar3 = (__this->fields).MHJAFBPAKEG;
  if ((pBVar3 != (BFBONKPKBNL_o *)0x0) &&
     (__this_00 = (pBVar3->fields).MIOLFPIJMDH, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__IEMBODIJFHH
                (__this,(BNKBGIIJNLF_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public bool get_IsFreePrice()  [RVA 0x3151AA0]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$get_IsFreePrice @ RVA 0x3151AA0

bool Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_IsFreePrice
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined1 local_40 [16];
  undefined8 local_30;
  
                    /* try { // try from 03251aa4 to 03351af7 has its CatchHandler @ 03251990 */
  if ((DAT_0456680f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    DAT_0456680f = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03251af8 to 03351b07 has its CatchHandler @ 03251b08 */
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_4_ = 0;
  local_40._12_4_ = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  __this_00 = Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__get_Prices(__this,method);
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03251a8c with catch @ 03251b08
                       catch() { ... } // from try @ 03251af8 with catch @ 03251b08 */
                    /* try { // try from 03251b0c to 03351b0f has its CatchHandler @ 03251b18 */
                    /* try { // try from 03251b10 to 03351b1b has its CatchHandler @ 03251990 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03251b0c with catch @ 03251b18
                        */
  System_Collections_Generic_List<int>__GetEnumerator
            (&local_58,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
  local_40._8_4_ = local_58.fields._index;
  local_40._12_4_ = local_58.fields._version;
  local_40._0_8_ = local_58.fields._list;
  local_30 = local_58.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                      ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
                       Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03251b60;
    }
  } while ((int32_t)local_30 == 0);
  iVar2 = 4;
LAB_03251b60:
  System_Collections_Generic_List_Enumerator<int>__Dispose
            ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
             Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
  return iVar2 != 4;
}


// ===== public void .ctor()  [RVA 0x3151C04]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$.ctor @ RVA 0x3151C04

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI___ctor
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MaterialPriceUI__o *__this_00;
  System_Collections_Generic_List_MaterialPriceUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566810 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MaterialPriceUI>_TypeInfo);
    DAT_04566810 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MaterialPriceUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MaterialPriceUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MaterialPriceUI>__ctor__);
  ppSVar1 = &(__this->fields).MIOLFPIJMDH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HGAOLJDNEPM()  [RVA 0x3151294]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$HGAOLJDNEPM @ RVA 0x3151294

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__HGAOLJDNEPM
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_MaterialPriceUI__o *pSVar2;
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566811 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MaterialPriceUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566811 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).MIOLFPIJMDH,
                     Method_DJNBJHPDKDP_OBECCOPBADO<MaterialPriceUI>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).MIOLFPIJMDH;
  if (pSVar2 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_48.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)local_48.fields._current,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    pSVar2 = (__this->fields).MIOLFPIJMDH;
    if (pSVar2 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (length < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IEMBODIJFHH(BNKBGIIJNLF MDGCHBMIJJJ)  [RVA 0x315192C]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$IEMBODIJFHH @ RVA 0x315192C

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__IEMBODIJFHH
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,BNKBGIIJNLF_o *MDGCHBMIJJJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *__this_01;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_04566812 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MaterialPriceUI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566812 = 1;
  }
                    /* try { // try from 03251990 to 033519bb has its CatchHandler @ 03251990
                       catch() { ... } // from try @ 03251990 with catch @ 03251990
                       catch() { ... } // from try @ 03251a5c with catch @ 03251990
                       catch() { ... } // from try @ 03251aa4 with catch @ 03251990
                       catch() { ... } // from try @ 03251b10 with catch @ 03251990 */
  pUVar4 = (__this->fields)._MaterialPriceUIPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 032519bc to 033519c7 has its CatchHandler @ 03251a70 */
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._MaterialsParent;
    if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 032519e0 to 033519e3 has its CatchHandler @ 03251a64 */
                    /* try { // try from 032519e4 to 033519eb has its CatchHandler @ 03251a74 */
                    /* try { // try from 032519f0 to 033519fb has its CatchHandler @ 03251a6c */
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<MaterialPriceUI>__);
      if (__this_01 != (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)0x0) {
                    /* try { // try from 03251a0c to 03351a13 has its CatchHandler @ 03251a68 */
        Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__set_Material
                  (__this_01,MDGCHBMIJJJ,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<MaterialPriceUI>_Add__;
        __this_02 = (__this->fields).MIOLFPIJMDH;
        if (__this_02 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
                    /* try { // try from 03251a2c to 03351a2f has its CatchHandler @ 03251a5c */
          pNVar3 = (__this_02->fields)._items;
                    /* try { // try from 03251a3c to 03351a47 has its CatchHandler @ 03251a60 */
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pNVar3 != (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_array *)0x0) {
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pNVar3->max_length) {
                    /* try { // try from 03251a58 to 03351a5b has its CatchHandler @ 03251a74 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03251a2c with catch @ 03251a5c
                       try { // try from 03251a5c to 03351a8b has its CatchHandler @ 03251990 */
              (__this_02->fields)._size = uVar1 + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03251a3c with catch @ 03251a60
                        */
              pNVar3->m_Items[(int)uVar1] = __this_01;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519e0 with catch @ 03251a64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03251a0c with catch @ 03251a68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519f0 with catch @ 03251a6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519bc with catch @ 03251a70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032519e4 with catch @ 03251a74
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03251a58 with catch @ 03251a74
                        */
              thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_01);
              return;
            }
                    /* try { // try from 03251a8c to 03351aa3 has its CatchHandler @ 03251b08 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RefreshMaterials()  [RVA 0x3151C8C]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$RefreshMaterials @ RVA 0x3151C8C

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__RefreshMaterials
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MaterialPriceUI__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566813 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    DAT_04566813 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_MaterialPriceUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MaterialPriceUI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<MaterialPriceUI>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)0x0) break;
      Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI__Refresh
                ((Nekki_SF2_GUI_Shop_Forge_MaterialPriceUI_o *)local_38.fields._current,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void set_RecipePrice(BFBONKPKBNL CJNHFNHJHPE)  [RVA 0x3151DD8]
// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$set_RecipePrice @ RVA 0x3151DD8

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__set_RecipePrice
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,BFBONKPKBNL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  (__this->fields).MHJAFBPAKEG = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive
              (__this_00,(__this->fields).MHJAFBPAKEG != (BFBONKPKBNL_o *)0x0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__LPNCEHPFOAF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

