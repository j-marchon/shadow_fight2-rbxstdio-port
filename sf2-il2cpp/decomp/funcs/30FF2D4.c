// AGILEPNENOH$$.ctor @ RVA 0x30FF2D4

void AGILEPNENOH___ctor(AGILEPNENOH_o *__this,System_String_o *ACCIHBHMFPN,
                       UnityEngine_Vector2_o BLEOKMIDGIK,System_String_o *KGLJICLJHEL,
                       System_String_o *NEJHIEOHMCF,System_String_o *FNLBOLFNLPP,
                       System_String_o *ONLOEDAIEOJ,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       System_String_o *JCLPIKHEKBB,System_String_o *JEHFOBHMGJM,
                       System_String_o *LBKOHHHPNIP,System_String_o *FNLFDPAJACB,
                       System_String_o *OAJJFDIDFKC,System_String_o *JOPFAAGCIOI,bool MENLMNJNMMO,
                       MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  AGILEPNENOH_array *pAVar3;
  
  if ((DAT_045664b5 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGILEPNENOH>_Add__);
    DAT_045664b5 = 1;
  }
  OOMHDDBCBJP___ctor((OOMHDDBCBJP_o *)__this,ACCIHBHMFPN,BLEOKMIDGIK,KGLJICLJHEL,NEJHIEOHMCF,
                     FNLBOLFNLPP,ONLOEDAIEOJ,JDIHKNKFJMK,EHEFEIEKHJO,JCLPIKHEKBB,JEHFOBHMGJM,
                     LBKOHHHPNIP,FNLFDPAJACB,OAJJFDIDFKC,JOPFAAGCIOI,MENLMNJNMMO,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<AGILEPNENOH>_Add__;
  __this_00 = AGILEPNENOH_TypeInfo->static_fields->DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    pAVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pAVar3 != (AGILEPNENOH_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pAVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pAVar3->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pAVar3->m_Items + (int)uVar1,__this);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

