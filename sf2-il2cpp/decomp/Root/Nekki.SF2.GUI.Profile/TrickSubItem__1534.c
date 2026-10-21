// TypeDefIndex 1534
// Namespace: Nekki.SF2.GUI.Profile
// public class TrickSubItem : SubItem
// Fields:
//   private LabelAlias _KeysDescription; // 0x1E0
//   private GameObject _Keys; // 0x1E8
//   private GameObject _KeyIconPrefab; // 0x1F0
//   private KCLPNDAPADO MGHHBGMPDEI; // 0x1F8
//   private List<KeyIcon> CHKIKLICNBL; // 0x200
//   private bool KANKDJLJMMO; // 0x208

// ===== private void IEFEHKIGBFG()  [RVA 0x31A59C0]
// Nekki.SF2.GUI.Profile.TrickSubItem$$IEFEHKIGBFG @ RVA 0x31A59C0

void Nekki_SF2_GUI_Profile_TrickSubItem__IEFEHKIGBFG
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_KeyIcon__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566b0b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_GetEnumerator__);
    DAT_04566b0b = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).CHKIKLICNBL;
  if (pSVar2 != (System_Collections_Generic_List_KeyIcon__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<KeyIcon>_GetEnumerator__);
                    /* try { // try from 032a5a5c to 033a5a63 has its CatchHandler @ 032a5cf0 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<KeyIcon>_MoveNext__)
          , bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
                    /* try { // try from 032a5a78 to 033a5a7b has its CatchHandler @ 032a5cec */
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
                    /* try { // try from 032a5a8c to 033a5a97 has its CatchHandler @ 032a5c7c */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<KeyIcon>_Dispose__);
    pSVar2 = (__this->fields).CHKIKLICNBL;
    if (pSVar2 != (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* try { // try from 032a5a98 to 033a5b37 has its CatchHandler @ 032a4ea8 */
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


// ===== protected override void BNGDONJEHMH()  [RVA 0x31A5B50]
// Nekki.SF2.GUI.Profile.TrickSubItem$$BNGDONJEHMH @ RVA 0x31A5B50

void Nekki_SF2_GUI_Profile_TrickSubItem__BNGDONJEHMH
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
                    /* try { // try from 032a5b54 to 033a5b5f has its CatchHandler @ 032a4ea8 */
  Nekki_SF2_GUI_Profile_SubItem__BNGDONJEHMH
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 032a5b60 to 033a5b73 has its CatchHandler @ 032a5e44 */
  if ((__this->fields).KANKDJLJMMO != false) {
                    /* try { // try from 032a5b74 to 033a5b77 has its CatchHandler @ 032a5ce8 */
                    /* WARNING: Could not recover jumptable at 0x032a5b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._56_OEIIAJMHBFJ.methodPtr)
              (__this,(__this->klass->vtable)._56_OEIIAJMHBFJ.method);
    return;
  }
  return;
}


// ===== public KCLPNDAPADO GetTrick()  [RVA 0x31A5B88]
// Nekki.SF2.GUI.Profile.TrickSubItem$$GetTrick @ RVA 0x31A5B88

KCLPNDAPADO_o *
Nekki_SF2_GUI_Profile_TrickSubItem__GetTrick
          (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
                    /* try { // try from 032a5b88 to 033a5b9b has its CatchHandler @ 032a5e44 */
  return (__this->fields).MGHHBGMPDEI;
}


// ===== private void GDBCBFBCBLL()  [RVA 0x31A5B90]
// Nekki.SF2.GUI.Profile.TrickSubItem$$GDBCBFBCBLL @ RVA 0x31A5B90

void Nekki_SF2_GUI_Profile_TrickSubItem__GDBCBFBCBLL
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  bool bVar4;
  ECENNHNBAME_o *__this_00;
  GBKCLIFGIFN_o *pGVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Nekki_SF2_GUI_Profile_KeyIcon_o *pNVar9;
  System_Collections_Generic_List_KeyIcon__o *pSVar10;
  KCLPNDAPADO_o *pKVar11;
  Nekki_SF2_GUI_Profile_KeyIcon_array *pNVar12;
  UnityEngine_GameObject_o *pUVar13;
  NKOIBKNPICN_o *pNVar14;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  
                    /* try { // try from 032a5b9c to 033a5ba3 has its CatchHandler @ 032a5c80 */
                    /* try { // try from 032a5ba4 to 033a5ba7 has its CatchHandler @ 032a5c04 */
                    /* try { // try from 032a5ba8 to 033a5bab has its CatchHandler @ 032a5c00 */
                    /* try { // try from 032a5bac to 033a5baf has its CatchHandler @ 032a5bf4 */
                    /* try { // try from 032a5bb0 to 033a5bb7 has its CatchHandler @ 032a5bf0 */
                    /* try { // try from 032a5bb8 to 033a5bbb has its CatchHandler @ 032a5be8 */
  if ((DAT_04566b0c & 1) == 0) {
                    /* try { // try from 032a5bbc to 033a5bc3 has its CatchHandler @ 032a4ea8 */
                    /* try { // try from 032a5bc4 to 033a5bc7 has its CatchHandler @ 032a5be4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
                    /* catch() { ... } // from try @ 032a5924 with catch @ 032a5bc8
                       try { // try from 032a5bc8 to 033a5c27 has its CatchHandler @ 032a4ea8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
                    /* catch() { ... } // from try @ 032a5508 with catch @ 032a5bd4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
                    /* catch() { ... } // from try @ 032a5778 with catch @ 032a5be0 */
                    /* catch() { ... } // from try @ 032a5bc4 with catch @ 032a5be4 */
                    /* catch() { ... } // from try @ 032a5bb8 with catch @ 032a5be8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_Add__);
                    /* catch() { ... } // from try @ 032a58bc with catch @ 032a5bec */
                    /* catch() { ... } // from try @ 032a5bb0 with catch @ 032a5bf0 */
                    /* catch() { ... } // from try @ 032a5bac with catch @ 032a5bf4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
                    /* catch() { ... } // from try @ 032a57f0 with catch @ 032a5bf8 */
                    /* catch() { ... } // from try @ 032a57b8 with catch @ 032a5bfc */
                    /* catch() { ... } // from try @ 032a5ba8 with catch @ 032a5c00 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
                    /* catch() { ... } // from try @ 032a5ba4 with catch @ 032a5c04 */
                    /* catch() { ... } // from try @ 032a5798 with catch @ 032a5c08 */
                    /* catch() { ... } // from try @ 032a575c with catch @ 032a5c0c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4510/*"ComboButtons.icon_plus"*/);
    DAT_04566b0c = 1;
  }
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
                    /* try { // try from 032a5c28 to 033a5c2b has its CatchHandler @ 032a5c58 */
  local_70 = (Il2CppObject *)0x0;
                    /* try { // try from 032a5c2c to 033a5c67 has its CatchHandler @ 032a4ea8 */
  pKVar11 = (__this->fields).MGHHBGMPDEI;
  if ((((pKVar11 != (KCLPNDAPADO_o *)0x0) &&
       (__this_00 = (pKVar11->fields).FLIONKHMLLB, __this_00 != (ECENNHNBAME_o *)0x0)) &&
      (pGVar5 = ECENNHNBAME__OCLGKBPDEBI(__this_00,(MethodInfo *)0x0),
      pGVar5 != (GBKCLIFGIFN_o *)0x0)) &&
     ((pNVar14 = (pGVar5->fields).LCDJLCMFMEO, pNVar14 != (NKOIBKNPICN_o *)0x0 &&
      (pSVar6 = (pNVar14->fields).KJNPENJKBKD,
      pSVar6 != (System_Collections_Generic_List_int__o *)0x0)))) {
                    /* catch() { ... } // from try @ 032a5c28 with catch @ 032a5c58 */
                    /* try { // try from 032a5c68 to 033a5c7b has its CatchHandler @ 032a5e44 */
                    /* catch() { ... } // from try @ 032a5a8c with catch @ 032a5c7c
                       try { // try from 032a5c7c to 033a5ca7 has its CatchHandler @ 032a4ea8 */
                    /* catch() { ... } // from try @ 032a5b9c with catch @ 032a5c80 */
                    /* catch() { ... } // from try @ 032a5454 with catch @ 032a5c84 */
                    /* catch() { ... } // from try @ 032a54b0 with catch @ 032a5c88 */
                    /* catch() { ... } // from try @ 032a5440 with catch @ 032a5c8c */
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_98,pSVar6,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_80._8_4_ = local_98.fields._index;
    local_80._12_4_ = local_98.fields._version;
    local_80._0_8_ = local_98.fields._list;
    local_70 = local_98.fields._current;
                    /* try { // try from 032a5ca8 to 033a5cab has its CatchHandler @ 032a5ccc */
                    /* try { // try from 032a5cac to 033a5cd3 has its CatchHandler @ 032a4ea8 */
    while (bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                             ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                              Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
          bVar4) {
      pUVar7 = (__this->fields)._Keys;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (int32_t)local_70;
      pUVar13 = (__this->fields)._KeyIconPrefab;
      pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a5ca8 with catch @ 032a5ccc */
                    /* try { // try from 032a5cd4 to 033a5ce7 has its CatchHandler @ 032a5e44 */
      pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate(iVar3,pUVar13,pUVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a5b74 with catch @ 032a5ce8
                       try { // try from 032a5ce8 to 033a5d07 has its CatchHandler @ 032a4ea8 */
                    /* catch() { ... } // from try @ 032a5a78 with catch @ 032a5cec */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032a5a5c with catch @ 032a5cf0 */
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
      if (bVar4) {
                    /* try { // try from 032a5d08 to 033a5d0b has its CatchHandler @ 032a5d34 */
        pSVar10 = (__this->fields).CHKIKLICNBL;
                    /* try { // try from 032a5d0c to 033a5d43 has its CatchHandler @ 032a4ea8 */
        if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pNVar12 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar12 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar10->fields)._size;
                    /* catch() { ... } // from try @ 032a5d08 with catch @ 032a5d34 */
        if (uVar1 < (uint)pNVar12->max_length) {
          (pSVar10->fields)._size = uVar1 + 1;
                    /* try { // try from 032a5d44 to 033a5d57 has its CatchHandler @ 032a5e44 */
          pNVar12->m_Items[(int)uVar1] = pNVar9;
          thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar1,pNVar9);
        }
        else {
                    /* catch() { ... } // from try @ 032a52f4 with catch @ 032a5d58
                       catch() { ... } // from try @ 032a5328 with catch @ 032a5d58
                       try { // try from 032a5d58 to 033a5d97 has its CatchHandler @ 032a4ea8 */
                    /* catch() { ... } // from try @ 032a52ac with catch @ 032a5d5c
                       catch() { ... } // from try @ 032a530c with catch @ 032a5d5c */
                    /* catch() { ... } // from try @ 032a5b4c with catch @ 032a5d60 */
                    /* catch() { ... } // from try @ 032a5b40 with catch @ 032a5d64 */
                    /* catch() { ... } // from try @ 032a5258 with catch @ 032a5d68 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* catch() { ... } // from try @ 032a5b44 with catch @ 032a5d6c */
        }
      }
    }
                    /* catch() { ... } // from try @ 032a523c with catch @ 032a5d70 */
                    /* catch() { ... } // from try @ 032a5b38 with catch @ 032a5d74 */
                    /* catch() { ... } // from try @ 032a51d8 with catch @ 032a5d78 */
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
                    /* catch() { ... } // from try @ 032a517c with catch @ 032a5d7c */
    pSVar6 = (pNVar14->fields).KJNPENJKBKD;
    if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
      if (0 < (pSVar6->fields)._size) {
        pUVar7 = (__this->fields)._Keys;
        if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_032a5f54;
                    /* try { // try from 032a5d98 to 033a5d9b has its CatchHandler @ 032a5db0 */
        pUVar13 = (__this->fields)._KeyIconPrefab;
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a5d98 with catch @ 032a5db0 */
        pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                           (StringLiteral_4510/*"ComboButtons.icon_plus"*/,0.0,pUVar13,pUVar8,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
                    /* try { // try from 032a5dc0 to 033a5e2f has its CatchHandler @ 032a5e44 */
        pSVar10 = (__this->fields).CHKIKLICNBL;
        if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) goto LAB_032a5f54;
        pNVar12 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar12 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) goto LAB_032a5f54;
        uVar1 = (pSVar10->fields)._size;
        if (uVar1 < (uint)pNVar12->max_length) {
          (pSVar10->fields)._size = uVar1 + 1;
          pNVar12->m_Items[(int)uVar1] = pNVar9;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      pSVar6 = (pNVar14->fields).OOIGOEAHPMA;
      if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
                    /* try { // try from 032a5e30 to 033a5e3b has its CatchHandler @ 032a4ea8 */
        System_Collections_Generic_List<int>__GetEnumerator
                  (&local_98,pSVar6,Method_System_Collections_Generic_List<int>_GetEnumerator__);
        local_80._8_4_ = local_98.fields._index;
        local_80._12_4_ = local_98.fields._version;
                    /* try { // try from 032a5e3c to 033a5e43 has its CatchHandler @ 032a5e44 */
        local_80._0_8_ = local_98.fields._list;
        local_70 = local_98.fields._current;
        while( true ) {
          do {
                    /* catch() { ... } // from try @ 032a5b60 with catch @ 032a5e44
                       catch() { ... } // from try @ 032a5b88 with catch @ 032a5e44
                       catch() { ... } // from try @ 032a5c68 with catch @ 032a5e44
                       catch() { ... } // from try @ 032a5cd4 with catch @ 032a5e44
                       catch() { ... } // from try @ 032a5d44 with catch @ 032a5e44
                       catch() { ... } // from try @ 032a5dc0 with catch @ 032a5e44
                       catch() { ... } // from try @ 032a5e3c with catch @ 032a5e44 */
            bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                              ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                               Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<int>__Dispose
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                         Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
              return;
            }
            pUVar7 = (__this->fields)._Keys;
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar3 = (int32_t)local_70;
            pUVar13 = (__this->fields)._KeyIconPrefab;
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                               (iVar3,pUVar13,pUVar8,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
          } while (!bVar4);
          pSVar10 = (__this->fields).CHKIKLICNBL;
          if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pNVar12 = (pSVar10->fields)._items;
          (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
          if (pNVar12 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) break;
          uVar1 = (pSVar10->fields)._size;
          if (uVar1 < (uint)pNVar12->max_length) {
            (pSVar10->fields)._size = uVar1 + 1;
            pNVar12->m_Items[(int)uVar1] = pNVar9;
            thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar1,pNVar9);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
LAB_032a5f54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BDIDKFGDFIL()  [RVA 0x31A6040]
// Nekki.SF2.GUI.Profile.TrickSubItem$$BDIDKFGDFIL @ RVA 0x31A6040

void Nekki_SF2_GUI_Profile_TrickSubItem__BDIDKFGDFIL
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  ECENNHNBAME_o *__this_00;
  GBKCLIFGIFN_o *pGVar1;
  UnityEngine_GameObject_o *__this_01;
  bool value;
  MethodInfo *method_00;
  KCLPNDAPADO_o *pKVar2;
  
  Nekki_SF2_GUI_Profile_TrickSubItem__IEFEHKIGBFG(__this,method);
  pKVar2 = (__this->fields).MGHHBGMPDEI;
  if ((pKVar2 != (KCLPNDAPADO_o *)0x0) &&
     (__this_00 = (pKVar2->fields).FLIONKHMLLB, __this_00 != (ECENNHNBAME_o *)0x0)) {
    pGVar1 = ECENNHNBAME__OCLGKBPDEBI(__this_00,(MethodInfo *)0x0);
    if (pGVar1 == (GBKCLIFGIFN_o *)0x0) {
      __this_01 = (__this->fields)._Keys;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_032a6098;
      value = false;
    }
    else {
      Nekki_SF2_GUI_Profile_TrickSubItem__GDBCBFBCBLL(__this,method_00);
      __this_01 = (__this->fields)._Keys;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_032a6098;
      value = true;
    }
    UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
    return;
  }
LAB_032a6098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KCLPNDAPADO get_Trick()  [RVA 0x31A609C]
// Nekki.SF2.GUI.Profile.TrickSubItem$$get_Trick @ RVA 0x31A609C

KCLPNDAPADO_o *
Nekki_SF2_GUI_Profile_TrickSubItem__get_Trick
          (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  return (__this->fields).MGHHBGMPDEI;
}


// ===== public void .ctor()  [RVA 0x31A60A4]
// Nekki.SF2.GUI.Profile.TrickSubItem$$.ctor @ RVA 0x31A60A4

void Nekki_SF2_GUI_Profile_TrickSubItem___ctor
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyIcon__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyIcon>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04566b0d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KeyIcon__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyIcon>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KeyIcon>__ctor__);
  (__this->fields).CHKIKLICNBL = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).CHKIKLICNBL,__this_00);
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_Profile_SubItem___ctor((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void UpdateState()  [RVA 0x31A6150]
// Nekki.SF2.GUI.Profile.TrickSubItem$$UpdateState @ RVA 0x31A6150

void Nekki_SF2_GUI_Profile_TrickSubItem__UpdateState
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  KCLPNDAPADO_o *pKVar2;
  
  pKVar2 = (__this->fields).MGHHBGMPDEI;
  bVar1 = false;
  if (pKVar2 != (KCLPNDAPADO_o *)0x0) {
    bVar1 = (pKVar2->fields).HAEBIACJLHP != false;
  }
  (__this->fields).KANKDJLJMMO = bVar1;
  return;
}


// ===== private void BFPADNIMBFK()  [RVA 0x31A616C]
// Nekki.SF2.GUI.Profile.TrickSubItem$$BFPADNIMBFK @ RVA 0x31A616C

void Nekki_SF2_GUI_Profile_TrickSubItem__BFPADNIMBFK
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  KCLPNDAPADO_o *pKVar4;
  
  pKVar4 = (__this->fields).MGHHBGMPDEI;
  if ((pKVar4 == (KCLPNDAPADO_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty((pKVar4->fields).MEHILFLIMCN,(MethodInfo *)0x0), bVar1))
  {
    pNVar2 = (__this->fields)._KeysDescription;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pNVar2 = (__this->fields)._KeysDescription;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pKVar4 = (__this->fields).MGHHBGMPDEI;
      if ((pKVar4 != (KCLPNDAPADO_o *)0x0) &&
         (pNVar2 = (__this->fields)._KeysDescription, pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0))
      {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pKVar4->fields).MEHILFLIMCN,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(string DFMPBHNIPLA, KCLPNDAPADO EKBENIDNAEE)  [RVA 0x31A623C]
// Nekki.SF2.GUI.Profile.TrickSubItem$$Init @ RVA 0x31A623C

void Nekki_SF2_GUI_Profile_TrickSubItem__Init
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,System_String_o *DFMPBHNIPLA,
               KCLPNDAPADO_o *EKBENIDNAEE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GODDDLLLOLB_o *pGVar3;
  KCLPNDAPADO_o *pKVar4;
  Nekki_SF2_GUI_Profile_TrickSubItem_c *pNVar5;
  GODDDLLLOLB_Fields GVar6;
  undefined8 uVar7;
  
  if ((DAT_04566b0e & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    DAT_04566b0e = 1;
  }
  Nekki_SF2_GUI_Profile_SubItem__Init((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.COCAGDPOPLL = DFMPBHNIPLA;
  thunk_FUN_01c20e04(&(__this->fields).super.COCAGDPOPLL,DFMPBHNIPLA);
  (__this->fields).MGHHBGMPDEI = EKBENIDNAEE;
  thunk_FUN_01c20e04(&(__this->fields).MGHHBGMPDEI,EKBENIDNAEE);
  pUVar2 = (__this->fields)._Keys;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._KeysDescription;
    if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pGVar3 = FIPOABEGELK_TypeInfo->static_fields->FCHIMNCGKJF;
      if (pGVar3 != (GODDDLLLOLB_o *)0x0) {
        GVar6 = pGVar3->fields;
        pKVar4 = (__this->fields).MGHHBGMPDEI;
        uVar7 = NEON_rev64(CONCAT44(GVar6.HFBHMJBLLOI / 255.0,GVar6.AKPNOPAEKEF / 255.0),4);
                    /* try { // try from 032a6320 to 033a640b has its CatchHandler @ 032a6320
                       catch() { ... } // from try @ 032a6320 with catch @ 032a6320
                       catch() { ... } // from try @ 032a6530 with catch @ 032a6320
                       catch() { ... } // from try @ 032a65c8 with catch @ 032a6320
                       catch() { ... } // from try @ 032a65d0 with catch @ 032a6320
                       catch() { ... } // from try @ 032a6684 with catch @ 032a6320 */
        (__this->fields).super.GJFHNJFGBKE = (float)(int)uVar7;
        (__this->fields).super.NAPGLBIIEJP = (float)(int)((ulong)uVar7 >> 0x20);
        bVar1 = false;
        if (pKVar4 != (KCLPNDAPADO_o *)0x0) {
          bVar1 = (pKVar4->fields).HAEBIACJLHP != false;
        }
        pNVar5 = __this->klass;
        (__this->fields).KANKDJLJMMO = bVar1;
        (*(pNVar5->vtable)._57_UpdateIcon.methodPtr)(__this,(pNVar5->vtable)._57_UpdateIcon.method);
        (*(__this->klass->vtable)._51_SetActive.methodPtr)
                  (__this,1,(__this->klass->vtable)._51_SetActive.method);
        Nekki_SF2_GUI_Profile_TrickSubItem__BDIDKFGDFIL(__this,method_00);
        Nekki_SF2_GUI_Profile_TrickSubItem__BFPADNIMBFK(__this,method_01);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<float> GetBaseDMG()  [RVA 0x31A6384]
// Nekki.SF2.GUI.Profile.TrickSubItem$$GetBaseDMG @ RVA 0x31A6384

System_Collections_Generic_List_float__o *
Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG
          (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  System_Collections_Generic_List_float__o *__this_00;
  JADGCGOJLJB_o *__this_01;
  MDAPDLLMOMF_o *__this_02;
  MethodInfo *extraout_x1;
  KCLPNDAPADO_o *pKVar5;
  ECENNHNBAME_o *pEVar6;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar7;
  System_Single_array *pSVar8;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_03;
  int index;
  float item;
  
  if ((DAT_04566b0f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<float>_TypeInfo);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    DAT_04566b0f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<float>_TypeInfo,method);
                    /* try { // try from 032a640c to 033a6433 has its CatchHandler @ 032a65f0 */
  System_Collections_Generic_List<float>___ctor
            (__this_00,Method_System_Collections_Generic_List<float>__ctor__);
  pKVar5 = (__this->fields).MGHHBGMPDEI;
  if (pKVar5 != (KCLPNDAPADO_o *)0x0) {
    pEVar6 = (pKVar5->fields).FLIONKHMLLB;
    if (pEVar6 != (ECENNHNBAME_o *)0x0) {
      pEVar7 = (pEVar6->fields).DMGLMCBIAGL;
      if ((pEVar7 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) ||
         (__this_03 = (pEVar7->fields).GLFJDDHEMNO,
         __this_03 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) goto LAB_032a6548;
      if (0 < (__this_03->fields)._size) {
        index = 0;
        do {
                    /* try { // try from 032a6468 to 033a6493 has its CatchHandler @ 032a65ec */
          __this_01 = (JADGCGOJLJB_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_03,index,
                                 Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
          if (__this_01 == (JADGCGOJLJB_o *)0x0) goto LAB_032a6548;
          iVar4 = JADGCGOJLJB__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
          if (iVar4 == 4) {
            __this_02 = (MDAPDLLMOMF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_03,index,
                                   Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
            if (__this_02 == (MDAPDLLMOMF_o *)0x0) goto LAB_032a6548;
            bVar1 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
            if (((__this_02->klass->_2).naturalAligment < bVar1) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)MDAPDLLMOMF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
                    /* try { // try from 032a64c4 to 033a64cf has its CatchHandler @ 032a65e0 */
            item = MDAPDLLMOMF__OBAJCBOGFFM(__this_02,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<float>_Add__;
            if (__this_00 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032a6548;
            pSVar8 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar8 == (System_Single_array *)0x0) goto LAB_032a6548;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar8->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar8->m_Items[(int)uVar2] = item;
            }
            else {
                    /* try { // try from 032a6514 to 033a652f has its CatchHandler @ 032a65dc */
              System_Collections_Generic_List<float>__AddWithResize
                        (__this_00,item,
                         *(MethodInfo_2703A5C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
        } while (index < (__this_03->fields)._size);
      }
    }
                    /* try { // try from 032a6530 to 033a65bb has its CatchHandler @ 032a6320 */
    return __this_00;
  }
LAB_032a6548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

