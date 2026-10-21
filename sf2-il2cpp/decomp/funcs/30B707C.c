// Nekki.SF2.GUI.TextPic$$IHAENEAJGBH @ RVA 0x30B707C

void Nekki_SF2_GUI_TextPic__IHAENEAJGBH
               (Nekki_SF2_GUI_TextPic_o *__this,Nekki_SF2_GUI_Glyphs_Glyph_o *GMKMNGAHIME,
               MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  uint uVar3;
  System_Action_o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Vector3_StaticFields *pUVar9;
  BOGDEGPCIJI_o *__this_00;
  float fVar10;
  float GANJLDMKLAE;
  float fVar11;
  float fVar12;
  float AFLKEKAJJEA;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_o UVar15;
  UnityEngine_Vector3_o MJBMLNKAPGC;
  UnityEngine_Vector3_o MJBMLNKAPGC_00;
  
                    /* try { // try from 031b707c to 032b70af has its CatchHandler @ 031b68b4 */
                    /* catch() { ... } // from try @ 031b7024 with catch @ 031b7084 */
                    /* catch() { ... } // from try @ 031b6db8 with catch @ 031b7088 */
                    /* catch() { ... } // from try @ 031b6d90 with catch @ 031b708c */
                    /* catch() { ... } // from try @ 031b6d5c with catch @ 031b7090 */
                    /* catch() { ... } // from try @ 031b6d00 with catch @ 031b7094 */
  method_00 = (MethodInfo *)GMKMNGAHIME;
  if ((DAT_04566201 & 1) == 0) {
                    /* try { // try from 031b70b0 to 032b70b3 has its CatchHandler @ 031b70c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
                    /* catch() { ... } // from try @ 031b70b0 with catch @ 031b70c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04566201 = 1;
    method_00 = extraout_x1;
  }
  if (GMKMNGAHIME != (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) {
                    /* try { // try from 031b70d8 to 032b7147 has its CatchHandler @ 031b715c */
    iVar1 = (GMKMNGAHIME->fields)._HEJNKDEACJE_k__BackingField;
    if (iVar1 < 0) {
                    /* try { // try from 031b7148 to 032b7153 has its CatchHandler @ 031b68b4 */
      return;
    }
    pSVar4 = (__this->fields).NFECDKAEFJL;
    if (pSVar4 != (System_Action_o *)0x0) {
      iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                        ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar4,method_00);
      if (iVar2 <= iVar1) {
        return;
      }
      pSVar4 = (__this->fields).NFECDKAEFJL;
      if (((pSVar4 != (System_Action_o *)0x0) &&
          (pSVar5 = (System_Collections_Generic_List_object__o *)
                    (pSVar4->fields).super.super.invoke_impl,
          pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) &&
         (pIVar6 = System_Collections_Generic_List<object>__get_Item
                             (pSVar5,(GMKMNGAHIME->fields)._CBEOMKIMKNO_k__BackingField,
                              Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                             ), pIVar6 != (Il2CppObject *)0x0)) {
        if (*(char *)((long)&pIVar6[1].monitor + 6) == '\0') {
          return;
        }
        if (*(char *)((long)&pIVar6[1].monitor + 4) != '\0') {
          return;
        }
        pSVar4 = (__this->fields).NFECDKAEFJL;
                    /* try { // try from 031b7154 to 032b715b has its CatchHandler @ 031b715c */
        if ((pSVar4 != (System_Action_o *)0x0) &&
           (pSVar5 = (System_Collections_Generic_List_object__o *)
                     (pSVar4->fields).super.super.method,
           pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
                    /* catch() { ... } // from try @ 031b7078 with catch @ 031b715c
                       catch() { ... } // from try @ 031b70d8 with catch @ 031b715c
                       catch() { ... } // from try @ 031b7154 with catch @ 031b715c */
                    /* try { // try from 031b7160 to 032b7337 has its CatchHandler @ 031b7160
                       catch() { ... } // from try @ 031b7160 with catch @ 031b7160
                       catch() { ... } // from try @ 031b7388 with catch @ 031b7160
                       catch() { ... } // from try @ 031b73d0 with catch @ 031b7160
                       catch() { ... } // from try @ 031b7634 with catch @ 031b7160
                       catch() { ... } // from try @ 031b76bc with catch @ 031b7160
                       catch() { ... } // from try @ 031b77a8 with catch @ 031b7160
                       catch() { ... } // from try @ 031b77dc with catch @ 031b7160
                       catch() { ... } // from try @ 031b7844 with catch @ 031b7160 */
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             (pSVar5,(GMKMNGAHIME->fields)._HEJNKDEACJE_k__BackingField,
                              Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                             );
          if (DAT_0455fa77 == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa77 = '\x01';
          }
          pSVar4 = (__this->fields).NFECDKAEFJL;
          if ((pSVar4 != (System_Action_o *)0x0) &&
             (pSVar5 = (System_Collections_Generic_List_object__o *)
                       (pSVar4->fields).super.super.m_target,
             pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
            pUVar9 = UnityEngine_Vector3_TypeInfo->static_fields;
            fVar10 = (pUVar9->zeroVector).fields.x;
            fVar12 = (pUVar9->zeroVector).fields.y;
            fVar11 = (pUVar9->zeroVector).fields.z;
            pIVar8 = System_Collections_Generic_List<object>__get_Item
                               (pSVar5,*(int *)&pIVar6[1].monitor << 2 | 3,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               ((pSVar4 = (__this->fields).NFECDKAEFJL, pSVar4 != (System_Action_o *)0x0 &&
                (pSVar5 = (System_Collections_Generic_List_object__o *)
                          (pSVar4->fields).super.super.m_target,
                pSVar5 != (System_Collections_Generic_List_object__o *)0x0)))) {
              fVar13 = *(float *)&pIVar8[1].klass;
              pIVar8 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar5,*(int *)&pIVar6[1].monitor << 2 | 2,
                                  Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
              if ((pIVar8 != (Il2CppObject *)0x0) &&
                 (__this_00 = (GMKMNGAHIME->fields)._FAPFIEABBBO_k__BackingField,
                 __this_00 != (BOGDEGPCIJI_o *)0x0)) {
                fVar14 = *(float *)&pIVar8[1].klass;
                UVar15 = BOGDEGPCIJI__GCMGMGMCMNK(__this_00,(MethodInfo *)0x0);
                uVar3 = UnityEngine_UI_Text__get_alignment
                                  ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
                GANJLDMKLAE = fVar10;
                AFLKEKAJJEA = fVar10;
                if (uVar3 < 9) {
                  uVar3 = 1 << (ulong)(uVar3 & 0x1f);
                  AFLKEKAJJEA = UVar15.fields.x - ABS(fVar13 - fVar14);
                  if ((uVar3 & 0x49) == 0) {
                    if ((uVar3 & 0x92) == 0) {
                      GANJLDMKLAE = -AFLKEKAJJEA;
                      AFLKEKAJJEA = fVar10;
                    }
                    else {
                      GANJLDMKLAE = AFLKEKAJJEA * -0.5;
                      AFLKEKAJJEA = AFLKEKAJJEA * 0.5;
                    }
                  }
                }
                if (pIVar7 != (Il2CppObject *)0x0) {
                  MJBMLNKAPGC.fields.y = fVar12;
                  MJBMLNKAPGC.fields.x = GANJLDMKLAE;
                  MJBMLNKAPGC.fields.z = fVar11;
                  OMANDMDCGMF__EJKENGNOLPL
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                             *(int32_t *)&pIVar7[1].klass,*(int *)&pIVar6[1].klass + -1,MJBMLNKAPGC,
                             (MethodInfo *)0x0);
                  MJBMLNKAPGC_00.fields.y = fVar12;
                  MJBMLNKAPGC_00.fields.x = AFLKEKAJJEA;
                  MJBMLNKAPGC_00.fields.z = fVar11;
                  OMANDMDCGMF__EJKENGNOLPL
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                             *(int *)&pIVar6[1].klass + 1,*(int32_t *)((long)&pIVar7[1].klass + 4),
                             MJBMLNKAPGC_00,(MethodInfo *)0x0);
                  OMANDMDCGMF__JINKFEFKLCA
                            ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                             *(int *)&pIVar6[1].monitor << 2 | 3,GANJLDMKLAE,AFLKEKAJJEA,
                             (MethodInfo *)0x0);
                  return;
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

