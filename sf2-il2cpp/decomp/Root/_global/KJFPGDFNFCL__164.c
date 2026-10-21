// TypeDefIndex 164
// Namespace: 
// public class KJFPGDFNFCL
// Fields:
//   public NJPBHDMCLIN KPFGHBEKJIM; // 0x10
//   private ObscuredInt BFBBNLFNBLK; // 0x18
//   protected string DHKOGAHJNMK; // 0x28
//   protected string KFFGGNGPNLO; // 0x30
//   public string OONMCOJPKIH; // 0x38
//   public bool GBBHFPBFOPI; // 0x40
//   public LCAJGLLBBEC.ELJAALFNLIP BEMCNJHEADJ; // 0x44

// ===== public void .ctor(KJFPGDFNFCL.MIFHAKDMDJH ACCIHBHMFPN = 0)  [RVA 0x3024588]
// KJFPGDFNFCL$$.ctor @ RVA 0x3024588

void KJFPGDFNFCL___ctor(KJFPGDFNFCL_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(ACCIHBHMFPN,(MethodInfo *)0x0);
  (__this->fields).KPFGHBEKJIM = (NJPBHDMCLIN_o *)0x0;
  (__this->fields).BFBBNLFNBLK.fields = CVar1;
  thunk_FUN_01c20e04(&__this->fields,0);
  return;
}


// ===== protected virtual void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x30245E8]
// KJFPGDFNFCL$$HNIHOIAMDPC @ RVA 0x30245E8

void KJFPGDFNFCL__HNIHOIAMDPC
               (KJFPGDFNFCL_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  return;
}


// ===== public virtual bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x30245EC]
// KJFPGDFNFCL$$DGCODECJJCC @ RVA 0x30245EC

