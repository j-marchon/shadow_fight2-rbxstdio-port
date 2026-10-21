// OPNFCOGALLI$$JAONOJLAPOG @ RVA 0x3107184

CNDPAJOLKFN_o *
OPNFCOGALLI__JAONOJLAPOG
          (OPNFCOGALLI_o *__this,int32_t DPJIDNBJIBG,int32_t MBKEOJBKPFD,MethodInfo *method)

{
  MBDJMJLHFOO_o *__this_00;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar1;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_01;
  CNDPAJOLKFN_o *PHCOHKNFGLE;
  CNDPAJOLKFN_o *__this_02;
  
  if ((DAT_04566516 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    DAT_04566516 = 1;
  }
  __this_00 = (__this->fields).EJNOBBDDBDO;
  if (__this_00 != (MBDJMJLHFOO_o *)0x0) {
    pMVar1 = MBDJMJLHFOO__HBMICHOLLMF(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    if (pMVar1 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) {
      __this_01 = (pMVar1->fields).KOANCCDDBDA;
      if (__this_01 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) goto LAB_03207258;
      if (MBKEOJBKPFD < (__this_01->fields)._size) {
        PHCOHKNFGLE = (CNDPAJOLKFN_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,MBKEOJBKPFD,
                                 Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        __this_02 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
        CNDPAJOLKFN___ctor(__this_02,PHCOHKNFGLE,(MethodInfo *)0x0);
        return __this_02;
      }
    }
    return (CNDPAJOLKFN_o *)0x0;
  }
LAB_03207258:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

