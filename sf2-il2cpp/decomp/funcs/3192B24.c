// ABNLGBHKOCE$$CNBIDPCPDJN @ RVA 0x3192B24

GBKCLIFGIFN_o *
ABNLGBHKOCE__CNBIDPCPDJN
          (System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *PFDEAPMMFAP;
  bool bVar2;
  int32_t iVar3;
  GBKCLIFGIFN_o *pGVar4;
  MethodInfo *method_00;
  undefined1 auVar5 [16];
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = AHEFOIOKDOK;
                    /* try { // try from 03292b28 to 03392b2f has its CatchHandler @ 03292c98 */
                    /* try { // try from 03292b34 to 03392b3b has its CatchHandler @ 03292c90 */
                    /* try { // try from 03292b44 to 03392b4f has its CatchHandler @ 03292c94 */
  if ((DAT_04566a4b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03292b54 to 03392b5f has its CatchHandler @ 03292c8c */
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 03292b98 to 03392bbb has its CatchHandler @ 03292c84 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    auVar5 = FUN_01bab630(&StringLiteral_17320);
    DAT_04566a4b = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
  }
                    /* try { // try from 03292bbc to 03392c57 has its CatchHandler @ 03292944 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
LAB_03292c14:
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    PFDEAPMMFAP = local_60.fields._current;
    if (!bVar2) {
      pGVar4 = (GBKCLIFGIFN_o *)0x0;
      goto LAB_03292cc4;
    }
    if ((IENLNOEDCFF_o *)local_60.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)local_60.fields._current,(MethodInfo *)0x0);
    if (iVar3 == 8) {
      bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03292c58 to 03392c5f has its CatchHandler @ 03292ca8 */
                    /* try { // try from 03292c60 to 03392c63 has its CatchHandler @ 03292c9c */
                    /* try { // try from 03292c64 to 03392c67 has its CatchHandler @ 03292c88 */
                    /* try { // try from 03292c68 to 03392c6b has its CatchHandler @ 03292c80 */
      if (((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
         ((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
                    /* try { // try from 03292c6c to 03392c6f has its CatchHandler @ 03292944 */
                    /* try { // try from 03292c70 to 03392c73 has its CatchHandler @ 03292c7c */
                    /* try { // try from 03292c74 to 03392cb7 has its CatchHandler @ 03292944 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03292c70 with catch @ 03292c7c */
                    /* catch() { ... } // from try @ 03292c68 with catch @ 03292c80 */
                    /* catch() { ... } // from try @ 03292b98 with catch @ 03292c84 */
        UnityEngine_Debug__LogError(StringLiteral_17320,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03292c64 with catch @ 03292c88 */
        goto LAB_03292c14;
      }
                    /* try { // try from 03292cb8 to 03392cbb has its CatchHandler @ 03292ccc */
      pGVar4 = ABNLGBHKOCE__CNBIDPCPDJN
                         (((IENLNOEDCFF_o *)((long)PFDEAPMMFAP + 0x28))->monitor,method_00);
    }
    else {
                    /* catch() { ... } // from try @ 03292b54 with catch @ 03292c8c */
                    /* catch() { ... } // from try @ 03292b34 with catch @ 03292c90 */
                    /* catch() { ... } // from try @ 03292b44 with catch @ 03292c94 */
      if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03292b28 with catch @ 03292c98 */
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 03292c60 with catch @ 03292c9c */
                    /* catch() { ... } // from try @ 03292ac0 with catch @ 03292ca0 */
                    /* catch() { ... } // from try @ 03292a64 with catch @ 03292ca4 */
      pGVar4 = ECENNHNBAME__NBIECKIMNNK((IENLNOEDCFF_o *)PFDEAPMMFAP,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 03292c58 with catch @ 03292ca8 */
    if (pGVar4 != (GBKCLIFGIFN_o *)0x0) {
LAB_03292cc4:
                    /* catch() { ... } // from try @ 03292cb8 with catch @ 03292ccc */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__)
      ;
                    /* try { // try from 03292cd4 to 03392d3b has its CatchHandler @ 03292d50 */
      return pGVar4;
    }
  } while( true );
}

