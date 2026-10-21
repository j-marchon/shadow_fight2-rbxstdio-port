// Nekki.Utils.RaidBetaLogger$$OnApplicationQuit @ RVA 0x35A50BC

void Nekki_Utils_RaidBetaLogger__OnApplicationQuit
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  SimpleJSON_JSONNode_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  SimpleJSON_JSONNode_o *pSVar2;
  
                    /* catch() { ... } // from try @ 036a50a0 with catch @ 036a50bc */
                    /* catch() { ... } // from try @ 036a4f2c with catch @ 036a50c0 */
                    /* catch() { ... } // from try @ 036a508c with catch @ 036a50c4 */
                    /* catch() { ... } // from try @ 036a4ec4 with catch @ 036a50c8 */
                    /* catch() { ... } // from try @ 036a4e68 with catch @ 036a50cc */
                    /* catch() { ... } // from try @ 036a5098 with catch @ 036a50d0
                       catch() { ... } // from try @ 036a50a8 with catch @ 036a50d0 */
                    /* catch() { ... } // from try @ 036a4f58 with catch @ 036a50d4 */
  if ((DAT_04568dfc & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* try { // try from 036a50ec to 037a50ef has its CatchHandler @ 036a5254 */
                    /* try { // try from 036a50f0 to 037a51a3 has its CatchHandler @ 036a4a64 */
    FUN_01bab630(&StringLiteral_21310);
    FUN_01bab630(&StringLiteral_18130);
    DAT_04568dfc = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).KJDDOLCFEHM;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo,method);
  }
  pSVar1 = SimpleJSON_JSONNode__op_Implicit(true,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSON_JSONNode_o *)0x0) {
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,StringLiteral_18130,pSVar1,(pSVar2->klass->vtable)._8_set_Item.method);
    pSVar1 = (__this->fields).KJDDOLCFEHM;
    pSVar2 = SimpleJSON_JSONNode__op_Implicit(false,(MethodInfo *)0x0);
    if (pSVar1 != (SimpleJSON_JSONNode_o *)0x0) {
      (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                (pSVar1,StringLiteral_21310,pSVar2,(pSVar1->klass->vtable)._8_set_Item.method);
      Nekki_Utils_RaidBetaLogger__KGFNDOFMBMC(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

