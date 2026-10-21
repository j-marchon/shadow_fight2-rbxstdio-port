// InControl.UnityInputDevice$$get_IsKnown @ RVA 0x315949C

bool InControl_UnityInputDevice__get_IsKnown
               (InControl_UnityInputDevice_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)&(__this->fields)._JoystickId_k__BackingField;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032594b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

