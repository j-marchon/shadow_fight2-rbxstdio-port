// Nekki.Utils.RaidBetaLogger$$IEDFJEDPMJJ @ RVA 0x35A49A4

void Nekki_Utils_RaidBetaLogger__IEDFJEDPMJJ
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_RaidBetaLogger_c *method_00;
  System_String_o *AAIHDEKMIJG;
  SimpleJSON_JSONNode_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if ((DAT_04568df2 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_21310);
    FUN_01bab630(&StringLiteral_18130);
    DAT_04568df2 = 1;
    method = extraout_x1;
  }
  method_00 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (Nekki_Utils_RaidBetaLogger_c *)
                thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo,method);
  }
  AAIHDEKMIJG = Nekki_Utils_RaidBetaLogger__OKDDBDJLADD((MethodInfo *)method_00);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(AAIHDEKMIJG,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_Utils_RaidBetaLogger__BOAABLHGNHA(__this,method_01);
    pSVar2 = (__this->fields).KJDDOLCFEHM;
    if (pSVar2 == (SimpleJSON_JSONNode_o *)0x0) goto LAB_036a4b18;
    pSVar2 = (SimpleJSON_JSONNode_o *)
             (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,StringLiteral_21310,(pSVar2->klass->vtable)._7_get_Item.method);
    bVar1 = OGMFFOMHGIA__FMBMNDIGLIG(pSVar2,false,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (__this->fields).KJDDOLCFEHM;
                    /* try { // try from 036a4a64 to 037a4c6f has its CatchHandler @ 036a4a64
                       catch() { ... } // from try @ 036a4a64 with catch @ 036a4a64
                       catch() { ... } // from try @ 036a50b4 with catch @ 036a4a64
                       catch() { ... } // from try @ 036a50f0 with catch @ 036a4a64
                       catch() { ... } // from try @ 036a5244 with catch @ 036a4a64
                       catch() { ... } // from try @ 036a524c with catch @ 036a4a64
                       catch() { ... } // from try @ 036a5344 with catch @ 036a4a64 */
      if (pSVar2 == (SimpleJSON_JSONNode_o *)0x0) goto LAB_036a4b18;
      pSVar2 = (SimpleJSON_JSONNode_o *)
               (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,StringLiteral_18130,(pSVar2->klass->vtable)._7_get_Item.method);
      bVar1 = OGMFFOMHGIA__FMBMNDIGLIG(pSVar2,false,(MethodInfo *)0x0);
      if (!bVar1) {
        Nekki_Utils_RaidBetaLogger__PANJDBGFBJD((Nekki_Utils_RaidBetaLogger_o *)0x0,method_02);
        (__this->fields).FCLJIGKOBLI = true;
      }
    }
  }
  pSVar2 = (__this->fields).KJDDOLCFEHM;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = SimpleJSON_JSONNode__op_Implicit(false,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSON_JSONNode_o *)0x0) {
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,StringLiteral_21310,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
    pSVar3 = (__this->fields).KJDDOLCFEHM;
    pSVar2 = SimpleJSON_JSONNode__op_Implicit(false,(MethodInfo *)0x0);
    if (pSVar3 != (SimpleJSON_JSONNode_o *)0x0) {
      (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                (pSVar3,StringLiteral_18130,pSVar2,(pSVar3->klass->vtable)._8_set_Item.method);
      Nekki_Utils_RaidBetaLogger__KGFNDOFMBMC(__this,method_03);
      return;
    }
  }
LAB_036a4b18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

