// CocosAnimation$$ClearSpriteResetFrames @ RVA 0x33F8440

void CocosAnimation__ClearSpriteResetFrames(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
    (*(pBVar1->klass->vtable)._5_unknown.methodPtr)
              (pBVar1,0,(pBVar1->klass->vtable)._5_unknown.method);
    (__this->fields).BJIKPLGMOMI = 0.0;
    (__this->fields).FJJPFEGPEFA = (__this->fields).PAGAGEMKILK;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

