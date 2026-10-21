// EEOMEMBBGNA$$LGLJPEHHFAO @ RVA 0x32F6960

void EEOMEMBBGNA__LGLJPEHHFAO(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  System_Func_MGDJPGGPDJI__int__o **ppSVar1;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *pIVar2;
  KCJMBDCBIIF_o *__this_01;
  CBPENMDOJDB_o *pCVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppObject *extraout_x1_01;
  Il2CppObject *extraout_x1_02;
  MethodInfo *method_00;
  OJEHKJHEBID_o *pOVar4;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *source_00;
  int index;
  System_Func_MGDJPGGPDJI__int__o *keySelector;
  int iVar5;
  float fVar6;
  int iVar7;
  
                    /* try { // try from 033f6970 to 034f6973 has its CatchHandler @ 033f6990 */
                    /* try { // try from 033f6974 to 034f6997 has its CatchHandler @ 033f66f8 */
  if ((DAT_045676aa & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<MGDJPGGPDJI,_int>__);
                    /* catch() { ... } // from try @ 033f6970 with catch @ 033f6990 */
                    /* try { // try from 033f6998 to 034f69ab has its CatchHandler @ 033f6a10 */
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MGDJPGGPDJI>__);
    FUN_01bab630(&System_Func<MGDJPGGPDJI,_int>_TypeInfo);
                    /* catch() { ... } // from try @ 033f68e8 with catch @ 033f69ac
                       try { // try from 033f69ac to 034f69c7 has its CatchHandler @ 033f66f8 */
                    /* catch() { ... } // from try @ 033f67c4 with catch @ 033f69b0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Count__);
                    /* try { // try from 033f69c8 to 034f69cb has its CatchHandler @ 033f69ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Item__);
                    /* try { // try from 033f69cc to 034f69f3 has its CatchHandler @ 033f66f8 */
    FUN_01bab630(&Method_EEOMEMBBGNA_<>c_PNADOAKANHE__);
    FUN_01bab630(&EEOMEMBBGNA_<>c_TypeInfo);
    DAT_045676aa = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033f69c8 with catch @ 033f69ec */
  pOVar4 = (__this->fields).MICFEIBNOLM;
  if (pOVar4 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
                    /* try { // try from 033f69f4 to 034f69fb has its CatchHandler @ 033f6a10 */
                    /* try { // try from 033f69fc to 034f6a07 has its CatchHandler @ 033f66f8 */
  source_00 = (pOVar4->fields).MABPCBMOECE;
                    /* try { // try from 033f6a08 to 034f6a0f has its CatchHandler @ 033f6a10 */
  if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EEOMEMBBGNA_<>c_TypeInfo,method);
                    /* catch() { ... } // from try @ 033f6940 with catch @ 033f6a10
                       catch() { ... } // from try @ 033f6998 with catch @ 033f6a10
                       catch() { ... } // from try @ 033f69f4 with catch @ 033f6a10
                       catch() { ... } // from try @ 033f6a08 with catch @ 033f6a10 */
    method = extraout_x1_00;
  }
  keySelector = EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__79_0;
  if (keySelector == (System_Func_MGDJPGGPDJI__int__o *)0x0) {
    if ((EEOMEMBBGNA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EEOMEMBBGNA_<>c_TypeInfo,method);
    }
    keySelector = (System_Func_MGDJPGGPDJI__int__o *)
                  thunk_FUN_01bda818(System_Func<MGDJPGGPDJI,_int>_TypeInfo);
    System_Func<object,_int>___ctor();
    ppSVar1 = &EEOMEMBBGNA_<>c_TypeInfo->static_fields->__9__79_0;
    *ppSVar1 = keySelector;
    thunk_FUN_01c20e04(ppSVar1,keySelector);
  }
  method_00 = Method_System_Linq_Enumerable_OrderBy<MGDJPGGPDJI,_int>__;
  source = System_Linq_Enumerable__OrderBy<object,_int>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TKey__o *)keySelector,
                      (MethodInfo_1EA43B8 *)
                      Method_System_Linq_Enumerable_OrderBy<MGDJPGGPDJI,_int>__);
  __this_00 = System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         Method_System_Linq_Enumerable_ToList<MGDJPGGPDJI>__);
  if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      iVar5 = 0;
      pIVar2 = extraout_x1_01;
    }
    else {
      index = 0;
      iVar5 = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Item__;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<MGDJPGGPDJI>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_033f6b88;
        iVar7 = *(int *)((long)&pIVar2[2].monitor + 4);
        index = index + 1;
        fVar6 = KFCFGKEHPNK__IJLDCOOMEBN(index,(MethodInfo *)0x0);
        fVar6 = fVar6 * (float)iVar7;
        iVar7 = -0x80000000;
        if (fVar6 != INFINITY) {
          iVar7 = (int)fVar6;
        }
        iVar5 = iVar7 + iVar5;
        pIVar2 = extraout_x1_02;
      } while (index < (__this_00->fields)._size);
    }
    pOVar4 = (__this->fields).MICFEIBNOLM;
    if (pOVar4 != (OJEHKJHEBID_o *)0x0) {
      (pOVar4->fields).IBFEHEDKGAL = iVar5;
      EEOMEMBBGNA__CBPJBDDLNFI(__this,pIVar2,method_00);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033f6b50 to 034f6e43 has its CatchHandler @ 033f6b50
                       catch() { ... } // from try @ 033f6b50 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f6fb8 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f70a0 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f70a8 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f70b4 with catch @ 033f6b50
                       catch() { ... } // from try @ 033f718c with catch @ 033f6b50 */
      __this_01 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
      if (__this_01 != (KCJMBDCBIIF_o *)0x0) {
        pCVar3 = KCJMBDCBIIF__ILBKEICPFNC(__this_01,(__this->fields).NGOFLMHNOGM,(MethodInfo *)0x0);
        if (pCVar3 == (CBPENMDOJDB_o *)0x0) {
          return;
        }
        (pCVar3->fields).NLLKMEMKBAF = iVar5;
        return;
      }
    }
  }
LAB_033f6b88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

