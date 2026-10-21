// Nekki.Utils.RaidBetaLogger$$OnApplicationPause @ RVA 0x35A4F00

void Nekki_Utils_RaidBetaLogger__OnApplicationPause
               (Nekki_Utils_RaidBetaLogger_o *__this,bool LFPHLLBEMEG,MethodInfo *method)

{
  SimpleJSON_JSONNode_o *pSVar1;
  MethodInfo *method_00;
  SimpleJSON_JSONNode_o *pSVar2;
  
  if ((DAT_04568df7 & 1) == 0) {
                    /* try { // try from 036a4f2c to 037a4f3f has its CatchHandler @ 036a50c0 */
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_21310);
    DAT_04568df7 = 1;
  }
  pSVar2 = (__this->fields).KJDDOLCFEHM;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036a4f58 to 037a4fe3 has its CatchHandler @ 036a50d4 */
    thunk_FUN_01ba7564();
  }
  pSVar1 = SimpleJSON_JSONNode__op_Implicit(LFPHLLBEMEG,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSON_JSONNode_o *)0x0) {
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,StringLiteral_21310,pSVar1,(pSVar2->klass->vtable)._8_set_Item.method);
    Nekki_Utils_RaidBetaLogger__KGFNDOFMBMC(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

