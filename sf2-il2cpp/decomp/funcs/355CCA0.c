// InControl.UnityInputDeviceProfile$$HasJoystickName @ RVA 0x355CCA0

bool InControl_UnityInputDeviceProfile__HasJoystickName
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *joystickName,
               MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  System_String_array *pSVar4;
  System_String_array *pSVar5;
  System_String_o *pattern;
  ulong uVar6;
  
  if ((DAT_04568b8c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<string>__);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&System_StringComparer_TypeInfo);
    DAT_04568b8c = 1;
  }
  pSVar5 = (__this->fields).JoystickNames;
  if ((__this->fields).LastResortRegex == (System_String_o *)0x0) {
    if ((pSVar5 == (System_String_array *)0x0) || (pSVar5->max_length == 0)) {
      pSVar4 = (__this->fields).JoystickRegex;
      if (pSVar4 == (System_String_array *)0x0) {
        return false;
      }
      if ((int)pSVar4->max_length == 0) {
        return false;
      }
      goto LAB_0365ccfc;
    }
  }
  else {
LAB_0365ccfc:
    if (pSVar5 == (System_String_array *)0x0) goto LAB_0365cd88;
  }
  if ((System_StringComparer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_0455ff80 == '\0') {
    FUN_01bab630(&System_StringComparer_TypeInfo);
    DAT_0455ff80 = '\x01';
  }
  if ((System_StringComparer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = System_Linq_Enumerable__Contains<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                     (Il2CppObject *)joystickName,
                     (System_Collections_Generic_IEqualityComparer_TSource__o *)
                     System_StringComparer_TypeInfo->static_fields->s_ordinalIgnoreCase,
                     Method_System_Linq_Enumerable_Contains<string>__);
  if (bVar3) {
    return true;
  }
LAB_0365cd88:
  pSVar5 = (__this->fields).JoystickRegex;
  if (pSVar5 == (System_String_array *)0x0) {
    return false;
  }
  uVar6 = 0;
  while( true ) {
    uVar2 = (uint)pSVar5->max_length;
    lVar1 = (long)(int)uVar2;
    if (lVar1 <= (long)uVar6) {
      return (long)uVar6 < lVar1;
    }
    if (uVar2 <= uVar6) break;
    pattern = pSVar5->m_Items[uVar6];
    if ((System_Text_RegularExpressions_Regex_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = System_Text_RegularExpressions_Regex__IsMatch(joystickName,pattern,1,(MethodInfo *)0x0);
    if (bVar3) {
      return (long)uVar6 < lVar1;
    }
    pSVar5 = (__this->fields).JoystickRegex;
    uVar6 = uVar6 + 1;
    if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

