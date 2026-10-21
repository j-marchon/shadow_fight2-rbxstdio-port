// OMANDMDCGMF$$FIGODBIGEIC @ RVA 0x3299DD0

float OMANDMDCGMF__FIGODBIGEIC
                (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,
                Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *NFNNIOEGDBG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  int index;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04567382 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567382 = 1;
  }
  if (NFNNIOEGDBG != (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) {
    index = (NFNNIOEGDBG->fields)._LKDPNJEBNFO_k__BackingField;
    fVar7 = 0.0;
    iVar1 = (NFNNIOEGDBG->fields)._BNEEPBICADN_k__BackingField + 1;
    if (index < iVar1) {
      if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) goto LAB_03399f08;
      fVar8 = 0.0;
      do {
        __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (__this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this,index,
                                   Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                  ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_03399f08;
        bVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
        fVar7 = fVar8;
        if (bVar2) {
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_03399f08;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + -3,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (((pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
              (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,iVar3,
                                   Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
              pIVar5 == (Il2CppObject *)0x0)) || (pIVar4 == (Il2CppObject *)0x0)) goto LAB_03399f08;
          fVar7 = ABS(*(float *)((long)&pIVar5[1].klass + 4) -
                      *(float *)((long)&pIVar4[1].klass + 4));
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
        }
        index = index + 1;
        fVar8 = fVar7;
      } while (iVar1 != index);
    }
    return fVar7;
  }
LAB_03399f08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

