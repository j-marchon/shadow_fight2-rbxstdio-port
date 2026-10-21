// MDAPDLLMOMF$$DPPIEAMHDCI @ RVA 0x30C25EC

void MDAPDLLMOMF__DPPIEAMHDCI(MDAPDLLMOMF_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  MDAPDLLMOMF_NHJGACDEAGK_o *pMVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)HEHMPFLAEGE;
  if (HEHMPFLAEGE == 3) {
    pMVar1 = (__this->fields).FNCEJEPEFGA;
    if (pMVar1 == (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) goto LAB_031c263c;
    MDAPDLLMOMF_NHJGACDEAGK__DPPIEAMHDCI(pMVar1,(MethodInfo *)0x3);
    method_00 = extraout_x1;
  }
  else if (HEHMPFLAEGE != 2) {
    if (HEHMPFLAEGE != 1) {
      return;
    }
    pMVar1 = (__this->fields).FNCEJEPEFGA;
    if (pMVar1 == (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) goto LAB_031c263c;
    goto LAB_031c262c;
  }
  pMVar1 = (__this->fields).FPDBFMBILJI;
  if (pMVar1 != (MDAPDLLMOMF_NHJGACDEAGK_o *)0x0) {
LAB_031c262c:
    MDAPDLLMOMF_NHJGACDEAGK__DPPIEAMHDCI(pMVar1,method_00);
    return;
  }
LAB_031c263c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

