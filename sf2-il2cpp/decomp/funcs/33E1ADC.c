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
  FGKGKDEJCOG_o *__this_01;
  
                    /* try { // try from 034e1af0 to 035e1b17 has its CatchHandler @ 034e24dc */
  if ((DAT_04567ea8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14793);
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
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
      if (__this_01 == (FGKGKDEJCOG_o *)0x0) goto LAB_034e1d04;
      FGKGKDEJCOG__CODMHIEOCJM(__this_01,KGLJICLJHEL,(MethodInfo *)0x0);
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
      UnityEngine_Debug__Log(StringLiteral_14793,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034e1d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

