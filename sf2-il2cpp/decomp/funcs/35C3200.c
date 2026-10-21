// InControl.TwoAxisInputControl$$op_Implicit @ RVA 0x35C3200

UnityEngine_Vector2_o
InControl_TwoAxisInputControl__op_Implicit
          (InControl_TwoAxisInputControl_o *control,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (control != (InControl_TwoAxisInputControl_o *)0x0) {
    UVar1.fields.x = (control->fields)._X_k__BackingField;
    UVar1.fields.y = (control->fields)._Y_k__BackingField;
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

