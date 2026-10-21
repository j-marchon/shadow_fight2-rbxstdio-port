// Original name: Nekki.SF2.Core.MultiplayerSF.RaidPlayerInfoHelper  (obfuscated PEEIMHCMDND)
// TypeDefIndex 2817
// Namespace: 
// public class RaidPlayerInfoHelper
// Fields:
//   private IEnumerator EMFMPPIGHKC; // 0x10
//   private bool CKBPCAHHDEN; // 0x18

// ===== public JSONNode BHCOOILLMGA(EOLFEKNCPLM HEHMPFLAEGE, out string PBDLKBINBBG)  [RVA 0x3423820]
// RaidPlayerInfoHelper$$BHCOOILLMGA @ RVA 0x3423820

SimpleJSON_JSONNode_o *
RaidPlayerInfoHelper__BHCOOILLMGA
          (RaidPlayerInfoHelper_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,System_String_o **PBDLKBINBBG,
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
    FUN_01bab630(&StringLiteral_10944/*"RaidPlayerInfoHelper::GetClientProfileJson: cannot parse client_profile bytes"*/);
    FUN_01bab630(&StringLiteral_10943/*"RaidPlayerInfoHelper::GetClientProfileJson: Profile:\n"*/);
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
        UnityEngine_Debug__LogError(StringLiteral_10944/*"RaidPlayerInfoHelper::GetClientProfileJson: cannot parse client_profile bytes"*/,(MethodInfo *)0x0);
        a = (SimpleJSON_JSONNode_o *)0x0;
      }
      else {
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = SimpleJSON_JSONNode__op_Implicit(a,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(StringLiteral_10943/*"RaidPlayerInfoHelper::GetClientProfileJson: Profile:\n"*/,pSVar2,(MethodInfo *)0x0);
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


// ===== private void CKFELMACGEH()  [RVA 0x3423A24]
// RaidPlayerInfoHelper$$CKFELMACGEH @ RVA 0x3423A24

void RaidPlayerInfoHelper__CKFELMACGEH(RaidPlayerInfoHelper_o *__this,MethodInfo *method)

{
  SimpleJSON_JSONObject_o *__this_00;
  SimpleJSON_JSONNode_o *pSVar1;
  SFRequestSender_o *pKVar2;
  int64_t n;
  SimpleJSON_JSONArray_o *__this_01;
  RaidPlayerInfoHelper_o *__this_02;
  System_String_o *AIGOBLJEBCA;
  System_Byte_array *bytes;
  OLHGMELLLFK_o *__this_03;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045680f6 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    FUN_01bab630(&StringLiteral_21837/*"update_client_profile"*/);
    FUN_01bab630(&StringLiteral_19522/*"lot"*/);
    FUN_01bab630(&StringLiteral_18062/*"eq"*/);
    FUN_01bab630(&StringLiteral_21920/*"v"*/);
    DAT_045680f6 = 1;
    method = extraout_x1;
  }
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo,method);
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SimpleJSON_JSONNode__op_Implicit(2,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSON_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,StringLiteral_21920/*"v"*/,pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    pKVar2 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 != (SFRequestSender_o *)0x0) {
      n = SFRequestSender__HEDLNKCNMCI(pKVar2,(MethodInfo *)0x0);
      pSVar1 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,StringLiteral_19522/*"lot"*/,pSVar1,(__this_00->klass->vtable)._8_set_Item.method)
      ;
      __this_01 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,StringLiteral_18062/*"eq"*/,__this_01,
                 (__this_00->klass->vtable)._8_set_Item.method);
      method_00 = (__this_00->klass->vtable)._7_get_Item.method;
      __this_02 = (RaidPlayerInfoHelper_o *)
                  (*(__this_00->klass->vtable)._7_get_Item.methodPtr)(__this_00,StringLiteral_18062/*"eq"*/)
      ;
      RaidPlayerInfoHelper__OGHFMBJIOBB(__this_02,(SimpleJSON_JSONNode_o *)__this_02,method_00);
      AIGOBLJEBCA = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      bytes = DBIJLEGANCE__KEIDOJDOFNN(AIGOBLJEBCA,(System_Text_Encoding_o *)0x0,(MethodInfo *)0x0);
      __this_03 = (OLHGMELLLFK_o *)thunk_FUN_01bda818(OLHGMELLLFK_TypeInfo);
      OLHGMELLLFK___ctor(__this_03,(MethodInfo *)0x0);
      if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE = Google_Protobuf_ByteString__CopyFrom(bytes,(MethodInfo *)0x0);
      if (__this_03 != (OLHGMELLLFK_o *)0x0) {
        OLHGMELLLFK__BGOOPIDKJEC(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
        pKVar2 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar2 != (SFRequestSender_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)pKVar2,StringLiteral_21837/*"update_client_profile"*/,
                     (Google_Protobuf_IMessage_o *)__this_03,(System_Action_KEFHDOHHHML__o *)0x0,0.0
                     ,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GCGHENNHMOH(byte[] AIGOBLJEBCA)  [RVA 0x34240C0]
// RaidPlayerInfoHelper$$GCGHENNHMOH @ RVA 0x34240C0

/* WARNING: Removing unreachable block (ram,0x035242f0) */
/* WARNING: Removing unreachable block (ram,0x035242e4) */
/* WARNING: Removing unreachable block (ram,0x035242f8) */

System_String_o * RaidPlayerInfoHelper__GCGHENNHMOH(System_Byte_array *AIGOBLJEBCA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_IO_MemoryStream_o *__this;
  Ionic_Zlib_ZlibStream_o *__this_00;
  System_IO_StreamReader_o *__this_01;
  System_String_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  System_IO_StreamReader_c *pSVar6;
  Ionic_Zlib_ZlibStream_c *pIVar7;
  System_IO_MemoryStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045680f7 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&System_IO_StreamReader_TypeInfo);
    FUN_01bab630(&Ionic_Zlib_ZlibStream_TypeInfo);
    DAT_045680f7 = 1;
    method = extraout_x1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo,method);
  System_IO_MemoryStream___ctor(__this,AIGOBLJEBCA,(MethodInfo *)0x0);
  __this_00 = (Ionic_Zlib_ZlibStream_o *)thunk_FUN_01bda818(Ionic_Zlib_ZlibStream_TypeInfo);
  Ionic_Zlib_ZlibStream___ctor(__this_00,(System_IO_Stream_o *)__this,1,(MethodInfo *)0x0);
  __this_01 = (System_IO_StreamReader_o *)thunk_FUN_01bda818(System_IO_StreamReader_TypeInfo);
  System_IO_StreamReader___ctor(__this_01,(System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  if (__this_01 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (System_String_o *)
           (*(__this_01->klass->vtable)._12_ReadToEnd.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._12_ReadToEnd.method);
  pSVar6 = __this_01->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar5 = &(pSVar6->vtable)._0_Equals + *piVar10;
        goto LAB_035241f0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_01,System_IDisposable_TypeInfo,0);
LAB_035241f0:
  (*pVVar5->methodPtr)(__this_01,pVVar5->method);
  if (__this_00 != (Ionic_Zlib_ZlibStream_o *)0x0) {
    pIVar7 = __this_00->klass;
    uVar2._0_1_ = (pIVar7->_2).rank;
    uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = &(pIVar7->vtable)._0_Equals + *piVar10;
          goto LAB_03524254;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_03524254:
    (*pVVar5->methodPtr)(__this_00,pVVar5->method);
  }
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar8 = __this->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar3;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = &(pSVar8->vtable)._0_Equals + *piVar10;
          goto LAB_035242b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_035242b8:
    (*pVVar5->methodPtr)(__this,pVVar5->method);
  }
  return pSVar4;
}


// ===== public static ModelParameters BHNOCDOCAJD(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x3424520]
// RaidPlayerInfoHelper$$BHNOCDOCAJD @ RVA 0x3424520

ModelParameters_o * RaidPlayerInfoHelper__BHNOCDOCAJD(EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  RaidPlayerInfoHelper_o *pPVar2;
  SimpleJSON_JSONNode_o *a;
  ModelParameters_o *pPVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_String_o *local_28;
  
  if ((DAT_045680f8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_045680f8 = 1;
    method = extraout_x1;
  }
  local_28 = (System_String_o *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  if (pPVar2 != (RaidPlayerInfoHelper_o *)0x0) {
    a = RaidPlayerInfoHelper__BHCOOILLMGA(pPVar2,HEHMPFLAEGE,&local_28,in_x3);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pPVar3 = (ModelParameters_o *)0x0;
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      if (pPVar2 == (RaidPlayerInfoHelper_o *)0x0) goto LAB_03524600;
      pPVar3 = RaidPlayerInfoHelper__HMDLEPBJLNL(pPVar2,a,method_00);
    }
    return pPVar3;
  }
LAB_03524600:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OGHFMBJIOBB(JSONNode JGJJDOBMBNB)  [RVA 0x3423C68]
// RaidPlayerInfoHelper$$OGHFMBJIOBB @ RVA 0x3423C68

/* WARNING: Removing unreachable block (ram,0x03523f60) */
/* WARNING: Removing unreachable block (ram,0x03523f64) */
/* WARNING: Removing unreachable block (ram,0x0352400c) */

void RaidPlayerInfoHelper__OGHFMBJIOBB
               (RaidPlayerInfoHelper_o *__this,SimpleJSON_JSONNode_o *JGJJDOBMBNB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  SimpleJSON_JSONObject_o *__this_02;
  SimpleJSON_JSONNode_o *pSVar3;
  long *plVar4;
  SimpleJSON_JSONString_o *__this_03;
  Roster_o *pAVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045680f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONString_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    DAT_045680f9 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (Roster_o *)0x0) {
    __this_00 = (pAVar5->fields).OIDPLCLELEN;
    if ((__this_00 == (GGHCLMEFIGO_o *)0x0) ||
       (__this_01 = GGHCLMEFIGO__PDBBGCIHBFL(__this_00,(MethodInfo *)0x0),
       __this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                             ), pIVar1 = local_80.fields._current, bVar2) {
      if (local_80.fields._current != (Il2CppObject *)0x0) {
        __this_02 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
        if (JGJJDOBMBNB == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(JGJJDOBMBNB->klass->vtable)._21_Add.methodPtr)
                  (JGJJDOBMBNB,__this_02,(JGJJDOBMBNB->klass->vtable)._21_Add.method);
        pIVar6 = pIVar1[1].klass;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = SimpleJSON_JSONNode__op_Implicit((System_String_o *)pIVar6,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,StringLiteral_9327/*"Name"*/,pSVar3,(__this_02->klass->vtable)._8_set_Item.method
                  );
        pIVar6 = pIVar1[0xb].klass;
        if (pIVar6 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)pIVar6,
                   Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                                 ), pIVar1 = local_a0.fields._current, bVar2) {
          if (local_a0.fields._current != (Il2CppObject *)0x0) {
            plVar4 = (long *)(*(__this_02->klass->vtable)._7_get_Item.methodPtr)
                                       (__this_02,StringLiteral_10239/*"Perks"*/,
                                        (__this_02->klass->vtable)._7_get_Item.method);
            pIVar6 = pIVar1[4].klass;
            __this_03 = (SimpleJSON_JSONString_o *)
                        thunk_FUN_01bda818(SimpleJSON_JSONString_TypeInfo);
            SimpleJSON_JSONString___ctor(__this_03,(System_String_o *)pIVar6,(MethodInfo *)0x0);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (**(code **)(*plVar4 + 0x288))(plVar4,__this_03,*(undefined8 *)(*plVar4 + 0x290));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3424C8C]
// RaidPlayerInfoHelper$$.ctor @ RVA 0x3424C8C

void RaidPlayerInfoHelper___ctor(RaidPlayerInfoHelper_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public RaidPlayerInfoHelper.IIGLIBHBPCB IOOHCELHEIO(JSONNode GMDFNEFPFJH)  [RVA 0x3424C94]
// RaidPlayerInfoHelper$$IOOHCELHEIO @ RVA 0x3424C94

int32_t RaidPlayerInfoHelper__IOOHCELHEIO
                  (RaidPlayerInfoHelper_o *__this,SimpleJSON_JSONNode_o *GMDFNEFPFJH,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONNode_o *JHMENEKPIBO;
  
  if ((DAT_045680fa & 1) == 0) {
    __this = (RaidPlayerInfoHelper_o *)FUN_01bab630(&StringLiteral_21920/*"v"*/);
    DAT_045680fa = 1;
  }
  if (GMDFNEFPFJH != (SimpleJSON_JSONNode_o *)0x0) {
    JHMENEKPIBO = (SimpleJSON_JSONNode_o *)
                  (*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                            (GMDFNEFPFJH,StringLiteral_21920/*"v"*/,
                             (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
    iVar1 = OGMFFOMHGIA__EHJNCGCICMP(JHMENEKPIBO,0,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public bool IGFFDAJMPIH(Action<EOLFEKNCPLM> BLMFLPJJMPF)  [RVA 0x3424CF8]
// RaidPlayerInfoHelper$$IGFFDAJMPIH @ RVA 0x3424CF8

bool RaidPlayerInfoHelper__IGFFDAJMPIH
               (RaidPlayerInfoHelper_o *__this,System_Action_EOLFEKNCPLM__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  HCKCBFOGMMJ_o *__this_00;
  GKLPDMLELJF_o *pGVar2;
  MethodInfo *in_x3;
  
  if ((DAT_045680fb & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045680fb = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  if (__this_00 != (HCKCBFOGMMJ_o *)0x0) {
    pGVar2 = HCKCBFOGMMJ__IGFFDAJMPIH(__this_00,(MethodInfo *)0x0);
    if (pGVar2 != (GKLPDMLELJF_o *)0x0) {
      bVar1 = RaidPlayerInfoHelper__ELHLAJNJAKD(__this,(pGVar2->fields).ANAJGHJEEOC,BLMFLPJJMPF,in_x3);
      return bVar1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BGMMPCKGDGI(EOLFEKNCPLM IMMNELPBGIF)  [RVA 0x3424EA8]
// RaidPlayerInfoHelper$$BGMMPCKGDGI @ RVA 0x3424EA8

void RaidPlayerInfoHelper__BGMMPCKGDGI(RaidPlayerInfoHelper_o *__this,EOLFEKNCPLM_o *IMMNELPBGIF,MethodInfo *method)

{
  CPNHNIKFGFB_o *__this_00;
  
  if (IMMNELPBGIF != (EOLFEKNCPLM_o *)0x0) {
    DialogsOpener__AHMKGMGJMLO(IMMNELPBGIF,(MethodInfo *)0x0);
    return;
  }
  __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
    CPNHNIKFGFB__DIGPCFKCCBK(__this_00,10000,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ELHLAJNJAKD(long JBFDEJOPCDC, Action<EOLFEKNCPLM> BLMFLPJJMPF)  [RVA 0x3424D8C]
// RaidPlayerInfoHelper$$ELHLAJNJAKD @ RVA 0x3424D8C

bool RaidPlayerInfoHelper__ELHLAJNJAKD
               (RaidPlayerInfoHelper_o *__this,int64_t JBFDEJOPCDC,System_Action_EOLFEKNCPLM__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  bool_conflict bVar1;
  KBLFOOJFIIG_o *__this_00;
  SFRequestSender_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF_00;
  
  if ((DAT_045680fc & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    FUN_01bab630(&Method_PEEIMHCMDND_LHIJEFDKJPC__);
    FUN_01bab630(&StringLiteral_18644/*"get_public_player"*/);
    DAT_045680fc = 1;
  }
  bVar1 = (__this->fields).CKBPCAHHDEN;
  if (bVar1 == false) {
    (__this->fields).CKBPCAHHDEN = true;
    __this_00 = (KBLFOOJFIIG_o *)thunk_FUN_01bda818(KBLFOOJFIIG_TypeInfo);
    KBLFOOJFIIG___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (KBLFOOJFIIG_o *)0x0) {
      (__this_00->fields).GDKPGIBMFPA = JBFDEJOPCDC;
      __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF_00 =
           (System_Action_KEFHDOHHHML__o *)thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (SFRequestSender_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_01,StringLiteral_18644/*"get_public_player"*/,
                   (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF_00,0.0,
                   (Il2CppObject *)BLMFLPJJMPF,(MethodInfo *)0x0);
        goto LAB_03524e88;
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03524ea4 to 03624f47 has its CatchHandler @ 03524ea4
                       catch() { ... } // from try @ 03524ea4 with catch @ 03524ea4
                       catch() { ... } // from try @ 03524f70 with catch @ 03524ea4
                       catch() { ... } // from try @ 03524fbc with catch @ 03524ea4
                       catch() { ... } // from try @ 03524ffc with catch @ 03524ea4 */
    FUN_01bab8c8();
  }
LAB_03524e88:
  return bVar1 == false;
}


// ===== private void AGCAGFAJMIP()  [RVA 0x3424EE0]
// RaidPlayerInfoHelper$$AGCAGFAJMIP @ RVA 0x3424EE0

void RaidPlayerInfoHelper__AGCAGFAJMIP(RaidPlayerInfoHelper_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  RaidPlayerInfoHelper_o *__this_00;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o *pSVar7;
  
  if ((DAT_04568101 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568101 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar4 = pPVar2->klass;
    pSVar7 = (__this->fields).EMFMPPIGHKC;
    uVar1._0_1_ = (pPVar4->_2).rank;
    uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar4->vtable + (*piVar6 + 1);
          goto LAB_03524f90;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03524f90:
    (*pVVar3->methodPtr)(pPVar2,pSVar7,pVVar3->method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
    if (__this_00 != (RaidPlayerInfoHelper_o *)0x0) {
      RaidPlayerInfoHelper__CKFELMACGEH(__this_00,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool FJIPCBOKHFC(EOLFEKNCPLM INOIMHOFGBG, EOLFEKNCPLM ACNOGKFFDEG)  [RVA 0x3424FCC]
// RaidPlayerInfoHelper$$FJIPCBOKHFC @ RVA 0x3424FCC

bool RaidPlayerInfoHelper__FJIPCBOKHFC
               (EOLFEKNCPLM_o *INOIMHOFGBG,EOLFEKNCPLM_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  RaidPlayerInfoHelper_o *pPVar2;
  MethodInfo *in_x3;
  System_String_o *local_30;
  System_String_o *pSStack_28;
  
                    /* catch() { ... } // from try @ 03524fb8 with catch @ 03524fe4 */
  if ((DAT_045680fd & 1) == 0) {
                    /* try { // try from 03524ff4 to 03624ffb has its CatchHandler @ 03525010 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03524ffc to 03625007 has its CatchHandler @ 03524ea4 */
    DAT_045680fd = 1;
  }
  local_30 = (System_String_o *)0x0;
  pSStack_28 = (System_String_o *)0x0;
                    /* try { // try from 03525008 to 0362500f has its CatchHandler @ 03525010 */
  if (INOIMHOFGBG == ACNOGKFFDEG) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03524ff4 with catch @ 03525010
                       catch(type#2 @ 00000000) { ... } // from try @ 03525008 with catch @ 03525010
                        */
    if ((INOIMHOFGBG != (EOLFEKNCPLM_o *)0x0) && (ACNOGKFFDEG != (EOLFEKNCPLM_o *)0x0)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      if (pPVar2 != (RaidPlayerInfoHelper_o *)0x0) {
        RaidPlayerInfoHelper__BHCOOILLMGA(pPVar2,INOIMHOFGBG,&pSStack_28,in_x3);
        pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
        if (pPVar2 != (RaidPlayerInfoHelper_o *)0x0) {
          RaidPlayerInfoHelper__BHCOOILLMGA(pPVar2,ACNOGKFFDEG,&local_30,in_x3);
          bVar1 = System_String__Equals(pSStack_28,local_30,5,(MethodInfo *)0x0);
          return !bVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return bVar1;
}


// ===== public void JDONKPBCNLL(long JBFDEJOPCDC)  [RVA 0x3425094]
// RaidPlayerInfoHelper$$JDONKPBCNLL @ RVA 0x3425094

void RaidPlayerInfoHelper__JDONKPBCNLL(RaidPlayerInfoHelper_o *__this,int64_t JBFDEJOPCDC,MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__o *BLMFLPJJMPF;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int64_t local_28;
  
  local_28 = JBFDEJOPCDC;
  if ((DAT_045680fe & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_PEEIMHCMDND_BGMMPCKGDGI__);
    FUN_01bab630(&StringLiteral_10950/*"RaidPlayerInfoHelper::wrong player id "*/);
    DAT_045680fe = 1;
  }
  if (0 < JBFDEJOPCDC) {
    BLMFLPJJMPF = (System_Action_EOLFEKNCPLM__o *)
                  thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
    method_00 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    RaidPlayerInfoHelper__ELHLAJNJAKD(__this,JBFDEJOPCDC,BLMFLPJJMPF,method_00);
    return;
  }
  pSVar1 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_10950/*"RaidPlayerInfoHelper::wrong player id "*/,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== private void LHIJEFDKJPC(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x34251B0]
// RaidPlayerInfoHelper$$LHIJEFDKJPC @ RVA 0x34251B0

void RaidPlayerInfoHelper__LHIJEFDKJPC(RaidPlayerInfoHelper_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  System_Action_EOLFEKNCPLM__c *pSVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  Il2CppObject *pIVar6;
  
  if ((DAT_045680ff & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EOLFEKNCPLM>__);
    FUN_01bab630(&StringLiteral_10949/*"RaidPlayerInfoHelper::OnGetPublicPlayer: it's not player!"*/);
    FUN_01bab630(&StringLiteral_10947/*"RaidPlayerInfoHelper::OnGetPublicPlayer: Error onGetPlayers"*/);
    FUN_01bab630(&StringLiteral_10948/*"RaidPlayerInfoHelper::OnGetPublicPlayer: Error onGetPublicPlayer"*/);
    DAT_045680ff = 1;
  }
  (__this->fields).CKBPCAHHDEN = false;
  pSVar1 = System_Action<EOLFEKNCPLM>_TypeInfo;
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar6 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
  if (pIVar6 == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10948/*"RaidPlayerInfoHelper::OnGetPublicPlayer: Error onGetPublicPlayer"*/,(MethodInfo *)0x0);
    return;
  }
  lVar3 = thunk_FUN_01bda71c(pIVar6,System_Action<EOLFEKNCPLM>_TypeInfo);
  if (lVar3 != 0) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
      pIVar6 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EOLFEKNCPLM>__);
      if (pIVar6 == (Il2CppObject *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_10949/*"RaidPlayerInfoHelper::OnGetPublicPlayer: it's not player!"*/,(MethodInfo *)0x0);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      uVar5 = *(undefined8 *)(lVar3 + 0x28);
    }
    else {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10947/*"RaidPlayerInfoHelper::OnGetPublicPlayer: Error onGetPlayers"*/,(MethodInfo *)0x0);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      uVar5 = *(undefined8 *)(lVar3 + 0x28);
      pIVar6 = (Il2CppObject *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0352533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4,pIVar6,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pIVar6,pSVar1);
}


// ===== public long DKBMICAMHBE(JSONNode GMDFNEFPFJH)  [RVA 0x3425350]
// RaidPlayerInfoHelper$$DKBMICAMHBE @ RVA 0x3425350

int64_t RaidPlayerInfoHelper__DKBMICAMHBE
                  (RaidPlayerInfoHelper_o *__this,SimpleJSON_JSONNode_o *GMDFNEFPFJH,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONNode_o *JHMENEKPIBO;
  int64_t iVar2;
  
  if ((DAT_04568100 & 1) == 0) {
    __this = (RaidPlayerInfoHelper_o *)FUN_01bab630(&StringLiteral_19522/*"lot"*/);
    DAT_04568100 = 1;
  }
  iVar1 = RaidPlayerInfoHelper__IOOHCELHEIO(__this,GMDFNEFPFJH,method);
  if (iVar1 == 2) {
    if (GMDFNEFPFJH != (SimpleJSON_JSONNode_o *)0x0) {
      JHMENEKPIBO = (SimpleJSON_JSONNode_o *)
                    (*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                              (GMDFNEFPFJH,StringLiteral_19522/*"lot"*/,
                               (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
      iVar2 = OGMFFOMHGIA__HNIGPBMJJOL(JHMENEKPIBO,0,(MethodInfo *)0x0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0;
}


// ===== private void LHBDILNHLAH()  [RVA 0x3424EE4]
// RaidPlayerInfoHelper$$LHBDILNHLAH @ RVA 0x3424EE4

void RaidPlayerInfoHelper__LHBDILNHLAH(RaidPlayerInfoHelper_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  RaidPlayerInfoHelper_o *__this_00;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o *pSVar7;
  
  if ((DAT_04568101 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568101 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar4 = pPVar2->klass;
    pSVar7 = (__this->fields).EMFMPPIGHKC;
    uVar1._0_1_ = (pPVar4->_2).rank;
    uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
                    /* try { // try from 03524f48 to 03624f4f has its CatchHandler @ 03524fa0 */
    if (uVar5 != 0) {
      piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar4->vtable + (*piVar6 + 1);
          goto LAB_03524f90;
        }
                    /* try { // try from 03524f64 to 03624f67 has its CatchHandler @ 03524f98 */
        uVar5 = uVar5 - 1;
                    /* try { // try from 03524f68 to 03624f6f has its CatchHandler @ 03524f9c */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 03524f70 to 03624fb7 has its CatchHandler @ 03524ea4 */
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03524f90:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03524f64 with catch @ 03524f98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03524f68 with catch @ 03524f9c
                        */
    (*pVVar3->methodPtr)(pPVar2,pSVar7,pVVar3->method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03524f48 with catch @ 03524fa0
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
                    /* try { // try from 03524fb8 to 03624fbb has its CatchHandler @ 03524fe4 */
    if (__this_00 != (RaidPlayerInfoHelper_o *)0x0) {
                    /* try { // try from 03524fbc to 03624ff3 has its CatchHandler @ 03524ea4 */
      RaidPlayerInfoHelper__CKFELMACGEH(__this_00,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool MFLJDGLONDH(long JBFDEJOPCDC)  [RVA 0x34251A4]
// RaidPlayerInfoHelper$$MFLJDGLONDH @ RVA 0x34251A4

bool RaidPlayerInfoHelper__MFLJDGLONDH(RaidPlayerInfoHelper_o *__this,int64_t JBFDEJOPCDC,MethodInfo *method)

{
  return 0 < JBFDEJOPCDC;
}


// ===== private ModelParameters HMDLEPBJLNL(JSONNode GMDFNEFPFJH)  [RVA 0x3424604]
// RaidPlayerInfoHelper$$HMDLEPBJLNL @ RVA 0x3424604

ModelParameters_o *
RaidPlayerInfoHelper__HMDLEPBJLNL
          (RaidPlayerInfoHelper_o *__this,SimpleJSON_JSONNode_o *GMDFNEFPFJH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  NLPJLHOEAOE_o *pNVar5;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar6;
  KKEKJDLEJIL_o *__this_00;
  ModelParameters_o *pPVar7;
  long *plVar8;
  long *plVar9;
  System_String_o *pSVar10;
  RaidConfig_o *pJVar11;
  RaidConfig_EJICJNOEGGE_o *__this_01;
  Item_o *__this_02;
  HOOAAGABMBL_o *pHVar12;
  PerkInfoItem_o *item;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_03;
  HOOAAGABMBL_o **ppHVar13;
  PerkInfoItem_array *pHVar14;
  int iVar15;
  FOKJBDHLIMG_o *__this_04;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar17;
  undefined1 auStack_f8 [72];
  SimpleJSON_JSONNode_Enumerator_Fields local_b0;
  
  if ((DAT_04568102 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_10945/*"RaidPlayerInfoHelper::GetEquippedModel: Detected restricted equipment in player info "*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10946/*"RaidPlayerInfoHelper::GetEquippedModel: Wrong item :"*/);
    FUN_01bab630(&StringLiteral_18062/*"eq"*/);
    FUN_01bab630(&StringLiteral_5245/*"Default"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04568102 = 1;
  }
  local_b0.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_b0.m_Object.fields._getEnumeratorRetType = 0;
  local_b0.m_Object.fields._36_4_ = 0;
  local_b0.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.m_Array.fields._index = 0;
  local_b0.m_Array.fields._version = 0;
  local_b0.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0.type = 0;
  local_b0._4_4_ = 0;
  local_b0.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0.m_Object.fields._version = 0;
  local_b0.m_Object.fields._index = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar5 != (NLPJLHOEAOE_o *)0x0) {
    pNVar6 = NLPJLHOEAOE__ADKMBOALAKN(pNVar5,StringLiteral_5245/*"Default"*/,(MethodInfo *)0x0);
    if (pNVar6 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
      return (ModelParameters_o *)0x0;
    }
    __this_00 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
    KKEKJDLEJIL___ctor(__this_00,(MethodInfo *)0x0);
    pPVar7 = (pNVar6->fields).BAKIMFMMFMP;
    if (pPVar7 != (ModelParameters_o *)0x0) {
      (*(pPVar7->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                (pPVar7,__this_00,(pPVar7->klass->vtable)._8_KMKKECDCBEF.method);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (((pNVar5 != (NLPJLHOEAOE_o *)0x0) &&
          (pPVar7 = NLPJLHOEAOE__MDEGKNMDKPN
                              (pNVar5,(pNVar6->fields).AHDGNOJPPIB,(pNVar6->fields).BAKIMFMMFMP,
                               false,(MethodInfo *)0x0), GMDFNEFPFJH != (SimpleJSON_JSONNode_o *)0x0
          )) && (plVar8 = (long *)(*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                                            (GMDFNEFPFJH,StringLiteral_18062/*"eq"*/,
                                             (GMDFNEFPFJH->klass->vtable)._7_get_Item.method),
                plVar8 != (long *)0x0)) {
        iVar15 = 0;
        while (iVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
              iVar15 < iVar4) {
          plVar8 = (long *)(*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                                     (GMDFNEFPFJH,StringLiteral_18062/*"eq"*/,
                                      (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
          if (((plVar8 == (long *)0x0) ||
              (plVar8 = (long *)(**(code **)(*plVar8 + 0x188))
                                          (plVar8,iVar15,*(undefined8 *)(*plVar8 + 400)),
              plVar8 == (long *)0x0)) ||
             (plVar9 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                         (plVar8,StringLiteral_9327/*"Name"*/,*(undefined8 *)(*plVar8 + 0x1b0)
                                         ), plVar9 == (long *)0x0)) goto LAB_03524c88;
          pSVar10 = (System_String_o *)
                    (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                     (plVar8,StringLiteral_10239/*"Perks"*/,*(undefined8 *)(*plVar8 + 0x1b0));
          if (plVar8 == (long *)0x0) goto LAB_03524c88;
          plVar8 = (long *)(**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          pJVar11 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (pJVar11 == (RaidConfig_o *)0x0) goto LAB_03524c88;
          __this_01 = (pJVar11->fields)._LEIIIBPIJGJ_k__BackingField;
          if ((__this_01 == (RaidConfig_EJICJNOEGGE_o *)0x0) ||
             (bVar3 = RaidConfig_EJICJNOEGGE__LLDDCNHNPIA(__this_01,pSVar10,(MethodInfo *)0x0),
             bVar3)) {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if ((__this_02 == (Item_o *)0x0) ||
               (pHVar12 = Item__CKKIPBAIEMN(__this_02,pSVar10,(MethodInfo *)0x0),
               pHVar12 == (HOOAAGABMBL_o *)0x0)) goto LAB_03524c88;
            pHVar12 = (HOOAAGABMBL_o *)
                      (*(pHVar12->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                                (pHVar12,(pHVar12->klass->vtable)._7_FAOBHLCDKJI.method);
            if (pHVar12 == (HOOAAGABMBL_o *)0x0) {
              pSVar10 = System_String__Concat(StringLiteral_10946/*"RaidPlayerInfoHelper::GetEquippedModel: Wrong item :"*/,pSVar10,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              goto LAB_03524b18;
            }
            if (plVar8 == (long *)0x0) goto LAB_03524c88;
            (**(code **)(*plVar8 + 0x318))(auStack_f8,plVar8,*(undefined8 *)(*plVar8 + 800));
            memcpy(&local_b0,auStack_f8,0x48);
            while (bVar3 = SimpleJSON_JSONNode_Enumerator__MoveNext
                                     ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,
                                      (MethodInfo *)0x0), bVar3) {
              SVar16 = SimpleJSON_JSONNode_Enumerator__get_Current
                                 ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_04 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
              if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
              }
              pSVar10 = SimpleJSON_JSONNode__op_Implicit(SVar16.fields.value,(MethodInfo *)0x0);
              if (__this_04 == (FOKJBDHLIMG_o *)0x0) goto LAB_03524c88;
              item = FOKJBDHLIMG__JMMDGEOBMOC(__this_04,pSVar10,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
              if (item != (PerkInfoItem_o *)0x0) {
                __this_03 = (pHVar12->fields)._GNJCCLBLPLO_k__BackingField;
                if (__this_03 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)
                goto LAB_03524c88;
                pHVar14 = (__this_03->fields)._items;
                (__this_03->fields)._version = (__this_03->fields)._version + 1;
                if (pHVar14 == (PerkInfoItem_array *)0x0) goto LAB_03524c88;
                uVar1 = (__this_03->fields)._size;
                if (uVar1 < (uint)pHVar14->max_length) {
                  (__this_03->fields)._size = uVar1 + 1;
                  pHVar14->m_Items[(int)uVar1] = item;
                  thunk_FUN_01c20e04(pHVar14->m_Items + (int)uVar1);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_03,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            bVar3 = System_String__op_Equality
                              ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_14870/*"Weapon"*/,
                               (MethodInfo *)0x0);
            if (bVar3) {
              ppHVar13 = &(__this_00->fields).PNAAPNFPCPI;
              if (__this_00 == (KKEKJDLEJIL_o *)0x0) goto LAB_03524c88;
LAB_03524bc0:
              *ppHVar13 = pHVar12;
              thunk_FUN_01c20e04(ppHVar13,pHVar12);
            }
            else {
              bVar3 = System_String__op_Equality
                                ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_3076/*"Armor"*/,
                                 (MethodInfo *)0x0);
              ppHVar13 = &(__this_00->fields).PEMECEBIJDM;
              if ((((bVar3) ||
                   (bVar3 = System_String__op_Equality
                                      ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,
                                       StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0),
                   ppHVar13 = &(__this_00->fields).IIDEPPHFJPA, bVar3)) ||
                  (bVar3 = System_String__op_Equality
                                     ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,
                                      StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0),
                  ppHVar13 = &(__this_00->fields).NBHGHLIPCAP, bVar3)) ||
                 (bVar3 = System_String__op_Equality
                                    ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0),
                 ppHVar13 = &(__this_00->fields).AIDDHEHFBEG, bVar3)) {
                if (__this_00 != (KKEKJDLEJIL_o *)0x0) goto LAB_03524bc0;
                goto LAB_03524c88;
              }
            }
          }
          else {
            pSVar10 = StringLiteral_10945/*"RaidPlayerInfoHelper::GetEquippedModel: Detected restricted equipment in player info "*/;
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pSVar10 = StringLiteral_10945/*"RaidPlayerInfoHelper::GetEquippedModel: Detected restricted equipment in player info "*/;
            }
LAB_03524b18:
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
          }
          iVar15 = iVar15 + 1;
          plVar8 = (long *)(*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                                     (GMDFNEFPFJH,StringLiteral_18062/*"eq"*/,
                                      (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
          if (plVar8 == (long *)0x0) goto LAB_03524c88;
        }
        if (pPVar7 != (ModelParameters_o *)0x0) {
          (*(pPVar7->klass->vtable)._6_BCEGONIKBAK.methodPtr)
                    (pPVar7,__this_00,(pPVar7->klass->vtable)._6_BCEGONIKBAK.method);
          ModelParameters__OBDMCJAPKPJ(pPVar7,(MethodInfo *)0x0);
          (*(pPVar7->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                    (pPVar7,(pPVar7->klass->vtable)._7_LBNKPLKIIOP.method);
          ModelParameters__NDBIFNGNKJF(pPVar7,(MethodInfo *)0x0);
          CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                             (true,(MethodInfo *)0x0);
          (pPVar7->fields).HJPOJOPKEKI.fields = CVar17;
          CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                             (false,(MethodInfo *)0x0);
          (pPVar7->fields).DHGNGIKCDON.fields = CVar17;
          (pPVar7->fields).BLJLIBHLGLI = false;
          return pPVar7;
        }
      }
    }
  }
LAB_03524c88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GMOEEEHEFKG(bool JEKNIGLDAGG = False)  [RVA 0x34253D4]
// RaidPlayerInfoHelper$$GMOEEEHEFKG @ RVA 0x34253D4

void RaidPlayerInfoHelper__GMOEEEHEFKG(RaidPlayerInfoHelper_o *__this,bool JEKNIGLDAGG,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  RaidConfig_o *__this_00;
  HJEODECHNDG_o *pHVar6;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  RaidPlayerInfoHelper_Fields *pPVar10;
  System_Collections_IEnumerator_o *pSVar11;
  int iVar12;
  
  if ((DAT_04568103 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_PEEIMHCMDND_AGCAGFAJMIP__);
    DAT_04568103 = 1;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pPVar10 = &__this->fields;
  pSVar11 = pPVar10->EMFMPPIGHKC;
  if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
    pPVar7 = pPVar3->klass;
    uVar1._0_1_ = (pPVar7->_2).rank;
    uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar4 = pPVar7->vtable + (*piVar9 + 1);
          goto LAB_035254a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_035254a4:
    (*pVVar4->methodPtr)(pPVar3,pSVar11,pVVar4->method);
    if (JEKNIGLDAGG) {
      RaidPlayerInfoHelper__CKFELMACGEH(__this,method_00);
      return;
    }
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (((__this_00 != (RaidConfig_o *)0x0) &&
        (pHVar6 = RaidConfig__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0),
        pHVar6 != (HJEODECHNDG_o *)0x0)) && (pPVar3 != (PBAKFOBIHEG_o *)0x0)) {
      pPVar7 = pPVar3->klass;
      iVar12 = (pHVar6->fields)._HBBHIBIJDIB_k__BackingField;
      uVar2._0_1_ = (pPVar7->_2).rank;
      uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar7->vtable + (*piVar9 + 2);
            goto LAB_035255a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_035255a8:
      pSVar11 = (System_Collections_IEnumerator_o *)
                (*pVVar4->methodPtr)
                          ((ulong)(uint)((float)iVar12 / 1000.0),pPVar3,uVar5,pVVar4->method);
      pPVar10->EMFMPPIGHKC = pSVar11;
      thunk_FUN_01c20e04(pPVar10,pSVar11);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

