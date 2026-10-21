// CocosAnimation$$set_RectAnchor @ RVA 0x33F8864

void CocosAnimation__set_RectAnchor
               (CocosAnimation_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f887c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
              (pBVar1,(pBVar1->klass->vtable)._9_HNIHOIAMDPC.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x,CJNHFNHJHPE.fields.y);
}

