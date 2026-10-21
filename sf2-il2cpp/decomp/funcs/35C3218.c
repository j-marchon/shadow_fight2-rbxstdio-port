// InControl.TwoAxisInputControl$$op_Implicit @ RVA 0x35C3218

UnityEngine_Vector3_o
InControl_TwoAxisInputControl__op_Implicit
          (InControl_TwoAxisInputControl_o *control,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_o UVar3;
  
  if (control != (InControl_TwoAxisInputControl_o *)0x0) {
    uVar1 = (control->fields)._X_k__BackingField;
    uVar2 = (control->fields)._Y_k__BackingField;
    UVar3.fields.y = (float)uVar2;
    UVar3.fields.x = (float)uVar1;
    UVar3.fields.z = 0.0;
    return (UnityEngine_Vector3_o)UVar3.fields;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036c3230 to 037c324b has its CatchHandler @ 036c32bc */
  FUN_01bab8c8();
}

