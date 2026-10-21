// SFToggle$$SetStatePressed @ RVA 0x30D5850

void SFToggle__SetStatePressed(SFToggle_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.super.m_Interactable != false) {
                    /* WARNING: Could not recover jumptable at 0x031d586c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._26_DoStateTransition.methodPtr)
              (__this,2,0,(__this->klass->vtable)._26_DoStateTransition.method);
    return;
  }
  return;
}

