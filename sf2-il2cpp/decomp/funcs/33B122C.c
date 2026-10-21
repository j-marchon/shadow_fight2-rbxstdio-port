// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$BEBGOPNMHON @ RVA 0x33B122C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__BEBGOPNMHON
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,float GKNIEGGEIFD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Vector2_o *pUVar3;
  
  bVar1 = Nekki_SF2_GUI_Common_TwoAxisControlHandler__JKGFHBLOFKM
                    (__this,AAJGEHHPMGH,(MethodInfo *)(ulong)(uint)OPHMGAKOJLP);
  if ((bVar1) &&
     (bVar1 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0), bVar1)) {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 034b1290 to 035b12b7 has its CatchHandler @ 034b1c80 */
      if (!bVar1) {
        if ((uint)AAJGEHHPMGH < 6) {
          if ((1 << (ulong)(AAJGEHHPMGH & 0x1f) & 0x15U) == 0) {
            pUVar3 = (UnityEngine_Vector2_o *)&(__this->fields).MHEMJOAINGI.fields.y;
          }
          else {
            pUVar3 = &(__this->fields).MHEMJOAINGI;
          }
          (pUVar3->fields).x = GKNIEGGEIFD;
        }
        if ((__this->fields).FPIJAPOMEHL == false) {
          (__this->fields).FPIJAPOMEHL = true;
        }
      }
    }
  }
  return;
}

