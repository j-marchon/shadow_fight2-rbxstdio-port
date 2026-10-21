// OMANDMDCGMF$$LBEILMMCDGJ @ RVA 0x3299010

int32_t OMANDMDCGMF__LBEILMMCDGJ
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t BIBGGHMEPBI,
                  int32_t HDLNCPGECMP,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar3;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this;
  Il2CppObject *pIVar4;
  
  if ((DAT_04567391 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567391 = 1;
  }
  if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
LAB_0339911c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD(MMEECJEKHGB,(MethodInfo *)0x0);
  if (!bVar1) {
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    iVar2 = System_Math__Min(HDLNCPGECMP + 1,iVar2,(MethodInfo *)0x0);
    if (BIBGGHMEPBI < iVar2) {
      do {
        pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((pSVar3 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (__this = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,BIBGGHMEPBI,
                                Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                               ), __this == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_0339911c;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
          if ((pSVar3 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) &&
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,BIBGGHMEPBI,
                                  Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                 ), pIVar4 != (Il2CppObject *)0x0)) {
            return *(int32_t *)&pIVar4[1].klass;
          }
          goto LAB_0339911c;
        }
        BIBGGHMEPBI = BIBGGHMEPBI + 1;
      } while (iVar2 != BIBGGHMEPBI);
    }
  }
  return -1;
}

