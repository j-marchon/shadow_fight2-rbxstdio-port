// IOIKBGAJIGO$$KIDFPECFLPB @ RVA 0x3375D7C

void IOIKBGAJIGO__KIDFPECFLPB
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_Exception_o *__this;
  undefined8 uVar5;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  uint uVar6;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_48;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_40;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_38;
  
  if ((DAT_04567b48 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__);
    FUN_01bab630(&StringLiteral_12523);
    DAT_04567b48 = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_38,0,
             (MethodInfo_27F8328 *)Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__);
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = IOIKBGAJIGO__PIPGAPGKBLM
                     (IIDPDAKKFFN,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38,
                      in_x3);
  pSVar3 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  local_40.hasValue = false;
  local_40._1_3_ = 0;
  local_40.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_40,2,
             (MethodInfo_27F8328 *)Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__);
  pSVar2 = IOIKBGAJIGO__PIPGAPGKBLM
                     (IIDPDAKKFFN,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_40,
                      in_x3);
  pSVar4 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value = 0;
  method_00 = Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_48,2,
             (MethodInfo_27F8328 *)Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__);
  pSVar4 = IOIKBGAJIGO__ABNDLGMOFKJ
                     (pSVar4,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_48,method_00);
  if (pSVar4 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (pSVar3 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  uVar1 = System_Math__Max((int32_t)pSVar4->max_length,(int32_t)pSVar3->max_length,(MethodInfo *)0x0
                          );
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      if ((uint)pSVar4->max_length == uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if ((uint)pSVar3->max_length <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pSVar4->m_Items[(int)uVar6] != pSVar3->m_Items[(int)uVar6]) {
        thunk_FUN_01bb9178(&System_Exception_TypeInfo);
        __this = (System_Exception_o *)thunk_FUN_01bda818();
        System_Exception___ctor(__this,(MethodInfo *)0x0);
        uVar5 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_KIDFPECFLPB__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this,uVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_12523,(MethodInfo *)0x0);
  return;
}