bool KJFPGDFNFCL__DGCODECJJCC(KJFPGDFNFCL_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).BFBBNLFNBLK.fields,(MethodInfo *)0x0);
  if (KDFMDHADHMD != (ECAIEGNAOAL_o *)0x0) {
    return iVar1 == (KDFMDHADHMD->fields).BGHFADDGPAD;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static KJFPGDFNFCL.MIFHAKDMDJH JHNNNBIFHDI(string KGLJICLJHEL)  [RVA 0x3024624]
// KJFPGDFNFCL$$JHNNNBIFHDI @ RVA 0x3024624

/* WARNING: Type propagation algorithm not settling */

int32_t KJFPGDFNFCL__JHNNNBIFHDI(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04565c7e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9146/*"ModExpires"*/);
    FUN_01bab630(&StringLiteral_11433/*"RoundEnd"*/);
    FUN_01bab630(&StringLiteral_7630/*"IntervalEnd"*/);
    FUN_01bab630(&StringLiteral_11439/*"RoundStage"*/);
    FUN_01bab630(&StringLiteral_18479/*"getEventTypeByName - unknown type: "{0}""*/);
    FUN_01bab630(&StringLiteral_9568/*"None"*/);
    FUN_01bab630(&StringLiteral_14854/*"WallHit"*/);
    FUN_01bab630(&StringLiteral_11441/*"RoundStart"*/);
    FUN_01bab630(&StringLiteral_7632/*"IntervalStart"*/);
    FUN_01bab630(&StringLiteral_7119/*"Hit"*/);
    FUN_01bab630(&StringLiteral_5999/*"EveryFrame"*/);
    FUN_01bab630(&StringLiteral_8253/*"KeyPressed"*/);
    FUN_01bab630(&StringLiteral_2974/*"AnimationEnd"*/);
    FUN_01bab630(&StringLiteral_8255/*"KeyReleased"*/);
    FUN_01bab630(&StringLiteral_2980/*"AnimationStart"*/);
    FUN_01bab630(&StringLiteral_2978/*"AnimationInterrupted"*/);
    FUN_01bab630(&StringLiteral_3495/*"Birth"*/);
    FUN_01bab630(&StringLiteral_12461/*"Strike"*/);
    DAT_04565c7e = 1;
  }
  if (KGLJICLJHEL != (System_String_o *)0x0) {
    uVar2 = <PrivateImplementationDetails>__ComputeStringHash(KGLJICLJHEL,(MethodInfo *)0x0);
    if (uVar2 < 0x6d7c14fa) {
      if (uVar2 < 0x2c8ac03a) {
        if (uVar2 < 0x179cd0f3) {
          if (uVar2 == 0x71c7f61) {
            bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_5999/*"EveryFrame"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0xe;
            }
          }
          else if ((uVar2 == 0x179cd0f2) &&
                  (bVar1 = System_String__op_Equality
                                     (KGLJICLJHEL,StringLiteral_8253/*"KeyPressed"*/,(MethodInfo *)0x0), bVar1)) {
            return 2;
          }
        }
        else if (uVar2 == 0x27a68ed7) {
          bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11439/*"RoundStage"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 1;
          }
        }
        else if ((uVar2 == 0x2c8ac039) &&
                (bVar1 = System_String__op_Equality
                                   (KGLJICLJHEL,StringLiteral_11441/*"RoundStart"*/,(MethodInfo *)0x0), bVar1)) {
          return 4;
        }
      }
      else if (uVar2 < 0x417355bb) {
        if (uVar2 == 0x304ff7fb) {
          bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_9568/*"None"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0;
          }
        }
        else if ((uVar2 == 0x417355ba) &&
                (bVar1 = System_String__op_Equality
                                   (KGLJICLJHEL,StringLiteral_14854/*"WallHit"*/,(MethodInfo *)0x0), bVar1)) {
          return 8;
        }
      }
      else if (uVar2 == 0x4a8f91e2) {
        bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_2974/*"AnimationEnd"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 10;
        }
      }
      else if (uVar2 == 0x655d504a) {
        bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_7119/*"Hit"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 6;
        }
      }
      else if ((uVar2 == 0x6d7c14f9) &&
              (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_2978/*"AnimationInterrupted"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 0xb;
      }
    }
    else if (uVar2 < 0x811c9dc6) {
      if (uVar2 < 0x71dc2ec0) {
        if (uVar2 == 0x6e42926f) {
          bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12461/*"Strike"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 7;
          }
        }
        else if ((uVar2 == 0x71dc2ebf) &&
                (bVar1 = System_String__op_Equality
                                   (KGLJICLJHEL,StringLiteral_8255/*"KeyReleased"*/,(MethodInfo *)0x0), bVar1)) {
          return 3;
        }
      }
      else if (uVar2 == 0x811c9dc5) {
        if ((KGLJICLJHEL->fields)._stringLength == 0) {
          return 0;
        }
      }
      else if ((uVar2 == 0x72119408) &&
              (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11433/*"RoundEnd"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 5;
      }
    }
    else if (uVar2 < 0xc129aabe) {
      if (uVar2 == 0x99808144) {
        bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_7632/*"IntervalStart"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0xc;
        }
      }
      else if ((uVar2 == 0xc129aabd) &&
              (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_9146/*"ModExpires"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 0x10;
      }
    }
    else if (uVar2 == 0xc556c0dd) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_7630/*"IntervalEnd"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 0xd;
      }
    }
    else if (uVar2 == 0xd9f98cde) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_3495/*"Birth"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 0xf;
      }
    }
    else if ((uVar2 == 0xde7ac087) &&
            (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_2980/*"AnimationStart"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 9;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar3 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class);
    if (lVar3 == 0) {
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
    thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_18479/*"getEventTypeByName - unknown type: "{0}""*/,args,(MethodInfo *)0x0);
  }
  return 0;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x301AD50]
// KJFPGDFNFCL$$RandomizeObscuredVars @ RVA 0x301AD50

void KJFPGDFNFCL__RandomizeObscuredVars(KJFPGDFNFCL_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).BFBBNLFNBLK;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public static string FGLFEPGOBAI(KJFPGDFNFCL.MIFHAKDMDJH ACCIHBHMFPN)  [RVA 0x3024BDC]
// KJFPGDFNFCL$$FGLFEPGOBAI @ RVA 0x3024BDC

