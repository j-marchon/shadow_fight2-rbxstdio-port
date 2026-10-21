// TypeDefIndex 2991
// Namespace: 
// public sealed class MGDJPGGPDJI : IMessage<MGDJPGGPDJI>, IMessage, IEquatable<MGDJPGGPDJI>, IDeepCloneable<MGDJPGGPDJI>
// Fields:
//   private static readonly MessageParser<MGDJPGGPDJI> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DAIPHMMHPLH = 1;
//   private long ANAJGHJEEOC; // 0x18
//   public const int GNBAOKFACHH = 2;
//   private string LLBEKLPKDHK; // 0x20
//   public const int ELIIFCPPHBD = 3;
//   private KCFAKHLDKJM BDPMJNBHKIJ; // 0x28
//   public const int DJDODJFOFMH = 4;
//   private int NLLKMEMKBAF; // 0x2C

// ===== public void KHICGIIIKOL(KCFAKHLDKJM CJNHFNHJHPE)  [RVA 0x34A3F08]
// MGDJPGGPDJI$$KHICGIIIKOL @ RVA 0x34A3F08

void MGDJPGGPDJI__KHICGIIIKOL(MGDJPGGPDJI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BDPMJNBHKIJ = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x34A3F10]
// MGDJPGGPDJI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34A3F10

Google_Protobuf_Reflection_MessageDescriptor_o *
MGDJPGGPDJI__pb__Google_Protobuf_IMessage_get_Descriptor(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  MGDJPGGPDJI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045684d6 & 1) == 0) {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_045684d6 = 1;
    method = extraout_x1;
  }
  method_00 = MGDJPGGPDJI_TypeInfo;
  if ((MGDJPGGPDJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGDJPGGPDJI_c *)thunk_FUN_01ba7564(MGDJPGGPDJI_TypeInfo,method);
  }
  pGVar1 = MGDJPGGPDJI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34A4060]
// MGDJPGGPDJI$$Equals @ RVA 0x34A4060

