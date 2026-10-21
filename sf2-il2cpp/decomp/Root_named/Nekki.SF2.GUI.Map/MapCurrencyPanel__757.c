// TypeDefIndex 757
// Namespace: Nekki.SF2.GUI.Map
// public class MapCurrencyPanel : MonoBehaviour
// Fields:
//   public const int MAX_KEYS_IN_ROW = 5;
//   private MapCurrencyPanel.IJIJBLPLJJO _currencyType; // 0x20
//   private MapButtonViewBase _buttonView; // 0x28

// ===== private void OnDestroy()  [RVA 0x304EDB4]
// Nekki.SF2.GUI.Map.MapCurrencyPanel$$OnDestroy @ RVA 0x304EDB4

void Nekki_SF2_GUI_Map_MapCurrencyPanel__OnDestroy
               (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *__this,MethodInfo *method)

{
  PlayerData_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e35 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapCurrencyPanel_MMCHECDCGKF__);
    FUN_01bab630(&Util_TypeInfo);
    DAT_04565e35 = 1;
    method = extraout_x1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (PlayerData_o *)0x0) {
    PlayerData__LJDDDMFPMDF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._buttonView;
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0314eea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._6_OnDestroyByPanel.methodPtr)
                (pNVar1,(pNVar1->klass->vtable)._6_OnDestroyByPanel.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x304EEB0]
// Nekki.SF2.GUI.Map.MapCurrencyPanel$$Awake @ RVA 0x304EEB0

