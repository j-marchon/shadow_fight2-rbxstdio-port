// KLFDBIKLFBF$$DCHFLPJPPCH @ RVA 0x3089DAC

/* WARNING: Removing unreachable block (ram,0x03189ff4) */
/* WARNING: Removing unreachable block (ram,0x0318a104) */

void KLFDBIKLFBF__DCHFLPJPPCH
               (KLFDBIKLFBF_o *__this,System_Collections_Generic_List_ABNLGBHKOCE__o *GOFDICMJKNH,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *item;
  bool bVar4;
  int32_t ACCIHBHMFPN;
  OLKKAIFGGAK_o *__this_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar5;
  KJFPGDFNFCL_o *pKVar6;
  NJPBHDMCLIN_o *pNVar7;
  ABNLGBHKOCE_array *pAVar8;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566046 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__);
    DAT_04566046 = 1;
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
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__)
      ;
      return;
    }
    if ((KJFPGDFNFCL_o *)local_80.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar7 = ((KJFPGDFNFCL_Fields *)((long)local_80.fields._current + 0x10))->KPFGHBEKJIM;
    if (pNVar7 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pNVar7->fields).GGIGKNJPODI;
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
LAB_03189f20:
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__);
    if (bVar4) {
      if ((KJFPGDFNFCL_o *)local_a0.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ACCIHBHMFPN = KJFPGDFNFCL__NHGGBEACKBD
                              ((KJFPGDFNFCL_o *)local_a0.fields._current,(MethodInfo *)0x0);
      pSVar5 = KLFDBIKLFBF__FNPJOAPMNKE(__this,ACCIHBHMFPN,method);
      if (pSVar5 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (pSVar5->fields)._size;
      uVar2 = 0;
      if (iVar1 != 0) break;
      goto LAB_03189f78;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    lVar3 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    pSVar5 = (__this->fields).MHKDMKDBMBE;
    if (pSVar5 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar8 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pAVar8 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pAVar8->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      pAVar8->m_Items[(int)uVar2] = (ABNLGBHKOCE_o *)item;
      thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar2,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,item,
                 (MethodInfo_26E4DAC *)method);
    }
  } while( true );
  method = Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__;
  pKVar6 = (KJFPGDFNFCL_o *)
           System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar5,iVar1 + -1,
                      (MethodInfo_26E4ADC *)
                      Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__);
  if ((KJFPGDFNFCL_o *)item != pKVar6) {
    uVar2 = (pSVar5->fields)._size;
LAB_03189f78:
    lVar3 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    pAVar8 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pAVar8 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (uVar2 < (uint)pAVar8->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      pAVar8->m_Items[(int)uVar2] = (ABNLGBHKOCE_o *)item;
      thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar2,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
  goto LAB_03189f20;
}

