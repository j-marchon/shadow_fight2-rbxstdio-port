// GMGALNFPLPA$$ACHCKILJGJK @ RVA 0x306CEA4

void GMGALNFPLPA__ACHCKILJGJK(GMGALNFPLPA_o *__this,GMGALNFPLPA_o *DMMLPNCPPHD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  GMGALNFPLPA_array *pGVar3;
  GMGALNFPLPA_o *pGVar4;
  GMGALNFPLPA_o **ppGVar5;
  
  if ((DAT_04565f40 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__);
    FUN_01bab630(&StringLiteral_4263);
    DAT_04565f40 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__;
  if (DMMLPNCPPHD == (GMGALNFPLPA_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).DOLDMIEIMPL;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    pGVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pGVar3 != (GMGALNFPLPA_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pGVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pGVar3->m_Items[(int)uVar1] = DMMLPNCPPHD;
        thunk_FUN_01c20e04(pGVar3->m_Items + (int)uVar1,DMMLPNCPPHD);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)DMMLPNCPPHD,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      ppGVar5 = &(DMMLPNCPPHD->fields).MEMMHKLOBKN;
      pGVar4 = *ppGVar5;
      if ((pGVar4 != (GMGALNFPLPA_o *)0x0) && (pGVar4 != __this)) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_4263,(MethodInfo *)0x0);
      }
      (DMMLPNCPPHD->fields).MEMMHKLOBKN = __this;
      thunk_FUN_01c20e04(ppGVar5,__this);
      (DMMLPNCPPHD->fields).DJIFHDOPPPE = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

