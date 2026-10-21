// FCJBEKHDLAF$$LAFPPPABCJG @ RVA 0x33F1938

void FCJBEKHDLAF__LAFPPPABCJG
               (FCJBEKHDLAF_o *__this,OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  uint uVar1;
  long lVar2;
  KMJDCOABCCG_o *item;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_00;
  AFFHKININGD_o *pAVar3;
  KMJDCOABCCG_array *pKVar4;
  LKPNOBFEAKD_o *MLNEFBDGKEK_00;
  
  if ((DAT_04567f15 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567f15 = 1;
  }
  pAVar3 = (__this->fields).FBFPLEFCDOK;
  if (pAVar3 == (AFFHKININGD_o *)0x0) {
LAB_034f1a38:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((MLNEFBDGKEK != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) && ((pAVar3->fields).IKDHEPOOBIC != false))
  {
    MLNEFBDGKEK_00 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    CJNHFNHJHPE = (MLNEFBDGKEK->fields).JAICMIMBIOA;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    item = MGNPHCAAEIO__BOHGCADEFPF(MLNEFBDGKEK_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__;
    if (item != (KMJDCOABCCG_o *)0x0) {
      __this_00 = (__this->fields).KKOLONOKNIO;
      if (__this_00 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
        pKVar4 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pKVar4 != (KMJDCOABCCG_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pKVar4->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pKVar4->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pKVar4->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          (__this->fields).FJCOCMFENFO = true;
          return;
        }
      }
      goto LAB_034f1a38;
    }
  }
  return;
}

