// PNGKLCHKPEO$$NODBBDLAIHD @ RVA 0x31E69A0

void PNGKLCHKPEO__NODBBDLAIHD(PNGKLCHKPEO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar3;
  
  if ((DAT_04566d63 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PNGKLCHKPEO_PLCIDMPOECL>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_Clear__);
    DAT_04566d63 = 1;
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).EFNHMHALHPE,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PNGKLCHKPEO_PLCIDMPOECL>__);
  if (!bVar2) {
    pSVar3 = (__this->fields).EFNHMHALHPE;
    if (pSVar3 == (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0)
    goto LAB_032e6a6c;
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).PCHEGEBOKAF,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PNGKLCHKPEO_PLCIDMPOECL>__);
  if (!bVar2) {
    pSVar3 = (__this->fields).PCHEGEBOKAF;
    if (pSVar3 == (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
LAB_032e6a6c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

