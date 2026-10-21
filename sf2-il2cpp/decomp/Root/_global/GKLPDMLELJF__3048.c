// TypeDefIndex 3048
// Namespace: 
// public sealed class GKLPDMLELJF : IMessage<GKLPDMLELJF>, IMessage, IEquatable<GKLPDMLELJF>, IDeepCloneable<GKLPDMLELJF>
// Fields:
//   private static readonly MessageParser<GKLPDMLELJF> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DAIPHMMHPLH = 1;
//   private long ANAJGHJEEOC; // 0x18
//   public const int MFLFBNKPDOH = 2;
//   private string FFOIEHLJLDA; // 0x20
//   public const int GNBAOKFACHH = 3;
//   private string LLBEKLPKDHK; // 0x28
//   public const int AEOBGLOGKCL = 4;
//   private int PEBHLKLGDBM; // 0x30
//   public const int NIDIOMOKADF = 5;
//   private IOGEICNIGGH PFJPLCAIGJH; // 0x34
//   public const int JFPJBGGMCLH = 6;
//   private static readonly FieldCodec<Nullable<long>> OBHAFPFOAHP; // 0x8
//   private Nullable<long> ADEIKPGDIPM; // 0x38

// ===== public IOGEICNIGGH HMHBJILDFEI()  [RVA 0x34B9080]
// GKLPDMLELJF$$HMHBJILDFEI @ RVA 0x34B9080

int32_t GKLPDMLELJF__HMHBJILDFEI(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  return (__this->fields).PFJPLCAIGJH;
}


// ===== public void .ctor(GKLPDMLELJF IBKIPBJJCPG)  [RVA 0x34B9088]
// GKLPDMLELJF$$.ctor @ RVA 0x34B9088

