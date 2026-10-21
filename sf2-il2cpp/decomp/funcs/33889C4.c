// IDDIABHBDEE$$EMMKMFDFOGC @ RVA 0x33889C4

bool IDDIABHBDEE__EMMKMFDFOGC
               (IDDIABHBDEE_o *__this,System_String_o *AAIHDEKMIJG,int32_t NLLKBIJIFNI,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlDocument_o *LKILNGEECIJ;
  MethodInfo *method_00;
  System_Xml_XmlDocument_o *pSVar2;
  
  if ((DAT_04567bbc & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04567bbc = 1;
  }
  method_00 = (MethodInfo *)0x1;
  LKILNGEECIJ = GIAMPEGMNHE__IBJOMPOLPCC(AAIHDEKMIJG,NLLKBIJIFNI,true,true,false,(MethodInfo *)0x0);
  pSVar2 = LKILNGEECIJ;
  if (NLLKBIJIFNI == 2) {
    if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = CFJANHACGMG__FNIHLBLMOBP(AAIHDEKMIJG,true,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlDocument_o *)(ulong)bVar1;
  }
  if (__this != (IDDIABHBDEE_o *)0x0) {
    bVar1 = IDDIABHBDEE__KFPMJBGAEKM(__this,LKILNGEECIJ,(uint)(NLLKBIJIFNI == 2),method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pSVar2);
}

