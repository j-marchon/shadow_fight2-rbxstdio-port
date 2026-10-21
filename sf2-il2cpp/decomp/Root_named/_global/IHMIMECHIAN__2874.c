// TypeDefIndex 2874
// Namespace: 
// public sealed class IHMIMECHIAN : IMessage<IHMIMECHIAN>, IMessage, IEquatable<IHMIMECHIAN>, IDeepCloneable<IHMIMECHIAN>
// Fields:
//   private static readonly MessageParser<IHMIMECHIAN> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MGJBPJIANHE = 1;
//   private int CHLCOKOBIHN; // 0x18
//   public const int HBENPOAHGHA = 2;
//   private int KFBIHGFDAOL; // 0x1C
//   public const int BLHCIDEJNLI = 3;
//   private bool POHDGAPDBGK; // 0x20
//   public const int PILIFEPGFHE = 4;
//   private bool PJMOADBJNKH; // 0x21
//   public const int EEDJABFDBNO = 5;
//   private bool NNCLFDMPFHP; // 0x22
//   public const int GMHGNJAFFKB = 6;
//   private bool HOFAHGOCDCE; // 0x23
//   public const int OBKIBNCLPKE = 7;
//   private float KLOGBBKOLFL; // 0x24
//   public const int HCMFPKMCCMF = 8;
//   private static readonly FieldCodec<int> EEBAEBIODDF; // 0x8
//   private readonly RepeatedField<int> IKCCLDMOOKP; // 0x28
//   public const int HJNHNJEFJGH = 9;
//   private int LADINGEOKCK; // 0x30

// ===== public void .ctor()  [RVA 0x343C558]
// IHMIMECHIAN$$.ctor @ RVA 0x343C558

void IHMIMECHIAN___ctor(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_int__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681e1 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<int>_TypeInfo);
    DAT_045681e1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_int__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<int>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<int>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
  ppGVar1 = &(__this->fields).IKCCLDMOOKP;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x343C5E0]
// IHMIMECHIAN$$WriteTo @ RVA 0x343C5E0

void IHMIMECHIAN__WriteTo
               (IHMIMECHIAN_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_01;
  
  if ((DAT_045681e2 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    DAT_045681e2 = 1;
  }
  if ((__this->fields).CHLCOKOBIHN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).CHLCOKOBIHN,(MethodInfo *)0x0);
  }
  if ((__this->fields).KFBIHGFDAOL != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).KFBIHGFDAOL,(MethodInfo *)0x0);
  }
  if ((__this->fields).POHDGAPDBGK != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).POHDGAPDBGK,(MethodInfo *)0x0);
  }
  if ((__this->fields).PJMOADBJNKH != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).PJMOADBJNKH,(MethodInfo *)0x0);
  }
  if ((__this->fields).NNCLFDMPFHP != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).NNCLFDMPFHP,(MethodInfo *)0x0);
  }
  if ((__this->fields).HOFAHGOCDCE != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
                    /* try { // try from 0353c70c to 0363cf1b has its CatchHandler @ 0353c70c
                       catch() { ... } // from try @ 0353c70c with catch @ 0353c70c
                       catch() { ... } // from try @ 0353cff0 with catch @ 0353c70c
                       catch() { ... } // from try @ 0353d0cc with catch @ 0353c70c
                       catch() { ... } // from try @ 0353d170 with catch @ 0353c70c */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).HOFAHGOCDCE,(MethodInfo *)0x0);
  }
  if ((__this->fields).KLOGBBKOLFL != 0.0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x3d,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteFloat
              (JBGJLELBMJF,(__this->fields).KLOGBBKOLFL,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IKCCLDMOOKP;
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<int>__WriteTo
              (__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF,
               Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    if ((__this->fields).LADINGEOKCK != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x48,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).LADINGEOKCK,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0353c7f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PIDGCFAIKLJ(bool CJNHFNHJHPE)  [RVA 0x343C7FC]
// IHMIMECHIAN$$PIDGCFAIKLJ @ RVA 0x343C7FC

void IHMIMECHIAN__PIDGCFAIKLJ(IHMIMECHIAN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NNCLFDMPFHP = CJNHFNHJHPE;
  return;
}


// ===== public bool NBIECMMEPHD()  [RVA 0x343C808]
// IHMIMECHIAN$$NBIECMMEPHD @ RVA 0x343C808

bool IHMIMECHIAN__NBIECMMEPHD(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).NNCLFDMPFHP;
}


// ===== public void JHABCEGCACA(bool CJNHFNHJHPE)  [RVA 0x343C810]
// IHMIMECHIAN$$JHABCEGCACA @ RVA 0x343C810

void IHMIMECHIAN__JHABCEGCACA(IHMIMECHIAN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).HOFAHGOCDCE = CJNHFNHJHPE;
  return;
}


// ===== public void JKHPDMBACHC(bool CJNHFNHJHPE)  [RVA 0x343C81C]
// IHMIMECHIAN$$JKHPDMBACHC @ RVA 0x343C81C

void IHMIMECHIAN__JKHPDMBACHC(IHMIMECHIAN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).POHDGAPDBGK = CJNHFNHJHPE;
  return;
}


