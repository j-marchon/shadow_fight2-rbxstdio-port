// InControl.InputManager$$AssertIsSetup @ RVA 0x3215FA0

void InControl_InputManager__AssertIsSetup(MethodInfo *method)

{
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar1;
  
  if ((DAT_04566ec7 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec7 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (InControl_InputManager_TypeInfo->static_fields->isSetup != false) {
    return;
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7569);
  System_Exception___ctor(__this,message,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_InControl_InputManager_AssertIsSetup__);
                    /* try { // try from 03316038 to 034160fb has its CatchHandler @ 03316038
                       catch() { ... } // from try @ 03316038 with catch @ 03316038
                       catch() { ... } // from try @ 03316144 with catch @ 03316038
                       catch() { ... } // from try @ 03316188 with catch @ 03316038
                       catch() { ... } // from try @ 033161c0 with catch @ 03316038
                       catch() { ... } // from try @ 03316200 with catch @ 03316038 */
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this,uVar1);
}

