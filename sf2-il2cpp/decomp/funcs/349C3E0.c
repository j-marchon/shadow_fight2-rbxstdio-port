// NGKBNOEJLPH$$ANLJPOPMFKC @ RVA 0x349C3E0

int32_t NGKBNOEJLPH__ANLJPOPMFKC
                  (NGKBNOEJLPH_o *__this,LFBHPHJFCPO_o *BOLKIIOGGMM,System_String_o *PDLMMJDMMDH,
                  int32_t EIMPAMOIHNM,float OHIILDIGEIF,
                  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *KENFFDHLNDA,
                  MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  PCNNBADGEGD_o *__this_00;
  LLGIDMGDNPG_o *pLVar5;
  NGKBNOEJLPH_LNKLGCHOEBF_o *__this_01;
  MethodInfo *method_00;
  NGKBNOEJLPH_LNKLGCHOEBF_array *pNVar6;
  IHNJJHJKJCL_o *__this_02;
  ECENNHNBAME_o *pEVar7;
  IHNJJHJKJCL_array *pIVar8;
  uint uVar9;
  
  if ((DAT_0456845e & 1) == 0) {
    FUN_01bab630(&NGKBNOEJLPH_LNKLGCHOEBF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Count__);
    DAT_0456845e = 1;
  }
  if ((KENFFDHLNDA != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) &&
     (BOLKIIOGGMM != (LFBHPHJFCPO_o *)0x0)) {
    iVar1 = (KENFFDHLNDA->fields)._size;
    method_00 = (MethodInfo *)0x0;
    __this_00 = LFBHPHJFCPO__OMNMBCCGNBN(BOLKIIOGGMM,PDLMMJDMMDH,(MethodInfo *)0x0);
    if ((__this_00 != (PCNNBADGEGD_o *)0x0) &&
       (pLVar5 = PCNNBADGEGD__OPHALLPMFHB(__this_00,EIMPAMOIHNM,method_00),
       pLVar5 != (LLGIDMGDNPG_o *)0x0)) {
      pIVar8 = (pLVar5->fields).CIOCHCOOAFK;
      if (pIVar8 == (IHNJJHJKJCL_array *)0x0) goto LAB_0359c584;
      uVar2 = (uint)pIVar8->max_length;
      if (0 < (int)uVar2) {
        uVar9 = 0;
        do {
          if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          __this_02 = pIVar8->m_Items[(int)uVar9];
          if (__this_02 == (IHNJJHJKJCL_o *)0x0) goto LAB_0359c584;
          iVar4 = IHNJJHJKJCL__ENBJCAFOOGB(__this_02,OHIILDIGEIF,(MethodInfo *)0x0);
          if (0 < iVar4) {
            pEVar7 = (__this_02->fields).BNGDONJEHMH;
            __this_01 = (NGKBNOEJLPH_LNKLGCHOEBF_o *)
                        thunk_FUN_01bda818(NGKBNOEJLPH_LNKLGCHOEBF_TypeInfo);
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).BNGDONJEHMH = pEVar7;
            thunk_FUN_01c20e04(&__this_01->fields,pEVar7);
            (__this_01->fields).FFNAHMNEHIM = iVar4;
            lVar3 = Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__;
            pNVar6 = (KENFFDHLNDA->fields)._items;
            (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
            if (pNVar6 == (NGKBNOEJLPH_LNKLGCHOEBF_array *)0x0) goto LAB_0359c584;
            uVar2 = (KENFFDHLNDA->fields)._size;
            if (uVar2 < (uint)pNVar6->max_length) {
              (KENFFDHLNDA->fields)._size = uVar2 + 1;
              pNVar6->m_Items[(int)uVar2] = __this_01;
              thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar2,__this_01);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                         (Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          uVar2 = (uint)pIVar8->max_length;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar2);
      }
    }
    return (KENFFDHLNDA->fields)._size - iVar1;
  }
LAB_0359c584:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

