// ACCKJOAAEKB$$.ctor @ RVA 0x315A1E4

void ACCKJOAAEKB___ctor(ACCKJOAAEKB_o *__this,ACCKJOAAEKB_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o **ppSVar7;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (ACCKJOAAEKB_o *)0x0) {
    (__this->fields).BEMCNJHEADJ = (IBKIPBJJCPG->fields).BEMCNJHEADJ;
    thunk_FUN_01c20e04();
    (__this->fields).IJDAKGKCHLG = (IBKIPBJJCPG->fields).IJDAKGKCHLG;
    thunk_FUN_01c20e04();
    (__this->fields).DBJKFCGNMIE = (IBKIPBJJCPG->fields).DBJKFCGNMIE;
    thunk_FUN_01c20e04();
    bVar1 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.inited;
    uVar2 = *(undefined2 *)&(IBKIPBJJCPG->fields).CJOICFODKMF.fields.field_0x12;
    CVar3.fields = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.hiddenValueOldByte4.fields;
    fVar4 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.fakeValue;
    iVar5 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.currentCryptoKey;
    iVar6 = (IBKIPBJJCPG->fields).CJOICFODKMF.fields.hiddenValue;
    (__this->fields).CJOICFODKMF.fields.fakeValueActive =
         (IBKIPBJJCPG->fields).CJOICFODKMF.fields.fakeValueActive;
    (__this->fields).CJOICFODKMF.fields.inited = bVar1;
    *(undefined2 *)&(__this->fields).CJOICFODKMF.fields.field_0x12 = uVar2;
    (__this->fields).CJOICFODKMF.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
    (__this->fields).CJOICFODKMF.fields.fakeValue = fVar4;
    (__this->fields).CJOICFODKMF.fields.currentCryptoKey = iVar5;
    (__this->fields).CJOICFODKMF.fields.hiddenValue = iVar6;
    ppSVar7 = &(__this->fields).JLENLBPOCMF;
    *ppSVar7 = (IBKIPBJJCPG->fields).JLENLBPOCMF;
    thunk_FUN_01c20e04(ppSVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

