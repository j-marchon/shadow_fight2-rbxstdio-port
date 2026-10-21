// ABNLGBHKOCE.JBMHDDKONHC$$HMKOGFJKKPH @ RVA 0x3194098

void ABNLGBHKOCE_JBMHDDKONHC__HMKOGFJKKPH
               (ABNLGBHKOCE_JBMHDDKONHC_o *__this,ABNLGBHKOCE_JBMHDDKONHC_o *IBKIPBJJCPG,
               MethodInfo *method)

{
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_00;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar1;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  
  if ((DAT_04566a53 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_AddRange__);
    DAT_04566a53 = 1;
  }
  if ((IBKIPBJJCPG != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) &&
     (__this_00 = (__this->fields).AFFIHBMACFF,
     __this_00 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).AFFIHBMACFF,
               Method_System_Collections_Generic_List<KJFPGDFNFCL>_AddRange__);
    pSVar1 = (__this->fields).KPFGHBEKJIM;
    if (pSVar1 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).KPFGHBEKJIM,
                 Method_System_Collections_Generic_List<IENLNOEDCFF>_AddRange__);
      __this_01 = (__this->fields).NEIJJHEFLHP;
      if (__this_01 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).NEIJJHEFLHP,
                   Method_System_Collections_Generic_List<IIMNGGHGKOD>_AddRange__);
        pSVar1 = (__this->fields).KFLHLLDPBIC;
        if (pSVar1 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
          System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)pSVar1,
                     (System_Collections_Generic_IEnumerable_T__o *)
                     (IBKIPBJJCPG->fields).KFLHLLDPBIC,
                     Method_System_Collections_Generic_List<IENLNOEDCFF>_AddRange__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

