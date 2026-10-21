// SFButton$$SetStateNormal @ RVA 0x34BBD8C

void SFButton__SetStateNormal(SFButton_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x035bbda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,0,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}

