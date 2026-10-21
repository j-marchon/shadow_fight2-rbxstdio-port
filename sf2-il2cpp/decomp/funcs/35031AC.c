// InControl.InputControlMapping$$MapValue @ RVA 0x35031AC

/* WARNING: Removing unreachable block (ram,0x0360323c) */
/* WARNING: Removing unreachable block (ram,0x0360328c) */

float InControl_InputControlMapping__MapValue
                (InControl_InputControlMapping_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  char cVar3;
  InControl_InputControlMapping_Range_o *pIVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = __this;
  if ((DAT_04568871 & 1) == 0) {
    auVar9 = FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04568871 = 1;
  }
  fVar8 = (__this->fields).Scale * value;
  if ((__this->fields).Raw != false) {
LAB_036031f0:
    iVar1 = (__this->fields).Target;
    bVar2 = (__this->fields).Invert;
    if ((iVar1 == 5) || (iVar1 == 2)) {
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      cVar3 = InControl_InputManager_TypeInfo->static_fields->InvertYAxis;
    }
    else {
      cVar3 = '\0';
    }
    if ((bool_conflict)cVar3 != bVar2) {
      fVar8 = -fVar8;
    }
    return fVar8;
  }
  pIVar4 = (__this->fields).SourceRange;
  if (fVar8 < -1.0) {
    fVar8 = -1.0;
  }
  if (pIVar4 != (InControl_InputControlMapping_Range_o *)0x0) {
    fVar6 = (pIVar4->fields).Minimum;
    if (fVar8 < fVar6) {
      return 0.0;
    }
    fVar7 = (pIVar4->fields).Maximum;
    if (fVar7 < fVar8) {
      return 0.0;
    }
    fVar5 = 0.0;
    if ((fVar6 != fVar7) && (fVar8 = (fVar8 - fVar6) / (fVar7 - fVar6), 0.0 <= fVar8)) {
      fVar5 = fVar8;
    }
    pIVar4 = (__this->fields).TargetRange;
    if (pIVar4 != (InControl_InputControlMapping_Range_o *)0x0) {
      fVar8 = (pIVar4->fields).Minimum;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar8 = fVar8 + fVar5 * ((pIVar4->fields).Maximum - fVar8);
      goto LAB_036031f0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
}