// ===== public void POMEAPIEEFA(int CJNHFNHJHPE)  [RVA 0x343C828]
// IHMIMECHIAN$$POMEAPIEEFA @ RVA 0x343C828

void IHMIMECHIAN__POMEAPIEEFA(IHMIMECHIAN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CHLCOKOBIHN = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x343C830]
// IHMIMECHIAN$$ToString @ RVA 0x343C830

System_String_o * IHMIMECHIAN__ToString(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681e3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045681e3 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool HPDFDAMAAKI()  [RVA 0x343C888]
// IHMIMECHIAN$$HPDFDAMAAKI @ RVA 0x343C888

bool IHMIMECHIAN__HPDFDAMAAKI(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).POHDGAPDBGK;
}


// ===== public static MessageParser<IHMIMECHIAN> PGCAHPDCJBC()  [RVA 0x343C890]
// IHMIMECHIAN$$PGCAHPDCJBC @ RVA 0x343C890

Google_Protobuf_MessageParser_IHMIMECHIAN__o * IHMIMECHIAN__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045681e4 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045681e4 = 1;
  }
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return IHMIMECHIAN_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void LNEGJIIBIJI(float CJNHFNHJHPE)  [RVA 0x343C8E8]
// IHMIMECHIAN$$LNEGJIIBIJI @ RVA 0x343C8E8

void IHMIMECHIAN__LNEGJIIBIJI(IHMIMECHIAN_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KLOGBBKOLFL = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x343C8F0]
// IHMIMECHIAN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x343C8F0

Google_Protobuf_Reflection_MessageDescriptor_o *
IHMIMECHIAN__pb__Google_Protobuf_IMessage_get_Descriptor(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  IHMIMECHIAN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681e5 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045681e5 = 1;
    method = extraout_x1;
  }
  method_00 = IHMIMECHIAN_TypeInfo;
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IHMIMECHIAN_c *)thunk_FUN_01ba7564(IHMIMECHIAN_TypeInfo,method);
  }
  pGVar1 = IHMIMECHIAN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override int GetHashCode()  [RVA 0x343CA40]
// IHMIMECHIAN$$GetHashCode @ RVA 0x343CA40

int32_t IHMIMECHIAN__GetHashCode(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_Collections_Generic_EqualityComparer_float__o *pSVar4;
  Google_Protobuf_Collections_RepeatedField_int__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  undefined1 local_28 [4];
  int local_24;
  
  if ((DAT_045681e6 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
    DAT_045681e6 = 1;
  }
  local_24 = 0;
  local_28[0] = 0;
  iVar1 = (__this->fields).CHLCOKOBIHN;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_24 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).KFBIHGFDAOL;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).POHDGAPDBGK != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).PJMOADBJNKH != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).NNCLFDMPFHP != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).HOFAHGOCDCE != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).KLOGBBKOLFL != 0.0) {
    if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045612b6 == '\0') {
      FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
      DAT_045612b6 = '\x01';
    }
    if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->static_fields->
             _BitwiseSingleEqualityComparer_k__BackingField;
    if (pSVar4 == (System_Collections_Generic_EqualityComparer_float__o *)0x0) goto LAB_0353cc64;
    uVar3 = (*(pSVar4->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                      ((__this->fields).KLOGBBKOLFL,pSVar4,
                       (pSVar4->klass->vtable)._9_HNIHOIAMDPC.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).IKCCLDMOOKP;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    iVar1 = (__this->fields).LADINGEOKCK;
    uVar3 = uVar3 ^ uVar2;
    if (iVar1 != 0) {
      local_24 = iVar1;
      uVar2 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    pGVar6 = (__this->fields).CKFPENBPNML;
    if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
      uVar3 = uVar2 ^ uVar3;
    }
    return uVar3;
  }
LAB_0353cc64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EOMHGKAKFBE(int CJNHFNHJHPE)  [RVA 0x343CC68]
// IHMIMECHIAN$$EOMHGKAKFBE @ RVA 0x343CC68

void IHMIMECHIAN__EOMHGKAKFBE(IHMIMECHIAN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LADINGEOKCK = CJNHFNHJHPE;
  return;
}


// ===== public bool DLPKDAMBCKA()  [RVA 0x343CC70]
// IHMIMECHIAN$$DLPKDAMBCKA @ RVA 0x343CC70

bool IHMIMECHIAN__DLPKDAMBCKA(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).PJMOADBJNKH;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x343CC78]
// IHMIMECHIAN$$MergeFrom @ RVA 0x343CC78

