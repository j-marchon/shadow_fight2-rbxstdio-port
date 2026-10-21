// TypeDefIndex 239
// Namespace: 
// public sealed class GLPEFEEGCPM : IMessage<GLPEFEEGCPM>, IMessage, IEquatable<GLPEFEEGCPM>, IDeepCloneable<GLPEFEEGCPM>
// Fields:
//   private static readonly MessageParser<GLPEFEEGCPM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BJBNNMPLMLH = 1;
//   private FADHMEJJCPO PBBGNHKFEPG; // 0x18
//   public const int JGLAKLGGILJ = 2;
//   private long LAEGCKIFDOC; // 0x20
//   public const int IPMOIIPMNAJ = 3;
//   private static readonly FieldCodec<KGBIBHEFBHA> CHLJPKPACJB; // 0x8
//   private readonly RepeatedField<KGBIBHEFBHA> MPAIPMANDEO; // 0x28

// ===== public static bool LFHPFJOAJIO(GLPEFEEGCPM PDCJHMOBMPK, GLPEFEEGCPM NECMHLICHNE)  [RVA 0x32246E4]
// GLPEFEEGCPM$$LFHPFJOAJIO @ RVA 0x32246E4

bool GLPEFEEGCPM__LFHPFJOAJIO
               (GLPEFEEGCPM_o *PDCJHMOBMPK,GLPEFEEGCPM_o *NECMHLICHNE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  KGBIBHEFBHA_o *PDCJHMOBMPK_00;
  KGBIBHEFBHA_o *NECMHLICHNE_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar4;
  int index;
  FADHMEJJCPO_o *PDCJHMOBMPK_01;
  FADHMEJJCPO_o *NECMHLICHNE_01;
  System_Nullable_bool__Fields local_44 [2];
  
  if ((DAT_04566f67 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_PPBANLLIGDK<GLPEFEEGCPM>__);
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__);
    DAT_04566f67 = 1;
  }
  local_44[0] = (System_Nullable_bool__Fields)
                AJKNKCLEEAD__PPBANLLIGDK<object>
                          ((Il2CppObject *)PDCJHMOBMPK,(Il2CppObject *)NECMHLICHNE,
                           Method_AJKNKCLEEAD_PPBANLLIGDK<GLPEFEEGCPM>__);
  if (((ushort)local_44[0] & 0xff) == 0) {
    if ((PDCJHMOBMPK == (GLPEFEEGCPM_o *)0x0) || (NECMHLICHNE == (GLPEFEEGCPM_o *)0x0)) {
LAB_03324898:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((PDCJHMOBMPK->fields).LAEGCKIFDOC == (NECMHLICHNE->fields).LAEGCKIFDOC) {
      pGVar3 = (PDCJHMOBMPK->fields).MPAIPMANDEO;
      if ((pGVar3 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) ||
         (pGVar4 = (NECMHLICHNE->fields).MPAIPMANDEO,
         pGVar4 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0))
      goto LAB_03324898;
      if ((pGVar3->fields).count == (pGVar4->fields).count) {
        PDCJHMOBMPK_01 = (PDCJHMOBMPK->fields).PBBGNHKFEPG;
        NECMHLICHNE_01 = (NECMHLICHNE->fields).PBBGNHKFEPG;
        if ((FADHMEJJCPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = FADHMEJJCPO__LFHPFJOAJIO(PDCJHMOBMPK_01,NECMHLICHNE_01,(MethodInfo *)0x0);
        if (bVar2) {
          pGVar3 = (PDCJHMOBMPK->fields).MPAIPMANDEO;
          if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
            index = 0;
            do {
              iVar1 = (pGVar3->fields).count;
              if (iVar1 <= index) {
LAB_033248bc:
                return iVar1 <= index;
              }
              PDCJHMOBMPK_00 =
                   (KGBIBHEFBHA_o *)
                   Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,index,
                              Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__
                             );
              pGVar3 = (NECMHLICHNE->fields).MPAIPMANDEO;
              if (pGVar3 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) break;
              NECMHLICHNE_00 =
                   (KGBIBHEFBHA_o *)
                   Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,index,
                              Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__
                             );
              if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(KGBIBHEFBHA_TypeInfo);
              }
              bVar2 = KGBIBHEFBHA__LFHPFJOAJIO(PDCJHMOBMPK_00,NECMHLICHNE_00,(MethodInfo *)0x0);
              if (!bVar2) goto LAB_033248bc;
              pGVar3 = (PDCJHMOBMPK->fields).MPAIPMANDEO;
              index = index + 1;
            } while (pGVar3 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0);
          }
          goto LAB_03324898;
        }
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = System_Nullable<bool>__get_Value
                      ((System_Nullable_bool__o)SUB82(local_44,0),
                       Method_System_Nullable<bool>_get_Value__);
  }
  return bVar2;
}


