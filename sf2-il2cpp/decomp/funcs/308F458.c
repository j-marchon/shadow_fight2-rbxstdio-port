// AKOMJPINHEN$$ILGBGMMJHMK @ RVA 0x308F458

int32_t AKOMJPINHEN__ILGBGMMJHMK(AKOMJPINHEN_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *pSVar3;
  
                    /* try { // try from 0318f468 to 0328f48f has its CatchHandler @ 0318f4a4 */
  if ((DAT_04566085 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__);
                    /* try { // try from 0318f490 to 0328f49b has its CatchHandler @ 0318e838 */
    DAT_04566085 = 1;
  }
  pSVar3 = (__this->fields).AGJMNCAMEDP;
  if (pSVar3 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
                    /* try { // try from 0318f49c to 0328f4a3 has its CatchHandler @ 0318f4a4 */
                    /* catch() { ... } // from try @ 0318f320 with catch @ 0318f4a4
                       catch() { ... } // from try @ 0318f3c4 with catch @ 0318f4a4
                       catch() { ... } // from try @ 0318f468 with catch @ 0318f4a4
                       catch() { ... } // from try @ 0318f49c with catch @ 0318f4a4 */
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_int>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,ACCIHBHMFPN,
                       Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_ContainsKey__)
    ;
    if (!bVar1) {
      return 0;
    }
    pSVar3 = (__this->fields).AGJMNCAMEDP;
    if (pSVar3 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<Int32Enum,_int>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,ACCIHBHMFPN
                         ,Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__)
      ;
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

