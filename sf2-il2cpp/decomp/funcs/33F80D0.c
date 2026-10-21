// CocosAnimation$$set_ChildSize @ RVA 0x33F80D0

void CocosAnimation__set_ChildSize
               (CocosAnimation_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f80e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._7_unknown.methodPtr)
              (pBVar1,(pBVar1->klass->vtable)._7_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x,CJNHFNHJHPE.fields.y);
}

