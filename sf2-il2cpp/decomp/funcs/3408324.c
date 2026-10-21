// MGNPHCAAEIO$$BOHGCADEFPF @ RVA 0x3408324

KMJDCOABCCG_o *
MGNPHCAAEIO__BOHGCADEFPF(LKPNOBFEAKD_o *MLNEFBDGKEK,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this;
  KFGGMKHNCGM_o *pKVar4;
  FEPPOONJCGI_o *__this_00;
  PANJAHAFBMD_o *pPVar5;
  KMJDCOABCCG_o *item;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_01;
  ACHLOMELAJE_o *pAVar6;
  KMJDCOABCCG_array *pKVar7;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_02;
  int index;
  KMJDCOABCCG_o *pKVar8;
  int32_t iVar9;
  
  if ((DAT_04568027 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568027 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((MLNEFBDGKEK != (LKPNOBFEAKD_o *)0x0) &&
     (__this = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ,
     __this != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0)) {
    pKVar4 = MGNPHCAAEIO_FGHBAEIKNBF__HALKOOLIBED
                       (__this,(MLNEFBDGKEK->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (pKVar4 == (KFGGMKHNCGM_o *)0x0) {
      return (KMJDCOABCCG_o *)0x0;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
       (__this_00 = (pAVar6->fields).IMJJJJJMMHL, __this_00 != (FEPPOONJCGI_o *)0x0)) {
      pPVar5 = FEPPOONJCGI__HALKOOLIBED
                         (__this_00,(MLNEFBDGKEK->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      if (pPVar5 == (PANJAHAFBMD_o *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (pPVar5->fields).GAMONLCHOKL;
      }
      __this_02 = (pKVar4->fields).EHGOHNHDKPP;
      if (__this_02 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
        if ((__this_02->fields)._size < 1) {
          return (KMJDCOABCCG_o *)0x0;
        }
        index = 0;
        pKVar8 = (KMJDCOABCCG_o *)0x0;
        while (item = (KMJDCOABCCG_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index,
                                 Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__),
              item != (KMJDCOABCCG_o *)0x0) {
          iVar1 = (item->fields).ADHFHEJFJPK;
          if (iVar9 <= iVar1) {
            if ((iVar9 + CJNHFNHJHPE < iVar1) || ((item->fields).DKHMDPIMHIJ != false)) {
              if (iVar9 + CJNHFNHJHPE <= iVar1) {
                return pKVar8;
              }
            }
            else {
              pKVar8 = item;
              if ((MLNEFBDGKEK->fields).ODIDKGCHDKL == false) {
                (item->fields).DKHMDPIMHIJ = true;
                    /* try { // try from 03508548 to 0360869b has its CatchHandler @ 03508548
                       catch() { ... } // from try @ 03508548 with catch @ 03508548
                       catch() { ... } // from try @ 03508850 with catch @ 03508548
                       catch() { ... } // from try @ 03508908 with catch @ 03508548
                       catch() { ... } // from try @ 03508910 with catch @ 03508548
                       catch() { ... } // from try @ 035089fc with catch @ 03508548 */
              }
              else {
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                lVar3 = Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__;
                __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->OHLABOLFOOK;
                if (__this_01 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) break;
                pKVar7 = (__this_01->fields)._items;
                (__this_01->fields)._version = (__this_01->fields)._version + 1;
                if (pKVar7 == (KMJDCOABCCG_array *)0x0) break;
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pKVar7->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pKVar7->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04(pKVar7->m_Items + (int)uVar2,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
          index = index + 1;
          if ((__this_02->fields)._size <= index) {
            return pKVar8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

