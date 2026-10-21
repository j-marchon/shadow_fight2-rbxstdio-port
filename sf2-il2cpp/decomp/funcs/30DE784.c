// KIHIPAJGNBF$$CAKKOJIHMCM @ RVA 0x30DE784

void KIHIPAJGNBF__CAKKOJIHMCM(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_Utils_GlobalTimer_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Int64_array *pSVar3;
  System_Collections_Generic_List_long__o *__this_01;
  
  if ((DAT_04566380 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    DAT_04566380 = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).LLDABLJEMBM;
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if ((__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) &&
     (method_00 = (MethodInfo *)
                  Nekki_Utils_GlobalTimer__GetTimeMilliseconds(__this_00,(MethodInfo *)0x0),
     lVar2 = Method_System_Collections_Generic_List<long>_Add__,
     __this_01 != (System_Collections_Generic_List_long__o *)0x0)) {
    pSVar3 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pSVar3 != (System_Int64_array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (int64_t)method_00;
      }
      else {
        System_Collections_Generic_List<long>__AddWithResize
                  (__this_01,(int64_t)method_00,
                   *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        method_00 = extraout_x1_00;
      }
      KIHIPAJGNBF__LEEIGJNPOKM(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