void Nekki_SF2_GUI_Map_MapCurrencyPanel__Awake
               (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *pNVar1;
  PlayerData_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  System_Collections_Generic_IList_PIADCKMDDAK__o *IMMNELPBGIF;
  MethodInfo *in_x2;
  
  if ((DAT_04565e36 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapCurrencyPanel_MMCHECDCGKF__);
    DAT_04565e36 = 1;
  }
  pNVar1 = (__this->fields)._buttonView;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) {
    (*(pNVar1->klass->vtable)._7_Init.methodPtr)(pNVar1,(pNVar1->klass->vtable)._7_Init.method);
    Nekki_SF2_GUI_Map_MapCurrencyPanel__MMCHECDCGKF(__this,IMMNELPBGIF,in_x2);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                  thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
                    /* try { // try from 0314ef5c to 0324ef87 has its CatchHandler @ 0314ef5c
                       catch() { ... } // from try @ 0314ef5c with catch @ 0314ef5c
                       catch() { ... } // from try @ 0314ef94 with catch @ 0314ef5c
                       catch() { ... } // from try @ 0314efd8 with catch @ 0314ef5c
                       catch() { ... } // from try @ 0314f024 with catch @ 0314ef5c */
    System_Action<object>___ctor();
    if (__this_00 != (PlayerData_o *)0x0) {
      PlayerData__GILENGKAJNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0314ef88 to 0324ef93 has its CatchHandler @ 0314efd8 */
  FUN_01bab8c8();
}


// ===== private void MMCHECDCGKF(IList<PIADCKMDDAK> IMMNELPBGIF)  [RVA 0x304EF8C]
// Nekki.SF2.GUI.Map.MapCurrencyPanel$$MMCHECDCGKF @ RVA 0x304EF8C

void Nekki_SF2_GUI_Map_MapCurrencyPanel__MMCHECDCGKF
               (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *__this,
               System_Collections_Generic_IList_PIADCKMDDAK__o *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *KGLJICLJHEL;
  bool bVar4;
  int32_t iVar5;
  PlayerData_o *__this_00;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_List_NPKKNCCEIND__o *IFFLAAMFALK;
  GameUtils_HLAKGGFFNAO_o *__this_03;
  HBNENINHPGF_o *OAOLCGAIILM;
  NPKKNCCEIND_o *__this_04;
  System_Comparison_NPKKNCCEIND__o **ppSVar6;
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this_05;
  System_Collections_Generic_IList_PIADCKMDDAK__o *extraout_x1;
  NPKKNCCEIND_array *pNVar7;
  System_Comparison_NPKKNCCEIND__o *comparison;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_80;
  
                    /* try { // try from 0314ef94 to 0324efd3 has its CatchHandler @ 0314ef5c */
  if ((DAT_04565e37 & 1) == 0) {
    FUN_01bab630(&System_Comparison<NPKKNCCEIND>_TypeInfo);
                    /* try { // try from 0314efd4 to 0324efd7 has its CatchHandler @ 0314efdc */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314ef88 with catch @ 0314efd8
                       try { // try from 0314efd8 to 0324eff3 has its CatchHandler @ 0314ef5c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314efd4 with catch @ 0314efdc
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Keys__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_int>_Dispose__
                );
                    /* try { // try from 0314eff4 to 0324eff7 has its CatchHandler @ 0314f00c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_int>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_int>_get_Current__
                );
                    /* catch() { ... } // from try @ 0314eff4 with catch @ 0314f00c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0314f01c to 0324f023 has its CatchHandler @ 0314f038 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection<string,_int>_GetEnumerator__
                );
                    /* try { // try from 0314f024 to 0324f02f has its CatchHandler @ 0314ef5c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection<string,_int>_get_Count__
                );
                    /* try { // try from 0314f030 to 0324f037 has its CatchHandler @ 0314f038 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_Add__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314f01c with catch @ 0314f038
                       catch(type#2 @ 00000000) { ... } // from try @ 0314f030 with catch @ 0314f038
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NPKKNCCEIND>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NPKKNCCEIND_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapCurrencyPanel_<>c_CMEFJDIBFBK__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapCurrencyPanel_<>c_TypeInfo);
    DAT_04565e37 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentKey = (Il2CppObject *)0x0;
  iVar1 = (__this->fields)._currencyType;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (PlayerData_o *)0x0) {
    if (iVar1 == 1) {
      __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)
                  PlayerData__NDKMLPFGFAI(__this_00,(MethodInfo *)0x0);
    }
    else {
      __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)
                  PlayerData__BJJOPEEAGGD(__this_00,(MethodInfo *)0x0);
    }
    if ((__this_01 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) &&
       (__this_02 = System_Collections_Generic_Dictionary<object,_int>__get_Keys
                              (__this_01,
                               Method_System_Collections_Generic_Dictionary<string,_int>_get_Keys__)
       , __this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      iVar5 = System_Collections_Generic_Dictionary_KeyCollection<object,_int>__get_Count
                        (__this_02,
                         Method_System_Collections_Generic_Dictionary_KeyCollection<string,_int>_get_Count__
                        );
      IFFLAAMFALK = (System_Collections_Generic_List_NPKKNCCEIND__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NPKKNCCEIND>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IFFLAAMFALK,iVar5,
                 Method_System_Collections_Generic_List<NPKKNCCEIND>__ctor__);
      System_Collections_Generic_Dictionary_KeyCollection<object,_int>__GetEnumerator
                (&local_98,__this_02,
                 Method_System_Collections_Generic_Dictionary_KeyCollection<string,_int>_GetEnumerator__
                );
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._dictionary = local_98.fields._dictionary;
      local_80.fields._currentKey = local_98.fields._currentKey;
      while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_int>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_int>_MoveNext__
                               ), KGLJICLJHEL = local_80.fields._currentKey, bVar4) {
        iVar5 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                          (__this_01,local_80.fields._currentKey,
                           Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_03 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
        if (__this_03 == (GameUtils_HLAKGGFFNAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OAOLCGAIILM = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO
                                (__this_03,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
        if ((System_String_o *)KGLJICLJHEL == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((0 < iVar5) && (OAOLCGAIILM != (HBNENINHPGF_o *)0x0)) &&
           (0 < ((System_String_Fields *)((long)KGLJICLJHEL + 0x10))->_stringLength)) {
          __this_04 = (NPKKNCCEIND_o *)thunk_FUN_01bda818(NPKKNCCEIND_TypeInfo);
          NPKKNCCEIND___ctor(__this_04,(System_String_o *)KGLJICLJHEL,iVar5,OAOLCGAIILM,
                             (MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<NPKKNCCEIND>_Add__;
          if (IFFLAAMFALK == (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pNVar7 = (IFFLAAMFALK->fields)._items;
          (IFFLAAMFALK->fields)._version = (IFFLAAMFALK->fields)._version + 1;
          if (pNVar7 == (NPKKNCCEIND_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (IFFLAAMFALK->fields)._size;
          if (uVar2 < (uint)pNVar7->max_length) {
            (IFFLAAMFALK->fields)._size = uVar2 + 1;
            pNVar7->m_Items[(int)uVar2] = __this_04;
            thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar2,__this_04);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)IFFLAAMFALK,
                       (Il2CppObject *)__this_04,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_int>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_int>_Dispose__
                );
      if ((Nekki_SF2_GUI_Map_MapCurrencyPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = Nekki_SF2_GUI_Map_MapCurrencyPanel_<>c_TypeInfo->static_fields->__9__6_0;
      if (comparison == (System_Comparison_NPKKNCCEIND__o *)0x0) {
        if ((Nekki_SF2_GUI_Map_MapCurrencyPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        comparison = (System_Comparison_NPKKNCCEIND__o *)
                     thunk_FUN_01bda818(System_Comparison<NPKKNCCEIND>_TypeInfo);
        System_Comparison<object>___ctor();
        ppSVar6 = &Nekki_SF2_GUI_Map_MapCurrencyPanel_<>c_TypeInfo->static_fields->__9__6_0;
        *ppSVar6 = comparison;
        thunk_FUN_01c20e04(ppSVar6,comparison);
      }
      if (IFFLAAMFALK != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
        System_Collections_Generic_List<object>__Sort
                  ((System_Collections_Generic_List_object__o *)IFFLAAMFALK,
                   (System_Comparison_T__o *)comparison,
                   Method_System_Collections_Generic_List<NPKKNCCEIND>_Sort__);
        __this_05 = (__this->fields)._buttonView;
        if (__this_05 != (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) {
          Nekki_SF2_GUI_Map_IRaidKeysView__UpdateKeys
                    ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this_05,IFFLAAMFALK,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x304F418]
// Nekki.SF2.GUI.Map.MapCurrencyPanel$$.ctor @ RVA 0x304F418

void Nekki_SF2_GUI_Map_MapCurrencyPanel___ctor
               (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

