// TypeDefIndex 502
// Namespace: 
// public class OCHIFKHFMAC : KCACNCMCBHC
// Fields:
//   private readonly Lazy<Dictionary<string, bool>> MDNPGDCCAEA; // 0x10
//   private bool <GOJOEOMCBFI>k__BackingField; // 0x18

// ===== public void IBLPHDKKLKE(string OGPGLGPMEPD, bool CJNHFNHJHPE)  [RVA 0x358A2D8]
// OCHIFKHFMAC$$IBLPHDKKLKE @ RVA 0x358A2D8

void OCHIFKHFMAC__IBLPHDKKLKE
               (OCHIFKHFMAC_o *__this,System_String_o *OGPGLGPMEPD,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Lazy_Dictionary_string__bool___o *pSVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  MethodInfo *method_00;
  bool local_24 [4];
  
                    /* try { // try from 0368a2f8 to 0378a307 has its CatchHandler @ 0368a308 */
  if ((DAT_04568d32 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>_TryGetValue__);
                    /* catch() { ... } // from try @ 0368a2b0 with catch @ 0368a308
                       catch() { ... } // from try @ 0368a2f8 with catch @ 0368a308 */
                    /* try { // try from 0368a30c to 0378a30f has its CatchHandler @ 0368a318 */
                    /* try { // try from 0368a310 to 0378a31b has its CatchHandler @ 0368a114 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368a30c with catch @ 0368a318
                        */
    FUN_01bab630(&Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    DAT_04568d32 = 1;
  }
  local_24[0] = false;
  pSVar2 = (__this->fields).MDNPGDCCAEA;
  if (pSVar2 != (System_Lazy_Dictionary_string__bool___o *)0x0) {
    pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             System_Lazy<object>__get_Value
                       ((System_Lazy_object__o *)pSVar2,
                        Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_bool>__TryGetValue
                        (pSVar3,(Il2CppObject *)OGPGLGPMEPD,local_24,
                         Method_System_Collections_Generic_Dictionary<string,_bool>_TryGetValue__);
      if ((!bVar1) || (local_24[0] != CJNHFNHJHPE)) {
        pSVar2 = (__this->fields).MDNPGDCCAEA;
        if ((pSVar2 == (System_Lazy_Dictionary_string__bool___o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     System_Lazy<object>__get_Value
                               ((System_Lazy_object__o *)pSVar2,
                                Method_System_Lazy<Dictionary<string,_bool>>_get_Value__),
           pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0))
        goto LAB_0368a3b8;
        System_Collections_Generic_Dictionary<object,_bool>__set_Item
                  (pSVar3,(Il2CppObject *)OGPGLGPMEPD,CJNHFNHJHPE,
                   Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__);
        OCHIFKHFMAC__PFFOOLHOCKA(__this,method_00);
      }
      return;
    }
  }
LAB_0368a3b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool MKCFGBIFHJD()  [RVA 0x358A59C]
// OCHIFKHFMAC$$MKCFGBIFHJD @ RVA 0x358A59C

bool OCHIFKHFMAC__MKCFGBIFHJD(OCHIFKHFMAC_o *__this,MethodInfo *method)

{
  return (__this->fields)._GOJOEOMCBFI_k__BackingField;
}


// ===== public bool EBACKKEEGEN(string OGPGLGPMEPD)  [RVA 0x358A5A4]
// OCHIFKHFMAC$$EBACKKEEGEN @ RVA 0x358A5A4

bool OCHIFKHFMAC__EBACKKEEGEN(OCHIFKHFMAC_o *__this,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Lazy_Dictionary_string__bool___o *__this_00;
  Il2CppObject *dictionary;
  
  if ((DAT_04568d33 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_bool>__
                );
    FUN_01bab630(&Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    DAT_04568d33 = 1;
  }
  __this_00 = (__this->fields).MDNPGDCCAEA;
  if (__this_00 != (System_Lazy_Dictionary_string__bool___o *)0x0) {
    dictionary = System_Lazy<object>__get_Value
                           ((System_Lazy_object__o *)__this_00,
                            Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    bVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object,_bool>
                      ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)dictionary,
                       (Il2CppObject *)OGPGLGPMEPD,true,
                       Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_bool>__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PFFOOLHOCKA()  [RVA 0x358A3BC]
// OCHIFKHFMAC$$PFFOOLHOCKA @ RVA 0x358A3BC

void OCHIFKHFMAC__PFFOOLHOCKA(OCHIFKHFMAC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Lazy_Dictionary_string__bool___o *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_String_o *pSVar2;
  PDFMAHPKIEI_o *pPVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d34 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>_get_Count__);
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568d34 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MDNPGDCCAEA;
  if (__this_00 == (System_Lazy_Dictionary_string__bool___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              System_Lazy<object>__get_Value
                        ((System_Lazy_object__o *)__this_00,
                         Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
  if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = System_Collections_Generic_Dictionary<object,_bool>__get_Count
                    (__this_01,
                     Method_System_Collections_Generic_Dictionary<string,_bool>_get_Count__);
  if (iVar1 == 0) {
    pPVar3 = PDFMAHPKIEI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pPVar3 == (PDFMAHPKIEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    PDFMAHPKIEI__HHFEEKFDDIF(pPVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
  }
  else {
    if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Newtonsoft_Json_JsonConvert__SerializeObject
                       ((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    pSVar2 = PCOEHCPGBBG__EBPNANKNGPD(pSVar2,(MethodInfo *)0x0);
    pPVar3 = PDFMAHPKIEI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pPVar3 == (PDFMAHPKIEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    PDFMAHPKIEI__HHFEEKFDDIF(pPVar3,pSVar2,(MethodInfo *)0x0);
  }
  return;
}


// ===== public void CACFJDOPEDP(string OGPGLGPMEPD)  [RVA 0x358A624]
// OCHIFKHFMAC$$CACFJDOPEDP @ RVA 0x358A624

void OCHIFKHFMAC__CACFJDOPEDP(OCHIFKHFMAC_o *__this,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  OCHIFKHFMAC__IBLPHDKKLKE(__this,OGPGLGPMEPD,false,in_x3);
  return;
}


// ===== public void OMIAPKAJFEA(string OGPGLGPMEPD)  [RVA 0x358A62C]
// OCHIFKHFMAC$$OMIAPKAJFEA @ RVA 0x358A62C

void OCHIFKHFMAC__OMIAPKAJFEA(OCHIFKHFMAC_o *__this,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  OCHIFKHFMAC__IBLPHDKKLKE(__this,OGPGLGPMEPD,true,in_x3);
  return;
}


// ===== private Dictionary<string, bool> OBAAEJBBGAI()  [RVA 0x358A634]
// OCHIFKHFMAC$$OBAAEJBBGAI @ RVA 0x358A634

System_Collections_Generic_Dictionary_string__bool__o *
OCHIFKHFMAC__OBAAEJBBGAI(OCHIFKHFMAC_o *__this,MethodInfo *method)

{
  bool bVar1;
  PDFMAHPKIEI_o *__this_00;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_string__bool__o *__this_01;
  
  if ((DAT_04568d35 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_bool>_TypeInfo);
                    /* try { // try from 0368a65c to 0378a797 has its CatchHandler @ 0368a65c
                       catch() { ... } // from try @ 0368a65c with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a868 with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a8f0 with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a8f8 with catch @ 0368a65c
                       catch() { ... } // from try @ 0368a9a0 with catch @ 0368a65c */
    FUN_01bab630(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_bool>>__);
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    DAT_04568d35 = 1;
  }
  __this_00 = PDFMAHPKIEI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (PDFMAHPKIEI_o *)0x0) {
    pSVar2 = PDFMAHPKIEI__KMGABJDPMBD(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrWhiteSpace(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = (System_Collections_Generic_Dictionary_string__bool__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_bool>_TypeInfo);
      System_Collections_Generic_Dictionary<object,_bool>___ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 Method_System_Collections_Generic_Dictionary<string,_bool>__ctor__);
    }
    else {
      pSVar2 = PCOEHCPGBBG__HIPDPNHLHAC(pSVar2,(MethodInfo *)0x0);
      if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = (System_Collections_Generic_Dictionary_string__bool__o *)
                  Newtonsoft_Json_JsonConvert__DeserializeObject<object>
                            (pSVar2,
                             Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_bool>>__
                            );
      if (__this_01 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
        __this_01 = (System_Collections_Generic_Dictionary_string__bool__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_bool>_TypeInfo)
        ;
        System_Collections_Generic_Dictionary<object,_bool>___ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   Method_System_Collections_Generic_Dictionary<string,_bool>__ctor__);
      }
    }
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private PDFMAHPKIEI COPDGBDLGEP()  [RVA 0x358A61C]
// OCHIFKHFMAC$$COPDGBDLGEP @ RVA 0x358A61C

PDFMAHPKIEI_o * OCHIFKHFMAC__COPDGBDLGEP(OCHIFKHFMAC_o *__this,MethodInfo *method)

{
  PDFMAHPKIEI_o *pPVar1;
  
  pPVar1 = PDFMAHPKIEI__AIHNLLGNBLC((MethodInfo *)0x0);
  return pPVar1;
}


// ===== public void .ctor()  [RVA 0x358A820]
// OCHIFKHFMAC$$.ctor @ RVA 0x358A820

void OCHIFKHFMAC___ctor(OCHIFKHFMAC_o *__this,MethodInfo *method)

{
  System_Func_T__o *valueFactory;
  System_Lazy_Dictionary_string__bool___o *__this_00;
  
                    /* try { // try from 0368a820 to 0378a827 has its CatchHandler @ 0368a910 */
                    /* try { // try from 0368a834 to 0378a83b has its CatchHandler @ 0368a90c */
                    /* try { // try from 0368a840 to 0378a867 has its CatchHandler @ 0368a91c */
  if ((DAT_04568d36 & 1) == 0) {
                    /* try { // try from 0368a868 to 0378a8e7 has its CatchHandler @ 0368a65c */
    FUN_01bab630(&System_Func<Dictionary<string,_bool>>_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<Dictionary<string,_bool>>__ctor__);
    FUN_01bab630(&System_Lazy<Dictionary<string,_bool>>_TypeInfo);
    FUN_01bab630(&Method_OCHIFKHFMAC_OBAAEJBBGAI__);
    DAT_04568d36 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  valueFactory = (System_Func_T__o *)
                 thunk_FUN_01bda818(System_Func<Dictionary<string,_bool>>_TypeInfo);
  System_Func<object>___ctor();
  __this_00 = (System_Lazy_Dictionary_string__bool___o *)
              thunk_FUN_01bda818(System_Lazy<Dictionary<string,_bool>>_TypeInfo);
  System_Lazy<object>___ctor
            ((System_Lazy_object__o *)__this_00,valueFactory,
             Method_System_Lazy<Dictionary<string,_bool>>__ctor__);
  (__this->fields).MDNPGDCCAEA = __this_00;
                    /* try { // try from 0368a8e8 to 0378a8eb has its CatchHandler @ 0368a908 */
                    /* try { // try from 0368a8ec to 0378a8ef has its CatchHandler @ 0368a904 */
                    /* try { // try from 0368a8f0 to 0378a8f3 has its CatchHandler @ 0368a65c */
                    /* try { // try from 0368a8f4 to 0378a8f7 has its CatchHandler @ 0368a900 */
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}


// ===== public void DKELKKLHOGO(bool CJNHFNHJHPE)  [RVA 0x358A8F8]
// OCHIFKHFMAC$$DKELKKLHOGO @ RVA 0x358A8F8

void OCHIFKHFMAC__DKELKKLHOGO(OCHIFKHFMAC_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 0368a8f8 to 0378a92b has its CatchHandler @ 0368a65c */
  (__this->fields)._GOJOEOMCBFI_k__BackingField = CJNHFNHJHPE;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a8f4 with catch @ 0368a900
                        */
  return;
}

