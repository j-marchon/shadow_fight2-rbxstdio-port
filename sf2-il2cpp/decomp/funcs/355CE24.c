// InControl.UnityInputDeviceProfile$$HasLastResortRegex @ RVA 0x355CE24

bool InControl_UnityInputDeviceProfile__HasLastResortRegex
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *joystickName,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pattern;
  
  if ((DAT_04568b8d & 1) == 0) {
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    DAT_04568b8d = 1;
  }
  pattern = (__this->fields).LastResortRegex;
  if (pattern != (System_String_o *)0x0) {
    if ((System_Text_RegularExpressions_Regex_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Text_RegularExpressions_Regex__IsMatch(joystickName,pattern,1,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

