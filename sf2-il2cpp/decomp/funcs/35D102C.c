// UnityAnimator$$AnimationCompleteHandler @ RVA 0x35D102C

void UnityAnimator__AnimationCompleteHandler(UnityAnimator_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_Animation_o *pUVar3;
  
  pUVar3 = (__this->fields)._animator;
  iVar1 = (__this->fields).AGCNHOBLNLO + 1;
  (__this->fields).AGCNHOBLNLO = iVar1;
  if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
    iVar2 = UnityEngine_Animation__GetClipCount(pUVar3,(MethodInfo *)0x0);
    if (iVar2 <= iVar1) {
      if ((__this->fields).IsLooped == false) {
        return;
      }
      pUVar3 = (__this->fields)._animator;
      (__this->fields).AGCNHOBLNLO = 0;
      if (pUVar3 == (UnityEngine_Animation_o *)0x0) goto LAB_036d10a0;
      UnityEngine_Animation__Rewind(pUVar3,(MethodInfo *)0x0);
    }
                    /* WARNING: Could not recover jumptable at 0x036d1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._5_HHINJBCNODJ.methodPtr)
              (__this,(ulong)(uint)(__this->fields).AGCNHOBLNLO,
               (__this->klass->vtable)._5_HHINJBCNODJ.method);
    return;
  }
LAB_036d10a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

