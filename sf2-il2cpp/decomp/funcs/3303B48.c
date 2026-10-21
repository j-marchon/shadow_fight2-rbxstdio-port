// AEGOLGIJEBI.JDFHIMLMEJF$$BAANAFPJKKK @ RVA 0x3303B48

AEGOLGIJEBI_BPIAJOBCKFC_o *
AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
          (AEGOLGIJEBI_JDFHIMLMEJF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_String_o *key;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  
                    /* try { // try from 03403b5c to 03503b5f has its CatchHandler @ 03403b80 */
                    /* try { // try from 03403b60 to 03503b87 has its CatchHandler @ 03403850 */
  if ((DAT_04567739 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_AEGOLGIJEBI_BPIAJOBCKFC>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_AEGOLGIJEBI_BPIAJOBCKFC>_get_Item__
                );
                    /* catch() { ... } // from try @ 03403b5c with catch @ 03403b80 */
    DAT_04567739 = 1;
  }
  if (KGLJICLJHEL != (System_String_o *)0x0) {
                    /* try { // try from 03403b88 to 03503b8f has its CatchHandler @ 03403ba4 */
                    /* try { // try from 03403b90 to 03503b9b has its CatchHandler @ 03403850 */
    key = System_String__ToLower(KGLJICLJHEL,(MethodInfo *)0x0);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HLDHALMGJPF
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 03403b9c to 03503ba3 has its CatchHandler @ 03403ba4 */
                    /* catch() { ... } // from try @ 03403acc with catch @ 03403ba4
                       catch() { ... } // from try @ 03403b28 with catch @ 03403ba4
                       catch() { ... } // from try @ 03403b88 with catch @ 03403ba4
                       catch() { ... } // from try @ 03403b9c with catch @ 03403ba4 */
                    /* try { // try from 03403ba8 to 03503d8b has its CatchHandler @ 03403ba8
                       catch() { ... } // from try @ 03403ba8 with catch @ 03403ba8
                       catch() { ... } // from try @ 03403e58 with catch @ 03403ba8
                       catch() { ... } // from try @ 03403f60 with catch @ 03403ba8
                       catch() { ... } // from try @ 0340409c with catch @ 03403ba8
                       catch() { ... } // from try @ 0340415c with catch @ 03403ba8
                       catch() { ... } // from try @ 034041dc with catch @ 03403ba8
                       catch() { ... } // from try @ 0340421c with catch @ 03403ba8
                       catch() { ... } // from try @ 03404238 with catch @ 03403ba8
                       catch() { ... } // from try @ 03404274 with catch @ 03403ba8
                       catch() { ... } // from try @ 03404288 with catch @ 03403ba8
                       catch() { ... } // from try @ 034042bc with catch @ 03403ba8 */
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar3,(Il2CppObject *)key,
                         Method_System_Collections_Generic_Dictionary<string,_AEGOLGIJEBI_BPIAJOBCKFC>_ContainsKey__
                        );
      if (!bVar1) {
        return (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0;
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).HLDHALMGJPF;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pAVar2 = (AEGOLGIJEBI_BPIAJOBCKFC_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar3,(Il2CppObject *)key,
                            Method_System_Collections_Generic_Dictionary<string,_AEGOLGIJEBI_BPIAJOBCKFC>_get_Item__
                           );
        return pAVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

