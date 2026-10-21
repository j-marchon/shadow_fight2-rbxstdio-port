// NGKBNOEJLPH$$HFDJAOMFBHH @ RVA 0x349CE10

/* WARNING: Removing unreachable block (ram,0x0359d0b4) */

int32_t NGKBNOEJLPH__HFDJAOMFBHH
                  (NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *IFCJAOGIPJE,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  int iVar6;
  int32_t iVar7;
  KOGMOACEOAM_o *__this_00;
  NGKBNOEJLPH_LNKLGCHOEBF_o *__this_01;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar8;
  ECENNHNBAME_array *pEVar9;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *pSVar10;
  NGKBNOEJLPH_LNKLGCHOEBF_array *pNVar11;
  OPNFCOGALLI_o *pOVar12;
  System_Collections_Generic_List_FCFGGKLDBFJ__o *__this_02;
  ECENNHNBAME_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568468 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_get_Current__);
    FUN_01bab630(&NGKBNOEJLPH_LNKLGCHOEBF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCFGGKLDBFJ>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Count__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568468 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045684ca == '\0') {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045684ca = '\x01';
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = (__this->fields).FENGBMAPOMK;
  if (pSVar8 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    iVar7 = (pSVar8->fields)._size;
    __this_02 = OCMLPCKBHPN_TypeInfo->static_fields->LLIHDMCPKBA;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < iVar7) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar7,(MethodInfo *)0x0);
    }
    if (__this_02 != (System_Collections_Generic_List_FCFGGKLDBFJ__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<FCFGGKLDBFJ>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_MoveNext__
                               ), bVar5) {
        if ((ECENNHNBAME_o *)local_80.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = ((ECENNHNBAME_Fields *)((long)local_80.fields._current + 0x10))->BEHFDAIGOAJ;
        if (__this_00 == (KOGMOACEOAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                 ),
              lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__, bVar5) {
          pSVar8 = (__this->fields).FENGBMAPOMK;
          if (pSVar8 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pEVar9 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pEVar9 == (ECENNHNBAME_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pEVar9->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pEVar9->m_Items[(int)uVar1] = (ECENNHNBAME_o *)local_a0.fields._current;
            thunk_FUN_01c20e04(pEVar9->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,local_a0.fields._current,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_Dispose__)
      ;
      if (((IFCJAOGIPJE != (OLKKAIFGGAK_o *)0x0) &&
          (pOVar12 = (IFCJAOGIPJE->fields).OAKOFJJIOFF, pOVar12 != (OPNFCOGALLI_o *)0x0)) &&
         (pSVar10 = (__this->fields).JOMJAAIPNPH,
         pSVar10 != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0)) {
        iVar7 = (pSVar10->fields)._size;
        __this_03 = (pOVar12->fields).NDBPNFLAKDL;
        (pSVar10->fields)._size = 0;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (0 < iVar7) {
          System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar7,(MethodInfo *)0x0);
        }
        pSVar8 = (__this->fields).FENGBMAPOMK;
        if (pSVar8 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_b8,(System_Collections_Generic_List_object__o *)pSVar8,
                     Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list = local_b8.fields._list;
          local_a0.fields._current = local_b8.fields._current;
          while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                   ), pIVar4 = local_a0.fields._current, bVar5) {
            if (__this_03 == (ECENNHNBAME_o *)0x0) {
LAB_0359d1c4:
              iVar6 = 0;
            }
            else {
              pOVar12 = (IFCJAOGIPJE->fields).OAKOFJJIOFF;
              if (pOVar12 == (OPNFCOGALLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((pOVar12->fields).AANDHIFMLHC == false) goto LAB_0359d1c4;
              if ((ECENNHNBAME_o *)local_a0.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar6 = ECENNHNBAME__KGIBBMMAFDN
                                ((ECENNHNBAME_o *)local_a0.fields._current,(MethodInfo *)0x0);
              iVar7 = ECENNHNBAME__MBDJHMEEGGP(__this_03,true,(MethodInfo *)0x0);
              iVar2 = iVar7 - (__this->fields).MAHKIKKMBJM;
              if (iVar2 + 1 <= iVar6) {
                iVar6 = iVar2 + 1;
              }
            }
            pSVar10 = (__this->fields).JOMJAAIPNPH;
            __this_01 = (NGKBNOEJLPH_LNKLGCHOEBF_o *)
                        thunk_FUN_01bda818(NGKBNOEJLPH_LNKLGCHOEBF_TypeInfo);
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).BNGDONJEHMH = (ECENNHNBAME_o *)pIVar4;
            thunk_FUN_01c20e04(&__this_01->fields,pIVar4);
            (__this_01->fields).FFNAHMNEHIM = iVar6;
            lVar3 = Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__;
            if (pSVar10 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar11 = (pSVar10->fields)._items;
            (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
            if (pNVar11 == (NGKBNOEJLPH_LNKLGCHOEBF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar10->fields)._size;
            if (uVar1 < (uint)pNVar11->max_length) {
              (pSVar10->fields)._size = uVar1 + 1;
              pNVar11->m_Items[(int)uVar1] = __this_01;
              thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,__this_01);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar10,
                         (Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
          pSVar10 = (__this->fields).JOMJAAIPNPH;
          if (pSVar10 != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
            return (pSVar10->fields)._size;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

