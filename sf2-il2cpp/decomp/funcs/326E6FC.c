// ECNCJPCKOLN$$BEKNIMCNOFN @ RVA 0x326E6FC

System_Collections_Generic_List_MIBHAJBEMIK__o * ECNCJPCKOLN__BEKNIMCNOFN(MethodInfo *method)

{
  Il2CppType *handle;
  Il2CppClass *pIVar1;
  System_Type_o *enumType;
  System_Array_o *pSVar2;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_T__o *pSVar3;
  
  if ((DAT_04567208 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&MIBHAJBEMIK___TypeInfo);
    FUN_01bab630(&MIBHAJBEMIK_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567208 = 1;
  }
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
  if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
    if ((pSVar3->fields)._size != 0) {
LAB_0336e898:
      if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      return ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
    }
    if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar3 = (System_Collections_Generic_List_T__o *)
               ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
    }
    handle = MIBHAJBEMIK_var;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336e810 to 0346e837 has its CatchHandler @ 0336ecbc */
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pSVar2 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
    pIVar1 = MIBHAJBEMIK___TypeInfo;
    if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
      if (pSVar2 == (System_Array_o *)0x0) {
        collection = (System_Collections_Generic_IEnumerable_T__o *)0x0;
      }
      else {
        collection = (System_Collections_Generic_IEnumerable_T__o *)
                     thunk_FUN_01bda71c(pSVar2,MIBHAJBEMIK___TypeInfo);
        if (collection == (System_Collections_Generic_IEnumerable_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar2,pIVar1);
        }
      }
                    /* try { // try from 0336e86c to 0346e897 has its CatchHandler @ 0336ecb8 */
      System_Collections_Generic_List<Int32Enum>__AddRange
                (pSVar3,collection,Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
      pSVar3 = (System_Collections_Generic_List_T__o *)
               ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI;
      if (pSVar3 != (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List<Int32Enum>__Remove
                  (pSVar3,-1,Method_System_Collections_Generic_List<MIBHAJBEMIK>_Remove__);
        goto LAB_0336e898;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

