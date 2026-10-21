// Nekki.SF2.GUI.Map.InfoBattle$$CIHKNMDAPBG @ RVA 0x341885C

void Nekki_SF2_GUI_Map_InfoBattle__CIHKNMDAPBG
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  LabelButton_o *pLVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  Il2CppObject *pIVar9;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar10;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_01;
  HBNENINHPGF_o *pHVar11;
  EEGDOGKBLNG_o *pEVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Color_o CJNHFNHJHPE;
  UnityEngine_Color_o UVar19;
  int local_44;
  
  if ((DAT_045680ae & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_15842);
                    /* try { // try from 035188f8 to 03618a93 has its CatchHandler @ 035188f8
                       catch() { ... } // from try @ 035188f8 with catch @ 035188f8
                       catch() { ... } // from try @ 03518b9c with catch @ 035188f8
                       catch() { ... } // from try @ 03518bd4 with catch @ 035188f8
                       catch() { ... } // from try @ 03518c30 with catch @ 035188f8
                       catch() { ... } // from try @ 03518c60 with catch @ 035188f8 */
    FUN_01bab630(&StringLiteral_15853);
    FUN_01bab630(&StringLiteral_15852);
    DAT_045680ae = 1;
  }
  pLVar6 = (__this->fields)._btnFight;
  if (pLVar6 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(pLVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    pLVar6 = (__this->fields)._btnFight;
    if ((pLVar6 != (LabelButton_o *)0x0) &&
       (pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      if (AGONJKOMAAA != (AFFHKININGD_o *)0x0) {
        if ((AGONJKOMAAA->fields).JDNKKGPNHPB == 0x14) {
          if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
            bVar2 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
            if (bVar2 <= (BANHBMINMMP->klass->_2).naturalAligment) {
              if ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)OHDDKGHEEPA_TypeInfo) {
                BANHBMINMMP = (OOMHDDBCBJP_o *)0x0;
              }
              if ((OHDDKGHEEPA_o *)BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
                pSVar8 = (System_Collections_Generic_List_object__o *)
                         (*(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                                   (AGONJKOMAAA,(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.method);
                if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03518dac;
                if ((pSVar8->fields)._size == 0) {
                  pLVar6 = (__this->fields)._btnFight;
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                    /* try { // try from 03518c6c to 03618c73 has its CatchHandler @ 03518c74 */
                    /* catch() { ... } // from try @ 03518c58 with catch @ 03518c74
                       catch() { ... } // from try @ 03518c6c with catch @ 03518c74 */
                  LabelButton__set_Alias(pLVar6,StringLiteral_15842,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                  fVar15 = 0.0;
                  fVar16 = 0.0;
                  fVar17 = 0.0;
                  fVar18 = 1.0;
                }
                else {
                  pIVar9 = System_Collections_Generic_List<object>__get_Item
                                     (pSVar8,0,
                                      Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__
                                     );
                  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03518dac;
                  pSVar13 = pIVar9[5].monitor;
                  pIVar9 = System_Collections_Generic_List<object>__get_Item
                                     (pSVar8,0,
                                      Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__
                                     );
                  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03518dac;
                  iVar5 = *(int32_t *)&pIVar9[6].klass;
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                  }
                  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                  if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_03518dac;
                  pJVar10 = JMDPBFOCHHP__BHJOLIJDBLO(__this_00,pSVar13,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                  pSVar14 = StringLiteral_15842;
                  if (pJVar10 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0) {
                    pSVar14 = (pJVar10->fields).super.APBICPEOMOM;
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
                    }
                    pSVar14 = MGNPHCAAEIO__AFEAIGKCFBL(pSVar14,iVar5,1.0,(MethodInfo *)0x0);
                    pSVar14 = System_String__Concat(StringLiteral_15842,pSVar14,(MethodInfo *)0x0);
                  }
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                  LabelButton__set_Alias(pLVar6,pSVar14,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pEVar12 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar12 == (EEGDOGKBLNG_o *)0x0) goto LAB_03518dac;
                  iVar4 = EEGDOGKBLNG__APFFEAJBAEK(pEVar12,pSVar13,(MethodInfo *)0x0);
                  if (iVar4 < iVar5) {
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar19 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar18 = UVar19.fields.a;
                    fVar17 = UVar19.fields.b;
                    fVar16 = UVar19.fields.g;
                    fVar15 = UVar19.fields.r;
                  }
                  else {
                    fVar18 = 1.0;
                    fVar15 = 0.0;
                    fVar16 = 0.0;
                    fVar17 = 0.0;
                  }
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                }
                UVar19.fields.g = fVar16;
                UVar19.fields.r = fVar15;
                UVar19.fields.a = fVar18;
                UVar19.fields.b = fVar17;
                LabelButton__set_Color(pLVar6,UVar19,(MethodInfo *)0x0);
                pLVar6 = (__this->fields)._btnFight;
                if (pLVar6 != (LabelButton_o *)0x0) {
                  pUVar7 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                  }
                  pEVar12 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar12 != (EEGDOGKBLNG_o *)0x0) {
                    iVar5 = EEGDOGKBLNG__IGIHHCEONEM(pEVar12,(MethodInfo *)0x0);
                    bVar3 = OHDDKGHEEPA__BIFOFLHLABM
                                      ((OHDDKGHEEPA_o *)BANHBMINMMP,iVar5,(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar7,bVar3,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                goto LAB_03518dac;
              }
            }
          }
                    /* catch() { ... } // from try @ 03518c2c with catch @ 03518c50 */
                    /* try { // try from 03518c58 to 03618c5f has its CatchHandler @ 03518c74 */
                    /* try { // try from 03518c60 to 03618c6b has its CatchHandler @ 035188f8 */
          return;
        }
                    /* try { // try from 03518a94 to 03618a9b has its CatchHandler @ 03518c14 */
        bVar3 = AFFHKININGD__PHEKFMPOHBK(AGONJKOMAAA,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar8 = (System_Collections_Generic_List_object__o *)
                   (*(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                             (AGONJKOMAAA,(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.method);
                    /* try { // try from 03518ab4 to 03618abb has its CatchHandler @ 03518c10 */
                    /* try { // try from 03518ac8 to 03618acf has its CatchHandler @ 03518c08 */
          if ((pSVar8 != (System_Collections_Generic_List_object__o *)0x0) &&
             (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar8,0,
                                  Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__),
             pIVar9 != (Il2CppObject *)0x0)) {
            pSVar13 = pIVar9[5].monitor;
                    /* try { // try from 03518adc to 03618ae3 has its CatchHandler @ 03518c04 */
            pIVar9 = System_Collections_Generic_List<object>__get_Item
                               (pSVar8,0,
                                Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
            if (pIVar9 != (Il2CppObject *)0x0) {
                    /* try { // try from 03518aec to 03618af3 has its CatchHandler @ 03518bd8 */
              iVar1 = *(int *)&pIVar9[6].klass;
                    /* try { // try from 03518afc to 03618b03 has its CatchHandler @ 03518be0 */
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                    /* try { // try from 03518b08 to 03618b0f has its CatchHandler @ 03518be8 */
              }
              __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
                    /* try { // try from 03518b18 to 03618b1f has its CatchHandler @ 03518bfc */
                    /* try { // try from 03518b20 to 03618b2f has its CatchHandler @ 03518bec */
              if ((__this_01 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) &&
                 (pHVar11 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                                      (__this_01,pSVar13,(MethodInfo *)0x0),
                 pHVar11 != (HBNENINHPGF_o *)0x0)) {
                pLVar6 = (__this->fields)._btnFight;
                pSVar14 = (pHVar11->fields)._PGCEKJLODEJ_k__BackingField;
                local_44 = iVar1;
                    /* try { // try from 03518b3c to 03618b43 has its CatchHandler @ 03518bf8 */
                pIVar9 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
                    /* try { // try from 03518b48 to 03618b53 has its CatchHandler @ 03518be4 */
                    /* try { // try from 03518b60 to 03618b63 has its CatchHandler @ 03518bf0 */
                pSVar14 = System_String__Format
                                    (StringLiteral_15852,(Il2CppObject *)pSVar14,pIVar9,
                                     (MethodInfo *)0x0);
                    /* try { // try from 03518b68 to 03618b87 has its CatchHandler @ 03518c00 */
                if (pLVar6 != (LabelButton_o *)0x0) {
                  LabelButton__set_Alias(pLVar6,pSVar14,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                    /* try { // try from 03518b90 to 03618b9b has its CatchHandler @ 03518bf4 */
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                    /* try { // try from 03518b9c to 03618bcb has its CatchHandler @ 035188f8 */
                  pEVar12 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar12 != (EEGDOGKBLNG_o *)0x0) {
                    iVar5 = EEGDOGKBLNG__APFFEAJBAEK(pEVar12,pSVar13,(MethodInfo *)0x0);
                    if (iVar5 < iVar1) {
                      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03518bcc to 03618bcf has its CatchHandler @ 03518c0c */
                        thunk_FUN_01ba7564();
                      }
                    /* try { // try from 03518bd0 to 03618bd3 has its CatchHandler @ 03518bdc */
                    /* try { // try from 03518bd4 to 03618c2b has its CatchHandler @ 035188f8 */
                      UVar19 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                      fVar18 = UVar19.fields.a;
                      fVar17 = UVar19.fields.b;
                      fVar16 = UVar19.fields.g;
                      fVar15 = UVar19.fields.r;
                    /* catch() { ... } // from try @ 03518aec with catch @ 03518bd8 */
                    }
                    else {
                    /* try { // try from 03518c2c to 03618c2f has its CatchHandler @ 03518c50 */
                      fVar18 = 1.0;
                    /* try { // try from 03518c30 to 03618c57 has its CatchHandler @ 035188f8 */
                      fVar15 = 0.0;
                      fVar16 = 0.0;
                      fVar17 = 0.0;
                    }
                    if (pLVar6 != (LabelButton_o *)0x0) {
                      CJNHFNHJHPE.fields.g = fVar16;
                      CJNHFNHJHPE.fields.r = fVar15;
                      CJNHFNHJHPE.fields.a = fVar18;
                      CJNHFNHJHPE.fields.b = fVar17;
                      LabelButton__set_Color(pLVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          goto LAB_03518dac;
        }
      }
                    /* catch() { ... } // from try @ 03518bd0 with catch @ 03518bdc */
      pLVar6 = (__this->fields)._btnFight;
                    /* catch() { ... } // from try @ 03518afc with catch @ 03518be0 */
      if (pLVar6 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 03518b48 with catch @ 03518be4 */
                    /* catch() { ... } // from try @ 03518b08 with catch @ 03518be8 */
                    /* catch() { ... } // from try @ 03518b20 with catch @ 03518bec */
                    /* catch() { ... } // from try @ 03518b60 with catch @ 03518bf0 */
                    /* catch() { ... } // from try @ 03518b90 with catch @ 03518bf4 */
        LabelButton__set_Alias(pLVar6,StringLiteral_15853,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03518b3c with catch @ 03518bf8 */
        pLVar6 = (__this->fields)._btnFight;
                    /* catch() { ... } // from try @ 03518b18 with catch @ 03518bfc */
        if (pLVar6 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 03518b68 with catch @ 03518c00 */
                    /* catch() { ... } // from try @ 03518adc with catch @ 03518c04 */
                    /* catch() { ... } // from try @ 03518ac8 with catch @ 03518c08 */
                    /* catch() { ... } // from try @ 03518bcc with catch @ 03518c0c */
                    /* catch() { ... } // from try @ 03518ab4 with catch @ 03518c10 */
                    /* catch() { ... } // from try @ 03518a94 with catch @ 03518c14 */
          LabelButton__set_Color
                    (pLVar6,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03518dac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

