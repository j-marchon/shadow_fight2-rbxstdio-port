// AFDHGAMMHEC$$Dispose @ RVA 0x31E34E8

void AFDHGAMMHEC__Dispose(AFDHGAMMHEC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_IO_MemoryStream_o **ppSVar1;
  Ionic_Zip_ZipFile_o **ppIVar2;
  
  if ((DAT_04566d53 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ZipEntry>_Clear__);
    DAT_04566d53 = 1;
  }
  if ((__this->fields).LEIBAIOIAPP != false) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).LLNLJDIGKDA;
  (__this->fields).LEIBAIOIAPP = true;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_ZipEntry>_Clear__);
    ppIVar2 = &(__this->fields).DHAMIKMBDEE;
    if (*ppIVar2 != (Ionic_Zip_ZipFile_o *)0x0) {
      Ionic_Zip_ZipFile__Dispose(*ppIVar2,(MethodInfo *)0x0);
      ppSVar1 = &(__this->fields).IHCDIHOCPMI;
      if (*ppSVar1 != (System_IO_MemoryStream_o *)0x0) {
        System_IO_Stream__Dispose((System_IO_Stream_o *)*ppSVar1,(MethodInfo *)0x0);
        *ppIVar2 = (Ionic_Zip_ZipFile_o *)0x0;
        thunk_FUN_01c20e04(ppIVar2,0);
        *ppSVar1 = (System_IO_MemoryStream_o *)0x0;
        thunk_FUN_01c20e04(ppSVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

