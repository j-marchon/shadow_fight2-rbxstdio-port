// TypeDefIndex 2219
// Namespace: Nekki.SF2.GUI.Menu
// public class MenuMaterialsPanel : UIInitializable
// Fields:
//   private GameObject _MaterialUIPrefab; // 0x28
//   private List<MenuMaterialUI> MIOLFPIJMDH; // 0x30
//   private Roster OKNKKHGBECG; // 0x38

// ===== public void .ctor()  [RVA 0x32ECF44]
// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$.ctor @ RVA 0x32ECF44

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel___ctor
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MenuMaterialUI__o *__this_00;
  System_Collections_Generic_List_MenuMaterialUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033ecf4c to 034ecfeb has its CatchHandler @ 033ecd40 */
  if ((DAT_04567649 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuMaterialUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MenuMaterialUI>_TypeInfo);
    DAT_04567649 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MenuMaterialUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MenuMaterialUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MenuMaterialUI>__ctor__);
  ppSVar1 = &(__this->fields).MIOLFPIJMDH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_UIInitializable___ctor((Nekki_SF2_GUI_UIInitializable_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void HMOFDGEDBCL()  [RVA 0x32ECFCC]
// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$HMOFDGEDBCL @ RVA 0x32ECFCC

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__HMOFDGEDBCL
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  System_Action_BNKBGIIJNLF__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Roster_o **ppAVar1;
  Roster_o *__this_00;
  
                    /* try { // try from 033ecfec to 034ecff3 has its CatchHandler @ 033ed010 */
                    /* try { // try from 033ecff4 to 034ecff7 has its CatchHandler @ 033ecd40 */
  if ((DAT_0456764a & 1) == 0) {
                    /* try { // try from 033ecff8 to 034ecffb has its CatchHandler @ 033ed004 */
                    /* try { // try from 033ecffc to 034ed02f has its CatchHandler @ 033ecd40 */
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ecff8 with catch @ 033ed004
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ecf34 with catch @ 033ed008
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ecf40 with catch @ 033ed00c
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMaterialsPanel_LFHIAJBBKGC__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ecfec with catch @ 033ed010
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eced0 with catch @ 033ed014
                        */
    DAT_0456764a = 1;
    method = extraout_x1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ece74 with catch @ 033ed018
                        */
  ppAVar1 = &(__this->fields).OKNKKHGBECG;
  __this_00 = *ppAVar1;
  CJNHFNHJHPE = (System_Action_BNKBGIIJNLF__o *)
                thunk_FUN_01bda818(System_Action<BNKBGIIJNLF>_TypeInfo,method);
                    /* try { // try from 033ed030 to 034ed033 has its CatchHandler @ 033ed040 */
  System_Action<object>___ctor();
  if (__this_00 != (Roster_o *)0x0) {
                    /* catch() { ... } // from try @ 033ed030 with catch @ 033ed040 */
                    /* try { // try from 033ed048 to 034ed0af has its CatchHandler @ 033ed0c4 */
    Roster__LJDDDMFPMDF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    *ppAVar1 = (Roster_o *)0x0;
    thunk_FUN_01c20e04(ppAVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh()  [RVA 0x32ED070]
// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$Refresh @ RVA 0x32ED070

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__Refresh
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MenuMaterialUI__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456764b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_get_Current__);
                    /* try { // try from 033ed0b0 to 034ed0bb has its CatchHandler @ 033ecd40 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuMaterialUI>_GetEnumerator__);
                    /* try { // try from 033ed0bc to 034ed0c3 has its CatchHandler @ 033ed0c4 */
    DAT_0456764b = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ed048 with catch @ 033ed0c4
                       catch(type#2 @ 00000000) { ... } // from try @ 033ed0bc with catch @ 033ed0c4
                        */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* try { // try from 033ed0c8 to 034ed1c7 has its CatchHandler @ 033ed0c8
                       catch() { ... } // from try @ 033ed0c8 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed2e0 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed388 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed390 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed464 with catch @ 033ed0c8 */
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_MenuMaterialUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MenuMaterialUI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)0x0) break;
      Nekki_SF2_GUI_Menu_MenuMaterialUI__Refresh
                ((Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void LFHIAJBBKGC(BNKBGIIJNLF FNLDECDGPBF)  [RVA 0x32ED1BC]
// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$LFHIAJBBKGC @ RVA 0x32ED1BC

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__LFHIAJBBKGC
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,BNKBGIIJNLF_o *FNLDECDGPBF,
               MethodInfo *method)

{
  MethodInfo *method_00;
  HBNENINHPGF_o *pHVar1;
  ulong local_28;
  
                    /* try { // try from 033ed1c8 to 034ed1ef has its CatchHandler @ 033ed3b0 */
  if ((DAT_0456764c & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>__ctor__);
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>_get_HasValue__);
    DAT_0456764c = 1;
  }
  if ((FNLDECDGPBF != (BNKBGIIJNLF_o *)0x0) &&
     (pHVar1 = (FNLDECDGPBF->fields)._GDNLFJIBAAI_k__BackingField, pHVar1 != (HBNENINHPGF_o *)0x0))
  {
                    /* try { // try from 033ed224 to 034ed24f has its CatchHandler @ 033ed3ac */
    local_28 = 0;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_28,(pHVar1->fields).EAJKEHPLGMP,
               Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>__ctor__);
    if ((local_28 >> 0x20 == 1) && ((local_28 & 0xff) != 0)) {
      Nekki_SF2_GUI_Menu_MenuMaterialsPanel__Refresh(__this,method_00);
    }
  }
  return;
}


// ===== private void IEMBODIJFHH(HBNENINHPGF MDGCHBMIJJJ)  [RVA 0x32ED260]
// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$IEMBODIJFHH @ RVA 0x32ED260

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__IEMBODIJFHH
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,HBNENINHPGF_o *MDGCHBMIJJJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this_01;
  System_Collections_Generic_List_MenuMaterialUI__o *__this_02;
  Nekki_SF2_GUI_Menu_MenuMaterialUI_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_0456764d & 1) == 0) {
                    /* try { // try from 033ed288 to 034ed297 has its CatchHandler @ 033ed3b4 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MenuMaterialUI>__);
                    /* try { // try from 033ed298 to 034ed2a3 has its CatchHandler @ 033ed3a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuMaterialUI>_Add__);
                    /* try { // try from 033ed2a8 to 034ed2c3 has its CatchHandler @ 033ed3a0 */
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456764d = 1;
  }
  pUVar4 = (__this->fields)._MaterialUIPrefab;
                    /* try { // try from 033ed2d0 to 034ed2df has its CatchHandler @ 033ed39c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033ed2e0 to 034ed37f has its CatchHandler @ 033ed0c8 */
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<MenuMaterialUI>__);
      if (__this_01 != (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)0x0) {
        Nekki_SF2_GUI_Menu_MenuMaterialUI__set_Material(__this_01,MDGCHBMIJJJ,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<MenuMaterialUI>_Add__;
        __this_02 = (__this->fields).MIOLFPIJMDH;
        if (__this_02 != (System_Collections_Generic_List_MenuMaterialUI__o *)0x0) {
          pNVar3 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pNVar3 != (Nekki_SF2_GUI_Menu_MenuMaterialUI_array *)0x0) {
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pNVar3->max_length) {
                    /* try { // try from 033ed380 to 034ed387 has its CatchHandler @ 033ed3a8 */
                    /* try { // try from 033ed388 to 034ed38b has its CatchHandler @ 033ed0c8 */
              (__this_02->fields)._size = uVar1 + 1;
                    /* try { // try from 033ed38c to 034ed38f has its CatchHandler @ 033ed398 */
              pNVar3->m_Items[(int)uVar1] = __this_01;
                    /* try { // try from 033ed390 to 034ed3d3 has its CatchHandler @ 033ed0c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed38c with catch @ 033ed398
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed2d0 with catch @ 033ed39c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed2a8 with catch @ 033ed3a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed298 with catch @ 033ed3a4
                        */
              thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_01);
              return;
            }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed380 with catch @ 033ed3a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed224 with catch @ 033ed3ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed1c8 with catch @ 033ed3b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed288 with catch @ 033ed3b4
                        */
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


// ===== private void CMHFHILJHOL()  [RVA 0x32ED3CC]
// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$CMHFHILJHOL @ RVA 0x32ED3CC

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__CMHFHILJHOL
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  GameUtils_HLAKGGFFNAO_o *pMVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033ed3d4 to 034ed3d7 has its CatchHandler @ 033ed3e4 */
                    /* catch() { ... } // from try @ 033ed3d4 with catch @ 033ed3e4 */
  if ((DAT_0456764e & 1) == 0) {
                    /* try { // try from 033ed3f4 to 034ed463 has its CatchHandler @ 033ed478 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456764e = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  pMVar2 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
  if ((pMVar2 != (GameUtils_HLAKGGFFNAO_o *)0x0) &&
     (__this_00 = (pMVar2->fields).DIELINNGEBJ,
     __this_00 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0)) {
                    /* try { // try from 033ed464 to 034ed46f has its CatchHandler @ 033ed0c8 */
                    /* try { // try from 033ed470 to 034ed477 has its CatchHandler @ 033ed478 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ed3f4 with catch @ 033ed478
                       catch(type#2 @ 00000000) { ... } // from try @ 033ed470 with catch @ 033ed478
                        */
                    /* try { // try from 033ed47c to 034edc17 has its CatchHandler @ 033ed47c
                       catch() { ... } // from try @ 033ed47c with catch @ 033ed47c
                       catch() { ... } // from try @ 033ede28 with catch @ 033ed47c
                       catch() { ... } // from try @ 033edf80 with catch @ 033ed47c
                       catch() { ... } // from try @ 033edf9c with catch @ 033ed47c
                       catch() { ... } // from try @ 033edfa8 with catch @ 033ed47c
                       catch() { ... } // from try @ 033ee0d0 with catch @ 033ed47c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
        return;
      }
      if ((HBNENINHPGF_o *)local_38.fields._current == (HBNENINHPGF_o *)0x0) break;
      if (((HBNENINHPGF_Fields *)((long)local_38.fields._current + 0x10))->EAJKEHPLGMP == 1) {
        Nekki_SF2_GUI_Menu_MenuMaterialsPanel__IEMBODIJFHH
                  (__this,(HBNENINHPGF_o *)local_38.fields._current,in_x2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DKLDHKNAEBO()  [RVA 0x32ED55C]
// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$DKLDHKNAEBO @ RVA 0x32ED55C

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  System_Action_BNKBGIIJNLF__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Roster_o **ppAVar1;
  Roster_o *__this_00;
  
  if ((DAT_0456764f & 1) == 0) {
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMaterialsPanel_LFHIAJBBKGC__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456764f = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  ppAVar1 = &(__this->fields).OKNKKHGBECG;
  *ppAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  thunk_FUN_01c20e04(ppAVar1);
  __this_00 = *ppAVar1;
  CJNHFNHJHPE = (System_Action_BNKBGIIJNLF__o *)
                thunk_FUN_01bda818(System_Action<BNKBGIIJNLF>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (Roster_o *)0x0) {
    Roster__GILENGKAJNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MenuMaterialsPanel__CMHFHILJHOL(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

