// InControl.InputManager$$InputManager_OnActiveDeviceChanged @ RVA 0x3215974

void InControl_InputManager__InputManager_OnActiveDeviceChanged
               (InControl_InputDevice_o *device,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *pSVar1;
  
  if ((DAT_04566ec4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15492);
    DAT_04566ec4 = 1;
  }
                    /* try { // try from 033159b4 to 034159bb has its CatchHandler @ 03315a10 */
  pSVar1 = StringLiteral_15492;
                    /* try { // try from 033159bc to 03415a03 has its CatchHandler @ 0331591c */
  if (device == (InControl_InputDevice_o *)0x0) {
    str1 = (System_String_o *)0x0;
  }
  else {
    str1 = (System_String_o *)
           (*(device->klass->vtable)._3_ToString.methodPtr)
                     (device,(device->klass->vtable)._3_ToString.method);
  }
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 03315a04 to 03415a07 has its CatchHandler @ 03315a0c */
                    /* try { // try from 03315a08 to 03415a27 has its CatchHandler @ 0331591c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315a04 with catch @ 03315a0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033159b4 with catch @ 03315a10
                        */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}

