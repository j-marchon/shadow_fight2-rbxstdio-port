// TypeDefIndex 935
// Namespace: 
// public static class NAEFACJHPAL
// Fields:
//   private static readonly Dictionary<string, Font> AFFKEJIKNPN; // 0x0
//   private static readonly Dictionary<string, TMP_FontAsset> NAODGIJCPFA; // 0x8
//   private static readonly bool HEKGKIBPBPI; // 0x10

// ===== public static Font FFDEIMBGICG(string BJNENMJKEKF)  [RVA 0x30A6880]
// NAEFACJHPAL$$FFDEIMBGICG @ RVA 0x30A6880

UnityEngine_Font_o * NAEFACJHPAL__FFDEIMBGICG(System_String_o *BJNENMJKEKF,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_Font_o *exists;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UnityEngine_Font_o *local_28;
  
  if ((DAT_04566171 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>_TryGetValue__);
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Font>__);
    DAT_04566171 = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Font_o *)0x0;
  if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (NAEFACJHPAL_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    local_28 = (UnityEngine_Font_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<Font>__);
  }
  else {
    if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_031a69f0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Font>_TryGetValue__);
    if (!bVar1) {
      exists = (UnityEngine_Font_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<Font>__);
      local_28 = exists;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_031a69f0;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject *)local_28,
                   Method_System_Collections_Generic_Dictionary<string,_Font>_Add__);
      }
    }
  }
  return local_28;
}


// ===== public static void NDNPGAKJLHM()  [RVA 0x30A69F4]
// NAEFACJHPAL$$NDNPGAKJLHM @ RVA 0x30A69F4

void NAEFACJHPAL__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if ((DAT_04566172 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Clear__);
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    DAT_04566172 = 1;
  }
  if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,Method_System_Collections_Generic_Dictionary<string,_Font>_Clear__);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             NAEFACJHPAL_TypeInfo->static_fields->NAODGIJCPFA;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Clear__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static TMP_FontAsset CGOFELFENKA(string BJNENMJKEKF)  [RVA 0x30A6A98]
// NAEFACJHPAL$$CGOFELFENKA @ RVA 0x30A6A98

TMPro_TMP_FontAsset_o * NAEFACJHPAL__CGOFELFENKA(System_String_o *BJNENMJKEKF,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *exists;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  NAEFACJHPAL_StaticFields *pNVar2;
  TMPro_TMP_FontAsset_o *local_28;
  
  if ((DAT_04566173 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TryGetValue__)
    ;
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TMP_FontAsset>__);
    DAT_04566173 = 1;
    method = extraout_x1;
  }
  local_28 = (TMPro_TMP_FontAsset_o *)0x0;
  if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = NAEFACJHPAL_TypeInfo->static_fields;
  if (pNVar2->HEKGKIBPBPI == false) {
    local_28 = (TMPro_TMP_FontAsset_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<TMP_FontAsset>__);
  }
  else {
    if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NAEFACJHPAL_TypeInfo,method);
      pNVar2 = NAEFACJHPAL_TypeInfo->static_fields;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pNVar2->NAODGIJCPFA ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_031a6c08:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       pNVar2->NAODGIJCPFA,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TryGetValue__
                      );
    if (!bVar1) {
      exists = (TMPro_TMP_FontAsset_o *)
               UnityEngine_ResourcesAndBundles__Load<object>
                         (BJNENMJKEKF,Method_UnityEngine_ResourcesAndBundles_Load<TMP_FontAsset>__);
      local_28 = exists;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NAEFACJHPAL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 NAEFACJHPAL_TypeInfo->static_fields->NAODGIJCPFA;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_031a6c08;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)BJNENMJKEKF,(Il2CppObject *)local_28,
                   Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_Add__);
      }
    }
  }
  return local_28;
}


// ===== private static void .cctor()  [RVA 0x30A6C0C]
// NAEFACJHPAL$$.cctor @ RVA 0x30A6C0C

void NAEFACJHPAL___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__TMP_FontAsset__o **ppSVar3;
  
  if ((DAT_04566174 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Font>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TypeInfo);
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    DAT_04566174 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Font>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Font>__ctor__);
  NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN =
       (System_Collections_Generic_Dictionary_string__Font__o *)pSVar2;
  thunk_FUN_01c20e04(NAEFACJHPAL_TypeInfo->static_fields,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TypeInfo)
  ;
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>__ctor__);
  ppSVar3 = &NAEFACJHPAL_TypeInfo->static_fields->NAODGIJCPFA;
  *ppSVar3 = (System_Collections_Generic_Dictionary_string__TMP_FontAsset__o *)pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  NAEFACJHPAL_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}

