// KDPDBGNOFEN$$NONJDMMENLN @ RVA 0x34AF418

void KDPDBGNOFEN__NONJDMMENLN(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  ACAEKBNCODE_o *pAVar1;
  
  pAVar1 = (__this->fields).PGDGCNKLKMN;
  if (pAVar1 != (ACAEKBNCODE_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035af430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->klass->vtable)._4_NONJDMMENLN.methodPtr)
              (pAVar1,(pAVar1->klass->vtable)._4_NONJDMMENLN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

