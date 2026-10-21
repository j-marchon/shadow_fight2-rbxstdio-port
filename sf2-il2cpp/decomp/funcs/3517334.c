// PLIIGOCLJDL$$INONDJFCPHI @ RVA 0x3517334

System_Collections_Generic_List_string__o *
PLIIGOCLJDL__INONDJFCPHI(PLIIGOCLJDL_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  
  if ((DAT_0456893c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10925);
    FUN_01bab630(&StringLiteral_10926);
    DAT_0456893c = 1;
  }
  pJVar3 = PLIIGOCLJDL__PDEBCPPCEJP(__this,BIIMFIDNPJP,method);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  pSVar4 = StringLiteral_10925;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (pJVar3 == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03617548;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_03617548;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = pSVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pSVar4 = StringLiteral_10926;
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
  }
  else {
    pSVar4 = OFFIONDOEPM__CNLBHLNMCCI((pJVar3->fields).KJAIPLMIAGP,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03617548;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_03617548;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = pSVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pSVar4 = OFFIONDOEPM__CNLBHLNMCCI((pJVar3->fields).HBGDJPCCLAO,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
  }
  if (pSVar5 != (System_String_array *)0x0) {
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = pSVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    return __this_00;
  }
LAB_03617548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

