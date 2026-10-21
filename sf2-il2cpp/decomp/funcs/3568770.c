// ACKAABIGIAI$$DFBPBPPNIBC @ RVA 0x3568770

bool ACKAABIGIAI__DFBPBPPNIBC(ACKAABIGIAI_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  undefined1 uVar1;
  
  if (LDOOMGABFME == (JMIFGHKOLCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((LDOOMGABFME->fields).ELCBIMMGAFJ == 10) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x036687b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(__this->klass->vtable)._21_FPEEJMINKBI.methodPtr)
                    (__this,(ulong)((LDOOMGABFME->fields).DJCKADHHMAC <
                                   *(int *)&(__this->fields).super.super.field_0x5c),
                     (__this->klass->vtable)._21_FPEEJMINKBI.method);
  return (bool)uVar1;
}

