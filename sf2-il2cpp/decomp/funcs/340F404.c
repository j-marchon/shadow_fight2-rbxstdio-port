// MGNPHCAAEIO.LGJODJDHCJF$$LDKFHCIMHJE @ RVA 0x340F404

System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *
MGNPHCAAEIO_LGJODJDHCJF__LDKFHCIMHJE(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  bool bVar4;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *__this;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  FBMGMPIFMNH_o *__this_01;
  System_String_array *pSVar7;
  MGNPHCAAEIO_IEKBEIOCOPO_array *pMVar8;
  ulong uVar9;
  ulong uVar10;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456806c & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNPHCAAEIO_IEKBEIOCOPO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNPHCAAEIO_IEKBEIOCOPO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNPHCAAEIO_IEKBEIOCOPO>_get_Current__
                );
    FUN_01bab630(&MGNPHCAAEIO_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_TypeInfo);
    FUN_01bab630(&StringLiteral_2626);
    FUN_01bab630(&StringLiteral_6943);
    DAT_0456806c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>__ctor__);
  if ((MGNPHCAAEIO_LGJODJDHCJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO_LGJODJDHCJF_TypeInfo->static_fields->CDBLDJLHFPL;
  if (__this_00 == (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
LAB_0350f558:
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<MGNPHCAAEIO_IEKBEIOCOPO>_MoveNext__
                        );
      item = local_80.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<MGNPHCAAEIO_IEKBEIOCOPO>_Dispose__
                  );
        return __this;
      }
      if ((MGNPHCAAEIO_IEKBEIOCOPO_o *)local_80.fields._current == (MGNPHCAAEIO_IEKBEIOCOPO_o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((MGNPHCAAEIO_IEKBEIOCOPO_Fields *)((long)local_80.fields._current + 0x10))->
             EOLDGEJPLJK == 0);
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                      (((MGNPHCAAEIO_IEKBEIOCOPO_Fields *)((long)local_80.fields._current + 0x10))->
                       AMGLPLAOCPD,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_Add__;
    if (!bVar3) break;
    if (__this == (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar8 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pMVar8 == (MGNPHCAAEIO_IEKBEIOCOPO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pMVar8->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pMVar8->m_Items[(int)uVar1] = (MGNPHCAAEIO_IEKBEIOCOPO_o *)item;
      thunk_FUN_01c20e04(pMVar8->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pSVar5 = ((MGNPHCAAEIO_IEKBEIOCOPO_Fields *)((long)item + 0x10))->AMGLPLAOCPD;
  if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = System_String__Split(pSVar5,0x7c,0,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)pSVar6->max_length) goto code_r0x0350f5fc;
  goto LAB_0350f68c;
code_r0x0350f5fc:
  bVar3 = false;
  uVar10 = 0;
  uVar9 = pSVar6->max_length & 0xffffffff;
  pSVar7 = pSVar6;
  do {
    if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0(pSVar7);
    }
    pSVar5 = pSVar6->m_Items[uVar10];
    bVar4 = System_String__op_Equality(pSVar5,StringLiteral_6943,(MethodInfo *)0x0);
    if (bVar4) {
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = (FBMGMPIFMNH_o *)ACHLOMELAJE_TypeInfo->static_fields->HAEGJFPKIAD;
      if (__this_01 == (FBMGMPIFMNH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = FBMGMPIFMNH__NPNEPMBNJPH(__this_01,(MethodInfo *)0x0);
      if (bVar4) goto LAB_0350f658;
      bVar3 = true;
      bVar4 = false;
    }
    else {
LAB_0350f658:
      bVar4 = System_String__op_Equality(pSVar5,StringLiteral_2626,(MethodInfo *)0x0);
    }
    pSVar7 = (System_String_array *)(ulong)bVar4;
    uVar1 = (uint)pSVar6->max_length;
    uVar9 = (ulong)uVar1;
    uVar10 = uVar10 + 1;
  } while ((long)uVar10 < (long)(int)uVar1);
  if (!bVar3) {
LAB_0350f68c:
    lVar2 = Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_Add__;
    if (__this == (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar8 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pMVar8 == (MGNPHCAAEIO_IEKBEIOCOPO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pMVar8->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pMVar8->m_Items[(int)uVar1] = (MGNPHCAAEIO_IEKBEIOCOPO_o *)item;
      thunk_FUN_01c20e04(pMVar8->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_0350f558;
}