void IHMIMECHIAN__MergeFrom
               (IHMIMECHIAN_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  IHMIMECHIAN_Fields *pIVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  float fVar6;
  
  if ((DAT_045681e7 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
    DAT_045681e7 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar3 != 0) {
      pIVar1 = &__this->fields;
      do {
        if (uVar3 < 0x29) {
          if (uVar3 < 0x11) {
            if (uVar3 == 8) {
              iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
              (__this->fields).CHLCOKOBIHN = iVar4;
            }
            else {
              if (uVar3 != 0x10) goto LAB_0353cda0;
              iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
              (__this->fields).KFBIHGFDAOL = iVar4;
            }
          }
          else if (uVar3 == 0x18) {
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).POHDGAPDBGK = bVar2;
          }
          else if (uVar3 == 0x20) {
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).PJMOADBJNKH = bVar2;
          }
          else {
            if (uVar3 != 0x28) goto LAB_0353cda0;
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).NNCLFDMPFHP = bVar2;
          }
        }
        else if (uVar3 < 0x3e) {
          if (uVar3 == 0x30) {
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).HOFAHGOCDCE = bVar2;
          }
          else if (uVar3 == 0x3d) {
            fVar6 = Google_Protobuf_CodedInputStream__ReadFloat(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).KLOGBBKOLFL = fVar6;
          }
          else {
LAB_0353cda0:
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pIVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pIVar1->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pIVar1,pGVar5);
          }
        }
        else if ((uVar3 == 0x40) || (uVar3 == 0x42)) {
          __this_00 = (__this->fields).IKCCLDMOOKP;
          if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0)
          goto LAB_0353ce78;
          Google_Protobuf_Collections_RepeatedField<int>__AddEntriesFrom
                    (__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF,
                     Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
        }
        else {
          if (uVar3 != 0x48) goto LAB_0353cda0;
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LADINGEOKCK = iVar4;
        }
        uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar3 != 0);
    }
    return;
  }
LAB_0353ce78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IHMIMECHIAN Clone()  [RVA 0x343CE7C]
// IHMIMECHIAN$$Clone @ RVA 0x343CE7C

IHMIMECHIAN_o * IHMIMECHIAN__Clone(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  IHMIMECHIAN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045681e8 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045681e8 = 1;
    method = extraout_x1;
  }
  __this_00 = (IHMIMECHIAN_o *)thunk_FUN_01bda818(IHMIMECHIAN_TypeInfo,method);
  IHMIMECHIAN___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void MergeFrom(IHMIMECHIAN IBKIPBJJCPG)  [RVA 0x343CF98]
// IHMIMECHIAN$$MergeFrom @ RVA 0x343CF98

