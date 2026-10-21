// TypeDefIndex 1795
// Namespace: 
// public static class NGCBNMBJMOE
// Fields:
//   private static readonly Dictionary<string, Sprite[]> IABCHDDPNMF; // 0x0
//   private static readonly Dictionary<string, Sprite> DKNBHLFHKNH; // 0x8
//   private static readonly bool HEKGKIBPBPI; // 0x10

// ===== private static Sprite[] FNHMJPBMICG(string AAIHDEKMIJG)  [RVA 0x3210DA0]
// NGCBNMBJMOE$$FNHMJPBMICG @ RVA 0x3210DA0

UnityEngine_Sprite_array * NGCBNMBJMOE__FNHMJPBMICG(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_Sprite_array *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar4;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  UnityEngine_Sprite_array *local_28;
  
  if ((DAT_04566e8b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    DAT_04566e8b = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Sprite_array *)0x0;
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (NGCBNMBJMOE_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    pUVar3 = (UnityEngine_Sprite_array *)
             UnityEngine_ResourcesAndBundles__LoadAll<object>
                       (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    pMVar4 = extraout_x1_03;
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
      pMVar4 = extraout_x1_04;
    }
    local_28 = NGCBNMBJMOE__NOKPFOHGGEB(pUVar3,pMVar4);
  }
  else {
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03310f18:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)AAIHDEKMIJG,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__)
    ;
    if (!bVar1) {
      pUVar3 = (UnityEngine_Sprite_array *)
               UnityEngine_ResourcesAndBundles__LoadAll<object>
                         (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
      pMVar4 = extraout_x1_01;
      if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
        pMVar4 = extraout_x1_02;
      }
      local_28 = NGCBNMBJMOE__NOKPFOHGGEB(pUVar3,pMVar4);
      if (local_28 != (UnityEngine_Sprite_array *)0x0) {
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03310f18;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)AAIHDEKMIJG,&local_28->obj,
                   Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
      }
    }
  }
  return local_28;
}


// ===== internal static Sprite[] NOKPFOHGGEB(Sprite[] OPHAPNEAKKH)  [RVA 0x3210F1C]
// NGCBNMBJMOE$$NOKPFOHGGEB @ RVA 0x3210F1C

UnityEngine_Sprite_array *
NGCBNMBJMOE__NOKPFOHGGEB(UnityEngine_Sprite_array *OPHAPNEAKKH,MethodInfo *method)

{
  System_Func_Sprite__int__o **ppSVar1;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  UnityEngine_Sprite_array *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Func_Sprite__int__o *keySelector;
  
  if ((DAT_04566e8c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<Sprite,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<Sprite>__);
    FUN_01bab630(&System_Func<Sprite,_int>_TypeInfo);
    FUN_01bab630(&Method_NGCBNMBJMOE_<>c_PDHFIPANFCA__);
    FUN_01bab630(&NGCBNMBJMOE_<>c_TypeInfo);
    DAT_04566e8c = 1;
    method = extraout_x1;
  }
  if (OPHAPNEAKKH != (UnityEngine_Sprite_array *)0x0) {
    if ((NGCBNMBJMOE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_<>c_TypeInfo,method);
      method = extraout_x1_00;
    }
    keySelector = NGCBNMBJMOE_<>c_TypeInfo->static_fields->__9__4_1;
    if (keySelector == (System_Func_Sprite__int__o *)0x0) {
      if ((NGCBNMBJMOE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NGCBNMBJMOE_<>c_TypeInfo,method);
      }
      keySelector = (System_Func_Sprite__int__o *)
                    thunk_FUN_01bda818(System_Func<Sprite,_int>_TypeInfo);
      System_Func<object,_int>___ctor();
      ppSVar1 = &NGCBNMBJMOE_<>c_TypeInfo->static_fields->__9__4_1;
      *ppSVar1 = keySelector;
      thunk_FUN_01c20e04(ppSVar1,keySelector);
    }
    source = System_Linq_Enumerable__OrderBy<object,_int>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)OPHAPNEAKKH,
                        (System_Func_TSource__TKey__o *)keySelector,
                        Method_System_Linq_Enumerable_OrderBy<Sprite,_int>__);
    pUVar2 = (UnityEngine_Sprite_array *)
             System_Linq_Enumerable__ToArray<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        Method_System_Linq_Enumerable_ToArray<Sprite>__);
    return pUVar2;
  }
  return (UnityEngine_Sprite_array *)0x0;
}