// ===== public static MessageParser<GLPEFEEGCPM> PGCAHPDCJBC()  [RVA 0x32248C8]
// GLPEFEEGCPM$$PGCAHPDCJBC @ RVA 0x32248C8

Google_Protobuf_MessageParser_GLPEFEEGCPM__o * GLPEFEEGCPM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566f68 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f68 = 1;
  }
  if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return GLPEFEEGCPM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public bool Equals(GLPEFEEGCPM IBKIPBJJCPG)  [RVA 0x3224920]
// GLPEFEEGCPM$$Equals @ RVA 0x3224920

bool GLPEFEEGCPM__Equals(GLPEFEEGCPM_o *__this,GLPEFEEGCPM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  
  if ((DAT_04566f69 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Equals__);
    DAT_04566f69 = 1;
  }
  if (IBKIPBJJCPG != (GLPEFEEGCPM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).PBBGNHKFEPG,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).PBBGNHKFEPG,(MethodInfo *)0x0);
    if ((bVar1) && ((__this->fields).LAEGCKIFDOC == (IBKIPBJJCPG->fields).LAEGCKIFDOC)) {
      __this_00 = (__this->fields).MPAIPMANDEO;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).MPAIPMANDEO,
                         Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x32249D4]
// GLPEFEEGCPM$$MergeFrom @ RVA 0x32249D4

void GLPEFEEGCPM__MergeFrom
               (GLPEFEEGCPM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  FADHMEJJCPO_o **ppFVar1;
  GLPEFEEGCPM_Fields *pGVar2;
  uint32_t uVar3;
  int64_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  FADHMEJJCPO_o *pFVar6;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  
  if ((DAT_04566f6a & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_AddEntriesFrom__);
    DAT_04566f6a = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppFVar1 = &(__this->fields).PBBGNHKFEPG;
    pGVar2 = &__this->fields;
    do {
      while( true ) {
        while( true ) {
          while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
                (int)uVar3 < 0x10) {
            if (uVar3 != 10) {
              if (uVar3 == 0) {
                return;
              }
              goto LAB_03324b08;
            }
            pFVar6 = *ppFVar1;
            if (pFVar6 == (FADHMEJJCPO_o *)0x0) {
              pFVar6 = (FADHMEJJCPO_o *)thunk_FUN_01bda818(FADHMEJJCPO_TypeInfo);
              FADHMEJJCPO___ctor(pFVar6,(MethodInfo *)0x0);
              *ppFVar1 = pFVar6;
              thunk_FUN_01c20e04(ppFVar1,pFVar6);
              pFVar6 = *ppFVar1;
            }
            Google_Protobuf_CodedInputStream__ReadMessage
                      (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pFVar6,(MethodInfo *)0x0);
          }
          if (uVar3 != 0x10) break;
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LAEGCKIFDOC = iVar4;
        }
        if (uVar3 == 0x1a) break;
LAB_03324b08:
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pGVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pGVar2->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pGVar2,pGVar5);
      }
      __this_00 = (__this->fields).MPAIPMANDEO;
      if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)GLPEFEEGCPM_TypeInfo->static_fields->CHLJPKPACJB
                 ,Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_AddEntriesFrom__);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3224B48]
