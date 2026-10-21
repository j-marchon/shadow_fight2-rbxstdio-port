// InControl.InputControlMapping.Range$$.cctor @ RVA 0x3503414

void InControl_InputControlMapping_Range___cctor(MethodInfo *method)

{
  InControl_InputControlMapping_Range_o *pIVar1;
  InControl_InputControlMapping_Range_o **ppIVar2;
  
  if ((DAT_04568874 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    DAT_04568874 = 1;
  }
  pIVar1 = (InControl_InputControlMapping_Range_o *)
           thunk_FUN_01bda818(InControl_InputControlMapping_Range_TypeInfo);
  System_Object___ctor((Il2CppObject *)pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (InControl_InputControlMapping_Range_o *)0x0) {
    (pIVar1->fields).Minimum = -1.0;
    (pIVar1->fields).Maximum = 1.0;
    InControl_InputControlMapping_Range_TypeInfo->static_fields->Complete = pIVar1;
    thunk_FUN_01c20e04(InControl_InputControlMapping_Range_TypeInfo->static_fields,pIVar1);
    pIVar1 = (InControl_InputControlMapping_Range_o *)
             thunk_FUN_01bda818(InControl_InputControlMapping_Range_TypeInfo);
    System_Object___ctor((Il2CppObject *)pIVar1,(MethodInfo *)0x0);
    if (pIVar1 != (InControl_InputControlMapping_Range_o *)0x0) {
      (pIVar1->fields).Minimum = 0.0;
      (pIVar1->fields).Maximum = 1.0;
      ppIVar2 = &InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
      *ppIVar2 = pIVar1;
      thunk_FUN_01c20e04(ppIVar2,pIVar1);
      pIVar1 = (InControl_InputControlMapping_Range_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_Range_TypeInfo);
      System_Object___ctor((Il2CppObject *)pIVar1,(MethodInfo *)0x0);
      if (pIVar1 != (InControl_InputControlMapping_Range_o *)0x0) {
        (pIVar1->fields).Minimum = -1.0;
        (pIVar1->fields).Maximum = 0.0;
        ppIVar2 = &InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
        *ppIVar2 = pIVar1;
        thunk_FUN_01c20e04(ppIVar2,pIVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

