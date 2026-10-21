// OMANDMDCGMF$$CLBEEDGBPKJ @ RVA 0x3298888

int32_t OMANDMDCGMF__CLBEEDGBPKJ
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t OKLGEACMDEK,
                  int32_t BNLIAKKMPBL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar5;
  int iVar6;
  
  if ((DAT_0456737d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_0456737d = 1;
  }
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (pSVar5 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
     pSVar5 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    iVar6 = 0;
    if ((3 < (pSVar5->fields)._size) && (OKLGEACMDEK < BNLIAKKMPBL + 1)) {
      iVar6 = 0;
      do {
        __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if (__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)
        goto LAB_033989f0;
        __this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this,OKLGEACMDEK,
                               Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                              );
        if (__this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0) goto LAB_033989f0;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar5 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_00,(MethodInfo *)0x0);
          if (pSVar5 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033989f0;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,iVar2 + -1,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
          pSVar5 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_00,(MethodInfo *)0x0);
          if (((pSVar5 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
              (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar5,iVar2,
                                   Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
              pIVar3 == (Il2CppObject *)0x0)) || (pIVar4 == (Il2CppObject *)0x0)) goto LAB_033989f0;
          bVar1 = Util__JFJCDAJGFKD(*(float *)&pIVar3[1].klass,*(float *)&pIVar4[1].klass,0.001,
                                    (MethodInfo *)0x0);
          iVar6 = iVar6 + (~(uint)bVar1 & 1);
        }
        OKLGEACMDEK = OKLGEACMDEK + 1;
      } while (BNLIAKKMPBL + 1 != OKLGEACMDEK);
    }
    return iVar6;
  }
LAB_033989f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

