// CocosAnimation$$SetSpriteDrawMode @ RVA 0x33F8140

void CocosAnimation__SetSpriteDrawMode
               (CocosAnimation_o *__this,int32_t COMPCBNGHIL,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f8158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pBVar1->klass->vtable)._4_unknown.methodPtr)
              (pBVar1,(ulong)(uint)COMPCBNGHIL,(pBVar1->klass->vtable)._4_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,(ulong)(uint)COMPCBNGHIL);
}

