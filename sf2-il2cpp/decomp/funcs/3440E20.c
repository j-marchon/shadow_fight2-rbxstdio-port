// InControl.InputControl$$.cctor @ RVA 0x3440E20

void InControl_InputControl___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  InControl_InputControl_o *__this;
  
  if ((DAT_0456821e & 1) == 0) {
    FUN_01bab630(&InControl_InputControl_TypeInfo);
    FUN_01bab630(&StringLiteral_9648);
    DAT_0456821e = 1;
  }
  __this = (InControl_InputControl_o *)thunk_FUN_01bda818(InControl_InputControl_TypeInfo);
  pSVar1 = StringLiteral_9648;
  (__this->fields).Sensitivity = 1.0;
  (__this->fields).UpperDeadZone = 1.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Handle_k__BackingField = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  InControl_InputControl_TypeInfo->static_fields->Null = __this;
                    /* try { // try from 03540eb4 to 03640ebb has its CatchHandler @ 035412d8 */
  thunk_FUN_01c20e04(InControl_InputControl_TypeInfo->static_fields,__this);
  return;
}

