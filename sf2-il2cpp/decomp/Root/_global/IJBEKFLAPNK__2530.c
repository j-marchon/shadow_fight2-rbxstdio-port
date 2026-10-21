// TypeDefIndex 2530
// Namespace: 
// public class IJBEKFLAPNK
// Fields:
//   public Dictionary<string, Dictionary<string, float>> AIGFEBEBGCK; // 0x10

// ===== public float GJAEBHEEILE()  [RVA 0x339112C]
// IJBEKFLAPNK$$GJAEBHEEILE @ RVA 0x339112C

/* WARNING: Removing unreachable block (ram,0x034912ec) */

float IJBEKFLAPNK__GJAEBHEEILE(IJBEKFLAPNK_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *extraout_x1;
  float fVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d8;
  undefined1 local_b0 [24];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_98;
  undefined8 local_90;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04567c1f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Key__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Value__
                );
    FUN_01bab630(&StringLiteral_10808/*"RaidChargeDamage"*/);
    DAT_04567c1f = 1;
    method = extraout_x1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0._8_4_ = 0;
  local_b0._12_4_ = 0;
  local_b0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0._16_8_ = (System_String_o *)0x0;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).AIGFEBEBGCK;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_d8,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
              );
    fVar2 = 0.0;
    local_80.fields._version = local_d8.fields._version;
    local_80.fields._index = local_d8.fields._index;
    local_80.fields._dictionary = local_d8.fields._dictionary;
    local_80.fields._current.fields.value = local_d8.fields._current.fields.value;
    local_80.fields._current.fields.key = local_d8.fields._current.fields.key;
    local_80.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_d8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                        );
      __this_00 = local_80.fields._current.fields.value;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                  );
        return fVar2;
      }
      if ((System_String_o *)local_80.fields._current.fields.key == (System_String_o *)0x0) break;
      bVar1 = System_String__Equals
                        ((System_String_o *)local_80.fields._current.fields.key,StringLiteral_10808/*"RaidChargeDamage"*/,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00 ==
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                  (&local_d8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
        local_b0._8_4_ = local_d8.fields._version;
        local_b0._12_4_ = local_d8.fields._index;
        local_b0._0_8_ = local_d8.fields._dictionary;
        local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   local_d8.fields._current.fields.value;
        local_b0._16_8_ = local_d8.fields._current.fields.key;
        local_90._0_4_ = local_d8.fields._getEnumeratorRetType;
        local_90._4_4_ = local_d8.fields._36_4_;
        while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                                 ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o
                                   *)local_b0,
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                                 ), bVar1) {
          fVar2 = fVar2 + local_98._0_4_;
        }
        System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b0,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__)
        ;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void OIOFKEFFDPO(IJBEKFLAPNK IBKIPBJJCPG)  [RVA 0x3391400]
// IJBEKFLAPNK$$OIOFKEFFDPO @ RVA 0x3391400

/* WARNING: Removing unreachable block (ram,0x034915a8) */

