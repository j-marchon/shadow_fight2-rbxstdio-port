// CUDLR.Server$$COFOOGIFODL @ RVA 0x33BEA24

void CUDLR_Server__COFOOGIFODL
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o *__this_00;
  
  if ((__this->fields).PDALMPAOAFM == (System_Net_HttpListener_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CUDLR_Server__CEOHKHGKEKL(__this,(MethodInfo *)IMCONGDFJME);
  __this_00 = (__this->fields).PDALMPAOAFM;
  if (__this_00 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Stop(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

