// KPBOJBLLKPJ$$DLHHBAABHEE @ RVA 0x30888B4

void KPBOJBLLKPJ__DLHHBAABHEE(KPBOJBLLKPJ_o *__this,ODKDFMHHLIP_o *NONPLOOOOAG,MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  MethodInfo *in_x3;
  ODKDFMHHLIP_array *pOVar3;
  
  if ((DAT_04566034 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_Add__);
    DAT_04566034 = 1;
  }
  if (NONPLOOOOAG != (ODKDFMHHLIP_o *)0x0) {
    ACCIHBHMFPN = (NONPLOOOOAG->fields).MOIGDPBNMNI;
    __this_00 = KPBOJBLLKPJ__NBKAMBPCHNJ(__this,ACCIHBHMFPN,method);
    lVar2 = Method_System_Collections_Generic_List<ODKDFMHHLIP>_Add__;
    if (__this_00 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
      pOVar3 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pOVar3 != (ODKDFMHHLIP_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pOVar3->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pOVar3->m_Items[(int)uVar1] = NONPLOOOOAG;
          thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,NONPLOOOOAG);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (Il2CppObject *)NONPLOOOOAG,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        KPBOJBLLKPJ__FNPAHFFOFJL(__this,ACCIHBHMFPN,NONPLOOOOAG,in_x3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

