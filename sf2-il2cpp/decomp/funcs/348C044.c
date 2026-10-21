// InControl.InputDevice$$Vibrate @ RVA 0x348C044

void InControl_InputDevice__Vibrate
               (InControl_InputDevice_o *__this,float intensity,MethodInfo *method)

{
  undefined4 in_register_00005004;
  
                    /* WARNING: Could not recover jumptable at 0x0358c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_Vibrate.methodPtr)
            (intensity,CONCAT44(in_register_00005004,intensity),__this,
             (__this->klass->vtable)._5_Vibrate.method);
  return;
}

