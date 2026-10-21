// CHDGOFBHAFI$$PKKGAFHHDMN @ RVA 0x3244754

NODLJPNGNBG_o *
CHDGOFBHAFI__PKKGAFHHDMN
          (CHDGOFBHAFI_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,NODLJPNGNBG_o *JOKGJNFDJEE,
          MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_045670a9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_set_Item__);
    FUN_01bab630(&StringLiteral_10908);
    DAT_045670a9 = 1;
  }
  if (IIPPMAOIKHB == (AADKBCFCLKK_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10908,(MethodInfo *)0x0);
    return JOKGJNFDJEE;
  }
  pGVar1 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
  if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    index = 0;
    do {
      if ((pGVar1->fields).count <= index) {
        return JOKGJNFDJEE;
      }
      pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                          Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
      if ((JOKGJNFDJEE == (NODLJPNGNBG_o *)0x0) || (pIVar2 == (Il2CppObject *)0x0)) break;
      if (((void *)(JOKGJNFDJEE->fields).ANAJGHJEEOC == pIVar2[1].monitor) &&
         (*(int *)&pIVar2[2].klass <= (JOKGJNFDJEE->fields).LINGIJDCLLC)) {
        pGVar1 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
        if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__set_Item
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                     (Il2CppObject *)JOKGJNFDJEE,
                     Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_set_Item__);
          return JOKGJNFDJEE;
        }
        break;
      }
      pGVar1 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
      index = index + 1;
    } while (pGVar1 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

