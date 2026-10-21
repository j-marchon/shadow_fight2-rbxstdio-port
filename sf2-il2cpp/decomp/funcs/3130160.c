// Nekki.SF2.GUI.Fight.EndPvpFightContent$$.cctor @ RVA 0x3130160

void Nekki_SF2_GUI_Fight_EndPvpFightContent___cctor(MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Color_array *pUVar5;
  BHEDGAKGKPO_StaticFields *pBVar6;
  
  if ((DAT_045666c2 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Color___TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo);
    DAT_045666c2 = 1;
  }
  pUVar5 = (UnityEngine_Color_array *)FUN_01bab718(UnityEngine_Color___TypeInfo,2);
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
  }
  if (pUVar5 != (UnityEngine_Color_array *)0x0) {
    iVar1 = (int)pUVar5->max_length;
    if (iVar1 != 0) {
      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
      fVar2 = (pBVar6->LPAFCDMEJBJ).fields.a;
      fVar3 = (pBVar6->LPAFCDMEJBJ).fields.r;
      fVar4 = (pBVar6->LPAFCDMEJBJ).fields.g;
      pUVar5->m_Items[0].fields.b = (pBVar6->LPAFCDMEJBJ).fields.b;
      pUVar5->m_Items[0].fields.a = fVar2;
      pUVar5->m_Items[0].fields.r = fVar3;
      pUVar5->m_Items[0].fields.g = fVar4;
      if (iVar1 != 1) {
        pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
        fVar2 = (pBVar6->NEKDOPHPJED).fields.a;
        fVar3 = (pBVar6->NEKDOPHPJED).fields.r;
        fVar4 = (pBVar6->NEKDOPHPJED).fields.g;
        pUVar5->m_Items[1].fields.b = (pBVar6->NEKDOPHPJED).fields.b;
        pUVar5->m_Items[1].fields.a = fVar2;
        pUVar5->m_Items[1].fields.r = fVar3;
        pUVar5->m_Items[1].fields.g = fVar4;
        Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->static_fields->MDOPFPPIGPC = pUVar5;
        thunk_FUN_01c20e04(Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->static_fields,pUVar5);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

