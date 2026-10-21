// ProgressBarBase$$SetValueBorders @ RVA 0x3195920

void ProgressBarBase__SetValueBorders
               (ProgressBarBase_o *__this,float OGHDILLOGDA,float KMOHFJKJBMK,MethodInfo *method)

{
  ProgressBarBase_c *pPVar1;
  float fVar2;
  float fVar3;
  
  pPVar1 = __this->klass;
  (__this->fields).FGFINIPCGAL = OGHDILLOGDA;
  (__this->fields).LBDAPHMEAKC = KMOHFJKJBMK;
  fVar3 = (__this->fields).JGFKHMMNJBA;
  fVar2 = (float)(*(pPVar1->vtable)._10_get_MaxValue.methodPtr)
                           (__this,(pPVar1->vtable)._10_get_MaxValue.method);
  pPVar1 = __this->klass;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  if (fVar3 < OGHDILLOGDA) {
    fVar2 = OGHDILLOGDA;
  }
  (__this->fields).JGFKHMMNJBA = fVar2;
                    /* WARNING: Could not recover jumptable at 0x0329596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pPVar1->vtable)._4_unknown.methodPtr)(__this,(pPVar1->vtable)._4_unknown.method);
  return;
}

