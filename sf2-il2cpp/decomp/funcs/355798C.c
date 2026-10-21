// KJFHBENFBBO$$IIADICPGOMI @ RVA 0x355798C

System_String_o * KJFHBENFBBO__IIADICPGOMI(System_IO_BinaryReader_o *GJMMPLCCOAO,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *str0;
  undefined1 auVar1 [16];
  ushort local_24 [2];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = GJMMPLCCOAO;
  if ((DAT_04568b78 & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    auVar1 = FUN_01bab630(&StringLiteral_1);
    DAT_04568b78 = 1;
  }
  str0 = StringLiteral_1;
  if (GJMMPLCCOAO != (System_IO_BinaryReader_o *)0x0) {
    local_24[0] = (*(GJMMPLCCOAO->klass->vtable)._12_ReadChar.methodPtr)
                            (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._12_ReadChar.method);
    while (local_24[0] != 0) {
      if ((char_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      str1 = System_Char__ToString((uint16_t)local_24,(MethodInfo *)0x0);
      str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      local_24[0] = (*(GJMMPLCCOAO->klass->vtable)._12_ReadChar.methodPtr)
                              (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._12_ReadChar.method);
    }
    return str0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}

