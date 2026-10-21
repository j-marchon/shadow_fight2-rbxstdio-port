// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$GKHAKLDEIJI @ RVA 0x33B1508

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  bVar2 = Nekki_SF2_GUI_Common_TwoAxisControlHandler__JKGFHBLOFKM
                    (__this,AAJGEHHPMGH,(MethodInfo *)(ulong)(uint)OPHMGAKOJLP);
  if ((bVar2) &&
     (bVar2 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0), bVar2)) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      bVar2 = AKJJAPEHKCG__MNKFDLHJPAA(pUVar3,(MethodInfo *)0x0);
      if ((!bVar2) &&
         (bVar1 = (__this->fields).FPIJAPOMEHL,
         (__this->fields).MHEMJOAINGI.fields = (UnityEngine_Vector2_Fields)0x0, bVar1 != false)) {
        (__this->fields).FPIJAPOMEHL = false;
        (__this->fields).EMIDKCNCPLC = false;
      }
    }
  }
  return;
}

