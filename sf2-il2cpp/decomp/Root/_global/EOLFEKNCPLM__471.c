// TypeDefIndex 471
// Namespace: 
// public sealed class EOLFEKNCPLM : IMessage<EOLFEKNCPLM>, IMessage, IEquatable<EOLFEKNCPLM>, IDeepCloneable<EOLFEKNCPLM>
// Fields:
//   private static readonly MessageParser<EOLFEKNCPLM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int PGDPBIJHOMK = 1;
//   private GKLPDMLELJF MCOPPCNPAHF; // 0x18
//   public const int AIGJOFFFGCC = 2;
//   private OBCMNBDBNFO PLJJCOHGICK; // 0x20
//   public const int JBPEEAOBBBD = 3;
//   private ByteString OACFBJNMHCM; // 0x28
//   public const int OBFAIACBOCF = 4;
//   private int LEEKCALJFJN; // 0x30
//   public const int ONGLJCNPKKJ = 5;
//   private int IINFDIJOFIG; // 0x34
//   public const int JKACAJJMFBF = 6;
//   private int ODDCBFOLIGB; // 0x38

// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x357F654]
// EOLFEKNCPLM$$Equals @ RVA 0x357F654

bool EOLFEKNCPLM__Equals(EOLFEKNCPLM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568cbb & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    DAT_04568cbb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EOLFEKNCPLM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EOLFEKNCPLM__Equals(__this,(EOLFEKNCPLM_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor(EOLFEKNCPLM IBKIPBJJCPG)  [RVA 0x357F7BC]
// EOLFEKNCPLM$$.ctor @ RVA 0x357F7BC

void EOLFEKNCPLM___ctor(EOLFEKNCPLM_o *__this,EOLFEKNCPLM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o *pGVar2;
  OBCMNBDBNFO_o *pOVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  EOLFEKNCPLM___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (EOLFEKNCPLM_o *)0x0) {
    pGVar2 = (IBKIPBJJCPG->fields).MCOPPCNPAHF;
    if (pGVar2 == (GKLPDMLELJF_o *)0x0) {
      pGVar2 = (GKLPDMLELJF_o *)0x0;
    }
    else {
      pGVar2 = GKLPDMLELJF__Clone(pGVar2,(MethodInfo *)0x0);
    }
    if (__this != (EOLFEKNCPLM_o *)0x0) {
      (__this->fields).MCOPPCNPAHF = pGVar2;
      thunk_FUN_01c20e04();
      pOVar3 = (IBKIPBJJCPG->fields).PLJJCOHGICK;
      if (pOVar3 == (OBCMNBDBNFO_o *)0x0) {
        pOVar3 = (OBCMNBDBNFO_o *)0x0;
      }
      else {
        pOVar3 = OBCMNBDBNFO__Clone(pOVar3,(MethodInfo *)0x0);
      }
      (__this->fields).PLJJCOHGICK = pOVar3;
      thunk_FUN_01c20e04();
      (__this->fields).OACFBJNMHCM = (IBKIPBJJCPG->fields).OACFBJNMHCM;
      thunk_FUN_01c20e04();
      iVar1 = (IBKIPBJJCPG->fields).IINFDIJOFIG;
      (__this->fields).LEEKCALJFJN = (IBKIPBJJCPG->fields).LEEKCALJFJN;
      (__this->fields).IINFDIJOFIG = iVar1;
      (__this->fields).ODDCBFOLIGB = (IBKIPBJJCPG->fields).ODDCBFOLIGB;
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<EOLFEKNCPLM> PGCAHPDCJBC()  [RVA 0x357F910]
// EOLFEKNCPLM$$PGCAHPDCJBC @ RVA 0x357F910

Google_Protobuf_MessageParser_EOLFEKNCPLM__o * EOLFEKNCPLM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568cbc & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    DAT_04568cbc = 1;
  }
  if ((EOLFEKNCPLM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return EOLFEKNCPLM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override int GetHashCode()  [RVA 0x357F968]
// EOLFEKNCPLM$$GetHashCode @ RVA 0x357F968

int32_t EOLFEKNCPLM__GetHashCode(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int32_t iVar4;
  GKLPDMLELJF_o *pGVar5;
  OBCMNBDBNFO_o *pOVar6;
  Google_Protobuf_ByteString_o *pGVar7;
  Google_Protobuf_UnknownFieldSet_o *pGVar8;
  int local_14;
  
  local_14 = 0;
  pGVar5 = (__this->fields).MCOPPCNPAHF;
  if (pGVar5 == (GKLPDMLELJF_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pOVar6 = (__this->fields).PLJJCOHGICK;
  if (pOVar6 != (OBCMNBDBNFO_o *)0x0) {
    uVar3 = (*(pOVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pOVar6,(pOVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar7 = (__this->fields).OACFBJNMHCM;
  if (pGVar7 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar4 = Google_Protobuf_ByteString__get_Length(pGVar7,(MethodInfo *)0x0);
    if (iVar4 != 0) {
      pGVar7 = (__this->fields).OACFBJNMHCM;
      if (pGVar7 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_0367fa58;
      uVar3 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).LEEKCALJFJN;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).IINFDIJOFIG;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).ODDCBFOLIGB;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar8 = (__this->fields).CKFPENBPNML;
    if (pGVar8 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar8->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar8,(pGVar8->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
LAB_0367fa58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CFBDBDPBJEI(int CJNHFNHJHPE)  [RVA 0x357FA5C]
// EOLFEKNCPLM$$CFBDBDPBJEI @ RVA 0x357FA5C

void EOLFEKNCPLM__CFBDBDPBJEI(EOLFEKNCPLM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LEEKCALJFJN = CJNHFNHJHPE;
  return;
}


// ===== public void LHHFEAFBNMI(GKLPDMLELJF CJNHFNHJHPE)  [RVA 0x357FA64]
// EOLFEKNCPLM$$LHHFEAFBNMI @ RVA 0x357FA64

void EOLFEKNCPLM__LHHFEAFBNMI(EOLFEKNCPLM_o *__this,GKLPDMLELJF_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MCOPPCNPAHF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x357F870]
// EOLFEKNCPLM$$.ctor @ RVA 0x357F870

void EOLFEKNCPLM___ctor(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568cbd & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04568cbd = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04561f53 == '\0') {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04561f53 = '\x01';
    method = extraout_x1_01;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
  }
  (__this->fields).OACFBJNMHCM = Google_Protobuf_ByteString_TypeInfo->static_fields->empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(EOLFEKNCPLM IBKIPBJJCPG)  [RVA 0x357FA6C]
// EOLFEKNCPLM$$MergeFrom @ RVA 0x357FA6C

void EOLFEKNCPLM__MergeFrom(EOLFEKNCPLM_o *__this,EOLFEKNCPLM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  GKLPDMLELJF_o *pGVar3;
  OBCMNBDBNFO_o *pOVar4;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  EOLFEKNCPLM_Fields *pEVar6;
  GKLPDMLELJF_o **ppGVar7;
  OBCMNBDBNFO_o **ppOVar8;
  
  if ((DAT_04568cbe & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_04568cbe = 1;
  }
  if (IBKIPBJJCPG == (EOLFEKNCPLM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).MCOPPCNPAHF != (GKLPDMLELJF_o *)0x0) {
    ppGVar7 = &(__this->fields).MCOPPCNPAHF;
    pGVar3 = *ppGVar7;
    if (pGVar3 == (GKLPDMLELJF_o *)0x0) {
      pGVar3 = (GKLPDMLELJF_o *)thunk_FUN_01bda818(GKLPDMLELJF_TypeInfo);
      GKLPDMLELJF___ctor(pGVar3,(MethodInfo *)0x0);
      *ppGVar7 = pGVar3;
      thunk_FUN_01c20e04(ppGVar7,pGVar3);
      pGVar3 = *ppGVar7;
      if (pGVar3 == (GKLPDMLELJF_o *)0x0) goto LAB_0367fbd8;
    }
    method = (MethodInfo *)0x0;
    GKLPDMLELJF__MergeFrom(pGVar3,(IBKIPBJJCPG->fields).MCOPPCNPAHF,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).PLJJCOHGICK != (OBCMNBDBNFO_o *)0x0) {
    ppOVar8 = &(__this->fields).PLJJCOHGICK;
    pOVar4 = *ppOVar8;
    if (pOVar4 == (OBCMNBDBNFO_o *)0x0) {
      pOVar4 = (OBCMNBDBNFO_o *)thunk_FUN_01bda818(OBCMNBDBNFO_TypeInfo);
      OBCMNBDBNFO___ctor(pOVar4,(MethodInfo *)0x0);
      *ppOVar8 = pOVar4;
      thunk_FUN_01c20e04(ppOVar8,pOVar4);
      pOVar4 = *ppOVar8;
      if (pOVar4 == (OBCMNBDBNFO_o *)0x0) goto LAB_0367fbd8;
    }
    method = (MethodInfo *)0x0;
    OBCMNBDBNFO__MergeFrom(pOVar4,(IBKIPBJJCPG->fields).PLJJCOHGICK,(MethodInfo *)0x0);
  }
  __this_00 = (IBKIPBJJCPG->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar2 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      EOLFEKNCPLM__BGOOPIDKJEC(__this,(IBKIPBJJCPG->fields).OACFBJNMHCM,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).LEEKCALJFJN;
    if (iVar1 != 0) {
      (__this->fields).LEEKCALJFJN = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).IINFDIJOFIG;
    if (iVar1 != 0) {
      (__this->fields).IINFDIJOFIG = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).ODDCBFOLIGB;
    if (iVar1 != 0) {
      (__this->fields).ODDCBFOLIGB = iVar1;
    }
    pEVar6 = &__this->fields;
    pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar6->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar6->CKFPENBPNML = pGVar5;
    thunk_FUN_01c20e04(pEVar6,pGVar5);
    return;
  }
LAB_0367fbd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GKLPDMLELJF DIIJCCHLOHC()  [RVA 0x357FC58]
// EOLFEKNCPLM$$DIIJCCHLOHC @ RVA 0x357FC58

GKLPDMLELJF_o * EOLFEKNCPLM__DIIJCCHLOHC(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  return (__this->fields).MCOPPCNPAHF;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x357FC60]
// EOLFEKNCPLM$$FFHIHGCDGAK @ RVA 0x357FC60

Google_Protobuf_Reflection_MessageDescriptor_o * EOLFEKNCPLM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568cbf & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568cbf = 1;
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
        goto LAB_0367fd48;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0367fd48:
                    /* WARNING: Could not recover jumptable at 0x0367fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,9,pVVar2->method);
  return pGVar3;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x357FD64]
// EOLFEKNCPLM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x357FD64

Google_Protobuf_Reflection_MessageDescriptor_o *
EOLFEKNCPLM__pb__Google_Protobuf_IMessage_get_Descriptor(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  EOLFEKNCPLM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568cc0 & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    DAT_04568cc0 = 1;
    method = extraout_x1;
  }
  method_00 = EOLFEKNCPLM_TypeInfo;
  if ((EOLFEKNCPLM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EOLFEKNCPLM_c *)thunk_FUN_01ba7564(EOLFEKNCPLM_TypeInfo,method);
  }
  pGVar1 = EOLFEKNCPLM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x357FDB0]
// EOLFEKNCPLM$$.cctor @ RVA 0x357FDB0

void EOLFEKNCPLM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EOLFEKNCPLM__o *__this;
  
  if ((DAT_04568cc1 & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    FUN_01bab630(&System_Func<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EOLFEKNCPLM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&Method_EOLFEKNCPLM_<>c_AEOCKHPMHLJ__);
    FUN_01bab630(&EOLFEKNCPLM_<>c_TypeInfo);
    DAT_04568cc1 = 1;
  }
  if ((EOLFEKNCPLM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EOLFEKNCPLM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EOLFEKNCPLM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EOLFEKNCPLM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EOLFEKNCPLM>__ctor__);
  EOLFEKNCPLM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EOLFEKNCPLM_TypeInfo->static_fields,__this);
  return;
}


// ===== public int EMLPLEFKOFG()  [RVA 0x357FEC8]
// EOLFEKNCPLM$$EMLPLEFKOFG @ RVA 0x357FEC8

int32_t EOLFEKNCPLM__EMLPLEFKOFG(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  return (__this->fields).ODDCBFOLIGB;
}


// ===== public void OMPOEHGMMHF(int CJNHFNHJHPE)  [RVA 0x357FED0]
// EOLFEKNCPLM$$OMPOEHGMMHF @ RVA 0x357FED0

void EOLFEKNCPLM__OMPOEHGMMHF(EOLFEKNCPLM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IINFDIJOFIG = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x357FED8]
// EOLFEKNCPLM$$MergeFrom @ RVA 0x357FED8

void EOLFEKNCPLM__MergeFrom
               (EOLFEKNCPLM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  OBCMNBDBNFO_o **ppOVar1;
  GKLPDMLELJF_o **ppGVar2;
  EOLFEKNCPLM_Fields *pEVar3;
  uint uVar4;
  int32_t iVar5;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  OBCMNBDBNFO_o *__this_00;
  GKLPDMLELJF_o *pGVar7;
  
  if ((DAT_04568cc2 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_04568cc2 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar4 != 0) {
    ppOVar1 = &(__this->fields).PLJJCOHGICK;
    ppGVar2 = &(__this->fields).MCOPPCNPAHF;
    pEVar3 = &__this->fields;
    do {
      if (uVar4 < 0x1b) {
        if (uVar4 == 10) {
          pGVar7 = *ppGVar2;
          if (pGVar7 == (GKLPDMLELJF_o *)0x0) {
            pGVar7 = (GKLPDMLELJF_o *)thunk_FUN_01bda818(GKLPDMLELJF_TypeInfo);
            GKLPDMLELJF___ctor(pGVar7,(MethodInfo *)0x0);
            *ppGVar2 = pGVar7;
            thunk_FUN_01c20e04(ppGVar2,pGVar7);
            pGVar7 = *ppGVar2;
          }
        }
        else {
          if (uVar4 != 0x12) {
            if (uVar4 == 0x1a) {
              CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadBytes
                                      (AIGOBLJEBCA,(MethodInfo *)0x0);
              EOLFEKNCPLM__BGOOPIDKJEC(__this,CJNHFNHJHPE,method);
            }
            else {
LAB_0367ffb8:
              method = (MethodInfo *)0x0;
              pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                                 (pEVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
              pEVar3->CKFPENBPNML = pGVar6;
              thunk_FUN_01c20e04(pEVar3,pGVar6);
            }
            goto LAB_03680074;
          }
          pGVar7 = (GKLPDMLELJF_o *)*ppOVar1;
          if (pGVar7 == (GKLPDMLELJF_o *)0x0) {
            __this_00 = (OBCMNBDBNFO_o *)thunk_FUN_01bda818(OBCMNBDBNFO_TypeInfo);
            OBCMNBDBNFO___ctor(__this_00,(MethodInfo *)0x0);
            *ppOVar1 = __this_00;
            thunk_FUN_01c20e04(ppOVar1,__this_00);
            pGVar7 = (GKLPDMLELJF_o *)*ppOVar1;
          }
        }
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pGVar7,(MethodInfo *)0x0);
      }
      else if (uVar4 == 0x20) {
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).LEEKCALJFJN = iVar5;
      }
      else if (uVar4 == 0x28) {
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IINFDIJOFIG = iVar5;
      }
      else {
        if (uVar4 != 0x30) goto LAB_0367ffb8;
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).ODDCBFOLIGB = iVar5;
      }
LAB_03680074:
      uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar4 != 0);
  }
  return;
}


// ===== public bool Equals(EOLFEKNCPLM IBKIPBJJCPG)  [RVA 0x357F6B8]
// EOLFEKNCPLM$$Equals @ RVA 0x357F6B8

bool EOLFEKNCPLM__Equals(EOLFEKNCPLM_o *__this,EOLFEKNCPLM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_04568cc3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04568cc3 = 1;
  }
  if (IBKIPBJJCPG != (EOLFEKNCPLM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MCOPPCNPAHF,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MCOPPCNPAHF,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).PLJJCOHGICK,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).PLJJCOHGICK,(MethodInfo *)0x0),
       bVar1)) {
      lhs = (__this->fields).OACFBJNMHCM;
      rhs = (IBKIPBJJCPG->fields).OACFBJNMHCM;
      if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
      if ((((!bVar1) && ((__this->fields).LEEKCALJFJN == (IBKIPBJJCPG->fields).LEEKCALJFJN)) &&
          ((__this->fields).IINFDIJOFIG == (IBKIPBJJCPG->fields).IINFDIJOFIG)) &&
         ((__this->fields).ODDCBFOLIGB == (IBKIPBJJCPG->fields).ODDCBFOLIGB)) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35800A0]
// EOLFEKNCPLM$$WriteTo @ RVA 0x35800A0

void EOLFEKNCPLM__WriteTo
               (EOLFEKNCPLM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  
  if ((__this->fields).MCOPPCNPAHF != (GKLPDMLELJF_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MCOPPCNPAHF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).PLJJCOHGICK != (OBCMNBDBNFO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PLJJCOHGICK,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).OACFBJNMHCM,(MethodInfo *)0x0);
    }
    if ((__this->fields).LEEKCALJFJN != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).LEEKCALJFJN,(MethodInfo *)0x0);
    }
    if ((__this->fields).IINFDIJOFIG != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).IINFDIJOFIG,(MethodInfo *)0x0);
    }
    if ((__this->fields).ODDCBFOLIGB != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).ODDCBFOLIGB,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036801ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x35801F0]
// EOLFEKNCPLM$$ToString @ RVA 0x35801F0

System_String_o * EOLFEKNCPLM__ToString(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568cc4 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568cc4 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public EOLFEKNCPLM Clone()  [RVA 0x3580248]
// EOLFEKNCPLM$$Clone @ RVA 0x3580248

EOLFEKNCPLM_o * EOLFEKNCPLM__Clone(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  EOLFEKNCPLM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568cc5 & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    DAT_04568cc5 = 1;
    method = extraout_x1;
  }
  __this_00 = (EOLFEKNCPLM_o *)thunk_FUN_01bda818(EOLFEKNCPLM_TypeInfo,method);
  EOLFEKNCPLM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public ByteString OJJBAMBHIJC()  [RVA 0x35802A0]
// EOLFEKNCPLM$$OJJBAMBHIJC @ RVA 0x35802A0

Google_Protobuf_ByteString_o * EOLFEKNCPLM__OJJBAMBHIJC(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  return (__this->fields).OACFBJNMHCM;
}


// ===== public void EIIJCDCCJAL(int CJNHFNHJHPE)  [RVA 0x35802A8]
// EOLFEKNCPLM$$EIIJCDCCJAL @ RVA 0x35802A8

void EOLFEKNCPLM__EIIJCDCCJAL(EOLFEKNCPLM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ODDCBFOLIGB = CJNHFNHJHPE;
  return;
}


// ===== public void GEAPJPJPOKB(OBCMNBDBNFO CJNHFNHJHPE)  [RVA 0x35802B0]
// EOLFEKNCPLM$$GEAPJPJPOKB @ RVA 0x35802B0

void EOLFEKNCPLM__GEAPJPJPOKB(EOLFEKNCPLM_o *__this,OBCMNBDBNFO_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PLJJCOHGICK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int CalculateSize()  [RVA 0x35802B8]
// EOLFEKNCPLM$$CalculateSize @ RVA 0x35802B8

int32_t EOLFEKNCPLM__CalculateSize(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_ByteString_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar4;
  GKLPDMLELJF_o *value;
  OBCMNBDBNFO_o *value_00;
  
  if ((DAT_04568cc6 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568cc6 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MCOPPCNPAHF;
  iVar4 = 0;
  if (value != (GKLPDMLELJF_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar4 = iVar2 + 1;
  }
  value_00 = (__this->fields).PLJJCOHGICK;
  if (value_00 != (OBCMNBDBNFO_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar2 + 1;
  }
  pGVar3 = (__this->fields).OACFBJNMHCM;
  if (pGVar3 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar2 = Google_Protobuf_ByteString__get_Length(pGVar3,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      pGVar3 = (__this->fields).OACFBJNMHCM;
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeBytesSize(pGVar3,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    iVar1 = (__this->fields).LEEKCALJFJN;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    iVar1 = (__this->fields).IINFDIJOFIG;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    iVar1 = (__this->fields).ODDCBFOLIGB;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar4 = iVar2 + iVar4;
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BGOOPIDKJEC(ByteString CJNHFNHJHPE)  [RVA 0x357FBDC]
// EOLFEKNCPLM$$BGOOPIDKJEC @ RVA 0x357FBDC

void EOLFEKNCPLM__BGOOPIDKJEC
               (EOLFEKNCPLM_o *__this,Google_Protobuf_ByteString_o *CJNHFNHJHPE,MethodInfo *method)

{
  Google_Protobuf_ByteString_o *pGVar1;
  Google_Protobuf_ByteString_o **ppGVar2;
  
  if ((DAT_04568cc7 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04568cc7 = 1;
  }
  pGVar1 = (Google_Protobuf_ByteString_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
  ppGVar2 = &(__this->fields).OACFBJNMHCM;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public int JEFNKGKKBHI()  [RVA 0x3580430]
// EOLFEKNCPLM$$JEFNKGKKBHI @ RVA 0x3580430

int32_t EOLFEKNCPLM__JEFNKGKKBHI(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  return (__this->fields).IINFDIJOFIG;
}


// ===== public int NIGDEAEEHHE()  [RVA 0x3580438]
// EOLFEKNCPLM$$NIGDEAEEHHE @ RVA 0x3580438

int32_t EOLFEKNCPLM__NIGDEAEEHHE(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  return (__this->fields).LEEKCALJFJN;
}


// ===== public OBCMNBDBNFO CECHCMPKDKM()  [RVA 0x3580440]
// EOLFEKNCPLM$$CECHCMPKDKM @ RVA 0x3580440

OBCMNBDBNFO_o * EOLFEKNCPLM__CECHCMPKDKM(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  return (__this->fields).PLJJCOHGICK;
}