bool MGDJPGGPDJI__Equals(MGDJPGGPDJI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045684d7 & 1) == 0) {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_045684d7 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)MGDJPGGPDJI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = MGDJPGGPDJI__Equals(__this,(MGDJPGGPDJI_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override int GetHashCode()  [RVA 0x34A4154]
// MGDJPGGPDJI$$GetHashCode @ RVA 0x34A4154

int32_t MGDJPGGPDJI__GetHashCode(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  undefined8 local_28;
  long local_18;
  
  local_18 = 0;
  local_28 = 0;
  lVar6 = (__this->fields).ANAJGHJEEOC;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).LLBEKLPKDHK;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).BDPMJNBHKIJ;
    if (iVar1 != 0) {
      local_28 = CONCAT44(iVar1,(undefined4)local_28);
      uVar3 = System_Int32__GetHashCode((int)&local_28 + 4,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).NLLKMEMKBAF;
    if (iVar1 != 0) {
      local_28 = CONCAT44(local_28._4_4_,iVar1);
      uVar3 = System_Int32__GetHashCode((int32_t)&local_28,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(MGDJPGGPDJI IBKIPBJJCPG)  [RVA 0x34A4214]
// MGDJPGGPDJI$$.ctor @ RVA 0x34A4214

void MGDJPGGPDJI___ctor(MGDJPGGPDJI_o *__this,MGDJPGGPDJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  MGDJPGGPDJI___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (MGDJPGGPDJI_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    (__this->fields).LLBEKLPKDHK = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
    thunk_FUN_01c20e04();
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    (__this->fields).BDPMJNBHKIJ = (IBKIPBJJCPG->fields).BDPMJNBHKIJ;
    (__this->fields).NLLKMEMKBAF = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long LFELHKJPDHA()  [RVA 0x34A42CC]
// MGDJPGGPDJI$$LFELHKJPDHA @ RVA 0x34A42CC

int64_t MGDJPGGPDJI__LFELHKJPDHA(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  return (__this->fields).ANAJGHJEEOC;
}


// ===== public bool Equals(MGDJPGGPDJI IBKIPBJJCPG)  [RVA 0x34A40C4]
// MGDJPGGPDJI$$Equals @ RVA 0x34A40C4

bool MGDJPGGPDJI__Equals(MGDJPGGPDJI_o *__this,MGDJPGGPDJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (MGDJPGGPDJI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).LLBEKLPKDHK,(IBKIPBJJCPG->fields).LLBEKLPKDHK,
                             (MethodInfo *)0x0), !bVar1)) &&
        ((__this->fields).BDPMJNBHKIJ == (IBKIPBJJCPG->fields).BDPMJNBHKIJ)) &&
       ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public MGDJPGGPDJI Clone()  [RVA 0x34A42D4]
// MGDJPGGPDJI$$Clone @ RVA 0x34A42D4

MGDJPGGPDJI_o * MGDJPGGPDJI__Clone(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  MGDJPGGPDJI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045684d8 & 1) == 0) {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_045684d8 = 1;
    method = extraout_x1;
  }
  __this_00 = (MGDJPGGPDJI_o *)thunk_FUN_01bda818(MGDJPGGPDJI_TypeInfo,method);
  MGDJPGGPDJI___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public int DENKJCBILMC()  [RVA 0x34A432C]
// MGDJPGGPDJI$$DENKJCBILMC @ RVA 0x34A432C

int32_t MGDJPGGPDJI__DENKJCBILMC(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  return (__this->fields).NLLKMEMKBAF;
}


// ===== private static void .cctor()  [RVA 0x34A4334]
// MGDJPGGPDJI$$.cctor @ RVA 0x34A4334

void MGDJPGGPDJI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_MGDJPGGPDJI__o *__this;
  
  if ((DAT_045684d9 & 1) == 0) {
    FUN_01bab630(&System_Func<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<MGDJPGGPDJI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&Method_MGDJPGGPDJI_<>c_LNJPIHAONCC__);
    FUN_01bab630(&MGDJPGGPDJI_<>c_TypeInfo);
    DAT_045684d9 = 1;
  }
  if ((MGDJPGGPDJI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<MGDJPGGPDJI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_MGDJPGGPDJI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<MGDJPGGPDJI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<MGDJPGGPDJI>__ctor__);
  MGDJPGGPDJI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(MGDJPGGPDJI_TypeInfo->static_fields,__this);
  return;
}


// ===== public KCFAKHLDKJM IPCJGMCJBIF()  [RVA 0x34A444C]
// MGDJPGGPDJI$$IPCJGMCJBIF @ RVA 0x34A444C

int32_t MGDJPGGPDJI__IPCJGMCJBIF(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  return (__this->fields).BDPMJNBHKIJ;
}


// ===== public void OFJLHAKNDGH(int CJNHFNHJHPE)  [RVA 0x34A4454]
// MGDJPGGPDJI$$OFJLHAKNDGH @ RVA 0x34A4454

void MGDJPGGPDJI__OFJLHAKNDGH(MGDJPGGPDJI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NLLKMEMKBAF = CJNHFNHJHPE;
  return;
}


// ===== public string HNMOINOAPJF()  [RVA 0x34A445C]
// MGDJPGGPDJI$$HNMOINOAPJF @ RVA 0x34A445C

System_String_o * MGDJPGGPDJI__HNMOINOAPJF(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  return (__this->fields).LLBEKLPKDHK;
}


// ===== public void .ctor()  [RVA 0x34A4274]
// MGDJPGGPDJI$$.ctor @ RVA 0x34A4274

void MGDJPGGPDJI___ctor(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  if ((DAT_045684da & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045684da = 1;
  }
  (__this->fields).LLBEKLPKDHK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void EHMLCEKLCDD(long CJNHFNHJHPE)  [RVA 0x34A4464]
// MGDJPGGPDJI$$EHMLCEKLCDD @ RVA 0x34A4464

void MGDJPGGPDJI__EHMLCEKLCDD(MGDJPGGPDJI_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ANAJGHJEEOC = CJNHFNHJHPE;
  return;
}


// ===== public void OFDBFMLANAH(string CJNHFNHJHPE)  [RVA 0x34A446C]
// MGDJPGGPDJI$$OFDBFMLANAH @ RVA 0x34A446C

void MGDJPGGPDJI__OFDBFMLANAH(MGDJPGGPDJI_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045684db & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045684db = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).LLBEKLPKDHK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void MergeFrom(MGDJPGGPDJI IBKIPBJJCPG)  [RVA 0x34A44E8]
// MGDJPGGPDJI$$MergeFrom @ RVA 0x34A44E8

void MGDJPGGPDJI__MergeFrom(MGDJPGGPDJI_o *__this,MGDJPGGPDJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  long lVar3;
  MGDJPGGPDJI_Fields *pMVar4;
  
  if (IBKIPBJJCPG == (MGDJPGGPDJI_o *)0x0) {
    return;
  }
  lVar3 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
  if (lVar3 != 0) {
    (__this->fields).ANAJGHJEEOC = lVar3;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      MGDJPGGPDJI__OFDBFMLANAH(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).BDPMJNBHKIJ;
    if (iVar1 != 0) {
      (__this->fields).BDPMJNBHKIJ = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    if (iVar1 != 0) {
      (__this->fields).NLLKMEMKBAF = iVar1;
    }
    pMVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pMVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pMVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pMVar4,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34A4570]
// MGDJPGGPDJI$$WriteTo @ RVA 0x34A4570

void MGDJPGGPDJI__WriteTo
               (MGDJPGGPDJI_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).ANAJGHJEEOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).LLBEKLPKDHK;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).LLBEKLPKDHK,(MethodInfo *)0x0);
    }
    if ((__this->fields).BDPMJNBHKIJ != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteEnum
                (JBGJLELBMJF,(__this->fields).BDPMJNBHKIJ,(MethodInfo *)0x0);
    }
    if ((__this->fields).NLLKMEMKBAF != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).NLLKMEMKBAF,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_035a4660:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x34A4664]
// MGDJPGGPDJI$$CalculateSize @ RVA 0x34A4664

int32_t MGDJPGGPDJI__CalculateSize(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  long value;
  System_String_o *value_00;
  
  if ((DAT_045684dc & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045684dc = 1;
    method = extraout_x1;
  }
  value = (__this->fields).ANAJGHJEEOC;
  iVar3 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  value_00 = (__this->fields).LLBEKLPKDHK;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar3 = iVar3 + iVar2 + 1;
    }
    iVar1 = (__this->fields).BDPMJNBHKIJ;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(iVar1,(MethodInfo *)0x0);
      iVar3 = iVar3 + iVar2 + 1;
    }
    iVar1 = (__this->fields).NLLKMEMKBAF;
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


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34A3F5C]
// MGDJPGGPDJI$$FFHIHGCDGAK @ RVA 0x34A3F5C