void IJBEKFLAPNK__OIOFKEFFDPO(IJBEKFLAPNK_o *__this,IJBEKFLAPNK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Il2CppObject *JGHIJMJNJLE;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *in_x3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  undefined1 local_a0 [24];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_88;
  undefined8 local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567c20 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Key__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Value__
                );
    DAT_04567c20 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a0._8_4_ = 0;
  local_a0._12_4_ = 0;
  local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0._16_8_ = (System_String_o *)0x0;
  if ((IBKIPBJJCPG != (IJBEKFLAPNK_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (IBKIPBJJCPG->fields).AIGFEBEBGCK,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_c8,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
              );
    local_70.fields._version = local_c8.fields._version;
    local_70.fields._index = local_c8.fields._index;
    local_70.fields._dictionary = local_c8.fields._dictionary;
    local_70.fields._current.fields.value = local_c8.fields._current.fields.value;
    local_70.fields._current.fields.key = local_c8.fields._current.fields.key;
    local_70.fields._getEnumeratorRetType = local_c8.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_c8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                        );
      JGHIJMJNJLE = local_70.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                  );
        return;
      }
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
          local_70.fields._current.fields.value ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
      System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                (&local_c8,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_70.fields._current.fields.value,
                 Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
      local_a0._8_4_ = local_c8.fields._version;
      local_a0._12_4_ = local_c8.fields._index;
      local_a0._0_8_ = local_c8.fields._dictionary;
      local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_c8.fields._current.fields.value;
      local_a0._16_8_ = local_c8.fields._current.fields.key;
      local_80._0_4_ = local_c8.fields._getEnumeratorRetType;
      local_80._4_4_ = local_c8.fields._36_4_;
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                local_a0,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                               ), bVar1) {
        IJBEKFLAPNK__LFENGGKOJDO
                  (__this,local_88._0_4_,(System_String_o *)JGHIJMJNJLE,
                   (System_String_o *)local_a0._16_8_,in_x3);
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LFENGGKOJDO(float LINBBAKAFCP, string JGHIJMJNJLE, string ANGBPBINHBL)  [RVA 0x33916A4]
// IJBEKFLAPNK$$LFENGGKOJDO @ RVA 0x33916A4

void IJBEKFLAPNK__LFENGGKOJDO
               (IJBEKFLAPNK_o *__this,float LINBBAKAFCP,System_String_o *JGHIJMJNJLE,
               System_String_o *ANGBPBINHBL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  float fVar4;
  
  if ((DAT_04567c21 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_set_Item__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    DAT_04567c21 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIGFEBEBGCK;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)JGHIJMJNJLE,
                       Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_ContainsKey__
                      );
    if (!bVar1) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).AIGFEBEBGCK;
      pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
      System_Collections_Generic_Dictionary<object,_float>___ctor
                (pSVar3,Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03491824;
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar2,(Il2CppObject *)JGHIJMJNJLE,(Il2CppObject *)pSVar3,
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_set_Item__
                );
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AIGFEBEBGCK
    ;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)JGHIJMJNJLE,
                            Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_get_Item__
                           ), pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0
       )) {
      bVar1 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                        (pSVar3,(Il2CppObject *)ANGBPBINHBL,
                         Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
      if (bVar1) {
        fVar4 = System_Collections_Generic_Dictionary<object,_float>__get_Item
                          (pSVar3,(Il2CppObject *)ANGBPBINHBL,
                           Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__);
        LINBBAKAFCP = fVar4 + LINBBAKAFCP;
      }
      System_Collections_Generic_Dictionary<object,_float>__set_Item
                (pSVar3,(Il2CppObject *)ANGBPBINHBL,LINBBAKAFCP,
                 Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
      return;
    }
  }
LAB_03491824:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3391828]
// IJBEKFLAPNK$$.ctor @ RVA 0x3391828

void IJBEKFLAPNK___ctor(IJBEKFLAPNK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c22 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_TypeInfo)
    ;
    DAT_04567c22 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>__ctor__
            );
  (__this->fields).AIGFEBEBGCK =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__float___o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public float NACPMGNAODH()  [RVA 0x33918B0]
// IJBEKFLAPNK$$NACPMGNAODH @ RVA 0x33918B0

/* WARNING: Removing unreachable block (ram,0x03491a30) */

float IJBEKFLAPNK__NACPMGNAODH(IJBEKFLAPNK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  float fVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  undefined1 local_a0 [24];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_88;
  undefined8 local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567c23 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                );
                    /* try { // try from 03491924 to 035919ff has its CatchHandler @ 03491924
                       catch() { ... } // from try @ 03491924 with catch @ 03491924
                       catch() { ... } // from try @ 03491b24 with catch @ 03491924
                       catch() { ... } // from try @ 03491bbc with catch @ 03491924
                       catch() { ... } // from try @ 03491bc4 with catch @ 03491924
                       catch() { ... } // from try @ 03491c78 with catch @ 03491924 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Value__
                );
    DAT_04567c23 = 1;
    method = extraout_x1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a0._8_4_ = 0;
  local_a0._12_4_ = 0;
  local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0._16_8_ = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).AIGFEBEBGCK;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_c8,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
              );
    fVar2 = 0.0;
    local_70.fields._version = local_c8.fields._version;
    local_70.fields._index = local_c8.fields._index;
    local_70.fields._dictionary = local_c8.fields._dictionary;
    local_70.fields._current.fields.value = local_c8.fields._current.fields.value;
    local_70.fields._current.fields.key = local_c8.fields._current.fields.key;
    local_70.fields._getEnumeratorRetType = local_c8.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_c8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                  );
                    /* try { // try from 03491a5c to 03591a87 has its CatchHandler @ 03491be0 */
        return fVar2;
      }
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
          local_70.fields._current.fields.value ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
      System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                (&local_c8,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_70.fields._current.fields.value,
                 Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
      local_a0._8_4_ = local_c8.fields._version;
      local_a0._12_4_ = local_c8.fields._index;
      local_a0._0_8_ = local_c8.fields._dictionary;
      local_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_c8.fields._current.fields.value;
      local_a0._16_8_ = local_c8.fields._current.fields.key;
      local_80._0_4_ = local_c8.fields._getEnumeratorRetType;
      local_80._4_4_ = local_c8.fields._36_4_;
                    /* try { // try from 03491a00 to 03591a27 has its CatchHandler @ 03491be4 */
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                local_a0,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                               ), bVar1) {
        fVar2 = fVar2 + local_88._0_4_;
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

