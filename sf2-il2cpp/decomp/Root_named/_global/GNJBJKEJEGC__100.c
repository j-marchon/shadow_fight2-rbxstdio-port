// TypeDefIndex 100
// Namespace: 
// public class GNJBJKEJEGC
// Fields:
//   private Dictionary<string, float> CMHJMGKMCCI; // 0x10
//   private float DCBEAHGEHKL; // 0x18

// ===== public void FOOHBJNHOKK(string PMACBPAMPJA, float CJNHFNHJHPE)  [RVA 0x3004E08]
// GNJBJKEJEGC$$FOOHBJNHOKK @ RVA 0x3004E08

void GNJBJKEJEGC__FOOHBJNHOKK
               (GNJBJKEJEGC_o *__this,System_String_o *PMACBPAMPJA,float CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if ((DAT_04565b43 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    DAT_04565b43 = 1;
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_float>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)PMACBPAMPJA,CJNHFNHJHPE,
               Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GAKPLIDPEKM(string PMACBPAMPJA)  [RVA 0x3004E70]
// GNJBJKEJEGC$$GAKPLIDPEKM @ RVA 0x3004E70

bool GNJBJKEJEGC__GAKPLIDPEKM(GNJBJKEJEGC_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if ((DAT_04565b44 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    DAT_04565b44 = 1;
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDNPGAKJLHM()  [RVA 0x3004EC8]
// GNJBJKEJEGC$$NDNPGAKJLHM @ RVA 0x3004EC8

void GNJBJKEJEGC__NDNPGAKJLHM(GNJBJKEJEGC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Clear__);
    DAT_04565b45 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_float>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_float>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor(float PHBEFCPEHCD = 0)  [RVA 0x3004F18]
// GNJBJKEJEGC$$.ctor @ RVA 0x3004F18

void GNJBJKEJEGC___ctor(GNJBJKEJEGC_o *__this,float PHBEFCPEHCD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b46 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    DAT_04565b46 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
  (__this->fields).CMHJMGKMCCI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).DCBEAHGEHKL = PHBEFCPEHCD;
  return;
}


// ===== public float KNMENIBLFGF(string PMACBPAMPJA)  [RVA 0x3004FB4]
// GNJBJKEJEGC$$KNMENIBLFGF @ RVA 0x3004FB4

float GNJBJKEJEGC__KNMENIBLFGF
                (GNJBJKEJEGC_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  float *pfVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  float local_24;
  
  if ((DAT_04565b47 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__);
    DAT_04565b47 = 1;
  }
  local_24 = 0.0;
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_float>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)PMACBPAMPJA,&local_24,
                       Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__);
    pfVar1 = &local_24;
    if (!bVar2) {
      pfVar1 = &(__this->fields).DCBEAHGEHKL;
    }
    return *pfVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(GNJBJKEJEGC IBKIPBJJCPG, float PHBEFCPEHCD = 0)  [RVA 0x3005034]
// GNJBJKEJEGC$$.ctor @ RVA 0x3005034

void GNJBJKEJEGC___ctor(GNJBJKEJEGC_o *__this,GNJBJKEJEGC_o *IBKIPBJJCPG,float PHBEFCPEHCD,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 local_60 [24];
  Il2CppObject *local_48;
  undefined8 local_40;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04565b48 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    DAT_04565b48 = 1;
    method_00 = extraout_x1;
  }
  local_60._8_4_ = 0;
  local_60._12_4_ = 0;
  local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  local_60._16_8_ = (Il2CppObject *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  GNJBJKEJEGC___ctor(__this,PHBEFCPEHCD,method_00);
  pSVar2 = (__this->fields).CMHJMGKMCCI;
  if (((pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) &&
      (System_Collections_Generic_Dictionary<object,_float>__Clear
                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                  Method_System_Collections_Generic_Dictionary<string,_float>_Clear__),
      IBKIPBJJCPG != (GNJBJKEJEGC_o *)0x0)) &&
     (pSVar2 = (IBKIPBJJCPG->fields).CMHJMGKMCCI,
     pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_60,
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                         local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__)
        ;
        return;
      }
      pSVar2 = (__this->fields).CMHJMGKMCCI;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) break;
      System_Collections_Generic_Dictionary<object,_float>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)local_60._16_8_,local_48._0_4_,
                 Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x3005204]
// GNJBJKEJEGC$$ToString @ RVA 0x3005204

System_String_o * GNJBJKEJEGC__ToString(GNJBJKEJEGC_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject *arg1;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  undefined4 local_38;
  int32_t local_34;
  
  if ((DAT_04565b49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_580/*" {0}={1}"*/);
    FUN_01bab630(&StringLiteral_402/*" empty"*/);
    DAT_04565b49 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).CMHJMGKMCCI;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    local_34 = System_Collections_Generic_Dictionary<object,_float>__get_Count
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          Method_System_Collections_Generic_Dictionary<string,_float>_get_Count__);
    if (local_34 < 1) {
      pSVar3 = System_Object__ToString((Il2CppObject *)__this,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,StringLiteral_402/*" empty"*/,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).CMHJMGKMCCI;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)
      goto LAB_031053c8;
      System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                (&local_70,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                               ), arg0 = local_70.fields._current.fields.key, bVar1) {
        local_38 = SUB84(local_70.fields._current.fields.value,0);
        arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_38);
        str1 = System_String__Format(StringLiteral_580/*" {0}={1}"*/,arg0,arg1,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    }
    return pSVar3;
  }
LAB_031053c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

