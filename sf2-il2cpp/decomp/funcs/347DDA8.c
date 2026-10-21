// KPLJFEEMAOH$$GEBNENADLLM @ RVA 0x347DDA8

KALOJBMDHLA_o * KPLJFEEMAOH__GEBNENADLLM(MethodInfo *method)

{
  System_String_array *CHNMNMJJJGL;
  KALOJBMDHLA_o *__this;
  
  if ((DAT_0456836b & 1) == 0) {
    FUN_01bab630(&KALOJBMDHLA_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_6765);
    FUN_01bab630(&StringLiteral_12398);
    DAT_0456836b = 1;
  }
  CHNMNMJJJGL = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (CHNMNMJJJGL != (System_String_array *)0x0) {
    if ((int)CHNMNMJJJGL->max_length != 0) {
      CHNMNMJJJGL->m_Items[0] = StringLiteral_9679;
      thunk_FUN_01c20e04();
      __this = (KALOJBMDHLA_o *)thunk_FUN_01bda818(KALOJBMDHLA_TypeInfo);
      KALOJBMDHLA___ctor(__this,StringLiteral_6765,StringLiteral_12398,CHNMNMJJJGL,(MethodInfo *)0x0
                        );
      return __this;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

