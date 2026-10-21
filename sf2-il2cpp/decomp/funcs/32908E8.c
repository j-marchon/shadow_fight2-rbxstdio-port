// Nekki.SF2.GUI.Map.ContentTourChallBoss$$OBAGNONDCCB @ RVA 0x32908E8

void Nekki_SF2_GUI_Map_ContentTourChallBoss__OBAGNONDCCB
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  APJKDKCGNHG_o *pAVar3;
  APJKDKCGNHG_CCPCHLLGJJE_o *pAVar4;
  APJKDKCGNHG_CCPCHLLGJJE_o **ppAVar5;
  APJKDKCGNHG_PABADKLLFHB_o *pAVar6;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *pNVar7;
  Il2CppObject *pIVar8;
  System_Object_array *pSVar9;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  
  if ((DAT_0456731a & 1) == 0) {
    FUN_01bab630(&APJKDKCGNHG_TypeInfo);
    FUN_01bab630(&APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_LJLLAKHOFFF_EIJGFNBCPLK__);
    FUN_01bab630(&Method_LJLLAKHOFFF_EIJGFNBCPLK__);
    FUN_01bab630(&Method_LJLLAKHOFFF_IFBBIDIEBEL__);
    FUN_01bab630(&Method_LJLLAKHOFFF_IFBBIDIEBEL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Clear__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&APJKDKCGNHG_PABADKLLFHB_TypeInfo);
    DAT_0456731a = 1;
  }
  pSVar11 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
  if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    length = (pSVar11->fields)._size;
    (pSVar11->fields)._size = 0;
    (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar11 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
    }
    pAVar3 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
    APJKDKCGNHG___ctor(pAVar3,(MethodInfo *)0x0);
    pNVar12 = (__this->fields)._lblDescription;
    pAVar4 = (APJKDKCGNHG_CCPCHLLGJJE_o *)thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
    APJKDKCGNHG_CCPCHLLGJJE___ctor
              (pAVar4,(Il2CppObject *)pNVar12,Method_LJLLAKHOFFF_EIJGFNBCPLK__,(MethodInfo *)0x0);
    if (pAVar3 != (APJKDKCGNHG_o *)0x0) {
      ppAVar5 = &(pAVar3->fields).PJIACDFEPAP;
      *ppAVar5 = pAVar4;
      thunk_FUN_01c20e04(ppAVar5,pAVar4);
      pNVar12 = (__this->fields)._lblDescription;
      pAVar6 = (APJKDKCGNHG_PABADKLLFHB_o *)thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
      APJKDKCGNHG_PABADKLLFHB___ctor
                (pAVar6,(Il2CppObject *)pNVar12,Method_LJLLAKHOFFF_IFBBIDIEBEL__,(MethodInfo *)0x0);
      (pAVar3->fields).GLGIFNCMMAK = pAVar6;
      thunk_FUN_01c20e04(&pAVar3->fields,pAVar6);
      lVar2 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
      if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar9 = (pSVar11->fields)._items;
        (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
        if (pSVar9 != (System_Object_array *)0x0) {
          uVar1 = (pSVar11->fields)._size;
          if (uVar1 < (uint)pSVar9->max_length) {
            (pSVar11->fields)._size = uVar1 + 1;
            pSVar9->m_Items[(int)uVar1] = (Il2CppObject *)pAVar3;
            thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1,pAVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar11,(Il2CppObject *)pAVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar11 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
          pAVar3 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
          APJKDKCGNHG___ctor(pAVar3,(MethodInfo *)0x0);
          pNVar7 = (__this->fields)._difficultyPanel;
          if (pNVar7 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
            pIVar8 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pNVar7,
                                Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
            pAVar4 = (APJKDKCGNHG_CCPCHLLGJJE_o *)
                     thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
            APJKDKCGNHG_CCPCHLLGJJE___ctor
                      (pAVar4,pIVar8,Method_LJLLAKHOFFF_EIJGFNBCPLK__,(MethodInfo *)0x0);
            if (pAVar3 != (APJKDKCGNHG_o *)0x0) {
              ppAVar5 = &(pAVar3->fields).PJIACDFEPAP;
              *ppAVar5 = pAVar4;
              thunk_FUN_01c20e04(ppAVar5,pAVar4);
              pNVar7 = (__this->fields)._difficultyPanel;
              if (pNVar7 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
                pIVar8 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pNVar7,
                                    Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
                pAVar6 = (APJKDKCGNHG_PABADKLLFHB_o *)
                         thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
                APJKDKCGNHG_PABADKLLFHB___ctor
                          (pAVar6,pIVar8,Method_LJLLAKHOFFF_IFBBIDIEBEL__,(MethodInfo *)0x0);
                (pAVar3->fields).GLGIFNCMMAK = pAVar6;
                thunk_FUN_01c20e04(&pAVar3->fields,pAVar6);
                lVar2 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
                if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
                  pSVar9 = (pSVar11->fields)._items;
                  (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                  if (pSVar9 != (System_Object_array *)0x0) {
                    uVar1 = (pSVar11->fields)._size;
                    if (uVar1 < (uint)pSVar9->max_length) {
                      (pSVar11->fields)._size = uVar1 + 1;
                      pSVar9->m_Items[(int)uVar1] = (Il2CppObject *)pAVar3;
                      thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1,pAVar3);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (pSVar11,(Il2CppObject *)pAVar3,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pMVar10 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
                    if (pMVar10 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                      (__this->fields).super.FDGAGAEIAOO =
                           (uint)((pMVar10->fields).CGEBFCBMLKC == 0);
                      Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF
                                ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Map_ContentToggle__JDPMKEABGPA
                                ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

