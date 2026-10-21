// TypeDefIndex 1418
// Namespace: Nekki.SF2.GUI.Map
// public class ContentAscension : ContentToggle
// Fields:
//   public ProgressBricksPanel BricksPanel; // 0x58
//   public ImmunityPanel ImmunityPanel; // 0x60
//   public DifficultyPanel DifficultyPanel; // 0x68
//   public ResolutionImage RewardImage; // 0x70
//   public LabelAlias DescriptionLabel; // 0x78

// ===== public void .ctor()  [RVA 0x317F284]
// Nekki.SF2.GUI.Map.ContentAscension$$.ctor @ RVA 0x317F284

void Nekki_SF2_GUI_Map_ContentAscension___ctor
               (Nekki_SF2_GUI_Map_ContentAscension_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ContentToggle___ctor
            ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(OOMHDDBCBJP BANHBMINMMP, FightList AGONJKOMAAA)  [RVA 0x317F28C]
// Nekki.SF2.GUI.Map.ContentAscension$$Init @ RVA 0x317F28C

void Nekki_SF2_GUI_Map_ContentAscension__Init
               (Nekki_SF2_GUI_Map_ContentAscension_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               FightList_o *AGONJKOMAAA,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this_00;
  Nekki_SF2_GUI_Map_ImmunityPanel_o *__this_01;
  System_String_o *pSVar4;
  APJKDKCGNHG_o *pAVar5;
  APJKDKCGNHG_CCPCHLLGJJE_o *pAVar6;
  APJKDKCGNHG_CCPCHLLGJJE_o **ppAVar7;
  APJKDKCGNHG_PABADKLLFHB_o *pAVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_List_KCEKMOECEJK__o *pSVar10;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar11;
  System_Object_array *pSVar12;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *pNVar15;
  Nekki_SF2_GUI_LabelAlias_o *pNVar16;
  float OEBANKNLEMN;
  
  if ((DAT_045669af & 1) == 0) {
    FUN_01bab630(&APJKDKCGNHG_TypeInfo);
    FUN_01bab630(&APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_LJLLAKHOFFF_EIJGFNBCPLK__);
    FUN_01bab630(&Method_LJLLAKHOFFF_EIJGFNBCPLK__);
    FUN_01bab630(&Method_LJLLAKHOFFF_IFBBIDIEBEL__);
    FUN_01bab630(&Method_LJLLAKHOFFF_IFBBIDIEBEL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Clear__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&APJKDKCGNHG_PABADKLLFHB_TypeInfo);
    FUN_01bab630(&StringLiteral_22352/*"{0}.{1}"*/);
    FUN_01bab630(&StringLiteral_9080/*"MiscSprites"*/);
    DAT_045669af = 1;
  }
  __this_00 = (__this->fields).BricksPanel;
  if (((__this_00 != (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *)0x0) &&
      (Nekki_SF2_GUI_Map_ProgressBricksPanel__Init
                 (__this_00,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0),
      BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) &&
     (__this_01 = (__this->fields).ImmunityPanel,
     __this_01 != (Nekki_SF2_GUI_Map_ImmunityPanel_o *)0x0)) {
    Nekki_SF2_GUI_Map_ImmunityPanel__Init
              (__this_01,(BANHBMINMMP->fields).LNKEPHFHPLP,0.0,(MethodInfo *)0x0);
    pNVar15 = (__this->fields).DifficultyPanel;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OEBANKNLEMN = GameUtils__HLFLDFDKDFN(AGONJKOMAAA,(MethodInfo *)0x0);
    if ((pNVar15 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) &&
       (Nekki_SF2_GUI_Map_DifficultyPanel__Init(pNVar15,OEBANKNLEMN,(MethodInfo *)0x0),
       AGONJKOMAAA != (FightList_o *)0x0)) {
      pNVar16 = (__this->fields).DescriptionLabel;
      pSVar4 = FightList__CJPIFPJMENP(AGONJKOMAAA,(MethodInfo *)0x0);
      if (pNVar16 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar16,pSVar4,(MethodInfo *)0x0);
        pSVar10 = (__this->fields).super.MAPPKOGKCBA;
        if (pSVar10 != (System_Collections_Generic_List_KCEKMOECEJK__o *)0x0) {
          length = (pSVar10->fields)._size;
          (pSVar10->fields)._size = 0;
          (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,
                                (MethodInfo *)0x0);
          }
          bVar3 = System_String__IsNullOrEmpty((AGONJKOMAAA->fields).EJEIHIOJFON,(MethodInfo *)0x0);
          if (!bVar3) {
            pNVar11 = (__this->fields).RewardImage;
            if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0327f730;
            *(Il2CppObject **)&(pNVar11->fields).super.m_PixelsPerUnitMultiplier =
                 StringLiteral_9080/*"MiscSprites"*/;
            thunk_FUN_01c20e04(&(pNVar11->fields).super.m_PixelsPerUnitMultiplier);
            pNVar11 = (__this->fields).RewardImage;
            pSVar4 = System_String__Format
                               (StringLiteral_22352/*"{0}.{1}"*/,StringLiteral_9080/*"MiscSprites"*/,
                                (Il2CppObject *)(AGONJKOMAAA->fields).EJEIHIOJFON,(MethodInfo *)0x0)
            ;
            if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0327f730;
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar11,pSVar4,(MethodInfo *)0x0);
            pNVar11 = (__this->fields).RewardImage;
            if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0327f730;
            (*(pNVar11->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar11,(pNVar11->klass->vtable)._45_SetNativeSize.method);
          }
          pSVar14 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
          pAVar5 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
          APJKDKCGNHG___ctor(pAVar5,(MethodInfo *)0x0);
          pNVar16 = (__this->fields).DescriptionLabel;
          pAVar6 = (APJKDKCGNHG_CCPCHLLGJJE_o *)thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo)
          ;
          APJKDKCGNHG_CCPCHLLGJJE___ctor
                    (pAVar6,(Il2CppObject *)pNVar16,Method_LJLLAKHOFFF_EIJGFNBCPLK__,
                     (MethodInfo *)0x0);
          if (pAVar5 != (APJKDKCGNHG_o *)0x0) {
            ppAVar7 = &(pAVar5->fields).PJIACDFEPAP;
            *ppAVar7 = pAVar6;
            thunk_FUN_01c20e04(ppAVar7,pAVar6);
            pNVar16 = (__this->fields).DescriptionLabel;
            pAVar8 = (APJKDKCGNHG_PABADKLLFHB_o *)
                     thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
            APJKDKCGNHG_PABADKLLFHB___ctor
                      (pAVar8,(Il2CppObject *)pNVar16,Method_LJLLAKHOFFF_IFBBIDIEBEL__,
                       (MethodInfo *)0x0);
            (pAVar5->fields).GLGIFNCMMAK = pAVar8;
            thunk_FUN_01c20e04(&pAVar5->fields,pAVar8);
            lVar2 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
            if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
              pSVar12 = (pSVar14->fields)._items;
              (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
              if (pSVar12 != (System_Object_array *)0x0) {
                uVar1 = (pSVar14->fields)._size;
                if (uVar1 < (uint)pSVar12->max_length) {
                  (pSVar14->fields)._size = uVar1 + 1;
                  pSVar12->m_Items[(int)uVar1] = (Il2CppObject *)pAVar5;
                  thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar1,pAVar5);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar14,(Il2CppObject *)pAVar5,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                pSVar14 = (System_Collections_Generic_List_object__o *)
                          (__this->fields).super.MAPPKOGKCBA;
                pAVar5 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
                APJKDKCGNHG___ctor(pAVar5,(MethodInfo *)0x0);
                pNVar15 = (__this->fields).DifficultyPanel;
                if (pNVar15 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
                  pIVar9 = UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)pNVar15,
                                      Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
                  pAVar6 = (APJKDKCGNHG_CCPCHLLGJJE_o *)
                           thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
                  APJKDKCGNHG_CCPCHLLGJJE___ctor
                            (pAVar6,pIVar9,Method_LJLLAKHOFFF_EIJGFNBCPLK__,(MethodInfo *)0x0);
                  if (pAVar5 != (APJKDKCGNHG_o *)0x0) {
                    ppAVar7 = &(pAVar5->fields).PJIACDFEPAP;
                    *ppAVar7 = pAVar6;
                    thunk_FUN_01c20e04(ppAVar7,pAVar6);
                    pNVar15 = (__this->fields).DifficultyPanel;
                    if (pNVar15 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
                      pIVar9 = UnityEngine_Component__GetComponent<object>
                                         ((UnityEngine_Component_o *)pNVar15,
                                          Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
                      pAVar8 = (APJKDKCGNHG_PABADKLLFHB_o *)
                               thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
                      APJKDKCGNHG_PABADKLLFHB___ctor
                                (pAVar8,pIVar9,Method_LJLLAKHOFFF_IFBBIDIEBEL__,(MethodInfo *)0x0);
                      (pAVar5->fields).GLGIFNCMMAK = pAVar8;
                      thunk_FUN_01c20e04(&pAVar5->fields,pAVar8);
                      lVar2 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
                      if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
                        pSVar12 = (pSVar14->fields)._items;
                        (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                        if (pSVar12 != (System_Object_array *)0x0) {
                          uVar1 = (pSVar14->fields)._size;
                          if (uVar1 < (uint)pSVar12->max_length) {
                            (pSVar14->fields)._size = uVar1 + 1;
                            pSVar12->m_Items[(int)uVar1] = (Il2CppObject *)pAVar5;
                            thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar1,pAVar5);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      (pSVar14,(Il2CppObject *)pAVar5,
                                       *(MethodInfo_26E4DAC **)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          }
                          if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          pMVar13 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
                          if (pMVar13 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                            (__this->fields).super.FDGAGAEIAOO =
                                 (uint)((pMVar13->fields).CGEBFCBMLKC == 0);
                            Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF
                                      ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0
                                      );
                            Nekki_SF2_GUI_Map_ContentToggle__JDPMKEABGPA
                                      ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0
                                      );
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
      }
    }
  }
LAB_0327f730:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool IsParallelCrossFadeAlpha()  [RVA 0x317F734]
// Nekki.SF2.GUI.Map.ContentAscension$$IsParallelCrossFadeAlpha @ RVA 0x317F734

bool Nekki_SF2_GUI_Map_ContentAscension__IsParallelCrossFadeAlpha
               (Nekki_SF2_GUI_Map_ContentAscension_o *__this,MethodInfo *method)

{
  return true;
}


// ===== protected override void ELNCBEDOJED()  [RVA 0x317F73C]
// Nekki.SF2.GUI.Map.ContentAscension$$ELNCBEDOJED @ RVA 0x317F73C

void Nekki_SF2_GUI_Map_ContentAscension__ELNCBEDOJED
               (Nekki_SF2_GUI_Map_ContentAscension_o *__this,MethodInfo *method)

{
  EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
  return;
}

