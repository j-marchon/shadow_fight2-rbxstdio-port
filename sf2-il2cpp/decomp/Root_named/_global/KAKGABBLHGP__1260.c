// TypeDefIndex 1260
// Namespace: 
// public class KAKGABBLHGP
// Fields:
//   public const string FLAPLDGEOKN = "{_$PacksSummarySize}";
//   public readonly bool EDIEJIKLKAF; // 0x10
//   public readonly IReadOnlyList<PackType> LDAAKFJDNJA; // 0x18
//   public readonly string CLHEDDAKFHK; // 0x20

// ===== public void .ctor(bool GELBJEGLNNM, PackType[] LFADLKGPBHC)  [RVA 0x314A560]
// KAKGABBLHGP$$.ctor @ RVA 0x314A560

void KAKGABBLHGP___ctor(KAKGABBLHGP_o *__this,bool GELBJEGLNNM,
                       Core_Configs_Models_PackType_array *LFADLKGPBHC,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar1;
  System_Collections_Generic_IReadOnlyList_PackType__o **ppSVar2;
  
  if ((DAT_045667af & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<PackType>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<PackType>__);
    FUN_01bab630(&string_TypeInfo);
    DAT_045667af = 1;
  }
  (__this->fields).CLHEDDAKFHK = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).EDIEJIKLKAF = GELBJEGLNNM;
  source = System_Linq_Enumerable__Distinct<Int32Enum>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)LFADLKGPBHC,
                      Method_System_Linq_Enumerable_Distinct<PackType>__);
  pSVar1 = System_Linq_Enumerable__ToList<Int32Enum>
                     (source,Method_System_Linq_Enumerable_ToList<PackType>__);
  ppSVar2 = &(__this->fields).LDAAKFJDNJA;
  *ppSVar2 = (System_Collections_Generic_IReadOnlyList_PackType__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void .ctor(bool GELBJEGLNNM, string HPOCBHFNCKD, PackType[] LFADLKGPBHC)  [RVA 0x314A62C]
// KAKGABBLHGP$$.ctor @ RVA 0x314A62C

void KAKGABBLHGP___ctor(KAKGABBLHGP_o *__this,bool GELBJEGLNNM,System_String_o *HPOCBHFNCKD,
                       Core_Configs_Models_PackType_array *LFADLKGPBHC,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *JLNPKGGFFDD;
  Core_Configs_Models_PackType_array *method_00;
  System_String_o **ppSVar2;
  
  method_00 = LFADLKGPBHC;
  if ((DAT_045667b0 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17871/*"downloadAliasOverride '"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    FUN_01bab630(&StringLiteral_814/*"' don't ends with '"*/);
    FUN_01bab630(&StringLiteral_22468/*"{_$PacksSummarySize}"*/);
    DAT_045667b0 = 1;
  }
  KAKGABBLHGP___ctor(__this,GELBJEGLNNM,LFADLKGPBHC,(MethodInfo *)method_00);
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(HPOCBHFNCKD,(MethodInfo *)0x0);
  if (!bVar1) {
    if (HPOCBHFNCKD != (System_String_o *)0x0) {
      bVar1 = System_String__EndsWith(HPOCBHFNCKD,StringLiteral_22468/*"{_$PacksSummarySize}"*/,(MethodInfo *)0x0);
      if (bVar1) goto LAB_0324a7d4;
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = StringLiteral_17871/*"downloadAliasOverride '"*/;
          thunk_FUN_01c20e04(values->m_Items);
                    /* try { // try from 0324a71c to 0334a81f has its CatchHandler @ 0324a71c
                       catch() { ... } // from try @ 0324a71c with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a85c with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a890 with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a8b8 with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a8f8 with catch @ 0324a71c */
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = HPOCBHFNCKD;
            thunk_FUN_01c20e04(values->m_Items + 1,HPOCBHFNCKD);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = StringLiteral_814/*"' don't ends with '"*/;
              thunk_FUN_01c20e04(values->m_Items + 2);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = HPOCBHFNCKD;
                thunk_FUN_01c20e04(values->m_Items + 3,HPOCBHFNCKD);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = StringLiteral_853/*"'!"*/;
                  thunk_FUN_01c20e04();
                  JLNPKGGFFDD = System_String__Concat(values,(MethodInfo *)0x0);
                  KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
                  HPOCBHFNCKD = System_String__Concat
                                          (HPOCBHFNCKD,StringLiteral_22468/*"{_$PacksSummarySize}"*/,(MethodInfo *)0x0);
                  goto LAB_0324a7d4;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0324a7d4:
  ppSVar2 = &(__this->fields).CLHEDDAKFHK;
  *ppSVar2 = HPOCBHFNCKD;
  thunk_FUN_01c20e04(ppSVar2,HPOCBHFNCKD);
  return;
}

