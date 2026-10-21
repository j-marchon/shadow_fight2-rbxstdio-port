// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$NDEMAGDMIEB @ RVA 0x35CEC54

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__NDEMAGDMIEB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Collections_Generic_List_IILNJJJFGLL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  JMDPBFOCHHP_o *pJVar4;
  AAFFHLFBLFN_o *__this_00;
  Il2CppObject *pIVar5;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *pSVar7;
  IILNJJJFGLL_array *pIVar8;
  int index;
  JMDPBFOCHHP_ONCGGLEAIFH_o *pJVar9;
  Il2CppClass *pIVar10;
  
  if ((DAT_04568fc4 & 1) == 0) {
    FUN_01bab630(&AAFFHLFBLFN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__);
    DAT_04568fc4 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar6 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
       pJVar6 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) &&
      (pJVar9 = (pJVar6->fields).OOFDKPAOGFA, pJVar9 != (JMDPBFOCHHP_ONCGGLEAIFH_o *)0x0)) &&
     (pSVar7 = (pJVar9->fields).DFIBIHHGIPG,
     pSVar7 != (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0)) {
    iVar1 = (pSVar7->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        __this_00 = (AAFFHLFBLFN_o *)thunk_FUN_01bda818(AAFFHLFBLFN_TypeInfo);
        AAFFHLFBLFN___ctor(__this_00,(MethodInfo *)0x0);
        pSVar7 = (pJVar9->fields).DFIBIHHGIPG;
        if ((pSVar7 == (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0) ||
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                               ), pIVar5 == (Il2CppObject *)0x0)) goto LAB_036cee0c;
        pIVar10 = pIVar5[1].klass;
        if (__this_00 == (AAFFHLFBLFN_o *)0x0) goto LAB_036cee0c;
        *(void **)&(__this_00->fields).EPLJHNBLKKI.fields.b = pIVar5[1].monitor;
        *(Il2CppClass **)&(__this_00->fields).EPLJHNBLKKI.fields = pIVar10;
        pSVar7 = (pJVar9->fields).DFIBIHHGIPG;
        if ((pSVar7 == (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0) ||
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                               ), pIVar5 == (Il2CppObject *)0x0)) goto LAB_036cee0c;
        pIVar10 = pIVar5[2].klass;
        *(void **)&(__this_00->fields).GKKDMAOLODL.fields.b = pIVar5[2].monitor;
        *(Il2CppClass **)&(__this_00->fields).GKKDMAOLODL.fields = pIVar10;
        lVar3 = Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__;
        if (GHAAKPDHIJJ == (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0) goto LAB_036cee0c;
        pIVar8 = (GHAAKPDHIJJ->fields)._items;
        (GHAAKPDHIJJ->fields)._version = (GHAAKPDHIJJ->fields)._version + 1;
        if (pIVar8 == (IILNJJJFGLL_array *)0x0) goto LAB_036cee0c;
        uVar2 = (GHAAKPDHIJJ->fields)._size;
        if (uVar2 < (uint)pIVar8->max_length) {
          (GHAAKPDHIJJ->fields)._size = uVar2 + 1;
          pIVar8->m_Items[(int)uVar2] = (IILNJJJFGLL_o *)__this_00;
          thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
LAB_036cee0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