// ===== private static void .cctor()  [RVA 0x3211054]
// NGCBNMBJMOE$$.cctor @ RVA 0x3211054

void NGCBNMBJMOE___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__Sprite__o **ppSVar3;
  
  if ((DAT_04566e8d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Sprite>_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04566e8d = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
  NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF =
       (System_Collections_Generic_Dictionary_string__Sprite____o *)pSVar2;
  thunk_FUN_01c20e04(NGCBNMBJMOE_TypeInfo->static_fields,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Sprite>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Sprite>__ctor__);
  ppSVar3 = &NGCBNMBJMOE_TypeInfo->static_fields->DKNBHLFHKNH;
  *ppSVar3 = (System_Collections_Generic_Dictionary_string__Sprite__o *)pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  NGCBNMBJMOE_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}


// ===== private static Sprite CBLIMOEFGGL(string AAIHDEKMIJG)  [RVA 0x3211164]
// NGCBNMBJMOE$$CBLIMOEFGGL @ RVA 0x3211164

UnityEngine_Sprite_o * NGCBNMBJMOE__CBLIMOEFGGL(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  NGCBNMBJMOE_StaticFields *pNVar2;
  UnityEngine_Object_o *local_28;
  
  if ((DAT_04566e8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>_TryGetValue__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    DAT_04566e8e = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Object_o *)0x0;
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = NGCBNMBJMOE_TypeInfo->static_fields;
  if (pNVar2->HEKGKIBPBPI == false) {
    local_28 = (UnityEngine_Object_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
  }
  else {
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo,method);
      pNVar2 = NGCBNMBJMOE_TypeInfo->static_fields;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pNVar2->DKNBHLFHKNH ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_033112d8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       pNVar2->DKNBHLFHKNH,(Il2CppObject *)AAIHDEKMIJG,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Sprite>_TryGetValue__);
    if (!bVar1) {
      x = (UnityEngine_Object_o *)
          UnityEngine_ResourcesAndBundles__Load<object>
                    (AAIHDEKMIJG,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
      local_28 = x;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 NGCBNMBJMOE_TypeInfo->static_fields->DKNBHLFHKNH;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_033112d8;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)AAIHDEKMIJG,(Il2CppObject *)local_28,
                   Method_System_Collections_Generic_Dictionary<string,_Sprite>_Add__);
      }
    }
  }
  return (UnityEngine_Sprite_o *)local_28;
}


// ===== public static Sprite NECCNHODCAE(string NPNDHEBBEAD, string DMCFDIBHCPD, string OEFBIMECEAM, bool LBKOHHHPNIP = False)  [RVA 0x32112DC]
// NGCBNMBJMOE$$NECCNHODCAE @ RVA 0x32112DC

UnityEngine_Sprite_o *
NGCBNMBJMOE__NECCNHODCAE
          (System_String_o *NPNDHEBBEAD,System_String_o *DMCFDIBHCPD,System_String_o *OEFBIMECEAM,
          bool LBKOHHHPNIP,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_Sprite_array *pUVar4;
  UnityEngine_Sprite_o *pUVar5;
  MethodInfo *method_00;
  UnityEngine_Object_o *__this;
  long lVar6;
  
  method_00 = (MethodInfo *)OEFBIMECEAM;
  if ((DAT_04566e8f & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    DAT_04566e8f = 1;
  }
  bVar2 = System_String__IsNullOrEmpty(OEFBIMECEAM,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = System_String__Format
                       (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)NPNDHEBBEAD,(Il2CppObject *)OEFBIMECEAM,
                        (MethodInfo *)0x0);
                    /* try { // try from 03311360 to 03411403 has its CatchHandler @ 03311360
                       catch() { ... } // from try @ 03311360 with catch @ 03311360
                       catch() { ... } // from try @ 03311430 with catch @ 03311360
                       catch() { ... } // from try @ 0331145c with catch @ 03311360
                       catch() { ... } // from try @ 03311484 with catch @ 03311360
                       catch() { ... } // from try @ 033114c4 with catch @ 03311360 */
    method_00 = (MethodInfo *)OEFBIMECEAM;
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
      method_00 = (MethodInfo *)OEFBIMECEAM;
    }
    pUVar4 = NGCBNMBJMOE__MMHFNAEHAKC(pSVar3,LBKOHHHPNIP,method_00);
    if ((pUVar4 != (UnityEngine_Sprite_array *)0x0) &&
       (uVar1 = (uint)pUVar4->max_length, 0 < (int)uVar1)) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this = (UnityEngine_Object_o *)pUVar4->m_Items[lVar6];
        if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar3 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        bVar2 = System_String__op_Equality(pSVar3,DMCFDIBHCPD,(MethodInfo *)0x0);
        if (bVar2) {
                    /* try { // try from 03311404 to 0341140b has its CatchHandler @ 03311468 */
                    /* try { // try from 03311418 to 0341142f has its CatchHandler @ 03311464 */
          return (UnityEngine_Sprite_o *)__this;
        }
        uVar1 = (uint)pUVar4->max_length;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
  }
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar5 = NGCBNMBJMOE__CMMAOAPNOMN(NPNDHEBBEAD,DMCFDIBHCPD,method_00);
  return pUVar5;
}


