// CocosAnimation$$Invisible @ RVA 0x33F82B8

void CocosAnimation__Invisible(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
    fVar2 = (float)(*(code *)pBVar1->klass[1]._1.name)(pBVar1,pBVar1->klass[1]._1.namespaze);
    if (fVar2 == 0.0) {
      return;
    }
    pBVar1 = (__this->fields).CAOKGHKPFAE;
    method = extraout_x1;
    if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f82fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pBVar1->klass->vtable)._6_unknown.methodPtr)
                (0,pBVar1,(pBVar1->klass->vtable)._6_unknown.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

