// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$MNHPOELABEN @ RVA 0x30D6A4C

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__MNHPOELABEN
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *EIJDDKJONFO;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar2;
  CocosAnimation_o *pCVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04566334 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_FMCAPKDNGLH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12922);
    DAT_04566334 = 1;
    method = extraout_x1;
  }
  pCVar3 = (__this->fields)._chestAnimation;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pJVar2 = (__this->fields).KBMOPEKFNNN;
  if (pJVar2 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((pJVar2->fields).ICGHMKGHKEH,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pJVar2 = (__this->fields).KBMOPEKFNNN;
    if (pJVar2 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
      pCVar3 = (__this->fields)._chestAnimation;
      EIJDDKJONFO = System_String__Concat
                              (StringLiteral_12922,(pJVar2->fields).ICGHMKGHKEH,(MethodInfo *)0x0);
      if (pCVar3 != (CocosAnimation_o *)0x0) {
        CocosAnimation__Init(pCVar3,EIJDDKJONFO,0,(System_String_o *)0x0,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._chestAnimation;
        if (pCVar3 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetFramesRange(pCVar3,0,-1,(MethodInfo *)0x0);
          pCVar3 = (__this->fields)._chestAnimation;
          if (pCVar3 != (CocosAnimation_o *)0x0) {
            __this_00 = (pCVar3->fields).OnAnimationComplete;
            (pCVar3->fields)._PPEGDOHGLJJ_k__BackingField = 0.081;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__FMCAPKDNGLH(__this,method_00);
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

