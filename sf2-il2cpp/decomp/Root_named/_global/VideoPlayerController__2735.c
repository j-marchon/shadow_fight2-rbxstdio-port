// Original name: .VideoPlayerController  (obfuscated VideoPlayerController)
// TypeDefIndex 2735
// Namespace: 
// public class VideoPlayerController : MonoBehaviour
// Fields:
//   private const long HEOFGFFNLEN = 5;
//   private const int KFLGLIPBFOE = 15;
//   private const int DHKEMLAIJKD = 5;
//   private VideoPlayer _VideoPlayer; // 0x20
//   private AudioSource _AudioSource; // 0x28
//   private Action LJONAJJGJHI; // 0x30
//   private Color GKFNKJAIJCK; // 0x38
//   private bool <LFALNJINAPO>k__BackingField; // 0x48
//   private static VideoPlayerController <JPNBHEPPPNP>k__BackingField; // 0x0

// ===== protected virtual void Awake()  [RVA 0x33E1520]
// VideoPlayerController$$Awake @ RVA 0x33E1520

void VideoPlayerController__Awake(VideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *value;
  UnityEngine_Video_VideoPlayer_EventHandler_o *pUVar1;
  UnityEngine_Camera_o *value_00;
  MethodInfo *extraout_x1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  
  if ((DAT_04567ea3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    FUN_01bab630(&Method_VideoPlayerController_JLDEKOIIPDE__);
    FUN_01bab630(&Method_VideoPlayerController_KNKHDOFPBOG__);
    FUN_01bab630(&Method_VideoPlayerController_MMFFJEFEPEH__);
    DAT_04567ea3 = 1;
    method = extraout_x1;
  }
  if (DAT_045663a6 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo,method);
    DAT_045663a6 = '\x01';
  }
  VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField = __this;
  thunk_FUN_01c20e04(VideoPlayerController_TypeInfo->static_fields,__this);
  pUVar2 = (__this->fields)._VideoPlayer;
  value = (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)
          thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
  UnityEngine_Video_VideoPlayer_ErrorEventHandler___ctor();
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__add_errorReceived(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
             thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    UnityEngine_Video_VideoPlayer_EventHandler___ctor();
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__add_prepareCompleted(pUVar2,pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._VideoPlayer;
      pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
               thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
      UnityEngine_Video_VideoPlayer_EventHandler___ctor();
      if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
        UnityEngine_Video_VideoPlayer__add_loopPointReached(pUVar2,pUVar1,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._VideoPlayer;
        if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
          UnityEngine_Video_VideoPlayer__set_isLooping(pUVar2,false,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._VideoPlayer;
          if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
            UnityEngine_Video_VideoPlayer__set_audioOutputMode(pUVar2,1,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._VideoPlayer;
            if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
              UnityEngine_Video_VideoPlayer__set_controlledAudioTrackCount
                        (pUVar2,1,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._VideoPlayer;
              if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                UnityEngine_Video_VideoPlayer__EnableAudioTrack(pUVar2,0,true,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._VideoPlayer;
                if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                  UnityEngine_Video_VideoPlayer__SetTargetAudioSource
                            (pUVar2,0,(__this->fields)._AudioSource,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._VideoPlayer;
                  value_00 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                    UnityEngine_Video_VideoPlayer__set_targetCamera
                              (pUVar2,value_00,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AEGINBCKKBE(Action CJNHFNHJHPE)  [RVA 0x33E1724]
// VideoPlayerController$$AEGINBCKKBE @ RVA 0x33E1724

void VideoPlayerController__AEGINBCKKBE
               (VideoPlayerController_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567ea4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567ea4 = 1;
  }
  ppSVar4 = &(__this->fields).LJONAJJGJHI;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== protected virtual void OnDestroy()  [RVA 0x33E17C0]
// VideoPlayerController$$OnDestroy @ RVA 0x33E17C0

void VideoPlayerController__OnDestroy(VideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *value;
  UnityEngine_Video_VideoPlayer_EventHandler_o *pUVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  
  if ((DAT_04567ea5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    FUN_01bab630(&Method_VideoPlayerController_JLDEKOIIPDE__);
    FUN_01bab630(&Method_VideoPlayerController_KNKHDOFPBOG__);
    FUN_01bab630(&Method_VideoPlayerController_MMFFJEFEPEH__);
    DAT_04567ea5 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._LFALNJINAPO_k__BackingField != false) {
    VideoPlayerController__JLDEKOIIPDE(__this,(UnityEngine_Video_VideoPlayer_o *)method,in_x2);
  }
  pUVar2 = (__this->fields)._VideoPlayer;
  value = (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)
          thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
  UnityEngine_Video_VideoPlayer_ErrorEventHandler___ctor();
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__remove_errorReceived(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
             thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    UnityEngine_Video_VideoPlayer_EventHandler___ctor();
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__remove_prepareCompleted(pUVar2,pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._VideoPlayer;
      pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
               thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
      UnityEngine_Video_VideoPlayer_EventHandler___ctor();
      if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
        UnityEngine_Video_VideoPlayer__remove_loopPointReached(pUVar2,pUVar1,(MethodInfo *)0x0);
        if (DAT_045663a6 == '\0') {
          FUN_01bab630(&VideoPlayerController_TypeInfo);
          DAT_045663a6 = '\x01';
        }
        VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
             (VideoPlayerController_o *)0x0;
                    /* try { // try from 034e1934 to 035e1aef has its CatchHandler @ 034e1934
                       catch() { ... } // from try @ 034e1934 with catch @ 034e1934
                       catch() { ... } // from try @ 034e2240 with catch @ 034e1934
                       catch() { ... } // from try @ 034e23d0 with catch @ 034e1934
                       catch() { ... } // from try @ 034e23d8 with catch @ 034e1934
                       catch() { ... } // from try @ 034e2434 with catch @ 034e1934
                       catch() { ... } // from try @ 034e2590 with catch @ 034e1934 */
        thunk_FUN_01c20e04(VideoPlayerController_TypeInfo->static_fields,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual bool CJOHDGBNFBO()  [RVA 0x33E1958]
// VideoPlayerController$$CJOHDGBNFBO @ RVA 0x33E1958

bool VideoPlayerController__CJOHDGBNFBO(VideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  int64_t iVar2;
  uint64_t uVar3;
  
  pUVar1 = (__this->fields)._VideoPlayer;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    iVar2 = UnityEngine_Video_VideoPlayer__get_frame(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._VideoPlayer;
    if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      uVar3 = UnityEngine_Video_VideoPlayer__get_frameCount(pUVar1,(MethodInfo *)0x0);
      return (long)(uVar3 - 5) <= iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void HEABBIMCDBF(bool OOGPLJBADCD)  [RVA 0x33E19A0]
// VideoPlayerController$$HEABBIMCDBF @ RVA 0x33E19A0

void VideoPlayerController__HEABBIMCDBF
               (VideoPlayerController_o *__this,bool OOGPLJBADCD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  Nekki_SF2_GUI_ModuleHolder_o *pNVar2;
  
  if ((DAT_04567ea6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ea6 = 1;
  }
  if (DAT_04567f86 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_04567f86 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04567f86 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
      DAT_04567f86 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
    if ((pNVar2 != (Nekki_SF2_GUI_ModuleHolder_o *)0x0) &&
       (__this_00 = Nekki_SF2_GUI_ModuleHolder__get_Canvas(pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Canvas_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_00,OOGPLJBADCD,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static VideoPlayerController get_Current()  [RVA 0x33E1A94]
// VideoPlayerController$$get_Current @ RVA 0x33E1A94

VideoPlayerController_o * VideoPlayerController__get_Current(MethodInfo *method)

{
  if ((DAT_04567ea7 & 1) == 0) {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04567ea7 = 1;
  }
  return VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
}


// ===== protected void JLDEKOIIPDE(VideoPlayer JGHIJMJNJLE)  [RVA 0x33E1ADC]
// VideoPlayerController$$JLDEKOIIPDE @ RVA 0x33E1ADC

void VideoPlayerController__JLDEKOIIPDE
               (VideoPlayerController_o *__this,UnityEngine_Video_VideoPlayer_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Camera_o *pUVar2;
  ulong uVar3;
  System_String_o *KGLJICLJHEL;
  UnityEngine_Video_VideoPlayer_o *pUVar4;
  UnityEngine_AudioSource_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_o *pSVar5;
  System_Action_o **ppSVar6;
  MainSettings_o *__this_01;
  
                    /* try { // try from 034e1af0 to 035e1b17 has its CatchHandler @ 034e24dc */
  if ((DAT_04567ea8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14793/*"VideoPlayerCtrl::OnPlayCompleted"*/);
    DAT_04567ea8 = 1;
  }
  pUVar2 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e1b4c to 035e1b77 has its CatchHandler @ 034e24d8 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pUVar2 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto LAB_034e1d04;
    UnityEngine_Camera__set_backgroundColor
              (pUVar2,(UnityEngine_Color_o)(__this->fields).GKFNKJAIJCK.fields,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  VideoPlayerController__NPDADBCINPL(true,method_00);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 034e1bb4 to 035e1bbf has its CatchHandler @ 034e24cc */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0) {
    uVar3 = (*(__this->klass->vtable)._6_CJOHDGBNFBO.methodPtr)
                      (__this,(__this->klass->vtable)._6_CJOHDGBNFBO.method);
    if ((uVar3 & 1) != 0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034e1c08 to 035e1c2b has its CatchHandler @ 034e24c0 */
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e1c30 to 035e1c3b has its CatchHandler @ 034e24c4 */
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      KGLJICLJHEL = (System_String_o *)
                    (*(__this->klass->vtable)._10_MNGKKMCBNCN.methodPtr)
                              (__this,(__this->klass->vtable)._10_MNGKKMCBNCN.method);
      if (__this_01 == (MainSettings_o *)0x0) goto LAB_034e1d04;
      MainSettings__CODMHIEOCJM(__this_01,KGLJICLJHEL,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields)._VideoPlayer;
  if (pUVar4 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                    /* try { // try from 034e1c6c to 035e1c77 has its CatchHandler @ 034e249c */
    bVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying(pUVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar4 = (__this->fields)._VideoPlayer;
      if (pUVar4 == (UnityEngine_Video_VideoPlayer_o *)0x0) goto LAB_034e1d04;
      UnityEngine_Video_VideoPlayer__Stop(pUVar4,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields)._AudioSource;
    if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Stop(__this_00,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_OIJPFLLDOMM.methodPtr)
                (__this,(__this->klass->vtable)._8_OIJPFLLDOMM.method);
      ppSVar6 = &(__this->fields).LJONAJJGJHI;
      pSVar5 = *ppSVar6;
      if (pSVar5 != (System_Action_o *)0x0) {
                    /* try { // try from 034e1cbc to 035e1cc7 has its CatchHandler @ 034e2460 */
        (*(code *)(pSVar5->fields).super.super.invoke_impl)
                  ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
        *ppSVar6 = (System_Action_o *)0x0;
        thunk_FUN_01c20e04(ppSVar6,0);
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034e1cf8 to 035e1d03 has its CatchHandler @ 034e24a0 */
      UnityEngine_Debug__Log(StringLiteral_14793/*"VideoPlayerCtrl::OnPlayCompleted"*/,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034e1d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void LNFKMDEPMDJ()  [RVA 0x33E1948]
// VideoPlayerController$$LNFKMDEPMDJ @ RVA 0x33E1948

void VideoPlayerController__LNFKMDEPMDJ(VideoPlayerController_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((__this->fields)._LFALNJINAPO_k__BackingField != false) {
    VideoPlayerController__JLDEKOIIPDE(__this,(UnityEngine_Video_VideoPlayer_o *)method,in_x2);
    return;
  }
  return;
}


// ===== private void GMAPIHHCJAO(VideoPlayer OKLICNJAJLO, string CKBGIKEFOMH)  [RVA 0x33E1E18]
// VideoPlayerController$$GMAPIHHCJAO @ RVA 0x33E1E18

void VideoPlayerController__GMAPIHHCJAO
               (VideoPlayerController_o *__this,UnityEngine_Video_VideoPlayer_o *OKLICNJAJLO,
               System_String_o *CKBGIKEFOMH,MethodInfo *method)

{
                    /* try { // try from 034e1e18 to 035e1e23 has its CatchHandler @ 034e2480 */
  if (OKLICNJAJLO != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_source(OKLICNJAJLO,1,(MethodInfo *)0x0);
    UnityEngine_Video_VideoPlayer__set_url(OKLICNJAJLO,CKBGIKEFOMH,(MethodInfo *)0x0);
    UnityEngine_Video_VideoPlayer__set_audioOutputMode(OKLICNJAJLO,1,(MethodInfo *)0x0);
                    /* try { // try from 034e1e68 to 035e1e73 has its CatchHandler @ 034e2450 */
    UnityEngine_Video_VideoPlayer__set_controlledAudioTrackCount(OKLICNJAJLO,1,(MethodInfo *)0x0);
    UnityEngine_Video_VideoPlayer__EnableAudioTrack(OKLICNJAJLO,0,true,(MethodInfo *)0x0);
                    /* try { // try from 034e1e84 to 035e1e8f has its CatchHandler @ 034e2498 */
    UnityEngine_Video_VideoPlayer__SetTargetAudioSource
              (OKLICNJAJLO,0,(__this->fields)._AudioSource,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void MMFFJEFEPEH(VideoPlayer NMGJDFJDKBF)  [RVA 0x33E1EA4]
// VideoPlayerController$$MMFFJEFEPEH @ RVA 0x33E1EA4

void VideoPlayerController__MMFFJEFEPEH
               (VideoPlayerController_o *__this,UnityEngine_Video_VideoPlayer_o *NMGJDFJDKBF,
               MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  UnityEngine_AudioSource_o *__this_01;
  
  __this_00 = (__this->fields)._VideoPlayer;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._AudioSource;
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KNFFBHPJCOD(Action CJNHFNHJHPE)  [RVA 0x33E1ED4]
// VideoPlayerController$$KNFFBHPJCOD @ RVA 0x33E1ED4

void VideoPlayerController__KNFFBHPJCOD
               (VideoPlayerController_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* try { // try from 034e1ed4 to 035e1edf has its CatchHandler @ 034e2470 */
                    /* try { // try from 034e1ef0 to 035e1efb has its CatchHandler @ 034e24a4 */
  if ((DAT_04567ea9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567ea9 = 1;
  }
  ppSVar4 = &(__this->fields).LJONAJJGJHI;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 034e1f40 to 035e1f4b has its CatchHandler @ 034e245c */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 034e1f5c to 035e1f67 has its CatchHandler @ 034e2490 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public virtual void Play(string CJFAPGEEPLM, Action EBIHGBKNHMF)  [RVA 0x33E1F70]
// VideoPlayerController$$Play @ RVA 0x33E1F70

void VideoPlayerController__Play
               (VideoPlayerController_o *__this,System_String_o *CJFAPGEEPLM,
               System_Action_o *EBIHGBKNHMF,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  VideoPlayerController__JADIEOCNJBH(__this,EBIHGBKNHMF,(MethodInfo *)EBIHGBKNHMF);
  VideoPlayerController__GMAPIHHCJAO(__this,(__this->fields)._VideoPlayer,CJFAPGEEPLM,method);
  __this_00 = (__this->fields)._VideoPlayer;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                    /* try { // try from 034e1fac to 035e1fb7 has its CatchHandler @ 034e2464 */
    UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LOOIHADMNOE(bool CJNHFNHJHPE)  [RVA 0x33E2088]
// VideoPlayerController$$LOOIHADMNOE @ RVA 0x33E2088

void VideoPlayerController__LOOIHADMNOE
               (VideoPlayerController_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LFALNJINAPO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected virtual void OIJPFLLDOMM()  [RVA 0x33E2094]
// VideoPlayerController$$OIJPFLLDOMM @ RVA 0x33E2094

void VideoPlayerController__OIJPFLLDOMM(VideoPlayerController_o *__this,MethodInfo *method)

{
  int32_t value;
  VideoPlayerController_o *__this_00;
  MethodInfo *in_x2;
  
                    /* try { // try from 034e20a0 to 035e20a7 has its CatchHandler @ 034e2460 */
  __this_00 = __this;
  if ((DAT_04567eaa & 1) == 0) {
                    /* try { // try from 034e20b8 to 035e20bf has its CatchHandler @ 034e2468 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    __this_00 = (VideoPlayerController_o *)FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* try { // try from 034e20d0 to 035e20d7 has its CatchHandler @ 034e246c */
    DAT_04567eaa = 1;
  }
  (__this->fields)._LFALNJINAPO_k__BackingField = false;
  VideoPlayerController__HEABBIMCDBF(__this_00,true,in_x2);
                    /* try { // try from 034e20e8 to 035e20ef has its CatchHandler @ 034e2470 */
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = EOAOCPLIKOI__ILLKKNOECDO((MethodInfo *)0x0);
                    /* try { // try from 034e2100 to 035e2107 has its CatchHandler @ 034e245c */
  UnityEngine_Screen__set_sleepTimeout(value,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034e2118 to 035e211f has its CatchHandler @ 034e2464 */
  PNLFHHJGDLI__OECHILBBMLF((MethodInfo *)0x0);
  return;
}


// ===== private void OnApplicationPause(bool DGBEEJNJCHH)  [RVA 0x33E2128]
// VideoPlayerController$$OnApplicationPause @ RVA 0x33E2128

void VideoPlayerController__OnApplicationPause
               (VideoPlayerController_o *__this,bool DGBEEJNJCHH,MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  
                    /* try { // try from 034e2130 to 035e2137 has its CatchHandler @ 034e2454 */
  if ((!DGBEEJNJCHH) && ((__this->fields)._LFALNJINAPO_k__BackingField != false)) {
    routine = VideoPlayerController__ICKBAPOLICK(__this,(MethodInfo *)0x0);
                    /* try { // try from 034e2148 to 035e214f has its CatchHandler @ 034e2444 */
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public static VideoPlayerController Create()  [RVA 0x33E21CC]
// VideoPlayerController$$Create @ RVA 0x33E21CC

VideoPlayerController_o * VideoPlayerController__Create(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  VideoPlayerController_o *pVVar2;
  
                    /* try { // try from 034e21e0 to 035e21e7 has its CatchHandler @ 034e2440 */
  if ((DAT_04567eab & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<VideoPlayerController>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 034e2208 to 035e221f has its CatchHandler @ 034e244c */
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_15612/*"[VideoScreen]"*/);
    FUN_01bab630(&StringLiteral_10418/*"Prefabs/Video/VideoScreen"*/);
    DAT_04567eab = 1;
  }
                    /* try { // try from 034e223c to 035e223f has its CatchHandler @ 034e2438 */
                    /* try { // try from 034e2240 to 035e23bb has its CatchHandler @ 034e1934 */
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar2 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pVVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    return VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10418/*"Prefabs/Video/VideoScreen"*/,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  __this = (UnityEngine_Object_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,StringLiteral_15612/*"[VideoScreen]"*/,(MethodInfo *)0x0);
    pVVar2 = (VideoPlayerController_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<VideoPlayerController>__);
    return pVVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void Destroy()  [RVA 0x33E2354]
// VideoPlayerController$$Destroy @ RVA 0x33E2354

void VideoPlayerController__Destroy(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *obj;
  VideoPlayerController_o *pVVar2;
  
  if ((DAT_04567eac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eac = 1;
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
                    /* try { // try from 034e23bc to 035e23c3 has its CatchHandler @ 034e24d0 */
  pVVar2 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
                    /* try { // try from 034e23c4 to 035e23c7 has its CatchHandler @ 034e24c8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e23c8 to 035e23cf has its CatchHandler @ 034e24d4 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034e23d0 to 035e23d3 has its CatchHandler @ 034e1934 */
                    /* try { // try from 034e23d4 to 035e23d7 has its CatchHandler @ 034e2474 */
                    /* try { // try from 034e23d8 to 035e23df has its CatchHandler @ 034e1934 */
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pVVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 034e23e0 to 035e23e3 has its CatchHandler @ 034e24bc */
                    /* try { // try from 034e23e4 to 035e23eb has its CatchHandler @ 034e24b8 */
                    /* try { // try from 034e23ec to 035e23f3 has its CatchHandler @ 034e24b4 */
    return;
  }
                    /* try { // try from 034e23f4 to 035e23f7 has its CatchHandler @ 034e24bc */
  if (DAT_04566bb5 == '\0') {
                    /* try { // try from 034e23f8 to 035e23fb has its CatchHandler @ 034e24b0 */
                    /* try { // try from 034e23fc to 035e23ff has its CatchHandler @ 034e24ac */
                    /* try { // try from 034e2400 to 035e2403 has its CatchHandler @ 034e24b0 */
    FUN_01bab630(&VideoPlayerController_TypeInfo);
                    /* try { // try from 034e2404 to 035e240b has its CatchHandler @ 034e24a8 */
    DAT_04566bb5 = '\x01';
  }
                    /* try { // try from 034e240c to 035e240f has its CatchHandler @ 034e24ac */
                    /* try { // try from 034e2410 to 035e2413 has its CatchHandler @ 034e248c */
                    /* try { // try from 034e2414 to 035e2417 has its CatchHandler @ 034e2488 */
  pVVar2 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
                    /* try { // try from 034e2418 to 035e241b has its CatchHandler @ 034e248c */
  if (pVVar2 != (VideoPlayerController_o *)0x0) {
                    /* try { // try from 034e241c to 035e241f has its CatchHandler @ 034e2488 */
                    /* try { // try from 034e2420 to 035e2427 has its CatchHandler @ 034e2478 */
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pVVar2,(MethodInfo *)0x0)
    ;
                    /* try { // try from 034e2428 to 035e242b has its CatchHandler @ 034e2458 */
                    /* try { // try from 034e242c to 035e242f has its CatchHandler @ 034e243c */
                    /* try { // try from 034e2430 to 035e2433 has its CatchHandler @ 034e2458 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034e21b8 with catch @ 034e2434
                       try { // try from 034e2434 to 035e24fb has its CatchHandler @ 034e1934 */
                    /* catch() { ... } // from try @ 034e223c with catch @ 034e2438 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch() { ... } // from try @ 034e242c with catch @ 034e243c */
                    /* catch() { ... } // from try @ 034e21e0 with catch @ 034e2440 */
                    /* catch() { ... } // from try @ 034e2084 with catch @ 034e2444
                       catch() { ... } // from try @ 034e2148 with catch @ 034e2444 */
                    /* catch() { ... } // from try @ 034e2168 with catch @ 034e2448 */
                    /* catch() { ... } // from try @ 034e2208 with catch @ 034e244c */
                    /* catch() { ... } // from try @ 034e1e68 with catch @ 034e2450
                       catch() { ... } // from try @ 034e2160 with catch @ 034e2450 */
                    /* catch() { ... } // from try @ 034e2018 with catch @ 034e2454
                       catch() { ... } // from try @ 034e2130 with catch @ 034e2454 */
                    /* catch() { ... } // from try @ 034e2428 with catch @ 034e2458
                       catch() { ... } // from try @ 034e2430 with catch @ 034e2458 */
    UnityEngine_Object__Destroy(obj,0.4,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034e1f40 with catch @ 034e245c
                       catch() { ... } // from try @ 034e2100 with catch @ 034e245c */
  FUN_01bab8c8();
}


// ===== public virtual void Update()  [RVA 0x33E2460]
// VideoPlayerController$$Update @ RVA 0x33E2460

void VideoPlayerController__Update(VideoPlayerController_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *KGLJICLJHEL;
  UnityEngine_Video_VideoPlayer_o *extraout_x1;
  UnityEngine_Video_VideoPlayer_o *extraout_x1_00;
  UnityEngine_Video_VideoPlayer_o *extraout_x1_01;
  UnityEngine_Video_VideoPlayer_o *extraout_x1_02;
  UnityEngine_Video_VideoPlayer_o *JGHIJMJNJLE;
  MethodInfo *in_x2;
  MainSettings_o *__this_00;
  undefined1 auVar2 [16];
  
                    /* catch() { ... } // from try @ 034e1cbc with catch @ 034e2460
                       catch() { ... } // from try @ 034e20a0 with catch @ 034e2460 */
                    /* catch() { ... } // from try @ 034e1fac with catch @ 034e2464
                       catch() { ... } // from try @ 034e2118 with catch @ 034e2464 */
                    /* catch() { ... } // from try @ 034e1d48 with catch @ 034e2468
                       catch() { ... } // from try @ 034e20b8 with catch @ 034e2468 */
                    /* catch() { ... } // from try @ 034e1dd4 with catch @ 034e246c
                       catch() { ... } // from try @ 034e20d0 with catch @ 034e246c */
                    /* catch() { ... } // from try @ 034e1ed4 with catch @ 034e2470
                       catch() { ... } // from try @ 034e20e8 with catch @ 034e2470 */
                    /* catch() { ... } // from try @ 034e23d4 with catch @ 034e2474 */
  if ((DAT_04567ead & 1) == 0) {
                    /* catch() { ... } // from try @ 034e2420 with catch @ 034e2478 */
                    /* catch() { ... } // from try @ 034e2034 with catch @ 034e247c */
                    /* catch() { ... } // from try @ 034e1e18 with catch @ 034e2480 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 034e1fc8 with catch @ 034e2484 */
                    /* catch() { ... } // from try @ 034e2414 with catch @ 034e2488
                       catch() { ... } // from try @ 034e241c with catch @ 034e2488 */
    DAT_04567ead = 1;
  }
                    /* catch() { ... } // from try @ 034e2410 with catch @ 034e248c
                       catch() { ... } // from try @ 034e2418 with catch @ 034e248c */
                    /* catch() { ... } // from try @ 034e1f5c with catch @ 034e2490 */
                    /* catch() { ... } // from try @ 034e1d84 with catch @ 034e2494 */
                    /* catch() { ... } // from try @ 034e1e84 with catch @ 034e2498 */
  auVar2 = (*(__this->klass->vtable)._11_IEOMFENOCGE.methodPtr)
                     (__this,(__this->klass->vtable)._11_IEOMFENOCGE.method);
  JGHIJMJNJLE = auVar2._8_8_;
                    /* catch() { ... } // from try @ 034e1c6c with catch @ 034e249c */
                    /* catch() { ... } // from try @ 034e1cf8 with catch @ 034e24a0 */
                    /* catch() { ... } // from try @ 034e1ef0 with catch @ 034e24a4 */
  if (((auVar2._0_8_ & 1) != 0) && ((__this->fields)._LFALNJINAPO_k__BackingField != false)) {
                    /* catch() { ... } // from try @ 034e2404 with catch @ 034e24a8 */
                    /* catch() { ... } // from try @ 034e23fc with catch @ 034e24ac
                       catch() { ... } // from try @ 034e240c with catch @ 034e24ac */
                    /* catch() { ... } // from try @ 034e23f8 with catch @ 034e24b0
                       catch() { ... } // from try @ 034e2400 with catch @ 034e24b0 */
                    /* catch() { ... } // from try @ 034e23ec with catch @ 034e24b4 */
                    /* catch() { ... } // from try @ 034e23e4 with catch @ 034e24b8 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034e23e0 with catch @ 034e24bc
                       catch() { ... } // from try @ 034e23f4 with catch @ 034e24bc */
      thunk_FUN_01ba7564();
      JGHIJMJNJLE = extraout_x1;
    }
                    /* catch() { ... } // from try @ 034e1c08 with catch @ 034e24c0 */
                    /* catch() { ... } // from try @ 034e1c30 with catch @ 034e24c4 */
                    /* catch() { ... } // from try @ 034e23c4 with catch @ 034e24c8 */
    if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 034e1bb4 with catch @ 034e24cc */
                    /* catch() { ... } // from try @ 034e23bc with catch @ 034e24d0 */
                    /* catch() { ... } // from try @ 034e23c8 with catch @ 034e24d4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 034e1b4c with catch @ 034e24d8 */
                    /* catch() { ... } // from try @ 034e1af0 with catch @ 034e24dc */
      DAT_04565b7d = '\x01';
      JGHIJMJNJLE = extraout_x1_00;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      JGHIJMJNJLE = extraout_x1_01;
    }
                    /* try { // try from 034e24fc to 035e24ff has its CatchHandler @ 034e2510 */
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 034e24fc with catch @ 034e2510 */
      if (DAT_04565e59 == '\0') {
                    /* try { // try from 034e2520 to 035e258f has its CatchHandler @ 034e25a4 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      KGLJICLJHEL = (System_String_o *)
                    (*(__this->klass->vtable)._10_MNGKKMCBNCN.methodPtr)
                              (__this,(__this->klass->vtable)._10_MNGKKMCBNCN.method);
      if (__this_00 == (MainSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      in_x2 = (MethodInfo *)0x0;
      bVar1 = MainSettings__KPAEAHPADBL(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      JGHIJMJNJLE = extraout_x1_02;
      if (!bVar1) {
        return;
      }
    }
    if ((__this->fields)._LFALNJINAPO_k__BackingField != false) {
      VideoPlayerController__JLDEKOIIPDE(__this,JGHIJMJNJLE,in_x2);
      return;
    }
  }
                    /* try { // try from 034e2590 to 035e259b has its CatchHandler @ 034e1934 */
  return;
}


// ===== public void .ctor()  [RVA 0x33E2598]
// VideoPlayerController$$.ctor @ RVA 0x33E2598

void VideoPlayerController___ctor(VideoPlayerController_o *__this,MethodInfo *method)

{
                    /* try { // try from 034e259c to 035e25a3 has its CatchHandler @ 034e25a4 */
                    /* catch() { ... } // from try @ 034e2520 with catch @ 034e25a4
                       catch() { ... } // from try @ 034e259c with catch @ 034e25a4 */
  (__this->fields).GKFNKJAIJCK.fields.b = 0.0;
  (__this->fields).GKFNKJAIJCK.fields.a = 1.0;
  (__this->fields).GKFNKJAIJCK.fields.r = 0.0;
  (__this->fields).GKFNKJAIJCK.fields.g = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void JADIEOCNJBH(Action EBIHGBKNHMF)  [RVA 0x33E1FB4]
// VideoPlayerController$$JADIEOCNJBH @ RVA 0x33E1FB4

void VideoPlayerController__JADIEOCNJBH
               (VideoPlayerController_o *__this,System_Action_o *EBIHGBKNHMF,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  System_Action_o **ppSVar2;
  VideoPlayerController_o *__this_00;
  System_Action_o *extraout_x1;
  System_Action_o *method_00;
  UnityEngine_Color_o UVar3;
  
                    /* try { // try from 034e1fc8 to 035e1fd3 has its CatchHandler @ 034e2484 */
  method_00 = EBIHGBKNHMF;
  if ((DAT_04567eae & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567eae = 1;
    method_00 = extraout_x1;
  }
  VideoPlayerController__NPDADBCINPL(false,(MethodInfo *)method_00);
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    UVar3 = UnityEngine_Camera__get_backgroundColor(pUVar1,(MethodInfo *)0x0);
    (__this->fields).GKFNKJAIJCK.fields.r = UVar3.fields.r;
    (__this->fields).GKFNKJAIJCK.fields.g = UVar3.fields.g;
    (__this->fields).GKFNKJAIJCK.fields.b = UVar3.fields.b;
    (__this->fields).GKFNKJAIJCK.fields.a = UVar3.fields.a;
    pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
                    /* try { // try from 034e2018 to 035e2023 has its CatchHandler @ 034e2454 */
      UnityEngine_Camera__set_backgroundColor
                (pUVar1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0
                );
      ppSVar2 = &(__this->fields).LJONAJJGJHI;
                    /* try { // try from 034e2034 to 035e203f has its CatchHandler @ 034e247c */
      *ppSVar2 = EBIHGBKNHMF;
      thunk_FUN_01c20e04(ppSVar2,EBIHGBKNHMF);
      UnityEngine_Screen__set_sleepTimeout(-1,(MethodInfo *)0x0);
      VideoPlayerController__HEABBIMCDBF(__this_00,false,method);
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__EAKDFHBCLHC((MethodInfo *)0x0);
      (__this->fields)._LFALNJINAPO_k__BackingField = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e2084 to 035e208f has its CatchHandler @ 034e2444 */
  FUN_01bab8c8();
}


// ===== public bool get_IsPlaying()  [RVA 0x33E25AC]
// VideoPlayerController$$get_IsPlaying @ RVA 0x33E25AC

bool VideoPlayerController__get_IsPlaying(VideoPlayerController_o *__this,MethodInfo *method)

{
  return (__this->fields)._LFALNJINAPO_k__BackingField;
}


// ===== protected virtual string MNGKKMCBNCN()  [RVA 0x33E25B4]
// VideoPlayerController$$MNGKKMCBNCN @ RVA 0x33E25B4

System_String_o *
VideoPlayerController__MNGKKMCBNCN(VideoPlayerController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04567eaf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eaf = 1;
  }
  pUVar2 = (__this->fields)._VideoPlayer;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)
             UnityEngine_Video_VideoPlayer__get_clip(pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      if (!bVar1) {
        pSVar4 = UnityEngine_Video_VideoPlayer__get_url(pUVar2,(MethodInfo *)0x0);
        return pSVar4;
      }
      pUVar3 = (UnityEngine_Object_o *)
               UnityEngine_Video_VideoPlayer__get_clip(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Object_o *)0x0) {
        pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected static void JBJJOIHNIDF(VideoPlayerController CJNHFNHJHPE)  [RVA 0x33E2664]
// VideoPlayerController$$JBJJOIHNIDF @ RVA 0x33E2664

void VideoPlayerController__JBJJOIHNIDF(VideoPlayerController_o *CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04567eb0 & 1) == 0) {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04567eb0 = 1;
  }
  VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(VideoPlayerController_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== public void Play(string CKBGIKEFOMH, VideoClip NCALFHMFKLE, Action EBIHGBKNHMF)  [RVA 0x33E26BC]
// VideoPlayerController$$Play @ RVA 0x33E26BC

void VideoPlayerController__Play
               (VideoPlayerController_o *__this,System_String_o *CKBGIKEFOMH,
               UnityEngine_Video_VideoClip_o *NCALFHMFKLE,System_Action_o *EBIHGBKNHMF,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  MethodInfo *method_00;
  System_Action_o *method_01;
  
  method_00 = (MethodInfo *)NCALFHMFKLE;
  method_01 = EBIHGBKNHMF;
  if ((DAT_04567eb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eb1 = 1;
  }
  VideoPlayerController__JADIEOCNJBH(__this,EBIHGBKNHMF,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)NCALFHMFKLE,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pUVar2 = (__this->fields)._VideoPlayer;
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Video_VideoPlayer_o *)0x0) goto LAB_034e2790;
    UnityEngine_Video_VideoPlayer__set_source(pUVar2,0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    if (pUVar2 == (UnityEngine_Video_VideoPlayer_o *)0x0) goto LAB_034e2790;
    UnityEngine_Video_VideoPlayer__set_clip(pUVar2,NCALFHMFKLE,(MethodInfo *)0x0);
  }
  else {
    VideoPlayerController__GMAPIHHCJAO(__this,pUVar2,CKBGIKEFOMH,(MethodInfo *)method_01);
  }
  pUVar2 = (__this->fields)._VideoPlayer;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar2,(MethodInfo *)0x0);
    return;
  }
LAB_034e2790:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator ICKBAPOLICK()  [RVA 0x33E2160]
// VideoPlayerController$$ICKBAPOLICK @ RVA 0x33E2160

System_Collections_IEnumerator_o *
VideoPlayerController__ICKBAPOLICK(VideoPlayerController_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034e2160 to 035e2167 has its CatchHandler @ 034e2450 */
                    /* try { // try from 034e2168 to 035e2173 has its CatchHandler @ 034e2448 */
  if ((DAT_04567eb2 & 1) == 0) {
    FUN_01bab630(&VideoPlayerController_ICEHGLDMKOM_TypeInfo);
    DAT_04567eb2 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(VideoPlayerController_ICEHGLDMKOM_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
                    /* try { // try from 034e21b8 to 035e21db has its CatchHandler @ 034e2434 */
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== protected virtual bool IEOMFENOCGE()  [RVA 0x33E27BC]
// VideoPlayerController$$IEOMFENOCGE @ RVA 0x33E27BC

bool VideoPlayerController__IEOMFENOCGE(VideoPlayerController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyDown
                      (__this_00,0x1b,(MethodInfo *)0x0);
    if ((bVar1) || (bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar1)) {
      bVar1 = true;
    }
    else {
      iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      bVar1 = 0 < iVar2;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void NPDADBCINPL(bool CJNHFNHJHPE)  [RVA 0x33E1D08]
// VideoPlayerController$$NPDADBCINPL @ RVA 0x33E1D08

void VideoPlayerController__NPDADBCINPL(bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *x;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  
  if ((DAT_04567eb3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eb3 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034e1d48 to 035e1d53 has its CatchHandler @ 034e2468 */
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat != false)
  {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    }
    x = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 034e1d84 to 035e1d8f has its CatchHandler @ 034e2494 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (CJNHFNHJHPE) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034e1dd4 to 035e1ddf has its CatchHandler @ 034e246c */
        if (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat ==
            false) {
          return;
        }
        if (x == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
LAB_034e1e14:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UNRECOVERED_JUMPTABLE = (x->klass->vtable)._20_Show.methodPtr;
        pMVar2 = (x->klass->vtable)._20_Show.method;
      }
      else {
        if (x == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_034e1e14;
        UNRECOVERED_JUMPTABLE = (x->klass->vtable)._17_Hide.methodPtr;
        pMVar2 = (x->klass->vtable)._17_Hide.method;
      }
                    /* WARNING: Could not recover jumptable at 0x034e1e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(x,pMVar2);
      return;
    }
  }
  return;
}


// ===== protected void KNKHDOFPBOG(VideoPlayer NMGJDFJDKBF, string HONFNFNIBOB)  [RVA 0x33E2810]
// VideoPlayerController$$KNKHDOFPBOG @ RVA 0x33E2810

void VideoPlayerController__KNKHDOFPBOG
               (VideoPlayerController_o *__this,UnityEngine_Video_VideoPlayer_o *NMGJDFJDKBF,
               System_String_o *HONFNFNIBOB,MethodInfo *method)

{
  System_String_o *message;
  UnityEngine_Video_VideoPlayer_o *JGHIJMJNJLE;
  MethodInfo *method_00;
  
  if ((DAT_04567eb4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034e2854 to 035e285b has its CatchHandler @ 034e28ec */
    FUN_01bab630(&StringLiteral_15611/*"[VideoPlayerController] "*/);
    DAT_04567eb4 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  message = System_String__Concat(StringLiteral_15611/*"[VideoPlayerController] "*/,HONFNFNIBOB,(MethodInfo *)0x0);
                    /* try { // try from 034e2870 to 035e287b has its CatchHandler @ 034e28e4 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e2880 to 035e288b has its CatchHandler @ 034e28e0 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 034e288c to 035e2897 has its CatchHandler @ 034e28dc */
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
                    /* try { // try from 034e2898 to 035e28d3 has its CatchHandler @ 034e27b8 */
  if ((__this->fields)._LFALNJINAPO_k__BackingField != false) {
    VideoPlayerController__JLDEKOIIPDE(__this,JGHIJMJNJLE,method_00);
    return;
  }
  return;
}

