// CocosAnimation$$set_Color @ RVA 0x33F81B0

void CocosAnimation__set_Color
               (CocosAnimation_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f81c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._8_unknown.methodPtr)
              (pBVar1,(pBVar1->klass->vtable)._8_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.r,CJNHFNHJHPE.fields.g,CJNHFNHJHPE.fields.b,CJNHFNHJHPE.fields.a);
}

