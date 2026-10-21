// OMANDMDCGMF$$EFHPGADJODB @ RVA 0x32995B8

int32_t OMANDMDCGMF__EFHPGADJODB
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t BIBGGHMEPBI,
                  int32_t HDLNCPGECMP,bool FKPFODHFEPE,
                  System_Collections_Generic_HashSet_char__array *OAFNLBMMPHJ,MethodInfo *method)

{
  uint16_t c;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_0456737f & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456737f = 1;
  }
  if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
LAB_033997a8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD(MMEECJEKHGB,(MethodInfo *)0x0);
  if (!bVar1) {
    if (FKPFODHFEPE) {
      iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
      iVar2 = System_Math__Min(HDLNCPGECMP + 1,iVar2,(MethodInfo *)0x0);
      index = BIBGGHMEPBI;
      if (BIBGGHMEPBI < iVar2) {
        do {
          pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
          if ((pSVar3 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                  (MethodInfo_26E4ADC *)
                                  Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                 ), pIVar4 == (Il2CppObject *)0x0)) goto LAB_033997a8;
          c = *(uint16_t *)((long)&pIVar4[1].klass + 4);
          if ((char_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(char_TypeInfo);
          }
          bVar1 = System_Char__IsUpper(c,(MethodInfo *)0x0);
          if (bVar1) {
            return index;
          }
          index = index + 1;
        } while (iVar2 != index);
      }
    }
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
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                               ), __this == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_033997a8;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
          if ((pSVar3 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
             (method_00 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__,
             pIVar4 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,BIBGGHMEPBI,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                ), pIVar4 == (Il2CppObject *)0x0)) goto LAB_033997a8;
          bVar1 = OMANDMDCGMF__GOIFPODNLCH
                            (*(uint16_t *)((long)&pIVar4[1].klass + 4),OAFNLBMMPHJ,method_00);
          if (!bVar1) {
            return BIBGGHMEPBI;
          }
        }
        BIBGGHMEPBI = BIBGGHMEPBI + 1;
      } while (iVar2 != BIBGGHMEPBI);
    }
  }
  return -1;
}

