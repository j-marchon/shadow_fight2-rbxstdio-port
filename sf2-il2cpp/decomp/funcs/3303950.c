// AEGOLGIJEBI.BPIAJOBCKFC$$EDKNPFPLDHP @ RVA 0x3303950

System_Collections_Generic_List_AEGOLGIJEBI_BPIAJOBCKFC__o *
AEGOLGIJEBI_BPIAJOBCKFC__EDKNPFPLDHP
          (System_String_o *JGHIJMJNJLE,int32_t FEDCJPALCBN,int32_t PIMDPNDCDLA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint16_t value;
  System_Collections_Generic_List_AEGOLGIJEBI_BPIAJOBCKFC__o *__this;
  System_String_o *NLKOFFFAFHM;
  AEGOLGIJEBI_BPIAJOBCKFC_o *__this_00;
  MethodInfo *method_00;
  AEGOLGIJEBI_BPIAJOBCKFC_array *pAVar4;
  int startIndex;
  
  if ((DAT_0456773b & 1) == 0) {
                    /* try { // try from 03403998 to 0350399f has its CatchHandler @ 03403ae8 */
    FUN_01bab630(&AEGOLGIJEBI_BPIAJOBCKFC_TypeInfo);
    FUN_01bab630(&char_TypeInfo);
                    /* try { // try from 034039b0 to 035039bb has its CatchHandler @ 03403ae0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_BPIAJOBCKFC>_Add__);
                    /* try { // try from 034039bc to 03503a0f has its CatchHandler @ 03403850 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_BPIAJOBCKFC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AEGOLGIJEBI_BPIAJOBCKFC>_TypeInfo);
    FUN_01bab630(&StringLiteral_2192);
    DAT_0456773b = 1;
  }
  __this = (System_Collections_Generic_List_AEGOLGIJEBI_BPIAJOBCKFC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AEGOLGIJEBI_BPIAJOBCKFC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<AEGOLGIJEBI_BPIAJOBCKFC>__ctor__);
  if (FEDCJPALCBN <= PIMDPNDCDLA) {
    if (JGHIJMJNJLE == (System_String_o *)0x0) {
LAB_03403b44:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03403920 with catch @ 03403b44 */
      FUN_01bab8c8();
    }
                    /* try { // try from 03403a10 to 03503a17 has its CatchHandler @ 03403a80 */
    startIndex = -1;
    do {
                    /* try { // try from 03403a28 to 03503a33 has its CatchHandler @ 03403a78 */
      value = System_String__get_Chars(JGHIJMJNJLE,FEDCJPALCBN,(MethodInfo *)0x0);
                    /* try { // try from 03403a34 to 03503a67 has its CatchHandler @ 03403850 */
      if (StringLiteral_2192 == (System_String_o *)0x0) goto LAB_03403b44;
      bVar3 = System_String__Contains(StringLiteral_2192,value,(MethodInfo *)0x0);
      if (bVar3) {
        return __this;
      }
      if ((char_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03403a68 to 03503a6b has its CatchHandler @ 03403b40 */
                    /* try { // try from 03403a6c to 03503a6f has its CatchHandler @ 03403ae4 */
      bVar3 = System_Char__IsWhiteSpace(value,(MethodInfo *)0x0);
                    /* try { // try from 03403a70 to 03503a73 has its CatchHandler @ 03403a7c */
      if (bVar3) {
                    /* try { // try from 03403a74 to 03503a97 has its CatchHandler @ 03403850 */
        if (-1 < startIndex) {
                    /* catch() { ... } // from try @ 03403a28 with catch @ 03403a78 */
          method_00 = (MethodInfo *)(ulong)(uint)(FEDCJPALCBN - startIndex);
                    /* catch() { ... } // from try @ 03403a70 with catch @ 03403a7c */
                    /* catch() { ... } // from try @ 03403a10 with catch @ 03403a80 */
          NLKOFFFAFHM = System_String__Substring
                                  (JGHIJMJNJLE,startIndex,FEDCJPALCBN - startIndex,(MethodInfo *)0x0
                                  );
                    /* try { // try from 03403a98 to 03503a9b has its CatchHandler @ 03403ac4 */
          __this_00 = (AEGOLGIJEBI_BPIAJOBCKFC_o *)
                      thunk_FUN_01bda818(AEGOLGIJEBI_BPIAJOBCKFC_TypeInfo);
                    /* try { // try from 03403a9c to 03503acb has its CatchHandler @ 03403850 */
          AEGOLGIJEBI_BPIAJOBCKFC___ctor(__this_00,NLKOFFFAFHM,method_00);
          lVar2 = Method_System_Collections_Generic_List<AEGOLGIJEBI_BPIAJOBCKFC>_Add__;
          if (__this == (System_Collections_Generic_List_AEGOLGIJEBI_BPIAJOBCKFC__o *)0x0)
          goto LAB_03403b44;
          pAVar4 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pAVar4 == (AEGOLGIJEBI_BPIAJOBCKFC_array *)0x0) goto LAB_03403b44;
                    /* catch() { ... } // from try @ 03403a98 with catch @ 03403ac4 */
          uVar1 = (__this->fields)._size;
                    /* try { // try from 03403acc to 03503adf has its CatchHandler @ 03403ba4 */
          if (uVar1 < (uint)pAVar4->max_length) {
            (__this->fields)._size = uVar1 + 1;
                    /* catch() { ... } // from try @ 034039b0 with catch @ 03403ae0
                       try { // try from 03403ae0 to 03503aff has its CatchHandler @ 03403850 */
            pAVar4->m_Items[(int)uVar1] = __this_00;
                    /* catch() { ... } // from try @ 03403a6c with catch @ 03403ae4 */
                    /* catch() { ... } // from try @ 03403998 with catch @ 03403ae8 */
            thunk_FUN_01c20e04(pAVar4->m_Items + (int)uVar1,__this_00);
          }
          else {
                    /* try { // try from 03403b00 to 03503b03 has its CatchHandler @ 03403b20 */
                    /* try { // try from 03403b04 to 03503b27 has its CatchHandler @ 03403850 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          startIndex = -1;
        }
      }
      else if (startIndex < 0) {
        startIndex = FEDCJPALCBN;
      }
      FEDCJPALCBN = FEDCJPALCBN + 1;
                    /* catch() { ... } // from try @ 03403b00 with catch @ 03403b20 */
    } while (FEDCJPALCBN <= PIMDPNDCDLA);
  }
                    /* try { // try from 03403b28 to 03503b3b has its CatchHandler @ 03403ba4 */
                    /* catch() { ... } // from try @ 03403938 with catch @ 03403b3c
                       try { // try from 03403b3c to 03503b5b has its CatchHandler @ 03403850 */
                    /* catch() { ... } // from try @ 03403a68 with catch @ 03403b40 */
  return __this;
}