// ===== public static Sprite[] MMHFNAEHAKC(string PHLFGGGHGAK, bool LBKOHHHPNIP = False)  [RVA 0x3211424]
// NGCBNMBJMOE$$MMHFNAEHAKC @ RVA 0x3211424

UnityEngine_Sprite_array *
NGCBNMBJMOE__MMHFNAEHAKC(System_String_o *PHLFGGGHGAK,bool LBKOHHHPNIP,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_array *pUVar2;
  Il2CppObject *arg1;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_02;
  undefined1 local_24 [4];
  
                    /* try { // try from 03311430 to 03411457 has its CatchHandler @ 03311360 */
  if ((DAT_04566e90 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
                    /* try { // try from 03311458 to 0341145b has its CatchHandler @ 03311460 */
                    /* try { // try from 0331145c to 0341147f has its CatchHandler @ 03311360 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03311458 with catch @ 03311460
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03311418 with catch @ 03311464
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03311404 with catch @ 03311468
                        */
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
                    /* try { // try from 03311480 to 03411483 has its CatchHandler @ 033114ac */
                    /* try { // try from 03311484 to 034114bb has its CatchHandler @ 03311360 */
    FUN_01bab630(&StringLiteral_10265/*"Pic: AtlasPath='{0}', location='{1}'"*/);
    DAT_04566e90 = 1;
  }
  if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (LBKOHHHPNIP) {
                    /* catch() { ... } // from try @ 03311480 with catch @ 033114ac */
    if (DAT_04565fef == '\0') {
                    /* try { // try from 033114bc to 034114c3 has its CatchHandler @ 033114d8 */
      FUN_01bab630(&MainSettings_TypeInfo);
                    /* try { // try from 033114c4 to 034114cf has its CatchHandler @ 03311360 */
      DAT_04565fef = '\x01';
    }
                    /* try { // try from 033114d0 to 034114d7 has its CatchHandler @ 033114d8 */
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033114bc with catch @ 033114d8
                       catch(type#2 @ 00000000) { ... } // from try @ 033114d0 with catch @ 033114d8
                        */
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH
                      (MainSettings_TypeInfo->static_fields->BDFFMDCAHGJ,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (bVar1) goto LAB_033115e0;
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&MainSettings_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MainSettings_TypeInfo->static_fields->BDFFMDCAHGJ;
  }
  else {
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&MainSettings_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
                    /* try { // try from 03311564 to 034116ef has its CatchHandler @ 03311564
                       catch() { ... } // from try @ 03311564 with catch @ 03311564
                       catch() { ... } // from try @ 033118c4 with catch @ 03311564
                       catch() { ... } // from try @ 03311974 with catch @ 03311564
                       catch() { ... } // from try @ 03311984 with catch @ 03311564
                       catch() { ... } // from try @ 03311a88 with catch @ 03311564 */
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH
                      (MainSettings_TypeInfo->static_fields->HABNBDAMLMP,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
    if (bVar1) goto LAB_033115e0;
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565ff0 == '\0') {
      FUN_01bab630(&MainSettings_TypeInfo);
      DAT_04565ff0 = '\x01';
    }
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MainSettings_TypeInfo->static_fields->HABNBDAMLMP;
  }
  PHLFGGGHGAK = System_String__Concat(PHLFGGGHGAK,pSVar3,(MethodInfo *)0x0);
  method_00 = extraout_x1_01;
LAB_033115e0:
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_02;
  }
  pUVar2 = NGCBNMBJMOE__FNHMJPBMICG(PHLFGGGHGAK,method_00);
  if (pUVar2 == (UnityEngine_Sprite_array *)0x0) {
    local_24[0] = 0;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
    pSVar3 = System_String__Format
                       (StringLiteral_10265/*"Pic: AtlasPath='{0}', location='{1}'"*/,(Il2CppObject *)PHLFGGGHGAK,arg1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  return pUVar2;
}


// ===== private static Sprite CMMAOAPNOMN(string NPNDHEBBEAD, string DMCFDIBHCPD)  [RVA 0x3211678]
// NGCBNMBJMOE$$CMMAOAPNOMN @ RVA 0x3211678

UnityEngine_Sprite_o *
NGCBNMBJMOE__CMMAOAPNOMN
          (System_String_o *NPNDHEBBEAD,System_String_o *DMCFDIBHCPD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  System_String_array *values;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566e91 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_10266/*"Pic: TexturePath='"*/);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
                    /* try { // try from 033116f0 to 03411717 has its CatchHandler @ 033119d8 */
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_881/*"', SpriteName='"*/);
    DAT_04566e91 = 1;
  }
  pSVar2 = System_String__Concat(NPNDHEBBEAD,StringLiteral_1492/*"/"*/,DMCFDIBHCPD,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
    method_00 = extraout_x1_00;
  }
  x = (UnityEngine_Object_o *)NGCBNMBJMOE__CBLIMOEFGGL(pSVar2,method_00);
                    /* try { // try from 0331174c to 03411777 has its CatchHandler @ 033119d4 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 03311880 to 03411887 has its CatchHandler @ 0331199c */
    return (UnityEngine_Sprite_o *)x;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)values->max_length != 0) {
                    /* try { // try from 033117ac to 034117b7 has its CatchHandler @ 033119cc */
    values->m_Items[0] = StringLiteral_10266/*"Pic: TexturePath='"*/;
    thunk_FUN_01c20e04(values->m_Items);
    if (1 < (uint)values->max_length) {
                    /* try { // try from 033117c8 to 034117cf has its CatchHandler @ 033119c8 */
      values->m_Items[1] = NPNDHEBBEAD;
                    /* try { // try from 033117d4 to 034117db has its CatchHandler @ 033119c0 */
      thunk_FUN_01c20e04(values->m_Items + 1,NPNDHEBBEAD);
      if (2 < (uint)values->max_length) {
                    /* try { // try from 033117ec to 034117f3 has its CatchHandler @ 033119b8 */
        values->m_Items[2] = StringLiteral_881/*"', SpriteName='"*/;
                    /* try { // try from 033117fc to 03411803 has its CatchHandler @ 033119b4 */
        thunk_FUN_01c20e04(values->m_Items + 2);
                    /* try { // try from 03311804 to 0341180f has its CatchHandler @ 033119a8 */
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = DMCFDIBHCPD;
          thunk_FUN_01c20e04(values->m_Items + 3,DMCFDIBHCPD);
                    /* try { // try from 03311820 to 03411827 has its CatchHandler @ 033119ac */
          if (4 < (uint)values->max_length) {
                    /* try { // try from 03311838 to 0341186b has its CatchHandler @ 033119bc */
            values->m_Items[4] = StringLiteral_802/*"'"*/;
            thunk_FUN_01c20e04();
            pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
            return (UnityEngine_Sprite_o *)x;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static void NDNPGAKJLHM()  [RVA 0x3211898]
// NGCBNMBJMOE$$NDNPGAKJLHM @ RVA 0x3211898

void NGCBNMBJMOE__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
                    /* try { // try from 03311898 to 0341189f has its CatchHandler @ 03311998 */
                    /* try { // try from 033118a0 to 034118c3 has its CatchHandler @ 033119b0 */
  if ((DAT_04566e92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>_Clear__);
                    /* try { // try from 033118c4 to 0341195f has its CatchHandler @ 03311564 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04566e92 = 1;
  }
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             NGCBNMBJMOE_TypeInfo->static_fields->DKNBHLFHKNH;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<string,_Sprite>_Clear__);
      if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03311960 to 03411967 has its CatchHandler @ 033119d0 */
      JHHFDBLANPH__NECODEBPGNE((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

