// CUDLR.Server$$FKKLAHANDLH @ RVA 0x33BE8A4

void CUDLR_Server__FKKLAHANDLH
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).PDALMPAOAFM;
  if (__this_00 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Start(__this_00,(MethodInfo *)0x0);
    CUDLR_Server__LOPJACDNMJF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

