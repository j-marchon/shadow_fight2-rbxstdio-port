// ECENNHNBAME$$AOHPFMNMABI @ RVA 0x3014A10

void ECENNHNBAME__AOHPFMNMABI
               (ECENNHNBAME_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04565bca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_AddRange__);
    DAT_04565bca = 1;
  }
  pEVar1 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar1 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
     (__this_00 = (pEVar1->fields).KPFGHBEKJIM,
     __this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