void IHMIMECHIAN__MergeFrom(IHMIMECHIAN_o *__this,IHMIMECHIAN_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  IHMIMECHIAN_Fields *pIVar3;
  float fVar4;
  
                    /* try { // try from 0353cfb0 to 0363cfb3 has its CatchHandler @ 0353d0e0 */
  if ((DAT_045681e9 & 1) == 0) {
                    /* try { // try from 0353cfb4 to 0363cfbf has its CatchHandler @ 0353d0e4 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
    DAT_045681e9 = 1;
  }
  if (IBKIPBJJCPG == (IHMIMECHIAN_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).CHLCOKOBIHN;
                    /* try { // try from 0353cfd0 to 0363cfd3 has its CatchHandler @ 0353d0d8 */
  if (iVar1 != 0) {
                    /* try { // try from 0353cfd4 to 0363cfef has its CatchHandler @ 0353d0dc */
    (__this->fields).CHLCOKOBIHN = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).KFBIHGFDAOL;
  if (iVar1 != 0) {
    (__this->fields).KFBIHGFDAOL = iVar1;
  }
  if ((IBKIPBJJCPG->fields).POHDGAPDBGK != false) {
                    /* try { // try from 0353cff0 to 0363d0c7 has its CatchHandler @ 0353c70c */
    (__this->fields).POHDGAPDBGK = true;
  }
  if ((IBKIPBJJCPG->fields).PJMOADBJNKH != false) {
    (__this->fields).PJMOADBJNKH = true;
  }
  if ((IBKIPBJJCPG->fields).NNCLFDMPFHP != false) {
    (__this->fields).NNCLFDMPFHP = true;
  }
  if ((IBKIPBJJCPG->fields).HOFAHGOCDCE != false) {
    (__this->fields).HOFAHGOCDCE = true;
  }
  fVar4 = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
  if (fVar4 != 0.0) {
    (__this->fields).KLOGBBKOLFL = fVar4;
  }
  __this_00 = (__this->fields).IKCCLDMOOKP;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<int>__Add
              (__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).IKCCLDMOOKP,
               Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
    iVar1 = (IBKIPBJJCPG->fields).LADINGEOKCK;
    if (iVar1 != 0) {
      (__this->fields).LADINGEOKCK = iVar1;
    }
    pIVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pIVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x343D094]
// IHMIMECHIAN$$Equals @ RVA 0x343D094

bool IHMIMECHIAN__Equals(IHMIMECHIAN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045681ea & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045681ea = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cfb4 with catch @ 0353d0e4
                        */
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* try { // try from 0353d0c8 to 0363d0cb has its CatchHandler @ 0353d0d4 */
                    /* try { // try from 0353d0cc to 0363d0fb has its CatchHandler @ 0353c70c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353d0c8 with catch @ 0353d0d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cfd0 with catch @ 0353d0d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cfd4 with catch @ 0353d0dc
                        */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)IHMIMECHIAN_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cf78 with catch @ 0353d0e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353cf1c with catch @ 0353d0ec
                        */
  bVar1 = IHMIMECHIAN__Equals(__this,(IHMIMECHIAN_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void ELIEPBPLOKE(bool CJNHFNHJHPE)  [RVA 0x343D2C0]
// IHMIMECHIAN$$ELIEPBPLOKE @ RVA 0x343D2C0

void IHMIMECHIAN__ELIEPBPLOKE(IHMIMECHIAN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PJMOADBJNKH = CJNHFNHJHPE;
  return;
}


// ===== public int GAACHLAKAMK()  [RVA 0x343D2CC]
// IHMIMECHIAN$$GAACHLAKAMK @ RVA 0x343D2CC

int32_t IHMIMECHIAN__GAACHLAKAMK(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).KFBIHGFDAOL;
}


// ===== public int CAOFKEFIIJK()  [RVA 0x343D2D4]
// IHMIMECHIAN$$CAOFKEFIIJK @ RVA 0x343D2D4

int32_t IHMIMECHIAN__CAOFKEFIIJK(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).LADINGEOKCK;
}


// ===== public void .ctor(IHMIMECHIAN IBKIPBJJCPG)  [RVA 0x343CED4]
// IHMIMECHIAN$$.ctor @ RVA 0x343CED4

void IHMIMECHIAN___ctor(IHMIMECHIAN_o *__this,IHMIMECHIAN_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_045681eb & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
    DAT_045681eb = 1;
    method_00 = extraout_x1;
  }
  IHMIMECHIAN___ctor(__this,method_00);
  if (IBKIPBJJCPG != (IHMIMECHIAN_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).KFBIHGFDAOL;
    (__this->fields).CHLCOKOBIHN = (IBKIPBJJCPG->fields).CHLCOKOBIHN;
    (__this->fields).KFBIHGFDAOL = iVar1;
                    /* try { // try from 0353cf1c to 0363cf43 has its CatchHandler @ 0353d0ec */
    (__this->fields).POHDGAPDBGK = (IBKIPBJJCPG->fields).POHDGAPDBGK;
    (__this->fields).PJMOADBJNKH = (IBKIPBJJCPG->fields).PJMOADBJNKH;
    (__this->fields).NNCLFDMPFHP = (IBKIPBJJCPG->fields).NNCLFDMPFHP;
    (__this->fields).HOFAHGOCDCE = (IBKIPBJJCPG->fields).HOFAHGOCDCE;
    (__this->fields).KLOGBBKOLFL = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
    __this_00 = (IBKIPBJJCPG->fields).IKCCLDMOOKP;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
      pGVar2 = Google_Protobuf_Collections_RepeatedField<int>__Clone
                         (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
      (__this->fields).IKCCLDMOOKP = (Google_Protobuf_Collections_RepeatedField_int__o *)pGVar2;
      thunk_FUN_01c20e04();
      (__this->fields).LADINGEOKCK = (IBKIPBJJCPG->fields).LADINGEOKCK;
                    /* try { // try from 0353cf78 to 0363cf9f has its CatchHandler @ 0353d0e8 */
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BIANGJDNKNM()  [RVA 0x343D2DC]
// IHMIMECHIAN$$BIANGJDNKNM @ RVA 0x343D2DC

bool IHMIMECHIAN__BIANGJDNKNM(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).HOFAHGOCDCE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x343C93C]
// IHMIMECHIAN$$FFHIHGCDGAK @ RVA 0x343C93C

Google_Protobuf_Reflection_MessageDescriptor_o * IHMIMECHIAN__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045681ec & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045681ec = 1;
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
        goto LAB_0353ca24;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0353ca24:
                    /* WARNING: Could not recover jumptable at 0x0353ca38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x26,pVVar2->method);
  return pGVar3;
}


// ===== public int LBKDNCDHFFI()  [RVA 0x343D2E4]
// IHMIMECHIAN$$LBKDNCDHFFI @ RVA 0x343D2E4

int32_t IHMIMECHIAN__LBKDNCDHFFI(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).CHLCOKOBIHN;
}


// ===== public float OBAJCBOGFFM()  [RVA 0x343D2EC]
// IHMIMECHIAN$$OBAJCBOGFFM @ RVA 0x343D2EC

float IHMIMECHIAN__OBAJCBOGFFM(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).KLOGBBKOLFL;
}


// ===== public void HFEFIDJNHAK(int CJNHFNHJHPE)  [RVA 0x343D2F4]
// IHMIMECHIAN$$HFEFIDJNHAK @ RVA 0x343D2F4

void IHMIMECHIAN__HFEFIDJNHAK(IHMIMECHIAN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KFBIHGFDAOL = CJNHFNHJHPE;
  return;
}


// ===== public RepeatedField<int> LBJFKJPBMHL()  [RVA 0x343D2FC]
// IHMIMECHIAN$$LBJFKJPBMHL @ RVA 0x343D2FC

Google_Protobuf_Collections_RepeatedField_int__o *
IHMIMECHIAN__LBJFKJPBMHL(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  return (__this->fields).IKCCLDMOOKP;
}


// ===== public bool Equals(IHMIMECHIAN IBKIPBJJCPG)  [RVA 0x343D0F8]
// IHMIMECHIAN$$Equals @ RVA 0x343D0F8

bool IHMIMECHIAN__Equals(IHMIMECHIAN_o *__this,IHMIMECHIAN_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_EqualityComparer_float__o *pSVar2;
  ulong uVar3;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  
                    /* try { // try from 0353d0fc to 0363d0ff has its CatchHandler @ 0353d110 */
                    /* catch() { ... } // from try @ 0353d0fc with catch @ 0353d110 */
  if ((DAT_045681ed & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
    DAT_045681ed = 1;
  }
  if (IBKIPBJJCPG != (IHMIMECHIAN_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 0353d148 to 0363d16f has its CatchHandler @ 0353d184 */
                    /* try { // try from 0353d170 to 0363d17b has its CatchHandler @ 0353c70c */
                    /* try { // try from 0353d17c to 0363d183 has its CatchHandler @ 0353d184 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353d148 with catch @ 0353d184
                       catch(type#2 @ 00000000) { ... } // from try @ 0353d17c with catch @ 0353d184
                        */
    if ((((((__this->fields).CHLCOKOBIHN == (IBKIPBJJCPG->fields).CHLCOKOBIHN) &&
          ((__this->fields).KFBIHGFDAOL == (IBKIPBJJCPG->fields).KFBIHGFDAOL)) &&
         (((__this->fields).POHDGAPDBGK != false) == ((IBKIPBJJCPG->fields).POHDGAPDBGK != false)))
        && ((((__this->fields).PJMOADBJNKH != false) == ((IBKIPBJJCPG->fields).PJMOADBJNKH != false)
            && (((__this->fields).NNCLFDMPFHP != false) ==
                ((IBKIPBJJCPG->fields).NNCLFDMPFHP != false))))) &&
       (((__this->fields).HOFAHGOCDCE != false) == ((IBKIPBJJCPG->fields).HOFAHGOCDCE != false))) {
      if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      if (DAT_045612b6 == '\0') {
        FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
        DAT_045612b6 = '\x01';
      }
      if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pSVar2 = Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->static_fields->
               _BitwiseSingleEqualityComparer_k__BackingField;
      if (pSVar2 == (System_Collections_Generic_EqualityComparer_float__o *)0x0) {
LAB_0353d2bc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar3 = (*(pSVar2->klass->vtable)._8_Equals.methodPtr)
                        ((__this->fields).KLOGBBKOLFL,(IBKIPBJJCPG->fields).KLOGBBKOLFL,pSVar2,
                         (pSVar2->klass->vtable)._8_Equals.method);
      if ((uVar3 & 1) != 0) {
        __this_00 = (__this->fields).IKCCLDMOOKP;
        if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) goto LAB_0353d2bc;
        bVar1 = Google_Protobuf_Collections_RepeatedField<int>__Equals
                          (__this_00,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).IKCCLDMOOKP,
                           Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
        if ((bVar1) && ((__this->fields).LADINGEOKCK == (IBKIPBJJCPG->fields).LADINGEOKCK)) {
          bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
  return false;
}


// ===== private static void .cctor()  [RVA 0x343D304]
// IHMIMECHIAN$$.cctor @ RVA 0x343D304

void IHMIMECHIAN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_IHMIMECHIAN__o *__this;
  Google_Protobuf_FieldCodec_int__o *pGVar1;
  Google_Protobuf_FieldCodec_int__o **ppGVar2;
  
  if ((DAT_045681ee & 1) == 0) {
    FUN_01bab630(&System_Func<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&Method_IHMIMECHIAN_<>c_MHAEKPPOEIL__);
    FUN_01bab630(&IHMIMECHIAN_<>c_TypeInfo);
    DAT_045681ee = 1;
  }
  if ((IHMIMECHIAN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<IHMIMECHIAN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_IHMIMECHIAN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<IHMIMECHIAN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<IHMIMECHIAN>__ctor__);
  IHMIMECHIAN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(IHMIMECHIAN_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForInt32(0x42,(MethodInfo *)0x0);
  ppGVar2 = &IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public int CalculateSize()  [RVA 0x343D440]
// IHMIMECHIAN$$CalculateSize @ RVA 0x343D440

int32_t IHMIMECHIAN__CalculateSize(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_01;
  int iVar3;
  
  if ((DAT_045681ef & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    DAT_045681ef = 1;
    method = extraout_x1;
  }
  iVar3 = (__this->fields).CHLCOKOBIHN;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar3,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).KFBIHGFDAOL;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  if ((__this->fields).POHDGAPDBGK != false) {
    iVar3 = iVar3 + 2;
  }
  if ((__this->fields).PJMOADBJNKH != false) {
    iVar3 = iVar3 + 2;
  }
  if ((__this->fields).NNCLFDMPFHP != false) {
    iVar3 = iVar3 + 2;
  }
  __this_01 = (__this->fields).IKCCLDMOOKP;
  if ((__this->fields).HOFAHGOCDCE != false) {
    iVar3 = iVar3 + 2;
  }
  if ((__this->fields).KLOGBBKOLFL != 0.0) {
    iVar3 = iVar3 + 5;
  }
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    iVar2 = Google_Protobuf_Collections_RepeatedField<int>__CalculateSize
                      (__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF,
                       Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    iVar1 = (__this->fields).LADINGEOKCK;
    iVar3 = iVar2 + iVar3;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar3 = iVar3 + iVar2 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

