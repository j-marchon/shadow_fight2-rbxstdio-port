// OMANDMDCGMF$$ANKNICPHMCM @ RVA 0x329B4E8

float OMANDMDCGMF__ANKNICPHMCM(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  int index;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04567390 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567390 = 1;
  }
  if (MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      fVar8 = 0.0;
    }
    else {
      index = 0;
      fVar8 = 0.0;
      do {
        __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (__this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this,index,
                                   Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                  ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_0339b628;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
        fVar7 = fVar8;
        if (bVar1) {
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_0339b628;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + 2,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (((pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
              (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + 3,
                                   Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
              pIVar4 == (Il2CppObject *)0x0)) || (pIVar5 == (Il2CppObject *)0x0)) goto LAB_0339b628;
          fVar7 = *(float *)((long)&pIVar4[1].klass + 4) - *(float *)((long)&pIVar5[1].klass + 4);
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
        }
        fVar8 = fVar7;
        index = index + 1;
      } while (iVar2 != index);
    }
    return fVar8;
  }
LAB_0339b628:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

