// TypeDefIndex 1043
// Namespace: 
// public sealed class BECIPDJBAOG : IMessage<BECIPDJBAOG>, IMessage, IEquatable<BECIPDJBAOG>, IDeepCloneable<BECIPDJBAOG>
// Fields:
//   private static readonly MessageParser<BECIPDJBAOG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MJMOFIJLBIC = 1;
//   private string JPHFGCIDDHE; // 0x18
//   public const int JMDGHCOJCLH = 2;
//   private static readonly FieldCodec<PIADCKMDDAK> JJNDCMILECE; // 0x8
//   private readonly RepeatedField<PIADCKMDDAK> LEJBLHJFJHP; // 0x20
//   public const int AJEAFNFDLKJ = 3;
//   private static readonly FieldCodec<PIADCKMDDAK> ACFGKMKAECB; // 0x10
//   private readonly RepeatedField<PIADCKMDDAK> AKFPFIHIHOC; // 0x28
//   public const int EHGPOBHFGIO = 4;
//   private int EMOLIBOCKJK; // 0x30
//   public const int DJDODJFOFMH = 5;
//   private int NLLKMEMKBAF; // 0x34

// ===== public override int GetHashCode()  [RVA 0x30D1514]
// BECIPDJBAOG$$GetHashCode @ RVA 0x30D1514

int32_t BECIPDJBAOG__GetHashCode(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  undefined1 auVar8 [16];
  int local_14;
  
  local_14 = 0;
  pSVar4 = (__this->fields).JPHFGCIDDHE;
  uVar7 = 0;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
      method = extraout_x1;
    }
    pGVar5 = (__this->fields).LEJBLHJFJHP;
    uVar7 = 0;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      auVar8 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                         (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      method = auVar8._8_8_;
      uVar7 = auVar8._0_8_;
      pGVar5 = (__this->fields).AKFPFIHIHOC;
      if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
        iVar1 = (__this->fields).EMOLIBOCKJK;
        uVar3 = auVar8._0_4_ ^ uVar2 ^ uVar3;
        if (iVar1 != 0) {
          local_14 = iVar1;
          uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
          uVar3 = uVar2 ^ uVar3;
        }
        iVar1 = (__this->fields).NLLKMEMKBAF;
        if (iVar1 != 0) {
          local_14 = iVar1;
          uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar7,method);
}


// ===== public RepeatedField<PIADCKMDDAK> PHGEMEGMPML()  [RVA 0x30D15E4]
// BECIPDJBAOG$$PHGEMEGMPML @ RVA 0x30D15E4

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
BECIPDJBAOG__PHGEMEGMPML(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  return (__this->fields).LEJBLHJFJHP;
}


// ===== public void AOFFLABEAGC(string CJNHFNHJHPE)  [RVA 0x30D15EC]
// BECIPDJBAOG$$AOFFLABEAGC @ RVA 0x30D15EC

void BECIPDJBAOG__AOFFLABEAGC(BECIPDJBAOG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566306 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04566306 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).JPHFGCIDDHE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public string ECGKBGCKIJC()  [RVA 0x30D1668]
// BECIPDJBAOG$$ECGKBGCKIJC @ RVA 0x30D1668

System_String_o * BECIPDJBAOG__ECGKBGCKIJC(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  return (__this->fields).JPHFGCIDDHE;
}


// ===== public void PGOIFJBNJCE(int CJNHFNHJHPE)  [RVA 0x30D1670]
// BECIPDJBAOG$$PGOIFJBNJCE @ RVA 0x30D1670

void BECIPDJBAOG__PGOIFJBNJCE(BECIPDJBAOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMOLIBOCKJK = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x30D1678]
// BECIPDJBAOG$$MergeFrom @ RVA 0x30D1678

