// InControl.InControlManager$$HandleOnLogMessage @ RVA 0x34D0BBC

void InControl_InControlManager__HandleOnLogMessage
               (InControl_InControlManager_o *__this,InControl_LogMessage_o logMessage,
               MethodInfo *method)

{
  System_String_o *message;
  int iVar1;
  
  message = logMessage.fields.text;
  if ((DAT_045686af & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045686af = 1;
  }
  iVar1 = logMessage.fields.type;
  if (iVar1 == 2) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  return;
}

