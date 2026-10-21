// InControl.UnityButtonSource$$GetButtonKey @ RVA 0x3022A5C

System_String_o *
InControl_UnityButtonSource__GetButtonKey(int32_t joystickId,int32_t buttonId,MethodInfo *method)

{
  System_String_array *pSVar1;
  long lVar2;
  
  if ((DAT_04565c65 & 1) == 0) {
    FUN_01bab630(&InControl_UnityButtonSource_TypeInfo);
    DAT_04565c65 = 1;
  }
  pSVar1 = InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((joystickId - 1U < (uint)pSVar1->bounds->length) &&
       (lVar2 = pSVar1->bounds[1].length, (uint)buttonId < (uint)lVar2)) {
      return pSVar1->m_Items[lVar2 * (int)(joystickId - 1U) + (long)buttonId];
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