void BECIPDJBAOG__MergeFrom
               (BECIPDJBAOG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BECIPDJBAOG_Fields *pBVar1;
  uint uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
  if ((DAT_04566307 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04566307 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar2 != 0) {
      pBVar1 = &__this->fields;
      do {
        if (uVar2 < 0x13) {
          if (uVar2 == 10) {
            CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString
                                    (AIGOBLJEBCA,(MethodInfo *)0x0);
            BECIPDJBAOG__AOFFLABEAGC(__this,CJNHFNHJHPE,method);
          }
          else {
            if (uVar2 == 0x12) {
              __this_00 = (__this->fields).LEJBLHJFJHP;
              if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                method = (MethodInfo *)BECIPDJBAOG_TypeInfo->static_fields->JJNDCMILECE;
                goto LAB_031d17b4;
              }
              goto LAB_031d17fc;
            }
LAB_031d1750:
            method = (MethodInfo *)0x0;
            pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pBVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pBVar1->CKFPENBPNML = pGVar4;
            thunk_FUN_01c20e04(pBVar1,pGVar4);
          }
        }
        else if (uVar2 == 0x1a) {
          __this_00 = (__this->fields).AKFPFIHIHOC;
          if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
          goto LAB_031d17fc;
          method = (MethodInfo *)BECIPDJBAOG_TypeInfo->static_fields->ACFGKMKAECB;
LAB_031d17b4:
          Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)method,
                     Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__)
          ;
        }
        else if (uVar2 == 0x20) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).EMOLIBOCKJK = iVar3;
        }
        else {
          if (uVar2 != 0x28) goto LAB_031d1750;
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).NLLKMEMKBAF = iVar3;
        }
        uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar2 != 0);
    }
    return;
  }
LAB_031d17fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HMCAGKEIIGO()  [RVA 0x30D1800]
// BECIPDJBAOG$$HMCAGKEIIGO @ RVA 0x30D1800

bool BECIPDJBAOG__HMCAGKEIIGO(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).NLLKMEMKBAF;
}


// ===== public void .ctor(IList<BECIPDJBAOG> KJADEEFANAL, bool CMBNNBBFJBC = False)  [RVA 0x30D1810]
// BECIPDJBAOG$$.ctor @ RVA 0x30D1810

void BECIPDJBAOG___ctor(BECIPDJBAOG_o *__this,
                       System_Collections_Generic_IList_BECIPDJBAOG__o *KJADEEFANAL,bool CMBNNBBFJBC
                       ,MethodInfo *method)

{
  BECIPDJBAOG___ctor(__this,(MethodInfo *)KJADEEFANAL);
  BECIPDJBAOG__FGMBOHECONG(__this,KJADEEFANAL,CMBNNBBFJBC,method);
  return;
}


// ===== public override string ToString()  [RVA 0x30D1A60]
// BECIPDJBAOG$$ToString @ RVA 0x30D1A60

System_String_o * BECIPDJBAOG__ToString(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566308 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566308 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static MessageParser<BECIPDJBAOG> PGCAHPDCJBC()  [RVA 0x30D1AB8]
// BECIPDJBAOG$$PGCAHPDCJBC @ RVA 0x30D1AB8

Google_Protobuf_MessageParser_BECIPDJBAOG__o * BECIPDJBAOG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566309 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566309 = 1;
  }
  if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return BECIPDJBAOG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public int DENKJCBILMC()  [RVA 0x30D1B10]
// BECIPDJBAOG$$DENKJCBILMC @ RVA 0x30D1B10

int32_t BECIPDJBAOG__DENKJCBILMC(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  return (__this->fields).NLLKMEMKBAF;
}


// ===== public bool BODMFFONFKC()  [RVA 0x30D1B18]
// BECIPDJBAOG$$BODMFFONFKC @ RVA 0x30D1B18

bool BECIPDJBAOG__BODMFFONFKC(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).EMOLIBOCKJK;
}


// ===== public void MergeFrom(BECIPDJBAOG IBKIPBJJCPG)  [RVA 0x30D1B28]
// BECIPDJBAOG$$MergeFrom @ RVA 0x30D1B28

