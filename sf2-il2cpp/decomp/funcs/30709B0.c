// EEGDOGKBLNG$$AMLHEDJMKEC @ RVA 0x30709B0

System_Collections_Generic_Dictionary_string__int__o *
EEGDOGKBLNG__AMLHEDJMKEC(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  System_String_array *OKBIKHHKOEN;
  System_Collections_Generic_Dictionary_string__int__o *pSVar1;
  MethodInfo *in_x3;
  
  if ((DAT_04565f64 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_11980);
    FUN_01bab630(&StringLiteral_8234);
    DAT_04565f64 = 1;
  }
  OKBIKHHKOEN = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (OKBIKHHKOEN != (System_String_array *)0x0) {
    if ((int)OKBIKHHKOEN->max_length != 0) {
      OKBIKHHKOEN->m_Items[0] = StringLiteral_11980;
      thunk_FUN_01c20e04();
      pSVar1 = EEGDOGKBLNG__MPLCEKAPDHJ(__this,StringLiteral_8234,OKBIKHHKOEN,in_x3);
      return pSVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

