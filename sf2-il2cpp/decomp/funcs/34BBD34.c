// SFButton$$SetStatePressed @ RVA 0x34BBD34

void SFButton__SetStatePressed(SFButton_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x035bbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,2,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}

