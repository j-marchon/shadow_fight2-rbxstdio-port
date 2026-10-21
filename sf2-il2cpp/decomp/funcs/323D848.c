// Nekki.SF2.GUI.SFScrollRect$$CMDGHBNNBGN @ RVA 0x323D848

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_SFScrollRect__CMDGHBNNBGN
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  float fVar3;
  
  if ((DAT_0456706c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_0456706c = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    fVar3 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
    fVar2 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
                    /* try { // try from 0333d8ac to 0343d8b7 has its CatchHandler @ 0333e6e0 */
                    /* try { // try from 0333d8b8 to 0343e6f7 has its CatchHandler @ 0333d4c4 */
    bVar1 = fVar3 + fVar3 + 0.01 < fVar2 + fVar2;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

