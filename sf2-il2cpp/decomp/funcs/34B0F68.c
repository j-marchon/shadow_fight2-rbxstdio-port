// KDPDBGNOFEN$$BLFHCIKFJNG @ RVA 0x34B0F68

void KDPDBGNOFEN__BLFHCIKFJNG
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_0456855b & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    __this = (KDPDBGNOFEN_o *)FUN_01bab630(&StringLiteral_15575);
    DAT_0456855b = 1;
  }
  pSVar1 = KDPDBGNOFEN__NAGMMNGLGAI(__this,ICLHKEAILDM,method);
  pSVar1 = System_String__Concat(StringLiteral_15575,pSVar1,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__Error(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

