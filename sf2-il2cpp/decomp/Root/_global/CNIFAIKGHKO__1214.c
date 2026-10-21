// TypeDefIndex 1214
// Namespace: 
// public class CNIFAIKGHKO
// Fields:
//   private readonly Dictionary<long, IFFFKKMMKFO> NEJBDJKOGOM; // 0x10
//   private List<IFFFKKMMKFO> ELMHAOJGABL; // 0x18

// ===== public void JOMFHMDCMNG(GKLPDMLELJF HEHMPFLAEGE, bool NMOGIOHONKG)  [RVA 0x312E908]
// CNIFAIKGHKO$$JOMFHMDCMNG @ RVA 0x312E908

void CNIFAIKGHKO__JOMFHMDCMNG
               (CNIFAIKGHKO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,bool NMOGIOHONKG,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  IFFFKKMMKFO_o *local_28;
  
  if ((DAT_045666ae & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
    FUN_01bab630(&StringLiteral_12225/*"SortedPlayersCollection::UpdatePlayer: tried to update non-presented player, inserted new one (not crash)"*/);
    DAT_045666ae = 1;
  }
  local_28 = (IFFFKKMMKFO_o *)0x0;
  if ((HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) &&
     (__this_00 = (__this->fields).NEJBDJKOGOM,
     __this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0)) {
    method_00 = (MethodInfo *)&stack0xffffffffffffffd8;
    System_Collections_Generic_Dictionary<long,_object>__TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (HEHMPFLAEGE->fields).ANAJGHJEEOC,(Il2CppObject **)method_00,
               Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
    if (local_28 == (IFFFKKMMKFO_o *)0x0) {
      CNIFAIKGHKO__ACLHEAGHPNJ(__this,HEHMPFLAEGE,method_00);
      if (NMOGIOHONKG) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_12225/*"SortedPlayersCollection::UpdatePlayer: tried to update non-presented player, inserted new one (not crash)"*/,(MethodInfo *)0x0);
      }
    }
    else {
      IFFFKKMMKFO__LLCONNGHGKD(local_28,HEHMPFLAEGE,(MethodInfo *)0x0);
    }
    ppSVar1 = &(__this->fields).ELMHAOJGABL;
    *ppSVar1 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0;
    thunk_FUN_01c20e04(ppSVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LBHKALHJJHP(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x312EAA8]
// CNIFAIKGHKO$$LBHKALHJJHP @ RVA 0x312EAA8

void CNIFAIKGHKO__LBHKALHJJHP(CNIFAIKGHKO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  IFFFKKMMKFO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_01;
  int64_t key;
  
  if ((DAT_045666af & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_Add__);
    FUN_01bab630(&IFFFKKMMKFO_TypeInfo);
                    /* try { // try from 0322eae0 to 0332eb93 has its CatchHandler @ 0322eae0
                       catch() { ... } // from try @ 0322eae0 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ebb4 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ebe8 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ec10 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ec40 with catch @ 0322eae0 */
    DAT_045666af = 1;
  }
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    __this_01 = (__this->fields).NEJBDJKOGOM;
    key = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
    __this_00 = (IFFFKKMMKFO_o *)thunk_FUN_01bda818(IFFFKKMMKFO_TypeInfo);
    IFFFKKMMKFO___ctor(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    if (__this_01 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
      System_Collections_Generic_Dictionary<long,_object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,key,
                 (Il2CppObject *)__this_00,
                 Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_Add__);
      ppSVar1 = &(__this->fields).ELMHAOJGABL;
      *ppSVar1 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0;
      thunk_FUN_01c20e04(ppSVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IFFFKKMMKFO KNMENIBLFGF(long OGPGLGPMEPD)  [RVA 0x312EB54]
// CNIFAIKGHKO$$KNMENIBLFGF @ RVA 0x312EB54

IFFFKKMMKFO_o *
CNIFAIKGHKO__KNMENIBLFGF(CNIFAIKGHKO_o *__this,int64_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  IFFFKKMMKFO_o *local_28;
  
  if ((DAT_045666b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
    DAT_045666b0 = 1;
  }
  local_28 = (IFFFKKMMKFO_o *)0x0;
  __this_00 = (__this->fields).NEJBDJKOGOM;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
                    /* try { // try from 0322eb94 to 0332eb9b has its CatchHandler @ 0322ebf4 */
                    /* try { // try from 0322eba8 to 0332ebb3 has its CatchHandler @ 0322ebec */
    System_Collections_Generic_Dictionary<long,_object>__TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,OGPGLGPMEPD,
               (Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
                    /* try { // try from 0322ebb4 to 0332ebe3 has its CatchHandler @ 0322eae0 */
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IFFFKKMMKFO KNMENIBLFGF(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x312EBC4]
// CNIFAIKGHKO$$KNMENIBLFGF @ RVA 0x312EBC4

IFFFKKMMKFO_o *
CNIFAIKGHKO__KNMENIBLFGF(CNIFAIKGHKO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  IFFFKKMMKFO_o *pIVar1;
  
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    pIVar1 = CNIFAIKGHKO__KNMENIBLFGF(__this,(HEHMPFLAEGE->fields).ANAJGHJEEOC,method);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LDJLMEFOMLG()  [RVA 0x312EBDC]
// CNIFAIKGHKO$$LDJLMEFOMLG @ RVA 0x312EBDC

int32_t CNIFAIKGHKO__LDJLMEFOMLG(CNIFAIKGHKO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0322ebe4 to 0332ebe7 has its CatchHandler @ 0322ebf0 */
                    /* try { // try from 0322ebe8 to 0332ec0b has its CatchHandler @ 0322eae0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322eba8 with catch @ 0322ebec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322ebe4 with catch @ 0322ebf0
                        */
  if ((DAT_045666b1 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322eb94 with catch @ 0322ebf4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    DAT_045666b1 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NEJBDJKOGOM;
                    /* try { // try from 0322ec0c to 0332ec0f has its CatchHandler @ 0322ec30 */
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
                    /* try { // try from 0322ec10 to 0332ec37 has its CatchHandler @ 0322eae0 */
    iVar1 = System_Collections_Generic_Dictionary<long,_object>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x312EC2C]
// CNIFAIKGHKO$$.ctor @ RVA 0x312EC2C

void CNIFAIKGHKO___ctor(CNIFAIKGHKO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  
                    /* catch() { ... } // from try @ 0322ec0c with catch @ 0322ec30 */
                    /* try { // try from 0322ec38 to 0332ec3f has its CatchHandler @ 0322ec54 */
                    /* try { // try from 0322ec40 to 0332ec4b has its CatchHandler @ 0322eae0 */
                    /* try { // try from 0322ec4c to 0332ec53 has its CatchHandler @ 0322ec54 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322ec38 with catch @ 0322ec54
                       catch(type#2 @ 00000000) { ... } // from try @ 0322ec4c with catch @ 0322ec54
                        */
  if ((DAT_045666b2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TypeInfo);
    DAT_045666b2 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TypeInfo);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>__ctor__);
  (__this->fields).NEJBDJKOGOM = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  ppSVar1 = &(__this->fields).ELMHAOJGABL;
  *ppSVar1 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public bool NFJIIGCLFOF(NODLJPNGNBG HEHMPFLAEGE)  [RVA 0x312ECC4]
// CNIFAIKGHKO$$NFJIIGCLFOF @ RVA 0x312ECC4

bool CNIFAIKGHKO__NFJIIGCLFOF(CNIFAIKGHKO_o *__this,NODLJPNGNBG_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  
  if ((DAT_045666b3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__);
    DAT_045666b3 = 1;
  }
  if ((HEHMPFLAEGE != (NODLJPNGNBG_o *)0x0) &&
     (__this_00 = (__this->fields).NEJBDJKOGOM,
     __this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (HEHMPFLAEGE->fields).ANAJGHJEEOC,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ACLHEAGHPNJ(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x312E9F8]
// CNIFAIKGHKO$$ACLHEAGHPNJ @ RVA 0x312E9F8

void CNIFAIKGHKO__ACLHEAGHPNJ(CNIFAIKGHKO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  IFFFKKMMKFO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  System_Collections_Generic_Dictionary_T__U__o *FBEEEALALMJ;
  int64_t PMACBPAMPJA;
  
  if ((DAT_045666b4 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<long,_IFFFKKMMKFO>__);
    FUN_01bab630(&IFFFKKMMKFO_TypeInfo);
    DAT_045666b4 = 1;
  }
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    FBEEEALALMJ = (System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).NEJBDJKOGOM;
    PMACBPAMPJA = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
    __this_00 = (IFFFKKMMKFO_o *)thunk_FUN_01bda818(IFFFKKMMKFO_TypeInfo);
    IFFFKKMMKFO___ctor(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    CAOJHCDPDBH__GKONJMIPMEH<long,_object>
              (FBEEEALALMJ,PMACBPAMPJA,(Il2CppObject *)__this_00,
               Method_CAOJHCDPDBH_GKONJMIPMEH<long,_IFFFKKMMKFO>__);
    ppSVar1 = &(__this->fields).ELMHAOJGABL;
    *ppSVar1 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0;
    thunk_FUN_01c20e04(ppSVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<IFFFKKMMKFO> ACBMLHJIFMD()  [RVA 0x312ED20]
// CNIFAIKGHKO$$ACBMLHJIFMD @ RVA 0x312ED20

System_Collections_Generic_List_IFFFKKMMKFO__o *
CNIFAIKGHKO__ACBMLHJIFMD(CNIFAIKGHKO_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  CNIFAIKGHKO__AOFMCBBKHEE(__this,(System_Comparison_IFFFKKMMKFO__o *)0x0,false,in_x3);
  return (__this->fields).ELMHAOJGABL;
}


// ===== public bool NFJIIGCLFOF(long OGPGLGPMEPD)  [RVA 0x312EE60]
// CNIFAIKGHKO$$NFJIIGCLFOF @ RVA 0x312EE60

bool CNIFAIKGHKO__NFJIIGCLFOF(CNIFAIKGHKO_o *__this,int64_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  
  if ((DAT_045666b5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__);
    DAT_045666b5 = 1;
  }
  __this_00 = (__this->fields).NEJBDJKOGOM;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       OGPGLGPMEPD,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AOFMCBBKHEE(Comparison<IFFFKKMMKFO> NGDCHEBEAJK, bool KPLMAMOCPHJ)  [RVA 0x312ED40]
// CNIFAIKGHKO$$AOFMCBBKHEE @ RVA 0x312ED40

void CNIFAIKGHKO__AOFMCBBKHEE
               (CNIFAIKGHKO_o *__this,System_Comparison_IFFFKKMMKFO__o *NGDCHEBEAJK,bool KPLMAMOCPHJ
               ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Object_array *collection;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  
  if ((DAT_045666b6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Values__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<IFFFKKMMKFO>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IFFFKKMMKFO>_TypeInfo);
    DAT_045666b6 = 1;
  }
  ppSVar1 = &(__this->fields).ELMHAOJGABL;
  if ((*ppSVar1 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0) && (!KPLMAMOCPHJ)) {
    return;
  }
  __this_00 = (__this->fields).NEJBDJKOGOM;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
    source = System_Collections_Generic_Dictionary<long,_object>__get_Values
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Values__
                       );
    collection = System_Linq_Enumerable__ToArray<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            Method_System_Linq_Enumerable_ToArray<IFFFKKMMKFO>__);
    __this_01 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IFFFKKMMKFO>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<IFFFKKMMKFO>__ctor__);
    *ppSVar1 = __this_01;
    thunk_FUN_01c20e04(ppSVar1,__this_01);
    if (NGDCHEBEAJK == (System_Comparison_IFFFKKMMKFO__o *)0x0) {
      return;
    }
    if (*ppSVar1 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)*ppSVar1,
                 (System_Comparison_T__o *)NGDCHEBEAJK,
                 Method_System_Collections_Generic_List<IFFFKKMMKFO>_Sort__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IFFFKKMMKFO JKFKGCPILBE(int OGPGLGPMEPD, Comparison<IFFFKKMMKFO> NGDCHEBEAJK)  [RVA 0x312EEB8]
// CNIFAIKGHKO$$JKFKGCPILBE @ RVA 0x312EEB8

IFFFKKMMKFO_o *
CNIFAIKGHKO__JKFKGCPILBE
          (CNIFAIKGHKO_o *__this,int32_t OGPGLGPMEPD,System_Comparison_IFFFKKMMKFO__o *NGDCHEBEAJK,
          MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  IFFFKKMMKFO_o *pIVar2;
  
  if ((DAT_045666b7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
    DAT_045666b7 = 1;
  }
  __this_00 = (__this->fields).NEJBDJKOGOM;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<long,_object>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    if (iVar1 <= OGPGLGPMEPD) {
      return (IFFFKKMMKFO_o *)0x0;
    }
    CNIFAIKGHKO__AOFMCBBKHEE(__this,NGDCHEBEAJK,false,method);
    __this_01 = (__this->fields).ELMHAOJGABL;
    if (__this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0) {
      pIVar2 = (IFFFKKMMKFO_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,OGPGLGPMEPD,
                          Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NFJIIGCLFOF(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x312EF6C]
// CNIFAIKGHKO$$NFJIIGCLFOF @ RVA 0x312EF6C

bool CNIFAIKGHKO__NFJIIGCLFOF(CNIFAIKGHKO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  
  if ((DAT_045666b8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__);
    DAT_045666b8 = 1;
  }
  if ((HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) &&
     (__this_00 = (__this->fields).NEJBDJKOGOM,
     __this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (HEHMPFLAEGE->fields).ANAJGHJEEOC,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_ContainsKey__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IFFFKKMMKFO KNMENIBLFGF(NODLJPNGNBG HEHMPFLAEGE)  [RVA 0x312EFC8]
// CNIFAIKGHKO$$KNMENIBLFGF @ RVA 0x312EFC8

IFFFKKMMKFO_o *
CNIFAIKGHKO__KNMENIBLFGF(CNIFAIKGHKO_o *__this,NODLJPNGNBG_o *HEHMPFLAEGE,MethodInfo *method)

{
  IFFFKKMMKFO_o *pIVar1;
  
  if (HEHMPFLAEGE != (NODLJPNGNBG_o *)0x0) {
    pIVar1 = CNIFAIKGHKO__KNMENIBLFGF(__this,(HEHMPFLAEGE->fields).ANAJGHJEEOC,method);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

