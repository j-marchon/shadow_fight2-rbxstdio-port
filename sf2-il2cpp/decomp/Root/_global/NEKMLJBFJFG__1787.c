// TypeDefIndex 1787
// Namespace: 
// public class NEKMLJBFJFG
// Fields:

// ===== public static KJFPGDFNFCL EOHMFJFFFIN(XmlNode AHDGNOJPPIB)  [RVA 0x32090C0]
// NEKMLJBFJFG$$EOHMFJFFFIN @ RVA 0x32090C0

KJFPGDFNFCL_o * NEKMLJBFJFG__EOHMFJFFFIN(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint32_t uVar3;
  System_String_o *s;
  KJFPGDFNFCL_o *pKVar4;
  AFBIGJEEPII_o *__this;
  AOMIBNJMLEL_o *__this_00;
  KGAGPHANJAO_o *__this_01;
  PKIOGLDBKOI_o *__this_02;
  FBDLCENGKKF_o *__this_03;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566e63 & 1) == 0) {
    FUN_01bab630(&AFBIGJEEPII_TypeInfo);
    FUN_01bab630(&AOMIBNJMLEL_TypeInfo);
    FUN_01bab630(&DPNLDOJECPA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FBDLCENGKKF_TypeInfo);
    FUN_01bab630(&FBKAOINMJEE_TypeInfo);
    FUN_01bab630(&GPJJNJJBPBG_TypeInfo);
    FUN_01bab630(&HFJBEIGMDDD_TypeInfo);
    FUN_01bab630(&JJPKEILDJCP_TypeInfo);
    FUN_01bab630(&KGAGPHANJAO_TypeInfo);
    FUN_01bab630(&LKBNKHMKFMG_TypeInfo);
    FUN_01bab630(&MEGGKMKGNCP_TypeInfo);
    FUN_01bab630(&NDPDFLHBDJA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PKIOGLDBKOI_TypeInfo);
    FUN_01bab630(&StringLiteral_9146/*"ModExpires"*/);
    FUN_01bab630(&StringLiteral_9223/*"MovesParser::eventsParse - unknown event "{0}""*/);
    FUN_01bab630(&StringLiteral_7630/*"IntervalEnd"*/);
    FUN_01bab630(&StringLiteral_7632/*"IntervalStart"*/);
    FUN_01bab630(&StringLiteral_7119/*"Hit"*/);
    FUN_01bab630(&StringLiteral_5999/*"EveryFrame"*/);
    FUN_01bab630(&StringLiteral_11440/*"RoundStageStart"*/);
    FUN_01bab630(&StringLiteral_8253/*"KeyPressed"*/);
    FUN_01bab630(&StringLiteral_2974/*"AnimationEnd"*/);
    FUN_01bab630(&StringLiteral_8255/*"KeyReleased"*/);
    FUN_01bab630(&StringLiteral_2980/*"AnimationStart"*/);
    FUN_01bab630(&StringLiteral_2978/*"AnimationInterrupted"*/);
    FUN_01bab630(&StringLiteral_3495/*"Birth"*/);
    auVar7 = FUN_01bab630(&StringLiteral_12461/*"Strike"*/);
    DAT_04566e63 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    s = (System_String_o *)
        (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                  (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    uVar3 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
    if (uVar3 < 0x6e429270) {
      if (uVar3 < 0x4a8f91e3) {
        if (uVar3 == 0x71c7f61) {
          bVar2 = System_String__op_Equality(s,StringLiteral_5999/*"EveryFrame"*/,(MethodInfo *)0x0);
          if (bVar2) {
            __this_01 = (KGAGPHANJAO_o *)thunk_FUN_01bda818(KGAGPHANJAO_TypeInfo);
            KGAGPHANJAO___ctor(__this_01,(MethodInfo *)0x0);
            return (KJFPGDFNFCL_o *)__this_01;
          }
        }
        else if (uVar3 == 0x179cd0f2) {
          bVar2 = System_String__op_Equality(s,StringLiteral_8253/*"KeyPressed"*/,(MethodInfo *)0x0);
          if (bVar2) {
            pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(HFJBEIGMDDD_TypeInfo);
            HFJBEIGMDDD___ctor((HFJBEIGMDDD_o *)pKVar4,(MethodInfo *)0x0);
            return pKVar4;
          }
        }
        else if ((uVar3 == 0x4a8f91e2) &&
                (bVar2 = System_String__op_Equality(s,StringLiteral_2974/*"AnimationEnd"*/,(MethodInfo *)0x0), bVar2))
        {
          pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(MEGGKMKGNCP_TypeInfo);
          MEGGKMKGNCP___ctor((MEGGKMKGNCP_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if (uVar3 == 0x655d504a) {
        bVar2 = System_String__op_Equality(s,StringLiteral_7119/*"Hit"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(LKBNKHMKFMG_TypeInfo);
          LKBNKHMKFMG___ctor((LKBNKHMKFMG_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if (uVar3 == 0x6d7c14f9) {
        bVar2 = System_String__op_Equality(s,StringLiteral_2978/*"AnimationInterrupted"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(JJPKEILDJCP_TypeInfo);
          JJPKEILDJCP___ctor((JJPKEILDJCP_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if ((uVar3 == 0x6e42926f) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_12461/*"Strike"*/,(MethodInfo *)0x0), bVar2))
      {
        pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(NDPDFLHBDJA_TypeInfo);
        NDPDFLHBDJA___ctor((NDPDFLHBDJA_o *)pKVar4,(MethodInfo *)0x0);
        return pKVar4;
      }
    }
    else if (uVar3 < 0xc129aabe) {
      if (uVar3 == 0x99808144) {
        bVar2 = System_String__op_Equality(s,StringLiteral_7632/*"IntervalStart"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this_02 = (PKIOGLDBKOI_o *)thunk_FUN_01bda818(PKIOGLDBKOI_TypeInfo);
          PKIOGLDBKOI___ctor(__this_02,(MethodInfo *)0x0);
          return (KJFPGDFNFCL_o *)__this_02;
        }
      }
      else if (uVar3 == 0xc129aabd) {
        bVar2 = System_String__op_Equality(s,StringLiteral_9146/*"ModExpires"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(DPNLDOJECPA_TypeInfo);
          DPNLDOJECPA___ctor((DPNLDOJECPA_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if ((uVar3 == 0x71dc2ebf) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_8255/*"KeyReleased"*/,(MethodInfo *)0x0), bVar2)) {
        pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(FBKAOINMJEE_TypeInfo);
        FBKAOINMJEE___ctor((FBKAOINMJEE_o *)pKVar4,(MethodInfo *)0x0);
        return pKVar4;
      }
    }
    else if (uVar3 < 0xd9f98cdf) {
      if (uVar3 == 0xc556c0dd) {
        bVar2 = System_String__op_Equality(s,StringLiteral_7630/*"IntervalEnd"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this_03 = (FBDLCENGKKF_o *)thunk_FUN_01bda818(FBDLCENGKKF_TypeInfo);
          FBDLCENGKKF___ctor(__this_03,(MethodInfo *)0x0);
          return (KJFPGDFNFCL_o *)__this_03;
        }
      }
      else if ((uVar3 == 0xd9f98cde) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_3495/*"Birth"*/,(MethodInfo *)0x0), bVar2)) {
        __this = (AFBIGJEEPII_o *)thunk_FUN_01bda818(AFBIGJEEPII_TypeInfo);
        AFBIGJEEPII___ctor(__this,(MethodInfo *)0x0);
        return (KJFPGDFNFCL_o *)__this;
      }
    }
    else if (uVar3 == 0xde7ac087) {
      bVar2 = System_String__op_Equality(s,StringLiteral_2980/*"AnimationStart"*/,(MethodInfo *)0x0);
      if (bVar2) {
        pKVar4 = (KJFPGDFNFCL_o *)thunk_FUN_01bda818(GPJJNJJBPBG_TypeInfo);
        GPJJNJJBPBG___ctor((GPJJNJJBPBG_o *)pKVar4,(MethodInfo *)0x0);
        return pKVar4;
      }
    }
    else if ((uVar3 == 0xf4fddefd) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_11440/*"RoundStageStart"*/,(MethodInfo *)0x0), bVar2)) {
      __this_00 = (AOMIBNJMLEL_o *)thunk_FUN_01bda818(AOMIBNJMLEL_TypeInfo);
      AOMIBNJMLEL___ctor(__this_00,(MethodInfo *)0x0);
      return (KJFPGDFNFCL_o *)__this_00;
    }
    auVar7 = FUN_01bab718(object___TypeInfo,1);
    args = auVar7._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar7._8_8_;
    auVar7 = auVar1 << 0x40;
    if (args != (System_Object_array *)0x0) {
      if ((s != (System_String_o *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(s,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)s;
        thunk_FUN_01c20e04(args->m_Items,s);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_9223/*"MovesParser::eventsParse - unknown event "{0}""*/,args,(MethodInfo *)0x0);
        return (KJFPGDFNFCL_o *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}


// ===== public void .ctor()  [RVA 0x3209724]
// NEKMLJBFJFG$$.ctor @ RVA 0x3209724

void NEKMLJBFJFG___ctor(NEKMLJBFJFG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

