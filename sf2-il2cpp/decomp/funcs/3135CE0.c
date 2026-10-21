// OFFIONDOEPM$$HHJFGJLPHCH @ RVA 0x3135CE0

System_String_o * OFFIONDOEPM__HHJFGJLPHCH(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  int32_t startIndex;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this;
  HBNENINHPGF_o *pHVar3;
  MethodInfo *extraout_x1;
  System_String_o *pSVar4;
  
  if ((DAT_04566700 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10832);
    FUN_01bab630(&StringLiteral_3107);
    FUN_01bab630(&StringLiteral_10831);
    FUN_01bab630(&StringLiteral_9084);
    FUN_01bab630(&StringLiteral_1377);
    DAT_04566700 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if (__this != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
    pHVar3 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this,ACCIHBHMFPN,(MethodInfo *)0x0);
    if (pHVar3 == (HBNENINHPGF_o *)0x0) {
      return StringLiteral_9084;
    }
    pSVar4 = (pHVar3->fields)._PGCEKJLODEJ_k__BackingField;
    if (pSVar4 != (System_String_o *)0x0) {
      startIndex = System_String__IndexOf(pSVar4,StringLiteral_1377,(MethodInfo *)0x0);
      pSVar4 = System_String__Substring(pSVar4,startIndex,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3107,(MethodInfo *)0x0);
      puVar1 = &StringLiteral_10832;
      if (!bVar2) {
        puVar1 = &StringLiteral_10831;
      }
      pSVar4 = System_String__Concat((System_String_o *)*puVar1,pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