Google_Protobuf_Reflection_MessageDescriptor_o * MGDJPGGPDJI__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045684dd & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045684dd = 1;
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
        goto LAB_035a4044;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_035a4044:
                    /* WARNING: Could not recover jumptable at 0x035a4058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x3c,pVVar2->method);
  return pGVar3;
}


// ===== public static MessageParser<MGDJPGGPDJI> PGCAHPDCJBC()  [RVA 0x34A477C]
// MGDJPGGPDJI$$PGCAHPDCJBC @ RVA 0x34A477C

Google_Protobuf_MessageParser_MGDJPGGPDJI__o * MGDJPGGPDJI__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045684de & 1) == 0) {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_045684de = 1;
  }
  if ((MGDJPGGPDJI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return MGDJPGGPDJI_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34A47D4]
// MGDJPGGPDJI$$MergeFrom @ RVA 0x34A47D4

void MGDJPGGPDJI__MergeFrom
               (MGDJPGGPDJI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  MGDJPGGPDJI_Fields *pMVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pMVar1 = &__this->fields;
    do {
      if (uVar2 < 0x13) {
        if (uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ANAJGHJEEOC = iVar5;
        }
        else if (uVar2 == 0x12) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          MGDJPGGPDJI__OFDBFMLANAH(__this,CJNHFNHJHPE,method);
        }
        else {
LAB_035a4854:
          method = (MethodInfo *)0x0;
          pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pMVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pMVar1->CKFPENBPNML = pGVar4;
          thunk_FUN_01c20e04(pMVar1,pGVar4);
        }
      }
      else if (uVar2 == 0x18) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).BDPMJNBHKIJ = iVar3;
      }
      else {
        if (uVar2 != 0x20) goto LAB_035a4854;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).NLLKMEMKBAF = iVar3;
      }
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}


// ===== public override string ToString()  [RVA 0x34A48BC]
// MGDJPGGPDJI$$ToString @ RVA 0x34A48BC

System_String_o * MGDJPGGPDJI__ToString(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045684df & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045684df = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

