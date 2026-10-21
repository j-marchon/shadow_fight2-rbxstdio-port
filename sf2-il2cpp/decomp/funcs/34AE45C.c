// KDPDBGNOFEN$$DALMFMJBAOJ @ RVA 0x34AE45C

void KDPDBGNOFEN__DALMFMJBAOJ
               (KDPDBGNOFEN_o *__this,System_String_o *CELOLGNMKCG,System_Type_o *ACCIHBHMFPN,
               Google_Protobuf_IMessage_o *JPLEIGKMFDA,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  System_String_o *pSVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)ACCIHBHMFPN;
  if ((DAT_04568544 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_15583);
    DAT_04568544 = 1;
  }
  uVar2 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                    (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((uVar2 & 1) == 0) || (bVar1 = KDPDBGNOFEN__DNHGHLJMHHH(__this,CELOLGNMKCG,method_00), bVar1))
  {
    return;
  }
  pSVar3 = ICAJGHJPOBL__APBCALFHJJE((Il2CppObject *)JPLEIGKMFDA,false,(MethodInfo *)0x0);
  pSVar3 = System_String__Format
                     (StringLiteral_15583,(Il2CppObject *)CELOLGNMKCG,(Il2CppObject *)ACCIHBHMFPN,
                      (Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)BBBLOLJAMJP->max_length != 0) {
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(pSVar3,BBBLOLJAMJP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