void BECIPDJBAOG__MergeFrom(BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *CJNHFNHJHPE;
  BECIPDJBAOG_Fields *pBVar4;
  
  if ((DAT_0456630a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_0456630a = 1;
  }
  if (IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) {
    CJNHFNHJHPE = (IBKIPBJJCPG->fields).JPHFGCIDDHE;
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      if ((CJNHFNHJHPE->fields)._stringLength != 0) {
        BECIPDJBAOG__AOFFLABEAGC(__this,CJNHFNHJHPE,method);
      }
      pGVar2 = (__this->fields).LEJBLHJFJHP;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).LEJBLHJFJHP,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
        pGVar2 = (__this->fields).AKFPFIHIHOC;
        if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__Add
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                     (System_Collections_Generic_IEnumerable_T__o *)
                     (IBKIPBJJCPG->fields).AKFPFIHIHOC,
                     Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
          iVar1 = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
          if (iVar1 != 0) {
            (__this->fields).EMOLIBOCKJK = iVar1;
          }
          iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
          if (iVar1 != 0) {
            (__this->fields).NLLKMEMKBAF = iVar1;
          }
          pBVar4 = &__this->fields;
          pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                             (pBVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,
                              (MethodInfo *)0x0);
          pBVar4->CKFPENBPNML = pGVar3;
          thunk_FUN_01c20e04(pBVar4,pGVar3);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public bool Equals(BECIPDJBAOG IBKIPBJJCPG)  [RVA 0x30D1BF4]
// BECIPDJBAOG$$Equals @ RVA 0x30D1BF4

bool BECIPDJBAOG__Equals(BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  
  if ((DAT_0456630b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    DAT_0456630b = 1;
  }
  if (IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).JPHFGCIDDHE,(IBKIPBJJCPG->fields).JPHFGCIDDHE,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      pGVar2 = (__this->fields).LEJBLHJFJHP;
      if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
LAB_031d1ccc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).LEJBLHJFJHP,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
      if (bVar1) {
        pGVar2 = (__this->fields).AKFPFIHIHOC;
        if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
        goto LAB_031d1ccc;
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).AKFPFIHIHOC,
                           Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
        if (((bVar1) && ((__this->fields).EMOLIBOCKJK == (IBKIPBJJCPG->fields).EMOLIBOCKJK)) &&
           ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) {
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


// ===== public RepeatedField<PIADCKMDDAK> LAFDNPFOAHL()  [RVA 0x30D1CD0]
// BECIPDJBAOG$$LAFDNPFOAHL @ RVA 0x30D1CD0

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
BECIPDJBAOG__LAFDNPFOAHL(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  return (__this->fields).AKFPFIHIHOC;
}


// ===== public int JCIGPDGHOMK()  [RVA 0x30D1CD8]
// BECIPDJBAOG$$JCIGPDGHOMK @ RVA 0x30D1CD8

int32_t BECIPDJBAOG__JCIGPDGHOMK(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  return (__this->fields).EMOLIBOCKJK;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x30D1CE0]
// BECIPDJBAOG$$FFHIHGCDGAK @ RVA 0x30D1CE0

Google_Protobuf_Reflection_MessageDescriptor_o * BECIPDJBAOG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456630c & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456630c = 1;
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
        goto LAB_031d1dc8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_031d1dc8:
                    /* WARNING: Could not recover jumptable at 0x031d1ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x11,pVVar2->method);
  return pGVar3;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x30D1DE4]
// BECIPDJBAOG$$WriteTo @ RVA 0x30D1DE4

void BECIPDJBAOG__WriteTo
               (BECIPDJBAOG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  
  if ((DAT_0456630d & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    DAT_0456630d = 1;
  }
  pSVar1 = (__this->fields).JPHFGCIDDHE;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031d1f44;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).JPHFGCIDDHE,(MethodInfo *)0x0);
    }
    pGVar2 = (__this->fields).LEJBLHJFJHP;
    if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)BECIPDJBAOG_TypeInfo->static_fields->JJNDCMILECE
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
      pGVar2 = (__this->fields).AKFPFIHIHOC;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,JBGJLELBMJF,
                   (Google_Protobuf_FieldCodec_T__o *)
                   BECIPDJBAOG_TypeInfo->static_fields->ACFGKMKAECB,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
        if ((__this->fields).EMOLIBOCKJK != 0) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031d1f44;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
          Google_Protobuf_CodedOutputStream__WriteInt32
                    (JBGJLELBMJF,(__this->fields).EMOLIBOCKJK,(MethodInfo *)0x0);
        }
        if ((__this->fields).NLLKMEMKBAF != 0) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031d1f44;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
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
    }
  }
LAB_031d1f44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30D1840]
// BECIPDJBAOG$$.ctor @ RVA 0x30D1840

void BECIPDJBAOG___ctor(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar2;
  
  if ((DAT_0456630e & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456630e = 1;
  }
  (__this->fields).JPHFGCIDDHE = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar2 = &(__this->fields).LEJBLHJFJHP;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar2 = &(__this->fields).AKFPFIHIHOC;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void FGMBOHECONG(BECIPDJBAOG IBKIPBJJCPG, bool CMBNNBBFJBC)  [RVA 0x30D1F48]
// BECIPDJBAOG$$FGMBOHECONG @ RVA 0x30D1F48

void BECIPDJBAOG__FGMBOHECONG
               (BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,bool CMBNNBBFJBC,MethodInfo *method
               )

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  System_Func_TSource__bool__o *pSVar3;
  Il2CppObject *pIVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_0456630f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<PIADCKMDDAK,_bool>_TypeInfo);
    FUN_01bab630(&Method_BECIPDJBAOG_KABKIJAMJNA_IOFCCBEEBKJ__);
    FUN_01bab630(&BECIPDJBAOG_KABKIJAMJNA_TypeInfo);
    FUN_01bab630(&Method_BECIPDJBAOG_NCFCIFGOMJB_AAOMFCHBHIA__);
    FUN_01bab630(&BECIPDJBAOG_NCFCIFGOMJB_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_0456630f = 1;
  }
  if ((IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) &&
     (pGVar5 = (IBKIPBJJCPG->fields).LEJBLHJFJHP,
     pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    iVar6 = 0;
    while (iVar6 < (pGVar5->fields).count) {
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(BECIPDJBAOG_KABKIJAMJNA_TypeInfo);
      System_Object___ctor(pIVar1,(MethodInfo *)0x0);
      pGVar5 = (IBKIPBJJCPG->fields).LEJBLHJFJHP;
      if ((pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
         (pIVar2 = (Il2CppClass *)
                   Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,iVar6,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                             ), pIVar1 == (Il2CppObject *)0x0)) goto LAB_031d21d4;
      pIVar1 = pIVar1 + 1;
      pIVar1->klass = pIVar2;
      thunk_FUN_01c20e04(pIVar1,pIVar2);
      pGVar5 = (__this->fields).LEJBLHJFJHP;
      pSVar3 = (System_Func_TSource__bool__o *)
               thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pIVar4 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar5,pSVar3,
                          Method_System_Linq_Enumerable_FirstOrDefault<PIADCKMDDAK>__);
      if ((pIVar4 == (Il2CppObject *)0x0) || (CMBNNBBFJBC)) {
        pGVar5 = (__this->fields).LEJBLHJFJHP;
        if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
        goto LAB_031d21d4;
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
                   (Il2CppObject *)pIVar1->klass,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      }
      else {
        if (pIVar1->klass == (Il2CppClass *)0x0) goto LAB_031d21d4;
        *(int *)&pIVar4[2].klass =
             *(int *)&(pIVar1->klass->_1).byval_arg.data + *(int *)&pIVar4[2].klass;
      }
      pGVar5 = (IBKIPBJJCPG->fields).LEJBLHJFJHP;
      iVar6 = iVar6 + 1;
      if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
      goto LAB_031d21d4;
    }
    pGVar5 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      iVar6 = 0;
      goto LAB_031d20fc;
    }
  }
  goto LAB_031d21d4;
  while( true ) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = pIVar2;
    thunk_FUN_01c20e04(pIVar1,pIVar2);
    pGVar5 = (__this->fields).AKFPFIHIHOC;
    pSVar3 = (System_Func_TSource__bool__o *)
             thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pIVar4 = System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar5,pSVar3,
                        Method_System_Linq_Enumerable_FirstOrDefault<PIADCKMDDAK>__);
    if ((pIVar4 == (Il2CppObject *)0x0) || (CMBNNBBFJBC)) {
      pGVar5 = (__this->fields).AKFPFIHIHOC;
      if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
                 (Il2CppObject *)pIVar1->klass,
                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    }
    else {
      if (pIVar1->klass == (Il2CppClass *)0x0) break;
      *(int *)&pIVar4[2].klass =
           *(int *)&(pIVar1->klass->_1).byval_arg.data + *(int *)&pIVar4[2].klass;
    }
    pGVar5 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
    iVar6 = iVar6 + 1;
    if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
LAB_031d20fc:
    if ((pGVar5->fields).count <= iVar6) {
      uVar7 = (__this->fields).EMOLIBOCKJK;
      uVar8 = (__this->fields).NLLKMEMKBAF;
      uVar9 = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
      uVar10 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
      (__this->fields).EMOLIBOCKJK = uVar9 + uVar7;
      (__this->fields).NLLKMEMKBAF = uVar10 + uVar8;
      return;
    }
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(BECIPDJBAOG_NCFCIFGOMJB_TypeInfo);
    System_Object___ctor(pIVar1,(MethodInfo *)0x0);
    pGVar5 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
    if ((pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
       (pIVar2 = (Il2CppClass *)
                 Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,iVar6,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                           ), pIVar1 == (Il2CppObject *)0x0)) break;
  }
LAB_031d21d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BECIPDJBAOG Clone()  [RVA 0x30D2214]
// BECIPDJBAOG$$Clone @ RVA 0x30D2214

BECIPDJBAOG_o * BECIPDJBAOG__Clone(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  BECIPDJBAOG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566310 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566310 = 1;
    method = extraout_x1;
  }
  __this_00 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo,method);
  BECIPDJBAOG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x30D2330]
// BECIPDJBAOG$$.cctor @ RVA 0x30D2330

void BECIPDJBAOG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BECIPDJBAOG__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar2;
  
  if ((DAT_04566311 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<BECIPDJBAOG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BECIPDJBAOG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BECIPDJBAOG>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_BECIPDJBAOG_<>c_LDPDOLPCIGF__);
    FUN_01bab630(&BECIPDJBAOG_<>c_TypeInfo);
    DAT_04566311 = 1;
  }
  if ((BECIPDJBAOG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BECIPDJBAOG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BECIPDJBAOG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BECIPDJBAOG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BECIPDJBAOG>__ctor__);
  BECIPDJBAOG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BECIPDJBAOG_TypeInfo->static_fields,__this);
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar2 = &BECIPDJBAOG_TypeInfo->static_fields->JJNDCMILECE;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x1a,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar2 = &BECIPDJBAOG_TypeInfo->static_fields->ACFGKMKAECB;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x30D253C]
// BECIPDJBAOG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30D253C

Google_Protobuf_Reflection_MessageDescriptor_o *
BECIPDJBAOG__pb__Google_Protobuf_IMessage_get_Descriptor(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  BECIPDJBAOG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566312 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566312 = 1;
    method = extraout_x1;
  }
  method_00 = BECIPDJBAOG_TypeInfo;
  if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BECIPDJBAOG_c *)thunk_FUN_01ba7564(BECIPDJBAOG_TypeInfo,method);
  }
  pGVar1 = BECIPDJBAOG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x30D2588]
// BECIPDJBAOG$$Equals @ RVA 0x30D2588

bool BECIPDJBAOG__Equals(BECIPDJBAOG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566313 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566313 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BECIPDJBAOG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BECIPDJBAOG__Equals(__this,(BECIPDJBAOG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor(BECIPDJBAOG IBKIPBJJCPG)  [RVA 0x30D226C]
// BECIPDJBAOG$$.ctor @ RVA 0x30D226C

void BECIPDJBAOG___ctor(BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566314 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    DAT_04566314 = 1;
    method_00 = extraout_x1;
  }
  BECIPDJBAOG___ctor(__this,method_00);
  if (IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) {
    (__this->fields).JPHFGCIDDHE = (IBKIPBJJCPG->fields).JPHFGCIDDHE;
    thunk_FUN_01c20e04();
    pGVar2 = (IBKIPBJJCPG->fields).LEJBLHJFJHP;
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      pGVar2 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                          Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
      (__this->fields).LEJBLHJFJHP = pGVar2;
      thunk_FUN_01c20e04();
      pGVar2 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
        (__this->fields).AKFPFIHIHOC = pGVar2;
        thunk_FUN_01c20e04();
        iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
        (__this->fields).EMOLIBOCKJK = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
        (__this->fields).NLLKMEMKBAF = iVar1;
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


// ===== public bool OPFFMGGDIDL()  [RVA 0x30D25EC]
// BECIPDJBAOG$$OPFFMGGDIDL @ RVA 0x30D25EC

bool BECIPDJBAOG__OPFFMGGDIDL(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566315 & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__
                         );
    DAT_04566315 = 1;
  }
  pGVar1 = (__this->fields).LEJBLHJFJHP;
  if ((pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) &&
     (pGVar2 = (__this->fields).AKFPFIHIHOC,
     pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    return 1 < (pGVar2->fields).count + (pGVar1->fields).count;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public void OFJLHAKNDGH(int CJNHFNHJHPE)  [RVA 0x30D264C]
// BECIPDJBAOG$$OFJLHAKNDGH @ RVA 0x30D264C

void BECIPDJBAOG__OFJLHAKNDGH(BECIPDJBAOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NLLKMEMKBAF = CJNHFNHJHPE;
  return;
}


// ===== public int CalculateSize()  [RVA 0x30D2654]
// BECIPDJBAOG$$CalculateSize @ RVA 0x30D2654

int32_t BECIPDJBAOG__CalculateSize(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  System_String_o *value;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  int iVar5;
  
  if ((DAT_04566316 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    DAT_04566316 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).JPHFGCIDDHE;
  if (value != (System_String_o *)0x0) {
    if ((value->fields)._stringLength == 0) {
      iVar5 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value,(MethodInfo *)0x0);
      iVar5 = iVar2 + 1;
    }
    pGVar4 = (__this->fields).LEJBLHJFJHP;
    if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                         (Google_Protobuf_FieldCodec_T__o *)
                         BECIPDJBAOG_TypeInfo->static_fields->JJNDCMILECE,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                        );
      pGVar4 = (__this->fields).AKFPFIHIHOC;
      if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        iVar3 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                           (Google_Protobuf_FieldCodec_T__o *)
                           BECIPDJBAOG_TypeInfo->static_fields->ACFGKMKAECB,
                           Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                          );
        iVar1 = (__this->fields).EMOLIBOCKJK;
        iVar5 = iVar2 + iVar5 + iVar3;
        if (iVar1 != 0) {
          if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
          iVar5 = iVar5 + iVar2 + 1;
        }
        iVar1 = (__this->fields).NLLKMEMKBAF;
        if (iVar1 != 0) {
          if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
          iVar5 = iVar5 + iVar2 + 1;
        }
        __this_00 = (__this->fields).CKFPENBPNML;
        if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
          iVar5 = iVar2 + iVar5;
        }
        return iVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FGMBOHECONG(IList<BECIPDJBAOG> IBKIPBJJCPG, bool CMBNNBBFJBC)  [RVA 0x30D1910]
// BECIPDJBAOG$$FGMBOHECONG @ RVA 0x30D1910

void BECIPDJBAOG__FGMBOHECONG
               (BECIPDJBAOG_o *__this,System_Collections_Generic_IList_BECIPDJBAOG__o *IBKIPBJJCPG,
               bool CMBNNBBFJBC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  VirtualInvokeData *pVVar4;
  BECIPDJBAOG_o *IBKIPBJJCPG_00;
  System_Collections_Generic_IList_BECIPDJBAOG__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  uint uVar8;
  
  if ((DAT_04566317 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_ICollection<BECIPDJBAOG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<BECIPDJBAOG>_TypeInfo);
    DAT_04566317 = 1;
  }
  if (IBKIPBJJCPG == (System_Collections_Generic_IList_BECIPDJBAOG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar8 = 0;
  do {
    pSVar5 = IBKIPBJJCPG->klass;
    uVar1._0_1_ = (pSVar5->_2).rank;
    uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<BECIPDJBAOG>_TypeInfo) {
          pVVar4 = pSVar5->vtable + *piVar7;
          goto LAB_031d19c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(IBKIPBJJCPG,System_Collections_Generic_ICollection<BECIPDJBAOG>_TypeInfo,0
                         );
LAB_031d19c0:
    iVar3 = (*pVVar4->methodPtr)(IBKIPBJJCPG,pVVar4->method);
    if (iVar3 <= (int)uVar8) {
      return;
    }
    pSVar5 = IBKIPBJJCPG->klass;
    uVar2._0_1_ = (pSVar5->_2).rank;
    uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IList<BECIPDJBAOG>_TypeInfo) {
          pVVar4 = pSVar5->vtable + *piVar7;
          goto LAB_031d1a20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(IBKIPBJJCPG,System_Collections_Generic_IList<BECIPDJBAOG>_TypeInfo,0);
LAB_031d1a20:
    IBKIPBJJCPG_00 = (BECIPDJBAOG_o *)(*pVVar4->methodPtr)(IBKIPBJJCPG,(ulong)uVar8,pVVar4->method);
    BECIPDJBAOG__FGMBOHECONG(__this,IBKIPBJJCPG_00,CMBNNBBFJBC,method);
    uVar8 = uVar8 + 1;
  } while( true );
}

