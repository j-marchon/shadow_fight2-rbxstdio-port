// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.MovesParser  (obfuscated NEKMLJBFJFG)
// TypeDefIndex 1787
// Namespace: 
// public class MovesParser
// Fields:

// ===== public static EventAnimation EOHMFJFFFIN(XmlNode AHDGNOJPPIB)  [RVA 0x32090C0]
// MovesParser$$EOHMFJFFFIN @ RVA 0x32090C0

EventAnimation_o * MovesParser__EOHMFJFFFIN(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint32_t uVar3;
  System_String_o *s;
  EventAnimation_o *pKVar4;
  EventBirth_o *__this;
  EventRoundStage_o *__this_00;
  EventEveryFrame_o *__this_01;
  EventIntervalStart_o *__this_02;
  EventIntervalEnd_o *__this_03;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566e63 & 1) == 0) {
    FUN_01bab630(&EventBirth_TypeInfo);
    FUN_01bab630(&EventRoundStage_TypeInfo);
    FUN_01bab630(&EventModExpires_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EventIntervalEnd_TypeInfo);
    FUN_01bab630(&EventKeyReleased_TypeInfo);
    FUN_01bab630(&EventAnimationStart_TypeInfo);
    FUN_01bab630(&EventKeyPressed_TypeInfo);
    FUN_01bab630(&EventAnimationInterrupted_TypeInfo);
    FUN_01bab630(&EventEveryFrame_TypeInfo);
    FUN_01bab630(&EventHit_TypeInfo);
    FUN_01bab630(&EventAnimationEnd_TypeInfo);
    FUN_01bab630(&EventStrike_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&EventIntervalStart_TypeInfo);
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
            __this_01 = (EventEveryFrame_o *)thunk_FUN_01bda818(EventEveryFrame_TypeInfo);
            EventEveryFrame___ctor(__this_01,(MethodInfo *)0x0);
            return (EventAnimation_o *)__this_01;
          }
        }
        else if (uVar3 == 0x179cd0f2) {
          bVar2 = System_String__op_Equality(s,StringLiteral_8253/*"KeyPressed"*/,(MethodInfo *)0x0);
          if (bVar2) {
            pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventKeyPressed_TypeInfo);
            EventKeyPressed___ctor((EventKeyPressed_o *)pKVar4,(MethodInfo *)0x0);
            return pKVar4;
          }
        }
        else if ((uVar3 == 0x4a8f91e2) &&
                (bVar2 = System_String__op_Equality(s,StringLiteral_2974/*"AnimationEnd"*/,(MethodInfo *)0x0), bVar2))
        {
          pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventAnimationEnd_TypeInfo);
          EventAnimationEnd___ctor((EventAnimationEnd_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if (uVar3 == 0x655d504a) {
        bVar2 = System_String__op_Equality(s,StringLiteral_7119/*"Hit"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventHit_TypeInfo);
          EventHit___ctor((EventHit_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if (uVar3 == 0x6d7c14f9) {
        bVar2 = System_String__op_Equality(s,StringLiteral_2978/*"AnimationInterrupted"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventAnimationInterrupted_TypeInfo);
          EventAnimationInterrupted___ctor((EventAnimationInterrupted_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if ((uVar3 == 0x6e42926f) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_12461/*"Strike"*/,(MethodInfo *)0x0), bVar2))
      {
        pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventStrike_TypeInfo);
        EventStrike___ctor((EventStrike_o *)pKVar4,(MethodInfo *)0x0);
        return pKVar4;
      }
    }
    else if (uVar3 < 0xc129aabe) {
      if (uVar3 == 0x99808144) {
        bVar2 = System_String__op_Equality(s,StringLiteral_7632/*"IntervalStart"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this_02 = (EventIntervalStart_o *)thunk_FUN_01bda818(EventIntervalStart_TypeInfo);
          EventIntervalStart___ctor(__this_02,(MethodInfo *)0x0);
          return (EventAnimation_o *)__this_02;
        }
      }
      else if (uVar3 == 0xc129aabd) {
        bVar2 = System_String__op_Equality(s,StringLiteral_9146/*"ModExpires"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventModExpires_TypeInfo);
          EventModExpires___ctor((EventModExpires_o *)pKVar4,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
      else if ((uVar3 == 0x71dc2ebf) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_8255/*"KeyReleased"*/,(MethodInfo *)0x0), bVar2)) {
        pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventKeyReleased_TypeInfo);
        EventKeyReleased___ctor((EventKeyReleased_o *)pKVar4,(MethodInfo *)0x0);
        return pKVar4;
      }
    }
    else if (uVar3 < 0xd9f98cdf) {
      if (uVar3 == 0xc556c0dd) {
        bVar2 = System_String__op_Equality(s,StringLiteral_7630/*"IntervalEnd"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this_03 = (EventIntervalEnd_o *)thunk_FUN_01bda818(EventIntervalEnd_TypeInfo);
          EventIntervalEnd___ctor(__this_03,(MethodInfo *)0x0);
          return (EventAnimation_o *)__this_03;
        }
      }
      else if ((uVar3 == 0xd9f98cde) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_3495/*"Birth"*/,(MethodInfo *)0x0), bVar2)) {
        __this = (EventBirth_o *)thunk_FUN_01bda818(EventBirth_TypeInfo);
        EventBirth___ctor(__this,(MethodInfo *)0x0);
        return (EventAnimation_o *)__this;
      }
    }
    else if (uVar3 == 0xde7ac087) {
      bVar2 = System_String__op_Equality(s,StringLiteral_2980/*"AnimationStart"*/,(MethodInfo *)0x0);
      if (bVar2) {
        pKVar4 = (EventAnimation_o *)thunk_FUN_01bda818(EventAnimationStart_TypeInfo);
        EventAnimationStart___ctor((EventAnimationStart_o *)pKVar4,(MethodInfo *)0x0);
        return pKVar4;
      }
    }
    else if ((uVar3 == 0xf4fddefd) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_11440/*"RoundStageStart"*/,(MethodInfo *)0x0), bVar2)) {
      __this_00 = (EventRoundStage_o *)thunk_FUN_01bda818(EventRoundStage_TypeInfo);
      EventRoundStage___ctor(__this_00,(MethodInfo *)0x0);
      return (EventAnimation_o *)__this_00;
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
        return (EventAnimation_o *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}


// ===== public void .ctor()  [RVA 0x3209724]
// MovesParser$$.ctor @ RVA 0x3209724

void MovesParser___ctor(MovesParser_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

