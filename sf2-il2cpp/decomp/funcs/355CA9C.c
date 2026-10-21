// InControl.UnityInputDeviceProfile$$get_IsSupportedOnThisPlatform @ RVA 0x355CA9C

bool InControl_UnityInputDeviceProfile__get_IsSupportedOnThisPlatform
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  ulong uVar3;
  System_String_o *pSVar4;
  System_String_o *__this_00;
  System_String_array *pSVar5;
  long lVar6;
  
  if ((DAT_04568b8b & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04568b8b = 1;
    method = extraout_x1;
  }
  bVar2 = InControl_UnityInputDeviceProfile__get_IsSupportedOnThisVersionOfUnity(__this,method);
  if (bVar2) {
    pSVar5 = (__this->fields).SupportedPlatforms;
    if ((pSVar5 == (System_String_array *)0x0) || (uVar3 = pSVar5->max_length, uVar3 == 0)) {
      return true;
    }
    if (0 < (int)uVar3) {
      lVar6 = 0;
      while( true ) {
        if ((uint)uVar3 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar4 = pSVar5->m_Items[lVar6];
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04568c0f == '\0') {
          FUN_01bab630(&InControl_InputManager_TypeInfo);
          DAT_04568c0f = '\x01';
        }
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pSVar4 == (System_String_o *)0x0) break;
        __this_00 = InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
        pSVar4 = System_String__ToUpper(pSVar4,(MethodInfo *)0x0);
        if (__this_00 == (System_String_o *)0x0) break;
        bVar2 = System_String__Contains(__this_00,pSVar4,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        uVar1 = (uint)pSVar5->max_length;
        uVar3 = (ulong)uVar1;
        lVar6 = lVar6 + 1;
        if ((int)uVar1 <= (int)lVar6) {
          return false;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}

