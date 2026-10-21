// Nekki.Utils.RaidBetaLogger$$KGFNDOFMBMC @ RVA 0x359F1C4

void Nekki_Utils_RaidBetaLogger__KGFNDOFMBMC
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_RaidBetaLogger_c *method_00;
  System_String_o *AAIHDEKMIJG;
  System_String_o *FDLJCNLNCOC;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  SimpleJSON_JSONNode_o *pSVar2;
  
  if ((DAT_04568de0 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568de0 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).KJDDOLCFEHM;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo,method);
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_Utils_RaidBetaLogger__PANJDBGFBJD((Nekki_Utils_RaidBetaLogger_o *)0x1,method_01);
    return;
  }
  method_00 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (Nekki_Utils_RaidBetaLogger_c *)thunk_FUN_01ba7564();
  }
  AAIHDEKMIJG = Nekki_Utils_RaidBetaLogger__OKDDBDJLADD((MethodInfo *)method_00);
  pSVar2 = (__this->fields).KJDDOLCFEHM;
  if (pSVar2 != (SimpleJSON_JSONNode_o *)0x0) {
    FDLJCNLNCOC = (System_String_o *)
                  (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                            (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
    NEHNBJKKABI__JPMNOKLGLLO(AAIHDEKMIJG,FDLJCNLNCOC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

