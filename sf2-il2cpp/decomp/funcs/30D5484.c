// SFToggle$$SetStatNormal @ RVA 0x30D5484

void SFToggle__SetStatNormal(SFToggle_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x031d54a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,0,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}

