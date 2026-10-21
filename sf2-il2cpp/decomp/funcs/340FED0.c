// MGNPHCAAEIO.HLAKGGFFNAO$$EHJFPEMNGIN @ RVA 0x340FED0

void MGNPHCAAEIO_HLAKGGFFNAO__EHJFPEMNGIN
               (MGNPHCAAEIO_HLAKGGFFNAO_o *__this,HBNENINHPGF_o *AOCKMIDKNHI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  HBNENINHPGF_array *pHVar3;
  
  if ((DAT_04568073 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_Add__);
    DAT_04568073 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<HBNENINHPGF>_Add__;
  __this_00 = (__this->fields).DIELINNGEBJ;
  if (__this_00 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
    pHVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar3 != (HBNENINHPGF_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pHVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pHVar3->m_Items[(int)uVar1] = AOCKMIDKNHI;
        thunk_FUN_01c20e04(pHVar3->m_Items + (int)uVar1,AOCKMIDKNHI);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)AOCKMIDKNHI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

