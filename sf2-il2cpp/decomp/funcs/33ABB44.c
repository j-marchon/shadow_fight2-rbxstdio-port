// Nekki.SF2.GUI.Fight.RaidDamageResultContent$$HCIIGPFJFDO @ RVA 0x33ABB44

void Nekki_SF2_GUI_Fight_RaidDamageResultContent__HCIIGPFJFDO
               (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  int64_t iVar3;
  Il2CppObject *arg1;
  MethodInfo *extraout_x1;
  int32_t *piVar4;
  System_String_o *pSVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_04567d0f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22448);
    DAT_04567d0f = 1;
    method = extraout_x1;
  }
  pNVar6 = (__this->fields)._HintText;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    iVar3 = OOBBAGLCFPF__EMCFJLGHAOE((pCVar2->fields).AABMLCNHHPN,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._HintText;
    if ((float)(int)((float)iVar3 / 1000.0) <= 0.0) {
      pSVar5 = (__this->fields)._RaidFightTimeout;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_28 = LIIFLGALGNK__HLMBDJOGONJ(1,5,(MethodInfo *)0x0);
      piVar4 = &local_28;
    }
    else {
      pSVar5 = (__this->fields)._RaidRoundAdvice;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_24 = LIIFLGALGNK__HLMBDJOGONJ(1,8,(MethodInfo *)0x0);
      piVar4 = &local_24;
    }
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,piVar4);
    pSVar5 = System_String__Format
                       (StringLiteral_22448,(Il2CppObject *)pSVar5,arg1,(MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

