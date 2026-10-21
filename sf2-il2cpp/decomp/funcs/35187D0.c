// PLIIGOCLJDL$$FKNGMLAKOOC @ RVA 0x35187D0

System_Collections_Generic_List_string__o *
PLIIGOCLJDL__FKNGMLAKOOC(PLIIGOCLJDL_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  GKLPDMLELJF_o *pGVar5;
  System_String_array *pSVar6;
  
  if ((DAT_04568948 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_15914);
    DAT_04568948 = 1;
  }
  if ((HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar5 = (HEHMPFLAEGE->fields).MCOPPCNPAHF, pGVar5 != (GKLPDMLELJF_o *)0x0)) {
    pJVar3 = PLIIGOCLJDL__PDEBCPPCEJP(__this,(pGVar5->fields).ANAJGHJEEOC,method);
    __this_00 = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,2,
               Method_System_Collections_Generic_List<string>__ctor__);
    if (pJVar3 == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
      return __this_00;
    }
    pSVar4 = OFFIONDOEPM__CNLBHLNMCCI((pJVar3->fields).DCHJFFCOGFB,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar6 != (System_String_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = pSVar4;
          thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,pSVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = System_String__Concat(pSVar4,StringLiteral_15914,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar6 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar6 != (System_String_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = pSVar4;
            thunk_FUN_01c20e04();
            return __this_00;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

