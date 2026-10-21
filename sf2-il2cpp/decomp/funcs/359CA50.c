// Nekki.Utils.RaidBetaLogger$$BOAABLHGNHA @ RVA 0x359CA50

void Nekki_Utils_RaidBetaLogger__BOAABLHGNHA
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_RaidBetaLogger_c *method_00;
  System_String_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  SimpleJSON_JSONObject_o *__this_00;
  SimpleJSON_JSONNode_o **ppSVar4;
  undefined1 auVar5 [16];
  
                    /* try { // try from 0369ca5c to 0379ca63 has its CatchHandler @ 0369ca78 */
                    /* try { // try from 0369ca64 to 0379ca6f has its CatchHandler @ 0369c89c */
  if ((DAT_04568dd6 & 1) == 0) {
                    /* try { // try from 0369ca70 to 0379ca77 has its CatchHandler @ 0369ca78 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369ca5c with catch @ 0369ca78
                       catch(type#2 @ 00000000) { ... } // from try @ 0369ca70 with catch @ 0369ca78
                        */
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568dd6 = 1;
  }
  ppSVar4 = &(__this->fields).KJDDOLCFEHM;
  *ppSVar4 = (SimpleJSON_JSONNode_o *)0x0;
  thunk_FUN_01c20e04(ppSVar4,0);
  method_00 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (Nekki_Utils_RaidBetaLogger_c *)thunk_FUN_01ba7564();
  }
  pSVar2 = Nekki_Utils_RaidBetaLogger__OKDDBDJLADD((MethodInfo *)method_00);
  pSVar2 = NEHNBJKKABI__OLOAJIKFMHE(pSVar2,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = SimpleJSON_JSON__Parse(pSVar2,(MethodInfo *)0x0);
    *ppSVar4 = pSVar3;
    thunk_FUN_01c20e04(ppSVar4);
  }
  pSVar3 = *ppSVar4;
  if (pSVar3 != (SimpleJSON_JSONNode_o *)0x0) {
    (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
              (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    pSVar3 = *ppSVar4;
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = SimpleJSON_JSONNode__op_Equality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
      SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      *ppSVar4 = (SimpleJSON_JSONNode_o *)__this_00;
      auVar5 = thunk_FUN_01c20e04(ppSVar4,__this_00);
      Nekki_Utils_RaidBetaLogger__PANJDBGFBJD(auVar5._0_8_,auVar5._8_8_);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

