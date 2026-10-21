// Nekki.SF2.GUI.Map.BattleButton$$GFFKCDMGLNJ @ RVA 0x3474E40

/* WARNING: Removing unreachable block (ram,0x03574bcc) */

void Nekki_SF2_GUI_Map_BattleButton__GFFKCDMGLNJ
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,float KEFILECBPMF,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04568320 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    DAT_04568320 = 1;
    method = extraout_x1;
  }
  fVar4 = (__this->fields).JDELEHBCIHA;
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo,method);
    DAT_045602fa = '\x01';
  }
  fVar2 = ABS(fVar4);
  if (fVar2 <= ABS(KEFILECBPMF)) {
    fVar2 = ABS(KEFILECBPMF);
  }
  fVar3 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar1 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar3) {
    fVar1 = fVar3;
  }
  if (fVar1 <= ABS(KEFILECBPMF - fVar4)) {
    if (KEFILECBPMF < 0.0) {
      KEFILECBPMF = 0.0;
    }
    (__this->fields).JDELEHBCIHA = KEFILECBPMF;
    __this_00 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,
                           Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_CanvasGroup__set_alpha(__this_00,(__this->fields).JDELEHBCIHA,(MethodInfo *)0x0);
    return;
  }
  return;
}

