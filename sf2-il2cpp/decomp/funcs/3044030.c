// PJKHAJKEHEL$$JDGECJMGKLK @ RVA 0x3044030

void PJKHAJKEHEL__JDGECJMGKLK
               (PJKHAJKEHEL_o *__this,System_Collections_Generic_List_JCHNBADDBGO__o *HNHFCBOGGAO,
               int32_t ODIAFMNGOLA,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  int iVar6;
  GGHCLMEFIGO_o *pGVar7;
  IGFGDDANEPE_o *pIVar8;
  DOPEEDABNEK_o *__this_00;
  Il2CppClass *__this_01;
  ACHLOMELAJE_o *pAVar9;
  Il2CppClass *pIVar10;
  System_Object_array *args;
  PJKHAJKEHEL_o *pPVar11;
  HOOAAGABMBL_o *pHVar12;
  IGFGDDANEPE_o *pIVar13;
  undefined8 uVar14;
  MethodInfo *pMVar15;
  int iVar16;
  char *pcVar17;
  long lVar18;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_String_o *value;
  Il2CppClass *pIVar19;
  ACHLOMELAJE_o *pAVar20;
  undefined1 local_a8 [16];
  Il2CppClass *local_98;
  HOOAAGABMBL_o *local_90;
  HOOAAGABMBL_o *local_88;
  undefined1 local_80 [8];
  char *pcStack_78;
  Il2CppClass *local_70;
  
  if ((DAT_04565dc1 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<HOOAAGABMBL>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_298);
    FUN_01bab630(&StringLiteral_299);
    FUN_01bab630(&StringLiteral_5235);
    DAT_04565dc1 = 1;
  }
  local_80 = (undefined1  [8])0x0;
  pcStack_78 = (char *)0x0;
  local_70 = (Il2CppClass *)0x0;
  local_90 = (HOOAAGABMBL_o *)0x0;
  local_88 = (HOOAAGABMBL_o *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (HNHFCBOGGAO == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
             (System_Collections_Generic_List_object__o *)HNHFCBOGGAO,
             Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
  pcStack_78 = (char *)local_a8._8_8_;
  local_80 = (undefined1  [8])local_a8._0_8_;
  local_70 = local_98;
LAB_031441bc:
  bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                     Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
  pIVar10 = local_70;
  if (!bVar2) {
    System_Collections_Generic_List_Enumerator<object>__Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
    return;
  }
  if (0 < ODIAFMNGOLA) goto code_r0x031441d8;
  if (local_70 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_031441f8;
code_r0x031441d8:
  if (local_70 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = AJNNHGGLGIF__OLKDJEKDIJB((AJNNHGGLGIF_o *)local_70,ODIAFMNGOLA,(MethodInfo *)0x0);
  if (!bVar2) goto LAB_031441bc;
LAB_031441f8:
  pIVar19 = (pIVar10->_1).parent;
  if (pIVar19 == (Il2CppClass *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogWarning(StringLiteral_299,(MethodInfo *)0x0);
    goto LAB_031441bc;
  }
  value = (System_String_o *)(pIVar19->_1).name;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) goto LAB_031441bc;
  if (pAVar20 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pGVar7 = (pAVar20->fields).OIDPLCLELEN;
  if (pGVar7 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar8 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar7,value,(MethodInfo *)0x0);
  if (pIVar8 == (IGFGDDANEPE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03144274 to 0324431b has its CatchHandler @ 03144274
                       catch() { ... } // from try @ 03144274 with catch @ 03144274
                       catch() { ... } // from try @ 0314446c with catch @ 03144274
                       catch() { ... } // from try @ 031444d4 with catch @ 03144274
                       catch() { ... } // from try @ 0314451c with catch @ 03144274
                       catch() { ... } // from try @ 03144548 with catch @ 03144274 */
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_00 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this_00,value,(MethodInfo *)0x0);
    if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((value != (System_String_o *)0x0) &&
         (lVar18 = thunk_FUN_01bda71c(value,(((args->obj).klass)->_1).element_class), lVar18 == 0))
      {
        uVar14 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar14,0);
      }
                    /* try { // try from 03144454 to 0324446b has its CatchHandler @ 0314449c */
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)value;
      thunk_FUN_01c20e04(args->m_Items,value);
                    /* try { // try from 0314446c to 032444bb has its CatchHandler @ 03144274 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 0314440c with catch @ 03144484 */
                    /* catch() { ... } // from try @ 03144414 with catch @ 03144488 */
                    /* catch() { ... } // from try @ 031443d0 with catch @ 0314448c */
      UnityEngine_Debug__LogErrorFormat(StringLiteral_298,args,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03144358 with catch @ 03144490 */
      goto LAB_031441bc;
    }
LAB_031442c0:
    pGVar7 = (pAVar20->fields).OIDPLCLELEN;
    if (pGVar7 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = GGHCLMEFIGO__JFPMAKABBOK(pGVar7,IKKAMAMLIKA,(MethodInfo *)0x0);
    pHVar12 = IKKAMAMLIKA;
    if (bVar2) goto LAB_031442e8;
  }
  else {
    IKKAMAMLIKA = (pIVar8->fields).PCBECBEFJOI;
    pHVar12 = IKKAMAMLIKA;
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) goto LAB_031442c0;
  }
  IKKAMAMLIKA = (HOOAAGABMBL_o *)0x0;
  if (*(char *)&(pIVar10->_1).generic_class != '\0') {
    IKKAMAMLIKA = pHVar12;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_031441bc;
LAB_031442e8:
  local_90 = (HOOAAGABMBL_o *)0x0;
  local_88 = (HOOAAGABMBL_o *)0x0;
  bVar2 = System_String__op_Equality
                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_5235,
                     (MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 0314431c to 03244323 has its CatchHandler @ 031444a4 */
    DJNBJHPDKDP__OFNFOGHFDML<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).IIBBDKMIPOF,
               (Il2CppObject *)IKKAMAMLIKA,Method_DJNBJHPDKDP_OFNFOGHFDML<HOOAAGABMBL>__);
  }
  else if ((*(char *)((long)&(pIVar10->_1).generic_class + 1) == '\0') &&
          (*(int *)((long)&(pIVar10->_1).generic_class + 4) != 2)) {
    pGVar7 = (pAVar20->fields).OIDPLCLELEN;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031444bc with catch @ 03144540
                       catch() { ... } // from try @ 0314450c with catch @ 03144540 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03144544 to 03244547 has its CatchHandler @ 03144550 */
                    /* try { // try from 03144548 to 03244553 has its CatchHandler @ 03144274 */
    pPVar11 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
    if (pPVar11 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 03144544 with catch @ 03144550 */
    pHVar12 = (HOOAAGABMBL_o *)
              (*(pPVar11->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                        (pPVar11,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,0,
                         (pPVar11->klass->vtable)._4_CJPIJKJDHGI.method);
    if (pGVar7 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar8 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar7,pHVar12,(MethodInfo *)0x0);
    pIVar19 = (pIVar10->_1).parent;
    if (pIVar19 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = IGFGDDANEPE__LGIMDOAMCNG((IGFGDDANEPE_o *)pIVar19,(MethodInfo *)0x0);
    if (iVar3 < 1) {
      pGVar7 = (pAVar20->fields).OIDPLCLELEN;
      if (pGVar7 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar13 = GGHCLMEFIGO__JNFIBDBHNOA
                          (pGVar7,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                           (MethodInfo *)0x0);
      uVar1 = (NLPJLHOEAOE_TypeInfo->_2).cctor_finished;
      if (pIVar13 == (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 031446f0 to 032447f3 has its CatchHandler @ 031446a0 */
        if (uVar1 == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar5 = MGNPHCAAEIO__DGJACOJNPBB((MethodInfo *)0x0);
        uVar1 = (NLPJLHOEAOE_TypeInfo->_2).cctor_finished;
        if (iVar4 < iVar5) {
          if (uVar1 == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031446e4 with catch @ 031447dc
                        */
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
                    /* try { // try from 031447f4 to 0324480b has its CatchHandler @ 0314485c */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0314480c to 0324484b has its CatchHandler @ 031446a0 */
          iVar6 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
          iVar16 = 100;
        }
        else {
          if (uVar1 == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
                    /* try { // try from 0314484c to 0324485b has its CatchHandler @ 0314485c */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 031447f4 with catch @ 0314485c
                       catch() { ... } // from try @ 0314484c with catch @ 0314485c */
          pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03144860 to 03244863 has its CatchHandler @ 0314486c */
          if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03144864 to 0324486f has its CatchHandler @ 031446a0 */
          iVar6 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03144860 with catch @ 0314486c
                        */
          iVar16 = 0x28;
        }
        pMVar15 = (MethodInfo *)&local_90;
        HOOAAGABMBL__MJGMEEKMAOE
                  (IKKAMAMLIKA,iVar3,iVar16 + iVar6 * 100,&local_88,(HOOAAGABMBL_o **)pMVar15,
                   (MethodInfo *)0x0);
        PJKHAJKEHEL__PBBDMKKNFCA(__this,IKKAMAMLIKA,local_88,pIVar8,pMVar15);
      }
      else {
        if (uVar1 == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 031446a0 to 032446e3 has its CatchHandler @ 031446a0
                       catch() { ... } // from try @ 031446a0 with catch @ 031446a0
                       catch() { ... } // from try @ 031446f0 with catch @ 031446a0
                       catch() { ... } // from try @ 0314480c with catch @ 031446a0
                       catch() { ... } // from try @ 03144864 with catch @ 031446a0 */
        iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
        if (pIVar8 == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = IGFGDDANEPE__LGIMDOAMCNG(pIVar8,(MethodInfo *)0x0);
        pMVar15 = (MethodInfo *)&local_90;
        HOOAAGABMBL__MJGMEEKMAOE
                  (IKKAMAMLIKA,iVar3,iVar4,&local_88,(HOOAAGABMBL_o **)pMVar15,(MethodInfo *)0x0);
                    /* try { // try from 031446e4 to 032446ef has its CatchHandler @ 031447dc */
        PJKHAJKEHEL__PBBDMKKNFCA(__this,IKKAMAMLIKA,local_88,pIVar8,pMVar15);
      }
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
      pIVar10 = (pIVar10->_1).parent;
      if (pIVar10 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar4 = IGFGDDANEPE__LGIMDOAMCNG((IGFGDDANEPE_o *)pIVar10,(MethodInfo *)0x0);
      pMVar15 = (MethodInfo *)&local_90;
      HOOAAGABMBL__MJGMEEKMAOE
                (IKKAMAMLIKA,iVar3,iVar4,&local_88,(HOOAAGABMBL_o **)pMVar15,(MethodInfo *)0x0);
      PJKHAJKEHEL__PBBDMKKNFCA(__this,IKKAMAMLIKA,local_88,pIVar8,pMVar15);
    }
  }
  else {
    __this_01 = (pIVar10->_1).parent;
    if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03144344 to 03244347 has its CatchHandler @ 03144494 */
    iVar3 = IGFGDDANEPE__LGIMDOAMCNG((IGFGDDANEPE_o *)__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03144348 to 03244353 has its CatchHandler @ 031444a0 */
    if (iVar3 < 1) {
                    /* catch() { ... } // from try @ 03144344 with catch @ 03144494
                       catch() { ... } // from try @ 03144380 with catch @ 03144494
                       catch() { ... } // from try @ 031443f0 with catch @ 03144494 */
                    /* catch() { ... } // from try @ 0314439c with catch @ 03144498 */
                    /* catch() { ... } // from try @ 03144454 with catch @ 0314449c */
                    /* catch() { ... } // from try @ 03144348 with catch @ 031444a0 */
      lVar18 = (*(IKKAMAMLIKA->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                         (IKKAMAMLIKA,(IKKAMAMLIKA->klass->vtable)._7_FAOBHLCDKJI.method);
                    /* catch() { ... } // from try @ 0314431c with catch @ 031444a4 */
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined1 *)(lVar18 + 0x290) = 1;
                    /* try { // try from 031444bc to 032444d3 has its CatchHandler @ 03144540 */
      (*(__this->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                (__this,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,lVar18,
                 (__this->klass->vtable)._9_CGNPHPDFKJG.method);
    }
    else {
                    /* try { // try from 03144358 to 03244363 has its CatchHandler @ 03144490 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 03144380 to 03244383 has its CatchHandler @ 03144494 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0314439c to 032443cf has its CatchHandler @ 03144498 */
      if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
      pIVar10 = (pIVar10->_1).parent;
      if (pIVar10 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar4 = IGFGDDANEPE__LGIMDOAMCNG((IGFGDDANEPE_o *)pIVar10,(MethodInfo *)0x0);
                    /* try { // try from 031443d0 to 032443e7 has its CatchHandler @ 0314448c */
      HOOAAGABMBL__MJGMEEKMAOE(IKKAMAMLIKA,iVar3,iVar4,&local_88,&local_90,(MethodInfo *)0x0);
                    /* try { // try from 031443f0 to 032443f3 has its CatchHandler @ 03144494 */
      if ((local_88 == (HOOAAGABMBL_o *)0x0) &&
         (local_88 = (HOOAAGABMBL_o *)
                     (*(IKKAMAMLIKA->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                               (IKKAMAMLIKA,(IKKAMAMLIKA->klass->vtable)._7_FAOBHLCDKJI.method),
         local_88 == (HOOAAGABMBL_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (local_88->fields)._GCKGEAKMKCP_k__BackingField = true;
                    /* try { // try from 0314440c to 03244413 has its CatchHandler @ 03144484 */
                    /* try { // try from 03144414 to 0324442b has its CatchHandler @ 03144488 */
      (*(__this->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                (__this,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,local_88,
                 (__this->klass->vtable)._9_CGNPHPDFKJG.method);
    }
    pcVar17 = (pIVar19->_1).namespaze;
    if (pcVar17 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar18 = *(long *)(pcVar17 + 0x2a0);
                    /* try { // try from 031444d4 to 0324450b has its CatchHandler @ 03144274 */
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < *(int *)(lVar18 + 0x18)) {
      lVar18 = (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                         (__this,(IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,0,
                          (__this->klass->vtable)._4_CJPIJKJDHGI.method);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pcVar17 = (pIVar19->_1).namespaze;
      if (pcVar17 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0314450c to 0324451b has its CatchHandler @ 03144540 */
      if (*(System_Collections_Generic_List_object__o **)(lVar18 + 0x2a0) ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0314451c to 03244543 has its CatchHandler @ 03144274 */
      System_Collections_Generic_List<object>__AddRange
                (*(System_Collections_Generic_List_object__o **)(lVar18 + 0x2a0),
                 *(System_Collections_Generic_IEnumerable_T__o **)(pcVar17 + 0x2a0),
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_AddRange__);
    }
  }
  goto LAB_031441bc;
}

