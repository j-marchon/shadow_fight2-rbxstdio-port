// KDPDBGNOFEN$$NFMIDHIDEIA @ RVA 0x34AE38C

void KDPDBGNOFEN__NFMIDHIDEIA
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  KDPDBGNOFEN_o *__this_00;
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_04568543 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_15576);
    DAT_04568543 = 1;
  }
  __this_00 = (KDPDBGNOFEN_o *)
              (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                        (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((ulong)__this_00 & 1) == 0) {
    return;
  }
  pSVar1 = KDPDBGNOFEN__NAGMMNGLGAI(__this_00,ICLHKEAILDM,method);
  pSVar1 = System_String__Concat(StringLiteral_15576,pSVar1,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)BBBLOLJAMJP->max_length != 0) {
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

