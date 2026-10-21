// OLKKAIFGGAK.AHFAALBHPHJ$$DCHFLPJPPCH @ RVA 0x34F9478

/* WARNING: Removing unreachable block (ram,0x035f96bc) */
/* WARNING: Removing unreachable block (ram,0x035f97cc) */

void OLKKAIFGGAK_AHFAALBHPHJ__DCHFLPJPPCH
               (OLKKAIFGGAK_AHFAALBHPHJ_o *__this,
               System_Collections_Generic_List_ABNLGBHKOCE__o *GOFDICMJKNH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t BKFOLMBMFNP;
  OLKKAIFGGAK_o *__this_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar4;
  NJPBHDMCLIN_o *pNVar5;
  ABNLGBHKOCE_array *pAVar6;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568814 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Count__);
    DAT_04568814 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (GOFDICMJKNH == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)GOFDICMJKNH,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__)
      ;
      return;
    }
    if ((KJFPGDFNFCL_o *)local_80.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar5 = ((KJFPGDFNFCL_Fields *)((long)local_80.fields._current + 0x10))->KPFGHBEKJIM;
    if (pNVar5 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pNVar5->fields).GGIGKNJPODI;
    if (__this_00 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
LAB_035f95ec:
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__);
    if (bVar3) {
      if ((KJFPGDFNFCL_o *)local_a0.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BKFOLMBMFNP = KJFPGDFNFCL__NHGGBEACKBD
                              ((KJFPGDFNFCL_o *)local_a0.fields._current,(MethodInfo *)0x0);
      pSVar4 = OLKKAIFGGAK_AHFAALBHPHJ__FNPJOAPMNKE(__this,BKFOLMBMFNP,method);
      if (pSVar4 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = 0;
      if ((pSVar4->fields)._size != 0) break;
      goto LAB_035f9640;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    lVar2 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    pSVar4 = (__this->fields).MHKDMKDBMBE;
    if (pSVar4 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pAVar6 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pAVar6->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pAVar6->m_Items[(int)uVar1] = (ABNLGBHKOCE_o *)item;
      thunk_FUN_01c20e04(pAVar6->m_Items + (int)uVar1,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,item,
                 (MethodInfo_26E4DAC *)method);
    }
  } while( true );
  method = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Contains__;
  bVar3 = System_Collections_Generic_List<object>__Contains
                    ((System_Collections_Generic_List_object__o *)pSVar4,item,
                     (MethodInfo_26E513C *)
                     Method_System_Collections_Generic_List<ABNLGBHKOCE>_Contains__);
  if (!bVar3) {
    uVar1 = (pSVar4->fields)._size;
LAB_035f9640:
    lVar2 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    pAVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pAVar6 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (uVar1 < (uint)pAVar6->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pAVar6->m_Items[(int)uVar1] = (ABNLGBHKOCE_o *)item;
      thunk_FUN_01c20e04(pAVar6->m_Items + (int)uVar1,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
  goto LAB_035f95ec;
}