void GKLPDMLELJF___ctor(GKLPDMLELJF_o *__this,GKLPDMLELJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  undefined7 uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  GKLPDMLELJF___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (GKLPDMLELJF_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    (__this->fields).FFOIEHLJLDA = (IBKIPBJJCPG->fields).FFOIEHLJLDA;
    thunk_FUN_01c20e04();
    (__this->fields).LLBEKLPKDHK = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
    thunk_FUN_01c20e04();
    iVar1 = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
    (__this->fields).PEBHLKLGDBM = (IBKIPBJJCPG->fields).PEBHLKLGDBM;
    (__this->fields).PFJPLCAIGJH = iVar1;
    bVar2 = (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.hasValue;
    uVar3 = *(undefined7 *)&(IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.field_0x1;
    (__this->fields).ADEIKPGDIPM.fields.value = (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.value;
    (__this->fields).ADEIKPGDIPM.fields.hasValue = bVar2;
    *(undefined7 *)&(__this->fields).ADEIKPGDIPM.fields.field_0x1 = uVar3;
    pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar4;
    thunk_FUN_01c20e04(&__this->fields,pGVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNKOFBBHFPM(IOGEICNIGGH CJNHFNHJHPE)  [RVA 0x34B9168]
// GKLPDMLELJF$$HNKOFBBHFPM @ RVA 0x34B9168

void GKLPDMLELJF__HNKOFBBHFPM(GKLPDMLELJF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 035b9168 to 036b916b has its CatchHandler @ 035b9188 */
  (__this->fields).PFJPLCAIGJH = CJNHFNHJHPE;
                    /* try { // try from 035b916c to 036b916f has its CatchHandler @ 035b8a84 */
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34B9170]
// GKLPDMLELJF$$MergeFrom @ RVA 0x34B9170

void GKLPDMLELJF__MergeFrom
               (GKLPDMLELJF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GKLPDMLELJF_Fields *pGVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  Google_Protobuf_FieldCodec_Nullable_long___o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int64_t iVar6;
  System_Nullable_long__Fields SVar7;
  
                    /* try { // try from 035b9170 to 036b9173 has its CatchHandler @ 035b917c */
                    /* try { // try from 035b9174 to 036b91d3 has its CatchHandler @ 035b8a84 */
                    /* catch() { ... } // from try @ 035b9170 with catch @ 035b917c */
                    /* catch() { ... } // from try @ 035b8de8 with catch @ 035b9180 */
                    /* catch() { ... } // from try @ 035b8df8 with catch @ 035b9184 */
                    /* catch() { ... } // from try @ 035b9168 with catch @ 035b9188 */
                    /* catch() { ... } // from try @ 035b8e00 with catch @ 035b918c */
  if ((DAT_045685ab & 1) == 0) {
                    /* catch() { ... } // from try @ 035b9164 with catch @ 035b9190 */
                    /* catch() { ... } // from try @ 035b8dd0 with catch @ 035b9194 */
                    /* catch() { ... } // from try @ 035b8da8 with catch @ 035b9198 */
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<long>>_Read__);
                    /* catch() { ... } // from try @ 035b915c with catch @ 035b919c */
                    /* catch() { ... } // from try @ 035b8e54 with catch @ 035b91a0 */
                    /* catch() { ... } // from try @ 035b9158 with catch @ 035b91a4 */
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
                    /* catch() { ... } // from try @ 035b8db8 with catch @ 035b91a8 */
                    /* catch() { ... } // from try @ 035b8dc0 with catch @ 035b91ac */
                    /* catch() { ... } // from try @ 035b8d3c with catch @ 035b91b0 */
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
                    /* catch() { ... } // from try @ 035b8ce0 with catch @ 035b91b4 */
                    /* catch() { ... } // from try @ 035b914c with catch @ 035b91b8 */
                    /* catch() { ... } // from try @ 035b9154 with catch @ 035b91bc
                       catch() { ... } // from try @ 035b9160 with catch @ 035b91bc */
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685ab = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* try { // try from 035b91d4 to 036b91d7 has its CatchHandler @ 035b91ec */
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 035b91d4 with catch @ 035b91ec */
      pGVar1 = &__this->fields;
      do {
        if (uVar2 < 0x1b) {
                    /* try { // try from 035b91fc to 036b926b has its CatchHandler @ 035b9280 */
          if (uVar2 == 8) {
            iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).ANAJGHJEEOC = iVar6;
          }
          else if (uVar2 == 0x12) {
            pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
            GKLPDMLELJF__GCAEKDKFFKK(__this,pSVar4,method);
          }
          else if (uVar2 == 0x1a) {
            pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
            GKLPDMLELJF__OFDBFMLANAH(__this,pSVar4,method);
          }
          else {
LAB_035b928c:
            method = (MethodInfo *)0x0;
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pGVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pGVar1->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pGVar1,pGVar5);
          }
        }
        else if (uVar2 == 0x20) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PEBHLKLGDBM = iVar3;
        }
        else if (uVar2 == 0x28) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PFJPLCAIGJH = iVar3;
        }
        else {
          if (uVar2 != 0x32) goto LAB_035b928c;
          if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
          if (__this_00 == (Google_Protobuf_FieldCodec_Nullable_long___o *)0x0) goto LAB_035b9324;
          method = Method_Google_Protobuf_FieldCodec<Nullable<long>>_Read__;
                    /* try { // try from 035b926c to 036b9277 has its CatchHandler @ 035b8a84 */
          SVar7 = (System_Nullable_long__Fields)
                  Google_Protobuf_FieldCodec<Nullable<long>>__Read
                            (__this_00,AIGOBLJEBCA,
                             (MethodInfo_2507A64 *)
                             Method_Google_Protobuf_FieldCodec<Nullable<long>>_Read__);
                    /* try { // try from 035b9278 to 036b927f has its CatchHandler @ 035b9280 */
                    /* catch() { ... } // from try @ 035b91fc with catch @ 035b9280
                       catch() { ... } // from try @ 035b9278 with catch @ 035b9280 */
          if ((((__this->fields).ADEIKPGDIPM.fields.hasValue == false) || (SVar7.value != 0)) ||
             ((SVar7._0_8_ & 0xff) == 0)) {
            (__this->fields).ADEIKPGDIPM.fields = SVar7;
          }
        }
        uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar2 != 0);
    }
    return;
  }
LAB_035b9324:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x34B9420]
// GKLPDMLELJF$$.cctor @ RVA 0x34B9420

void GKLPDMLELJF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GKLPDMLELJF__o *__this;
  Google_Protobuf_FieldCodec_Nullable_T___o *pGVar1;
  Google_Protobuf_FieldCodec_Nullable_long___o **ppGVar2;
  
  if ((DAT_045685ac & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForStructWrapper<long>__);
    FUN_01bab630(&System_Func<GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GKLPDMLELJF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&Method_GKLPDMLELJF_<>c_JCPCMMMKCFE__);
    FUN_01bab630(&GKLPDMLELJF_<>c_TypeInfo);
    DAT_045685ac = 1;
  }
  if ((GKLPDMLELJF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GKLPDMLELJF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GKLPDMLELJF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GKLPDMLELJF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GKLPDMLELJF>__ctor__);
  GKLPDMLELJF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GKLPDMLELJF_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForStructWrapper<long>
                     (0x32,Method_Google_Protobuf_FieldCodec_ForStructWrapper<long>__);
  ppGVar2 = &GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
  *ppGVar2 = (Google_Protobuf_FieldCodec_Nullable_long___o *)pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public bool Equals(GKLPDMLELJF IBKIPBJJCPG)  [RVA 0x34B9570]
// GKLPDMLELJF$$Equals @ RVA 0x34B9570

bool GKLPDMLELJF__Equals(GKLPDMLELJF_o *__this,GKLPDMLELJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045685ad & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685ad = 1;
  }
  if (IBKIPBJJCPG != (GKLPDMLELJF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).FFOIEHLJLDA,(IBKIPBJJCPG->fields).FFOIEHLJLDA,
                             (MethodInfo *)0x0), !bVar1)) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).LLBEKLPKDHK,(IBKIPBJJCPG->fields).LLBEKLPKDHK,
                            (MethodInfo *)0x0), !bVar1)) &&
       (((__this->fields).PEBHLKLGDBM == (IBKIPBJJCPG->fields).PEBHLKLGDBM &&
        ((__this->fields).PFJPLCAIGJH == (IBKIPBJJCPG->fields).PFJPLCAIGJH)))) {
      if ((__this->fields).ADEIKPGDIPM.fields.value !=
          (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.value) {
        return false;
      }
      if (((__this->fields).ADEIKPGDIPM.fields.hasValue == false) ==
          ((IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.hasValue != false)) {
        return false;
      }
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34B9674]
// GKLPDMLELJF$$FFHIHGCDGAK @ RVA 0x34B9674

Google_Protobuf_Reflection_MessageDescriptor_o * GKLPDMLELJF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045685ae & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045685ae = 1;
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
        goto LAB_035b975c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_035b975c:
                    /* WARNING: Could not recover jumptable at 0x035b9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,7,pVVar2->method);
  return pGVar3;
}


// ===== public override int GetHashCode()  [RVA 0x34B9778]
// GKLPDMLELJF$$GetHashCode @ RVA 0x34B9778

int32_t GKLPDMLELJF__GetHashCode(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo_27F87C4 *in_x2;
  long lVar6;
  System_Nullable_long__o __this_00;
  undefined8 local_40;
  int64_t iStack_38;
  undefined8 local_28;
  long local_18;
  
  if ((DAT_045685af & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetHashCode__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685af = 1;
  }
  local_18 = 0;
  local_28 = 0;
  local_40 = 0;
  iStack_38 = 0;
  lVar6 = (__this->fields).ANAJGHJEEOC;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).FFOIEHLJLDA;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    pSVar4 = (__this->fields).LLBEKLPKDHK;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).PEBHLKLGDBM;
      if (iVar1 != 0) {
        local_28 = CONCAT44(iVar1,(undefined4)local_28);
        uVar3 = System_Int32__GetHashCode((int)&local_28 + 4,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).PFJPLCAIGJH;
      if (iVar1 != 0) {
        local_28 = CONCAT44(local_28._4_4_,iVar1);
        uVar3 = System_Int32__GetHashCode((int32_t)&local_28,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      if ((__this->fields).ADEIKPGDIPM.fields.hasValue != false) {
        iStack_38 = (__this->fields).ADEIKPGDIPM.fields.value;
        local_40 = *(undefined8 *)&(__this->fields).ADEIKPGDIPM.fields;
        __this_00.fields.value = Method_System_Nullable<long>_GetHashCode__;
        __this_00.fields._0_8_ = &local_40;
        uVar3 = System_Nullable<long>__GetHashCode(__this_00,in_x2);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x34B98B4]
// GKLPDMLELJF$$ToString @ RVA 0x34B98B4

System_String_o * GKLPDMLELJF__ToString(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685b0 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045685b0 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string BEGDEOJIFOC()  [RVA 0x34B990C]
// GKLPDMLELJF$$BEGDEOJIFOC @ RVA 0x34B990C

System_String_o * GKLPDMLELJF__BEGDEOJIFOC(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  return (__this->fields).FFOIEHLJLDA;
}


// ===== public GKLPDMLELJF Clone()  [RVA 0x34B9914]
// GKLPDMLELJF$$Clone @ RVA 0x34B9914

GKLPDMLELJF_o * GKLPDMLELJF__Clone(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  GKLPDMLELJF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045685b1 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_045685b1 = 1;
    method = extraout_x1;
  }
  __this_00 = (GKLPDMLELJF_o *)thunk_FUN_01bda818(GKLPDMLELJF_TypeInfo,method);
  GKLPDMLELJF___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public string HNMOINOAPJF()  [RVA 0x34B996C]
// GKLPDMLELJF$$HNMOINOAPJF @ RVA 0x34B996C

System_String_o * GKLPDMLELJF__HNMOINOAPJF(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  return (__this->fields).LLBEKLPKDHK;
}


// ===== public void MergeFrom(GKLPDMLELJF IBKIPBJJCPG)  [RVA 0x34B9974]
// GKLPDMLELJF$$MergeFrom @ RVA 0x34B9974

void GKLPDMLELJF__MergeFrom(GKLPDMLELJF_o *__this,GKLPDMLELJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  long lVar5;
  GKLPDMLELJF_Fields *pGVar6;
  
  if ((DAT_045685b2 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685b2 = 1;
  }
  if (IBKIPBJJCPG != (GKLPDMLELJF_o *)0x0) {
    lVar5 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar5 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar5;
    }
    pSVar4 = (IBKIPBJJCPG->fields).FFOIEHLJLDA;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        GKLPDMLELJF__GCAEKDKFFKK(__this,pSVar4,method);
      }
      pSVar4 = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
      if (pSVar4 != (System_String_o *)0x0) {
        if ((pSVar4->fields)._stringLength != 0) {
          GKLPDMLELJF__OFDBFMLANAH(__this,pSVar4,method);
        }
        iVar2 = (IBKIPBJJCPG->fields).PEBHLKLGDBM;
        if (iVar2 != 0) {
          (__this->fields).PEBHLKLGDBM = iVar2;
        }
        iVar2 = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
        if (iVar2 != 0) {
          (__this->fields).PFJPLCAIGJH = iVar2;
        }
        if ((IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.hasValue != false) {
          uVar1 = *(ulong *)&(IBKIPBJJCPG->fields).ADEIKPGDIPM.fields;
          lVar5 = (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.value;
          if ((((__this->fields).ADEIKPGDIPM.fields.hasValue == false) || (lVar5 != 0)) ||
             ((uVar1 & 0xff) == 0)) {
            *(ulong *)&(__this->fields).ADEIKPGDIPM.fields = uVar1;
            (__this->fields).ADEIKPGDIPM.fields.value = lVar5;
          }
        }
        pGVar6 = &__this->fields;
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                           (pGVar6->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0)
        ;
        pGVar6->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pGVar6,pGVar3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void EHMLCEKLCDD(long CJNHFNHJHPE)  [RVA 0x34B9A64]
// GKLPDMLELJF$$EHMLCEKLCDD @ RVA 0x34B9A64

void GKLPDMLELJF__EHMLCEKLCDD(GKLPDMLELJF_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ANAJGHJEEOC = CJNHFNHJHPE;
  return;
}


// ===== public long LFELHKJPDHA()  [RVA 0x34B9A6C]
// GKLPDMLELJF$$LFELHKJPDHA @ RVA 0x34B9A6C

int64_t GKLPDMLELJF__LFELHKJPDHA(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  return (__this->fields).ANAJGHJEEOC;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34B9A74]
// GKLPDMLELJF$$WriteTo @ RVA 0x34B9A74

void GKLPDMLELJF__WriteTo
               (GKLPDMLELJF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_FieldCodec_Nullable_long___o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  System_String_o *pSVar1;
  
  if ((DAT_045685b3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<long>>_WriteTagAndValue__);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685b3 = 1;
  }
  if ((__this->fields).ANAJGHJEEOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).FFOIEHLJLDA;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).FFOIEHLJLDA,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).LLBEKLPKDHK;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).LLBEKLPKDHK,(MethodInfo *)0x0);
      }
      if ((__this->fields).PEBHLKLGDBM != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).PEBHLKLGDBM,(MethodInfo *)0x0);
      }
      if ((__this->fields).PFJPLCAIGJH != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteEnum
                  (JBGJLELBMJF,(__this->fields).PFJPLCAIGJH,(MethodInfo *)0x0);
      }
      if ((__this->fields).ADEIKPGDIPM.fields.hasValue != false) {
        if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
        if (__this_00 == (Google_Protobuf_FieldCodec_Nullable_long___o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_FieldCodec<Nullable<long>>__WriteTagAndValue
                  (__this_00,JBGJLELBMJF,
                   (System_Nullable_long__o)(__this->fields).ADEIKPGDIPM.fields,
                   Method_Google_Protobuf_FieldCodec<Nullable<long>>_WriteTagAndValue__);
      }
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_035b9c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x34B9C1C]
// GKLPDMLELJF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34B9C1C

Google_Protobuf_Reflection_MessageDescriptor_o *
GKLPDMLELJF__pb__Google_Protobuf_IMessage_get_Descriptor(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  GKLPDMLELJF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685b4 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_045685b4 = 1;
    method = extraout_x1;
  }
  method_00 = GKLPDMLELJF_TypeInfo;
  if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GKLPDMLELJF_c *)thunk_FUN_01ba7564(GKLPDMLELJF_TypeInfo,method);
  }
  pGVar1 = GKLPDMLELJF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public Nullable<long> GICDOGMCBOK()  [RVA 0x34B9C68]
// GKLPDMLELJF$$GICDOGMCBOK @ RVA 0x34B9C68

System_Nullable_long__o GKLPDMLELJF__GICDOGMCBOK(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  return (System_Nullable_long__o)(__this->fields).ADEIKPGDIPM.fields;
}


// ===== public void HGNFANPBJLG(int CJNHFNHJHPE)  [RVA 0x34B9C74]
// GKLPDMLELJF$$HGNFANPBJLG @ RVA 0x34B9C74

void GKLPDMLELJF__HGNFANPBJLG(GKLPDMLELJF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PEBHLKLGDBM = CJNHFNHJHPE;
  return;
}


// ===== public void OFDBFMLANAH(string CJNHFNHJHPE)  [RVA 0x34B93A4]
// GKLPDMLELJF$$OFDBFMLANAH @ RVA 0x34B93A4

void GKLPDMLELJF__OFDBFMLANAH(GKLPDMLELJF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045685b5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045685b5 = 1;
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


// ===== public int CJGJCDJDOEE()  [RVA 0x34B9C7C]
// GKLPDMLELJF$$CJGJCDJDOEE @ RVA 0x34B9C7C

int32_t GKLPDMLELJF__CJGJCDJDOEE(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  return (__this->fields).PEBHLKLGDBM;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34B9C84]
// GKLPDMLELJF$$Equals @ RVA 0x34B9C84

bool GKLPDMLELJF__Equals(GKLPDMLELJF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045685b6 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_045685b6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GKLPDMLELJF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GKLPDMLELJF__Equals(__this,(GKLPDMLELJF_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void GCAEKDKFFKK(string CJNHFNHJHPE)  [RVA 0x34B9328]
// GKLPDMLELJF$$GCAEKDKFFKK @ RVA 0x34B9328

void GKLPDMLELJF__GCAEKDKFFKK(GKLPDMLELJF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045685b7 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045685b7 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).FFOIEHLJLDA;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void PCOFNFAMLGJ(Nullable<long> CJNHFNHJHPE)  [RVA 0x34B9CE8]
// GKLPDMLELJF$$PCOFNFAMLGJ @ RVA 0x34B9CE8

void GKLPDMLELJF__PCOFNFAMLGJ
               (GKLPDMLELJF_o *__this,System_Nullable_long__o CJNHFNHJHPE,MethodInfo *method)

{
  *(long *)&(__this->fields).ADEIKPGDIPM.fields = CJNHFNHJHPE.fields._0_8_;
  (__this->fields).ADEIKPGDIPM.fields.value = CJNHFNHJHPE.fields.value;
  return;
}


// ===== public int CalculateSize()  [RVA 0x34B9CF0]
// GKLPDMLELJF$$CalculateSize @ RVA 0x34B9CF0

int32_t GKLPDMLELJF__CalculateSize(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_FieldCodec_Nullable_long___o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  MethodInfo *extraout_x1;
  int iVar3;
  long value;
  System_String_o *pSVar4;
  
  if ((DAT_045685b8 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<long>>_CalculateSizeWithTag__);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685b8 = 1;
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
  pSVar4 = (__this->fields).FFOIEHLJLDA;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
      iVar3 = iVar3 + iVar2 + 1;
    }
    pSVar4 = (__this->fields).LLBEKLPKDHK;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).PEBHLKLGDBM;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).PFJPLCAIGJH;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      if ((__this->fields).ADEIKPGDIPM.fields.hasValue != false) {
        if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
        if (__this_00 == (Google_Protobuf_FieldCodec_Nullable_long___o *)0x0) goto LAB_035b9ea4;
        iVar2 = Google_Protobuf_FieldCodec<Nullable<long>>__CalculateSizeWithTag
                          (__this_00,(System_Nullable_long__o)(__this->fields).ADEIKPGDIPM.fields,
                           Method_Google_Protobuf_FieldCodec<Nullable<long>>_CalculateSizeWithTag__)
        ;
        iVar3 = iVar2 + iVar3;
      }
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_01,(MethodInfo *)0x0);
        iVar3 = iVar2 + iVar3;
      }
      return iVar3;
    }
  }
LAB_035b9ea4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<GKLPDMLELJF> PGCAHPDCJBC()  [RVA 0x34B9EA8]
// GKLPDMLELJF$$PGCAHPDCJBC @ RVA 0x34B9EA8

Google_Protobuf_MessageParser_GKLPDMLELJF__o * GKLPDMLELJF__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045685b9 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_045685b9 = 1;
  }
  if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return GKLPDMLELJF_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void .ctor()  [RVA 0x34B9100]
// GKLPDMLELJF$$.ctor @ RVA 0x34B9100

void GKLPDMLELJF___ctor(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  if ((DAT_045685ba & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045685ba = 1;
  }
  (__this->fields).FFOIEHLJLDA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 035b914c to 036b9153 has its CatchHandler @ 035b91b8 */
  (__this->fields).LLBEKLPKDHK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 035b9154 to 036b9157 has its CatchHandler @ 035b91bc */
                    /* try { // try from 035b9158 to 036b915b has its CatchHandler @ 035b91a4 */
                    /* try { // try from 035b915c to 036b915f has its CatchHandler @ 035b919c */
                    /* try { // try from 035b9160 to 036b9163 has its CatchHandler @ 035b91bc */
                    /* try { // try from 035b9164 to 036b9167 has its CatchHandler @ 035b9190 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ODJAMCJCHGG()  [RVA 0x34B9F00]
// GKLPDMLELJF$$ODJAMCJCHGG @ RVA 0x34B9F00

bool GKLPDMLELJF__ODJAMCJCHGG(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  if ((DAT_045685bb & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685bb = 1;
  }
  return 0 < (__this->fields).ADEIKPGDIPM.fields.value &&
         (__this->fields).ADEIKPGDIPM.fields.hasValue != false;
}

