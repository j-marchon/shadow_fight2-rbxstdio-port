// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$GetRandomItem @ RVA 0x32A6BB8

System_String_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetRandomItem
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_String_o *__this_00;
  BNAIBAODKAK_array *pBVar3;
  BNAIBAODKAK_o *__this_01;
  int iVar4;
  
  if ((DAT_045673fa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_20433);
    FUN_01bab630(&StringLiteral_17999);
    DAT_045673fa = 1;
  }
  pBVar3 = (__this->fields).DLCCJFCKAJL;
  if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
    iVar4 = 0x3ea;
    do {
      uVar2 = UnityEngine_Random__Range(0,(int32_t)pBVar3->max_length,(MethodInfo *)0x0);
      if ((uint)pBVar3->max_length <= uVar2) {
LAB_033a6cd8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_17999,(MethodInfo *)0x0);
        pBVar3 = (__this->fields).DLCCJFCKAJL;
        if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
          if ((int)pBVar3->max_length == 0) goto LAB_033a6cd8;
          __this_01 = pBVar3->m_Items[0];
          if (__this_01 != (BNAIBAODKAK_o *)0x0) {
LAB_033a6cc0:
            return (__this_01->fields).PKJEMIDJPAG;
          }
        }
        break;
      }
      __this_01 = pBVar3->m_Items[(int)uVar2];
      if (__this_01 == (BNAIBAODKAK_o *)0x0) break;
      bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(__this_01,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (__this_01->fields).PKJEMIDJPAG;
        if (__this_00 == (System_String_o *)0x0) break;
        bVar1 = System_String__Equals(__this_00,StringLiteral_20433,(MethodInfo *)0x0);
        if (!bVar1) goto LAB_033a6cc0;
      }
      pBVar3 = (__this->fields).DLCCJFCKAJL;
    } while (pBVar3 != (BNAIBAODKAK_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

