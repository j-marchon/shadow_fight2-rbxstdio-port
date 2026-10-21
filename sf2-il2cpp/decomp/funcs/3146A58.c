// KKLJIDJBFEI$$CADOGBHCINN @ RVA 0x3146A58

void KKLJIDJBFEI__CADOGBHCINN
               (KKLJIDJBFEI_o *__this,System_String_o *NONPLOOOOAG,int32_t ACCIHBHMFPN,
               System_Action_KEFHDOHHHML__o *IELDNEAAPBE,MethodInfo *method)

{
  AJINOJNMEEK_o *__this_00;
  KMBNFNCDDBP_o *__this_01;
  System_String_o *pSVar1;
  
  if ((DAT_0456677e & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&StringLiteral_16981);
    DAT_0456677e = 1;
  }
  __this_00 = (AJINOJNMEEK_o *)thunk_FUN_01bda818(AJINOJNMEEK_TypeInfo);
  AJINOJNMEEK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (AJINOJNMEEK_o *)0x0) {
    (__this_00->fields).EMDNDLOODLG = ACCIHBHMFPN;
    AJINOJNMEEK__IPNMMELEIJE(__this_00,NONPLOOOOAG,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (__this_01 != (KMBNFNCDDBP_o *)0x0) {
      pSVar1 = KMBNFNCDDBP__MLHLAKMLJNI(__this_01,(MethodInfo *)0x0);
      (__this_00->fields).ABFBDJFPIMM = pSVar1;
      thunk_FUN_01c20e04();
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this,StringLiteral_16981,(Google_Protobuf_IMessage_o *)__this_00
                 ,IELDNEAAPBE,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