// GLPEFEEGCPM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3224B48

Google_Protobuf_Reflection_MessageDescriptor_o *
GLPEFEEGCPM__pb__Google_Protobuf_IMessage_get_Descriptor(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  GLPEFEEGCPM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f6b & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f6b = 1;
    method = extraout_x1;
  }
  method_00 = GLPEFEEGCPM_TypeInfo;
  if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GLPEFEEGCPM_c *)thunk_FUN_01ba7564(GLPEFEEGCPM_TypeInfo,method);
  }
  pGVar1 = GLPEFEEGCPM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override int GetHashCode()  [RVA 0x3224C98]
// GLPEFEEGCPM$$GetHashCode @ RVA 0x3224C98

int32_t GLPEFEEGCPM__GetHashCode(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  FADHMEJJCPO_o *pFVar3;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar4;
  long lVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  long local_18;
  
  local_18 = 0;
  pFVar3 = (__this->fields).PBBGNHKFEPG;
  if (pFVar3 == (FADHMEJJCPO_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pFVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pFVar3,(pFVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  lVar5 = (__this->fields).LAEGCKIFDOC;
  if (lVar5 != 0) {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).MPAIPMANDEO;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar6 = (__this->fields).CKFPENBPNML;
    uVar2 = uVar2 ^ uVar1;
    if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x3224D2C]
// GLPEFEEGCPM$$ToString @ RVA 0x3224D2C

System_String_o * GLPEFEEGCPM__ToString(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f6c & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566f6c = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool MEAIEHHCBHI()  [RVA 0x3224D84]
// GLPEFEEGCPM$$MEAIEHHCBHI @ RVA 0x3224D84

bool GLPEFEEGCPM__MEAIEHHCBHI(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).LAEGCKIFDOC;
}


// ===== public void NOOFLACFMBI(FADHMEJJCPO CJNHFNHJHPE)  [RVA 0x3224D94]
// GLPEFEEGCPM$$NOOFLACFMBI @ RVA 0x3224D94

void GLPEFEEGCPM__NOOFLACFMBI(GLPEFEEGCPM_o *__this,FADHMEJJCPO_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PBBGNHKFEPG = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3224D9C]
// GLPEFEEGCPM$$WriteTo @ RVA 0x3224D9C

void GLPEFEEGCPM__WriteTo
               (GLPEFEEGCPM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_01;
  
  if ((DAT_04566f6d & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_WriteTo__);
    DAT_04566f6d = 1;
  }
  if ((__this->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03324ea8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PBBGNHKFEPG,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).LAEGCKIFDOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03324ea8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).LAEGCKIFDOC,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).MPAIPMANDEO;
  if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)GLPEFEEGCPM_TypeInfo->static_fields->CHLJPKPACJB,
               Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03324ea8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3224EAC]
// GLPEFEEGCPM$$Equals @ RVA 0x3224EAC

bool GLPEFEEGCPM__Equals(GLPEFEEGCPM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566f6e & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f6e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GLPEFEEGCPM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GLPEFEEGCPM__Equals(__this,(GLPEFEEGCPM_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public GLPEFEEGCPM Clone()  [RVA 0x3224F10]
// GLPEFEEGCPM$$Clone @ RVA 0x3224F10

GLPEFEEGCPM_o * GLPEFEEGCPM__Clone(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  GLPEFEEGCPM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566f6f & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f6f = 1;
    method = extraout_x1;
  }
  __this_00 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo,method);
  GLPEFEEGCPM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public int CalculateSize()  [RVA 0x3225030]
// GLPEFEEGCPM$$CalculateSize @ RVA 0x3225030

int32_t GLPEFEEGCPM__CalculateSize(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  FADHMEJJCPO_o *value;
  long value_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_01;
  int iVar2;
  
  if ((DAT_04566f70 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_CalculateSize__);
    DAT_04566f70 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).PBBGNHKFEPG;
  if (value == (FADHMEJJCPO_o *)0x0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).LAEGCKIFDOC;
  if (value_00 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_01 = (__this->fields).MPAIPMANDEO;
  if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       GLPEFEEGCPM_TypeInfo->static_fields->CHLJPKPACJB,
                       Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar2 = iVar1 + iVar2;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3224B94]
// GLPEFEEGCPM$$FFHIHGCDGAK @ RVA 0x3224B94

Google_Protobuf_Reflection_MessageDescriptor_o * GLPEFEEGCPM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566f71 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566f71 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03324c7c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03324c7c:
                    /* WARNING: Could not recover jumptable at 0x03324c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x33,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor(GLPEFEEGCPM IBKIPBJJCPG)  [RVA 0x3224F68]
// GLPEFEEGCPM$$.ctor @ RVA 0x3224F68

void GLPEFEEGCPM___ctor(GLPEFEEGCPM_o *__this,GLPEFEEGCPM_o *IBKIPBJJCPG,MethodInfo *method)

{
  FADHMEJJCPO_o *pFVar1;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  FADHMEJJCPO_o **ppFVar4;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566f72 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Clone__);
    DAT_04566f72 = 1;
    method_00 = extraout_x1;
  }
  GLPEFEEGCPM___ctor(__this,method_00);
  if (IBKIPBJJCPG != (GLPEFEEGCPM_o *)0x0) {
    pFVar1 = (IBKIPBJJCPG->fields).PBBGNHKFEPG;
    if (pFVar1 == (FADHMEJJCPO_o *)0x0) {
      pFVar1 = (FADHMEJJCPO_o *)0x0;
    }
    else {
      pFVar1 = FADHMEJJCPO__Clone(pFVar1,(MethodInfo *)0x0);
    }
    if (__this != (GLPEFEEGCPM_o *)0x0) {
      ppFVar4 = &(__this->fields).PBBGNHKFEPG;
      *ppFVar4 = pFVar1;
      thunk_FUN_01c20e04(ppFVar4);
      (__this->fields).LAEGCKIFDOC = (IBKIPBJJCPG->fields).LAEGCKIFDOC;
      pGVar2 = (IBKIPBJJCPG->fields).MPAIPMANDEO;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Clone__);
        (__this->fields).MPAIPMANDEO = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(&__this->fields,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long AOEDDALAHKN()  [RVA 0x32251D8]
// GLPEFEEGCPM$$AOEDDALAHKN @ RVA 0x32251D8

int64_t GLPEFEEGCPM__AOEDDALAHKN(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  return (__this->fields).LAEGCKIFDOC;
}


// ===== public RepeatedField<KGBIBHEFBHA> DANIGDGDMAA()  [RVA 0x32251E0]
// GLPEFEEGCPM$$DANIGDGDMAA @ RVA 0x32251E0

Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *
GLPEFEEGCPM__DANIGDGDMAA(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  return (__this->fields).MPAIPMANDEO;
}


// ===== public void POKHPKMPIKB(long CJNHFNHJHPE)  [RVA 0x32251E8]
// GLPEFEEGCPM$$POKHPKMPIKB @ RVA 0x32251E8

void GLPEFEEGCPM__POKHPKMPIKB(GLPEFEEGCPM_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LAEGCKIFDOC = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(GLPEFEEGCPM IBKIPBJJCPG)  [RVA 0x32251F0]
// GLPEFEEGCPM$$MergeFrom @ RVA 0x32251F0

void GLPEFEEGCPM__MergeFrom(GLPEFEEGCPM_o *__this,GLPEFEEGCPM_o *IBKIPBJJCPG,MethodInfo *method)

{
  FADHMEJJCPO_o *pFVar1;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  GLPEFEEGCPM_Fields *pGVar4;
  FADHMEJJCPO_o **ppFVar5;
  
  if ((DAT_04566f73 & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Add__);
    DAT_04566f73 = 1;
  }
  if (IBKIPBJJCPG == (GLPEFEEGCPM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
    ppFVar5 = &(__this->fields).PBBGNHKFEPG;
    pFVar1 = *ppFVar5;
    if (pFVar1 == (FADHMEJJCPO_o *)0x0) {
      pFVar1 = (FADHMEJJCPO_o *)thunk_FUN_01bda818(FADHMEJJCPO_TypeInfo);
      FADHMEJJCPO___ctor(pFVar1,(MethodInfo *)0x0);
      *ppFVar5 = pFVar1;
      thunk_FUN_01c20e04(ppFVar5,pFVar1);
      pFVar1 = *ppFVar5;
      if (pFVar1 == (FADHMEJJCPO_o *)0x0) goto LAB_033252ec;
    }
    FADHMEJJCPO__MergeFrom(pFVar1,(IBKIPBJJCPG->fields).PBBGNHKFEPG,(MethodInfo *)0x0);
  }
  lVar3 = (IBKIPBJJCPG->fields).LAEGCKIFDOC;
  if (lVar3 != 0) {
    (__this->fields).LAEGCKIFDOC = lVar3;
  }
  __this_00 = (__this->fields).MPAIPMANDEO;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MPAIPMANDEO,
               Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Add__);
    pGVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pGVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pGVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pGVar4,pGVar2);
    return;
  }
LAB_033252ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3225150]
// GLPEFEEGCPM$$.ctor @ RVA 0x3225150

void GLPEFEEGCPM___ctor(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f74 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_TypeInfo);
    DAT_04566f74 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>__ctor__);
  ppGVar1 = &(__this->fields).MPAIPMANDEO;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public FADHMEJJCPO MBDMKABMELE()  [RVA 0x32252F0]
// GLPEFEEGCPM$$MBDMKABMELE @ RVA 0x32252F0

FADHMEJJCPO_o * GLPEFEEGCPM__MBDMKABMELE(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  return (__this->fields).PBBGNHKFEPG;
}


// ===== private static void .cctor()  [RVA 0x32252F8]
// GLPEFEEGCPM$$.cctor @ RVA 0x32252F8

void GLPEFEEGCPM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GLPEFEEGCPM__o *__this;
  Google_Protobuf_FieldCodec_KGBIBHEFBHA__o *pGVar1;
  Google_Protobuf_FieldCodec_KGBIBHEFBHA__o **ppGVar2;
  
  if ((DAT_04566f75 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<KGBIBHEFBHA>__);
    FUN_01bab630(&System_Func<GLPEFEEGCPM>_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GLPEFEEGCPM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GLPEFEEGCPM>_TypeInfo);
    FUN_01bab630(&Method_GLPEFEEGCPM_<>c_KBFHKMJCKCO__);
    FUN_01bab630(&GLPEFEEGCPM_<>c_TypeInfo);
    DAT_04566f75 = 1;
  }
  if ((GLPEFEEGCPM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GLPEFEEGCPM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GLPEFEEGCPM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GLPEFEEGCPM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GLPEFEEGCPM>__ctor__);
  GLPEFEEGCPM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GLPEFEEGCPM_TypeInfo->static_fields,__this);
  if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_0456707b == '\0') {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    DAT_0456707b = '\x01';
  }
  if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_KGBIBHEFBHA__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x1a,(Google_Protobuf_MessageParser_T__o *)
                           KGBIBHEFBHA_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<KGBIBHEFBHA>__);
  ppGVar2 = &GLPEFEEGCPM_TypeInfo->static_fields->CHLJPKPACJB;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

