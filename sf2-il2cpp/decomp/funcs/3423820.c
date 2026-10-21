// PEEIMHCMDND$$BHCOOILLMGA @ RVA 0x3423820

SimpleJSON_JSONNode_o *
PEEIMHCMDND__BHCOOILLMGA
          (PEEIMHCMDND_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,System_String_o **PBDLKBINBBG,
          MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *AIGOBLJEBCA;
  System_String_o *pSVar2;
  long lVar3;
  long lVar4;
  Google_Protobuf_ByteString_o *pGVar5;
  SimpleJSON_JSONNode_o *a;
  
  if ((DAT_045680f5 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__);
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10944);
    FUN_01bab630(&StringLiteral_10943);
    DAT_045680f5 = 1;
  }
  *PBDLKBINBBG = (System_String_o *)0x0;
  thunk_FUN_01c20e04(PBDLKBINBBG,0);
  if (HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) {
    pGVar5 = (HEHMPFLAEGE->fields).OACFBJNMHCM;
    if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Google_Protobuf_ByteString__op_Equality
                      (pGVar5,(Google_Protobuf_ByteString_o *)0x0,(MethodInfo *)0x0);
    a = (SimpleJSON_JSONNode_o *)0x0;
    if (!bVar1) {
      pGVar5 = (HEHMPFLAEGE->fields).OACFBJNMHCM;
      if (pGVar5 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_03523a20;
      AIGOBLJEBCA = Google_Protobuf_ByteString__ToByteArray(pGVar5,(MethodInfo *)0x0);
      pSVar2 = DBIJLEGANCE__CJBLFEPGPID(AIGOBLJEBCA,(MethodInfo *)0x0);
      *PBDLKBINBBG = pSVar2;
      thunk_FUN_01c20e04(PBDLKBINBBG,pSVar2);
      a = SimpleJSON_JSON__Parse(*PBDLKBINBBG,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      bVar1 = SimpleJSON_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_10944,(MethodInfo *)0x0);
        a = (SimpleJSON_JSONNode_o *)0x0;
      }
      else {
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = SimpleJSON_JSONNode__op_Implicit(a,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(StringLiteral_10943,pSVar2,(MethodInfo *)0x0);
        lVar3 = Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__;
        lVar4 = *(long *)(Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__ + 0x38);
        if (lVar4 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__);
          lVar4 = *(long *)(lVar3 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        Nekki_Utils_DetailedLog__LogDebug
                  (pSVar2,(Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                          **(undefined8 **)(lVar3 + 0xb8),(MethodInfo *)0x0);
      }
    }
    return a;
  }
LAB_03523a20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