System_String_o * KJFPGDFNFCL__FGLFEPGOBAI(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04565c7f & 1) == 0) {
    FUN_01bab630(&StringLiteral_9146/*"ModExpires"*/);
    FUN_01bab630(&StringLiteral_11433/*"RoundEnd"*/);
    FUN_01bab630(&StringLiteral_7630/*"IntervalEnd"*/);
    FUN_01bab630(&StringLiteral_11439/*"RoundStage"*/);
    FUN_01bab630(&StringLiteral_9568/*"None"*/);
    FUN_01bab630(&StringLiteral_14854/*"WallHit"*/);
    FUN_01bab630(&StringLiteral_11441/*"RoundStart"*/);
    FUN_01bab630(&StringLiteral_7632/*"IntervalStart"*/);
    FUN_01bab630(&StringLiteral_7119/*"Hit"*/);
    FUN_01bab630(&StringLiteral_5999/*"EveryFrame"*/);
    FUN_01bab630(&StringLiteral_8253/*"KeyPressed"*/);
    FUN_01bab630(&StringLiteral_2974/*"AnimationEnd"*/);
    FUN_01bab630(&StringLiteral_8255/*"KeyReleased"*/);
    FUN_01bab630(&StringLiteral_2980/*"AnimationStart"*/);
    FUN_01bab630(&StringLiteral_2978/*"AnimationInterrupted"*/);
    FUN_01bab630(&StringLiteral_3495/*"Birth"*/);
    FUN_01bab630(&StringLiteral_12461/*"Strike"*/);
    DAT_04565c7f = 1;
  }
  if (ACCIHBHMFPN - 1U < 0x10) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_11439/*"RoundStage"*/_03fc6288)[(int)(ACCIHBHMFPN - 1U)];
  }
  else {
    puVar1 = &StringLiteral_9568/*"None"*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public void GNLPNKGBAFL(KJFPGDFNFCL.MIFHAKDMDJH CJNHFNHJHPE)  [RVA 0x30245C8]
// KJFPGDFNFCL$$GNLPNKGBAFL @ RVA 0x30245C8

void KJFPGDFNFCL__GNLPNKGBAFL(KJFPGDFNFCL_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).BFBBNLFNBLK.fields = CVar1;
  return;
}


// ===== public KJFPGDFNFCL.MIFHAKDMDJH NHGGBEACKBD()  [RVA 0x301AAA4]
// KJFPGDFNFCL$$NHGGBEACKBD @ RVA 0x301AAA4

int32_t KJFPGDFNFCL__NHGGBEACKBD(KJFPGDFNFCL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).BFBBNLFNBLK.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void GIENGNEGHPJ(XmlNode JCNDOOCHPGM)  [RVA 0x3024CFC]
// KJFPGDFNFCL$$GIENGNEGHPJ @ RVA 0x3024CFC

void KJFPGDFNFCL__GIENGNEGHPJ
               (KJFPGDFNFCL_o *__this,System_Xml_XmlNode_o *JCNDOOCHPGM,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  KJFPGDFNFCL_c *pKVar6;
  
  if ((DAT_04565c80 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_12334/*"Stage"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_9577/*"Not"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565c80 = 1;
  }
  if (JCNDOOCHPGM != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                       (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).DHKOGAHJNMK = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                         (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).KFFGGNGPNLO = pSVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                           (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_12334/*"Stage"*/,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).OONMCOJPKIH = pSVar5;
          thunk_FUN_01c20e04();
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                             (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_9577/*"Not"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).GBBHFPBFOPI = bVar1;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                               (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
              iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar5,(MethodInfo *)0x0);
              pKVar6 = __this->klass;
              (__this->fields).BEMCNJHEADJ = iVar2;
                    /* WARNING: Could not recover jumptable at 0x03124efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pKVar6->vtable)._4_HNIHOIAMDPC.methodPtr)
                        (__this,JCNDOOCHPGM,(pKVar6->vtable)._4_HNIHOIAMDPC.method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static List<string> ONCFEIGIBGB(NJPBHDMCLIN AHEFOIOKDOK, LCAJGLLBBEC.ELJAALFNLIP GCIBBBDPBNK)  [RVA 0x3024F04]
// KJFPGDFNFCL$$ONCFEIGIBGB @ RVA 0x3024F04

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_string__o *
KJFPGDFNFCL__ONCFEIGIBGB(NJPBHDMCLIN_o *AHEFOIOKDOK,int32_t GCIBBBDPBNK,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04565c81 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/);
    DAT_04565c81 = 1;
  }
  switch(GCIBBBDPBNK) {
  case 1:
    goto joined_r0x03125044;
  case 2:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).FEONJHEFIIC;
    }
    break;
  case 3:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).AKMMPGCDEGB;
    }
    break;
  case 4:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).OFNOOFAEIPH;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = GCIBBBDPBNK;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) break;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/,args,(MethodInfo *)0x0);
joined_r0x03125044:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).FAPKAFBALDE;
    }
    break;
  case 6:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).EBDPNMBDCII;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

