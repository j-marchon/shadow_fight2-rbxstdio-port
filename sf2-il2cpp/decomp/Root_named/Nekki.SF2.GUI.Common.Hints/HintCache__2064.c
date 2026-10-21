// TypeDefIndex 2064
// Namespace: Nekki.SF2.GUI.Common.Hints
// public class HintCache : MonoBehaviour
// Fields:
//   private Transform _HintsLightParent; // 0x20
//   private Transform _HintsDarkParent; // 0x28
//   private static HintCache CNMHHKAMGPI; // 0x0
//   private List<HintUI> AINKHCILFAC; // 0x30
//   private List<HintUI> HJBLBMEDIMJ; // 0x38

// ===== private void GLLDGFLHFPP(CHEKBFHAHDA HDAEJLFDNJC, Transform JJHEGPBBMLG, List<HintUI> LKFALEIFDIO)  [RVA 0x32B8310]
// Nekki.SF2.GUI.Common.Hints.HintCache$$GLLDGFLHFPP @ RVA 0x32B8310

void Nekki_SF2_GUI_Common_Hints_HintCache__GLLDGFLHFPP
               (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,
               UnityEngine_Transform_o *JJHEGPBBMLG,
               System_Collections_Generic_List_HintUI__o *LKFALEIFDIO,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *x;
  Nekki_SF2_GUI_Common_Hints_HintUI_array *pNVar4;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456746a & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    __this = (Nekki_SF2_GUI_Common_Hints_HintCache_o *)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456746a = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (LKFALEIFDIO != (System_Collections_Generic_List_HintUI__o *)0x0) {
    length = (LKFALEIFDIO->fields)._size;
    (LKFALEIFDIO->fields)._size = 0;
    (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(LKFALEIFDIO->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_Common_Hints_HintCache_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_88,__this_00,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
            return;
          }
          x = Nekki_SF2_GUI_Common_Hints_HintCache__KABFGOPBGOI
                        ((Nekki_SF2_GUI_Common_Hints_HintCache_o *)(ulong)bVar3,
                         (int32_t)local_70.fields._current,HDAEJLFDNJC,JJHEGPBBMLG,method);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          lVar2 = Method_System_Collections_Generic_List<HintUI>_Add__;
        } while (!bVar3);
        pNVar4 = (LKFALEIFDIO->fields)._items;
        (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
        if (pNVar4 == (Nekki_SF2_GUI_Common_Hints_HintUI_array *)0x0) break;
        uVar1 = (LKFALEIFDIO->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (LKFALEIFDIO->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = x;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,x);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,(Il2CppObject *)x,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private HintUI KABFGOPBGOI(MIBHAJBEMIK OHLKNCPBCBL, CHEKBFHAHDA HDAEJLFDNJC, Transform JJHEGPBBMLG)  [RVA 0x32B8590]
// Nekki.SF2.GUI.Common.Hints.HintCache$$KABFGOPBGOI @ RVA 0x32B8590

Nekki_SF2_GUI_Common_Hints_HintUI_o *
Nekki_SF2_GUI_Common_Hints_HintCache__KABFGOPBGOI
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t OHLKNCPBCBL,int32_t HDAEJLFDNJC,
          UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *x;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *pNVar2;
  
  if ((DAT_0456746b & 1) == 0) {
    FUN_01bab630(&HintCreator_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456746b = 1;
  }
  if ((HintCreator_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  x = HintCreator__LDEODGHMPCG(OHLKNCPBCBL,HDAEJLFDNJC,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0;
  if (!bVar1) {
    if ((x == (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,false,(MethodInfo *)0x0);
    pNVar2 = x;
  }
  return pNVar2;
}


// ===== private List<HintUI> HHJFEADANAC(CHEKBFHAHDA HDAEJLFDNJC)  [RVA 0x32B8674]
// Nekki.SF2.GUI.Common.Hints.HintCache$$HHJFEADANAC @ RVA 0x32B8674

System_Collections_Generic_List_HintUI__o *
Nekki_SF2_GUI_Common_Hints_HintCache__HHJFEADANAC
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,MethodInfo *method)

{
  System_Collections_Generic_List_HintUI__o **ppSVar1;
  
  if (HDAEJLFDNJC == 0) {
    ppSVar1 = &(__this->fields).HJBLBMEDIMJ;
  }
  else {
    if (HDAEJLFDNJC != 1) {
      return (System_Collections_Generic_List_HintUI__o *)0x0;
    }
    ppSVar1 = &(__this->fields).AINKHCILFAC;
  }
  return *ppSVar1;
}


// ===== public static void Init()  [RVA 0x32B869C]
// Nekki.SF2.GUI.Common.Hints.HintCache$$Init @ RVA 0x32B869C

void Nekki_SF2_GUI_Common_Hints_HintCache__Init(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Common_Hints_HintCache_o *pNVar2;
  
  if ((DAT_0456746c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintCache>__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
                    /* try { // try from 033b8704 to 034b87b7 has its CatchHandler @ 033b8704
                       catch() { ... } // from try @ 033b8704 with catch @ 033b8704
                       catch() { ... } // from try @ 033b87d4 with catch @ 033b8704
                       catch() { ... } // from try @ 033b880c with catch @ 033b8704
                       catch() { ... } // from try @ 033b8834 with catch @ 033b8704
                       catch() { ... } // from try @ 033b8874 with catch @ 033b8704 */
    FUN_01bab630(&StringLiteral_15481/*"[HintCache]"*/);
    FUN_01bab630(&StringLiteral_10405/*"Prefabs/Hints/HintCache"*/);
    DAT_0456746c = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10405/*"Prefabs/Hints/HintCache"*/,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this,StringLiteral_15481/*"[HintCache]"*/,(MethodInfo *)0x0);
                    /* try { // try from 033b87b8 to 034b87bf has its CatchHandler @ 033b8818 */
      UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
                    /* try { // try from 033b87cc to 034b87d3 has its CatchHandler @ 033b8814 */
      pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintCache_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)__this,
                          Method_UnityEngine_GameObject_GetComponent<HintCache>__);
                    /* try { // try from 033b87d4 to 034b8807 has its CatchHandler @ 033b8704 */
      Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields,pNVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public GameObject[] GetHints(CHEKBFHAHDA HDAEJLFDNJC, bool NADBGFOJLMH, List<MIBHAJBEMIK> GLIELCCFAGL)  [RVA 0x32B8804]
// Nekki.SF2.GUI.Common.Hints.HintCache$$GetHints @ RVA 0x32B8804

UnityEngine_GameObject_array *
Nekki_SF2_GUI_Common_Hints_HintCache__GetHints
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,bool NADBGFOJLMH,
          System_Collections_Generic_List_MIBHAJBEMIK__o *GLIELCCFAGL,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *__this_01;
  System_Predicate_T__o *match;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_HintUI__o **ppSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_HintUI__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 033b8808 to 034b880b has its CatchHandler @ 033b8810 */
                    /* try { // try from 033b880c to 034b882f has its CatchHandler @ 033b8704 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b8808 with catch @ 033b8810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b87cc with catch @ 033b8814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b87b8 with catch @ 033b8818
                        */
                    /* try { // try from 033b8830 to 034b8833 has its CatchHandler @ 033b885c */
                    /* try { // try from 033b8834 to 034b886b has its CatchHandler @ 033b8704 */
  if ((DAT_0456746d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__,
                 HDAEJLFDNJC,NADBGFOJLMH);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
                    /* catch() { ... } // from try @ 033b8830 with catch @ 033b885c */
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
                    /* try { // try from 033b886c to 034b8873 has its CatchHandler @ 033b8888 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Find__);
                    /* try { // try from 033b8874 to 034b887f has its CatchHandler @ 033b8704 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
                    /* try { // try from 033b8880 to 034b8887 has its CatchHandler @ 033b8888 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b886c with catch @ 033b8888
                       catch(type#2 @ 00000000) { ... } // from try @ 033b8880 with catch @ 033b8888
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_FLBHNBIBNBD__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_TypeInfo);
    FUN_01bab630(&System_Predicate<HintUI>_TypeInfo);
    DAT_0456746d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (HDAEJLFDNJC == 0) {
    ppSVar5 = &(__this->fields).HJBLBMEDIMJ;
  }
  else {
    if (HDAEJLFDNJC != 1) {
      return (UnityEngine_GameObject_array *)0x0;
    }
    ppSVar5 = &(__this->fields).AINKHCILFAC;
  }
  __this_02 = *ppSVar5;
  if (__this_02 == (System_Collections_Generic_List_HintUI__o *)0x0) {
    return (UnityEngine_GameObject_array *)0x0;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<GameObject>__ctor__);
  if (GLIELCCFAGL != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_T__o *)GLIELCCFAGL,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                             ), bVar3) {
      __this_01 = (Il2CppObject *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_TypeInfo);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined4 *)&__this_01[1].klass = local_80.fields._current._0_4_;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HintUI>_TypeInfo);
      System_Predicate<object>___ctor();
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__Find
                    ((System_Collections_Generic_List_object__o *)__this_02,match,
                     Method_System_Collections_Generic_List<HintUI>_Find__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0)
        ;
        lVar2 = Method_System_Collections_Generic_List<GameObject>_Add__;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pUVar4 = (UnityEngine_GameObject_array *)
               System_Collections_Generic_List<object>__ToArray
                         (__this_00,Method_System_Collections_Generic_List<GameObject>_ToArray__);
      return pUVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GameObject[] GetAllHints(CHEKBFHAHDA HDAEJLFDNJC)  [RVA 0x32B8B8C]
// Nekki.SF2.GUI.Common.Hints.HintCache$$GetAllHints @ RVA 0x32B8B8C

UnityEngine_GameObject_array *
Nekki_SF2_GUI_Common_Hints_HintCache__GetAllHints
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_HintUI__o **ppSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_HintUI__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_0456746e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    DAT_0456746e = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  if (HDAEJLFDNJC == 0) {
    ppSVar5 = &(__this->fields).HJBLBMEDIMJ;
  }
  else {
    if (HDAEJLFDNJC != 1) {
      return (UnityEngine_GameObject_array *)0x0;
    }
    ppSVar5 = &(__this->fields).AINKHCILFAC;
  }
  __this_01 = *ppSVar5;
  if (__this_01 == (System_Collections_Generic_List_HintUI__o *)0x0) {
    pUVar4 = (UnityEngine_GameObject_array *)0x0;
  }
  else {
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<GameObject>__ctor__);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_40,
                              Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__),
          bVar3) {
      if ((UnityEngine_Component_o *)local_40.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)local_40.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<GameObject>_Add__;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar4 = (UnityEngine_GameObject_array *)
             System_Collections_Generic_List<object>__ToArray
                       (__this_00,Method_System_Collections_Generic_List<GameObject>_ToArray__);
  }
  return pUVar4;
}


// ===== private void Awake()  [RVA 0x32B8DF0]
// Nekki.SF2.GUI.Common.Hints.HintCache$$Awake @ RVA 0x32B8DF0

void Nekki_SF2_GUI_Common_Hints_HintCache__Awake
               (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  Nekki_SF2_GUI_Common_Hints_HintCache__GLLDGFLHFPP
            (__this,1,(__this->fields)._HintsLightParent,(__this->fields).AINKHCILFAC,in_x4);
  Nekki_SF2_GUI_Common_Hints_HintCache__GLLDGFLHFPP
            (__this,0,(__this->fields)._HintsDarkParent,(__this->fields).HJBLBMEDIMJ,in_x4);
  return;
}


// ===== public static HintCache get_Current()  [RVA 0x32B8E20]
// Nekki.SF2.GUI.Common.Hints.HintCache$$get_Current @ RVA 0x32B8E20

Nekki_SF2_GUI_Common_Hints_HintCache_o *
Nekki_SF2_GUI_Common_Hints_HintCache__get_Current(MethodInfo *method)

{
  if ((DAT_0456746f & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo);
    DAT_0456746f = 1;
  }
  Nekki_SF2_GUI_Common_Hints_HintCache__Init(method);
  return Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI;
}


// ===== public void .ctor()  [RVA 0x32B8E6C]
// Nekki.SF2.GUI.Common.Hints.HintCache$$.ctor @ RVA 0x32B8E6C

void Nekki_SF2_GUI_Common_Hints_HintCache___ctor
               (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HintUI__o *pSVar1;
  System_Collections_Generic_List_HintUI__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567470 & 1) == 0) {
                    /* try { // try from 033b8ea0 to 034b9107 has its CatchHandler @ 033b8ea0
                       catch() { ... } // from try @ 033b8ea0 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b9218 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b9318 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b9320 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b93d4 with catch @ 033b8ea0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintUI>_TypeInfo);
    DAT_04567470 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_HintUI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  ppSVar2 = &(__this->fields).AINKHCILFAC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HintUI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  ppSVar2 = &(__this->fields).HJBLBMEDIMJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool get_IsInited()  [RVA 0x32B8F18]
// Nekki.SF2.GUI.Common.Hints.HintCache$$get_IsInited @ RVA 0x32B8F18

bool Nekki_SF2_GUI_Common_Hints_HintCache__get_IsInited(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintCache_o *x;
  
  if ((DAT_04567471 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567471 = 1;
  }
  x = Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public GameObject[] GetFightHints(CHEKBFHAHDA HDAEJLFDNJC, MIBHAJBEMIK[] GLIELCCFAGL)  [RVA 0x32B8F90]
// Nekki.SF2.GUI.Common.Hints.HintCache$$GetFightHints @ RVA 0x32B8F90

UnityEngine_GameObject_array *
Nekki_SF2_GUI_Common_Hints_HintCache__GetFightHints
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,
          MIBHAJBEMIK_array *GLIELCCFAGL,MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *GLIELCCFAGL_00;
  UnityEngine_GameObject_array *pUVar1;
  MethodInfo *in_x4;
  
  if ((DAT_04567472 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
    DAT_04567472 = 1;
  }
  GLIELCCFAGL_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)GLIELCCFAGL,
                  Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
  pUVar1 = Nekki_SF2_GUI_Common_Hints_HintCache__GetHints
                     (__this,HDAEJLFDNJC,false,
                      (System_Collections_Generic_List_MIBHAJBEMIK__o *)GLIELCCFAGL_00,in_x4);
  return pUVar1;
}


// ===== public GameObject[] GetHints(CHEKBFHAHDA HDAEJLFDNJC, MIBHAJBEMIK[] GLIELCCFAGL)  [RVA 0x32B8FFC]
// Nekki.SF2.GUI.Common.Hints.HintCache$$GetHints @ RVA 0x32B8FFC

UnityEngine_GameObject_array *
Nekki_SF2_GUI_Common_Hints_HintCache__GetHints
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,
          MIBHAJBEMIK_array *GLIELCCFAGL,MethodInfo *method)

{
  UnityEngine_GameObject_array *pUVar1;
  
  pUVar1 = (UnityEngine_GameObject_array *)FUN_03f93650(DAT_04567473,__this,HDAEJLFDNJC);
  return pUVar1;
}

