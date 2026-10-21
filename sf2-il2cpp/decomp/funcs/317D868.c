// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$set_Color @ RVA 0x317D868

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__set_Color
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,
               UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  
  pUVar1 = (__this->fields).ICLKKKJNGGO;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_startColor(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).ICLKKKJNGGO;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_endColor(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

