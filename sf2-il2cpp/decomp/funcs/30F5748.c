// BIACHHMPICI$$.ctor @ RVA 0x30F5748

void BIACHHMPICI___ctor(BIACHHMPICI_o *__this,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_IO_MemoryStream_o *__this_00;
  
  if ((DAT_0456644e & 1) == 0) {
    FUN_01bab630(&System_IO_BinaryWriter_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_0456644e = 1;
  }
  pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  (__this->fields).CFKLCHJHBFB = pSVar1;
  thunk_FUN_01c20e04();
  __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_00,(MethodInfo *)0x0);
  if ((System_IO_BinaryWriter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_IO_BinaryWriter___ctor
            ((System_IO_BinaryWriter_o *)__this,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  return;
}

