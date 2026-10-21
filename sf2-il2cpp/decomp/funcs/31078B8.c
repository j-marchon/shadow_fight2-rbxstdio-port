// OPNFCOGALLI$$NAFDIFCGJBK @ RVA 0x31078B8

bool OPNFCOGALLI__NAFDIFCGJBK
               (OPNFCOGALLI_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,int32_t OAFGMHOFEKM,
               bool INAEABDIHKF,bool LGJEEEFEAKB,int32_t KGJLIPJNNKB,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  bool bVar4;
  int CJNHFNHJHPE;
  int32_t iVar5;
  int32_t iVar6;
  System_Object_array *pSVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  CNDPAJOLKFN_o *pCVar10;
  undefined8 uVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *pMVar12;
  ECENNHNBAME_o *pEVar13;
  UnityEngine_Vector3_array_array *pUVar14;
  CNDPAJOLKFN_o *pCVar15;
  MBDJMJLHFOO_o *ABKNPBMGHKH;
  ECENNHNBAME_o **ppEVar16;
  System_String_o *pSVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_04566518 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<List<CNDPAJOLKFN>>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_9169);
    FUN_01bab630(&StringLiteral_2971);
    DAT_04566518 = 1;
  }
  if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
    return false;
  }
  ppEVar16 = &(__this->fields).FFIBKLFJKAO;
  pEVar13 = *ppEVar16;
  if (((pEVar13 != (ECENNHNBAME_o *)0x0) && (pEVar13 != NLEBDPHNIDI)) &&
     (pEVar13 != (NLEBDPHNIDI->fields).CPCDDBKNDAC)) {
    pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    if ((*ppEVar16 == (ECENNHNBAME_o *)0x0) || (pSVar7 == (System_Object_array *)0x0))
    goto LAB_03207e8c;
    pSVar17 = ((*ppEVar16)->fields).JIJLBFGKNJK;
    if ((pSVar17 != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pSVar17,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((int)pSVar7->max_length == 0) goto LAB_03207e90;
    pSVar7->m_Items[0] = (Il2CppObject *)pSVar17;
    thunk_FUN_01c20e04(pSVar7->m_Items,pSVar17);
    pEVar13 = *ppEVar16;
    if (pEVar13 == (ECENNHNBAME_o *)0x0) goto LAB_03207e8c;
    uStack_68._0_4_ = (pEVar13->fields).EAFPDFHFBOM.fields.fakeValue;
    uStack_68._4_1_ = (pEVar13->fields).EAFPDFHFBOM.fields.fakeValueActive;
    uStack_68._5_1_ = (pEVar13->fields).EAFPDFHFBOM.fields.inited;
    uStack_68._6_2_ = *(undefined2 *)&(pEVar13->fields).EAFPDFHFBOM.fields.field_0xe;
    local_70._0_4_ = (pEVar13->fields).EAFPDFHFBOM.fields.currentCryptoKey;
    local_70._4_4_ = (pEVar13->fields).EAFPDFHFBOM.fields.hiddenValue;
    pIVar9 = (Il2CppObject *)
             thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_70);
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pIVar9,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((uint)pSVar7->max_length < 2) goto LAB_03207e90;
    pSVar7->m_Items[1] = pIVar9;
    thunk_FUN_01c20e04(pSVar7->m_Items + 1,pIVar9);
    pSVar17 = (NLEBDPHNIDI->fields).JIJLBFGKNJK;
    if ((pSVar17 != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pSVar17,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((uint)pSVar7->max_length < 3) goto LAB_03207e90;
    pSVar7->m_Items[2] = (Il2CppObject *)pSVar17;
    thunk_FUN_01c20e04(pSVar7->m_Items + 2,pSVar17);
    uStack_78._0_4_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.fakeValue;
    uStack_78._4_1_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.fakeValueActive;
    uStack_78._5_1_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.inited;
    uStack_78._6_2_ = *(undefined2 *)&(NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.field_0xe;
    local_80._0_4_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.currentCryptoKey;
    local_80._4_4_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.hiddenValue;
    pIVar9 = (Il2CppObject *)
             thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_80);
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pIVar9,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((uint)pSVar7->max_length < 4) goto LAB_03207e90;
    pSVar7->m_Items[3] = pIVar9;
    thunk_FUN_01c20e04(pSVar7->m_Items + 3,pIVar9);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_2971,pSVar7,(MethodInfo *)0x0);
  }
  if ((__this->fields).AANDHIFMLHC != false) {
    OMLLDCIMLBB<object>__CallEvent
              ((OMLLDCIMLBB_object__o *)__this,2,(Il2CppObject *)NLEBDPHNIDI,
               Method_OMLLDCIMLBB<object>_CallEvent__);
  }
  (__this->fields).FFIBKLFJKAO = (ECENNHNBAME_o *)0x0;
  thunk_FUN_01c20e04(ppEVar16,0);
  bVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).BHJAJHGCMIB.fields,(MethodInfo *)0x0);
  if (bVar4) {
    OPNFCOGALLI__CONIPAHFAPH(__this,method_00);
    OPNFCOGALLI__NCBEJDPOLMB(__this,method_01);
  }
  pMVar12 = (MethodInfo *)0x0;
  CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (NLEBDPHNIDI->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  if (LGJEEEFEAKB) {
    iVar5 = OPNFCOGALLI__MKIHMHHJLHE(__this,method_02);
    method_03 = extraout_x1;
    CJNHFNHJHPE = KGJLIPJNNKB + iVar5 + 1;
  }
  else {
    method_03 = method_02;
    if (-1 < KGJLIPJNNKB) {
      CJNHFNHJHPE = KGJLIPJNNKB;
    }
  }
  OPNFCOGALLI__EABJNHKPJOM(__this,method_03);
  OPNFCOGALLI__HONNLNIEELE(__this,OAFGMHOFEKM,pMVar12);
  ppEVar16 = &(__this->fields).NDBPNFLAKDL;
  (__this->fields).NDBPNFLAKDL = NLEBDPHNIDI;
  thunk_FUN_01c20e04(ppEVar16,NLEBDPHNIDI);
  CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  pEVar13 = (__this->fields).NDBPNFLAKDL;
  (__this->fields).KINFMBHKNLA.fields = CVar18;
  if (pEVar13 != (ECENNHNBAME_o *)0x0) {
    bVar1 = (pEVar13->fields).IPAGCJKIPEN.fields.fakeValueActive;
    bVar2 = (pEVar13->fields).IPAGCJKIPEN.fields.inited;
    uVar3 = *(undefined2 *)&(pEVar13->fields).IPAGCJKIPEN.fields.field_0xe;
    iVar5 = (pEVar13->fields).IPAGCJKIPEN.fields.currentCryptoKey;
    iVar6 = (pEVar13->fields).IPAGCJKIPEN.fields.hiddenValue;
    (__this->fields).IKPNGBKFCOL.fields.fakeValue = (pEVar13->fields).IPAGCJKIPEN.fields.fakeValue;
    (__this->fields).IKPNGBKFCOL.fields.fakeValueActive = bVar1;
    (__this->fields).IKPNGBKFCOL.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields).IKPNGBKFCOL.fields.field_0xe = uVar3;
    (__this->fields).IKPNGBKFCOL.fields.currentCryptoKey = iVar5;
    (__this->fields).IKPNGBKFCOL.fields.hiddenValue = iVar6;
    bVar4 = ECENNHNBAME__FIDJFEGCIIL(pEVar13,(MethodInfo *)0x0);
    CVar19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(bVar4,(MethodInfo *)0x0);
    (__this->fields).GFPACGPFOPI.fields = CVar19;
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
    pMVar12 = (MethodInfo *)0x0;
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).IKPNGBKFCOL.fields,(MethodInfo *)0x0);
    if (iVar6 + -1 < iVar5) {
      pMVar12 = (MethodInfo *)0x0;
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).IKPNGBKFCOL.fields,(MethodInfo *)0x0);
      CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         (iVar5 + -1,(MethodInfo *)0x0);
      (__this->fields).KINFMBHKNLA.fields = CVar18;
    }
    if (*ppEVar16 != (ECENNHNBAME_o *)0x0) {
      pUVar14 = ((*ppEVar16)->fields).MMENPDNBNHN;
      if ((pUVar14 == (UnityEngine_Vector3_array_array *)0x0) || (pUVar14->max_length == 0)) {
        pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if ((*ppEVar16 != (ECENNHNBAME_o *)0x0) && (pSVar7 != (System_Object_array *)0x0)) {
          pSVar17 = ((*ppEVar16)->fields).JIJLBFGKNJK;
          if ((pSVar17 == (System_String_o *)0x0) ||
             (lVar8 = thunk_FUN_01bda71c(pSVar17,(((pSVar7->obj).klass)->_1).element_class),
             lVar8 != 0)) {
            if ((int)pSVar7->max_length != 0) {
              pSVar7->m_Items[0] = (Il2CppObject *)pSVar17;
              thunk_FUN_01c20e04(pSVar7->m_Items,pSVar17);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_9169,pSVar7,(MethodInfo *)0x0);
              (__this->fields).AANDHIFMLHC = false;
              return false;
            }
LAB_03207e90:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
LAB_03207e94:
          uVar11 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar11,0);
        }
      }
      else {
        CVar19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                           (INAEABDIHKF,(MethodInfo *)0x0);
        (__this->fields).DCDOLDPKAGC.fields = CVar19;
        if (INAEABDIHKF) {
          if (*ppEVar16 == (ECENNHNBAME_o *)0x0) goto LAB_03207e8c;
          iVar5 = ECENNHNBAME__DINOEMMMNBJ(*ppEVar16,(MethodInfo *)0x0);
          OPNFCOGALLI__HJCNIFHFOIH(__this,iVar5,pMVar12);
          CVar19 = (__this->fields).DCDOLDPKAGC.fields;
        }
        pEVar13 = (__this->fields).NDBPNFLAKDL;
        ABKNPBMGHKH = (__this->fields).EJNOBBDDBDO;
        bVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)CVar19,
                           (MethodInfo *)0x0);
        if (pEVar13 != (ECENNHNBAME_o *)0x0) {
          ECENNHNBAME__AMMECKCJFAM
                    (pEVar13,ABKNPBMGHKH,CJNHFNHJHPE,(bool)(~bVar4 & 1),(MethodInfo *)0x0);
          OPNFCOGALLI__PHCDAOEAKHE(__this,method_04);
          OPNFCOGALLI__AECCPFDPPOK(__this,method_05);
          OPNFCOGALLI__IGAJHAMEBNO(__this,method_06);
          OPNFCOGALLI__BIAPOHJPBCM(__this,method_07);
          iVar5 = ECENNHNBAME__DINOEMMMNBJ(NLEBDPHNIDI,(MethodInfo *)0x0);
          DJNBJHPDKDP__LJCDLMMMOGD<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).IFHALHIGBNM,iVar5,
                     Method_DJNBJHPDKDP_LJCDLMMMOGD<List<CNDPAJOLKFN>>__);
          pCVar10 = (__this->fields).AAOHMLDIGNK;
          (__this->fields).AANDHIFMLHC = true;
          (__this->fields).PIODLNMKAGJ = false;
          (__this->fields).FNMEOPOBFBC = 0x7fffffff;
          (__this->fields).GICJKGDDOLE = 0x7fffffff;
          (__this->fields).KDJBKDMJKHK = -3;
          (__this->fields).FANDONIBLKC = 0;
          (__this->fields).JJIDKDIGGEK = 0;
          (__this->fields).BPIIACENHPE = 0;
          if (pCVar10 != (CNDPAJOLKFN_o *)0x0) {
            CNDPAJOLKFN__DGLJCGNHLIG(pCVar10,(MethodInfo *)0x0);
            if (*ppEVar16 != (ECENNHNBAME_o *)0x0) {
              bVar4 = ECENNHNBAME__EIBIEFALKLG(*ppEVar16,(MethodInfo *)0x0);
              if (!bVar4) {
                pEVar13 = (__this->fields).NDBPNFLAKDL;
                if (pEVar13 == (ECENNHNBAME_o *)0x0) goto LAB_03207e8c;
                pCVar15 = (__this->fields).JGJCGMBHINN;
                pCVar10 = ECENNHNBAME__KHNKHIJEFIC(pEVar13,(MethodInfo *)0x0);
                if (pCVar15 == (CNDPAJOLKFN_o *)0x0) goto LAB_03207e8c;
                CNDPAJOLKFN__FOOHBJNHOKK(pCVar15,pCVar10,(MethodInfo *)0x0);
                pCVar10 = (__this->fields).JGJCGMBHINN;
                if (pCVar10 == (CNDPAJOLKFN_o *)0x0) goto LAB_03207e8c;
                (pCVar10->fields).super.OHHDBINAJCB =
                     (pCVar10->fields).super.OHHDBINAJCB * (float)(__this->fields).DMJAJGGGHPF;
              }
              pEVar13 = (__this->fields).NDBPNFLAKDL;
              if (pEVar13 != (ECENNHNBAME_o *)0x0) {
                pCVar15 = (__this->fields).JLOKLHINMKG;
                pCVar10 = ECENNHNBAME__OKGBDLBEJIP(pEVar13,(MethodInfo *)0x0);
                if (pCVar15 != (CNDPAJOLKFN_o *)0x0) {
                  pMVar12 = (MethodInfo *)0x0;
                  CNDPAJOLKFN__FOOHBJNHOKK(pCVar15,pCVar10,(MethodInfo *)0x0);
                  pCVar10 = (__this->fields).JLOKLHINMKG;
                  if (pCVar10 != (CNDPAJOLKFN_o *)0x0) {
                    (pCVar10->fields).super.OHHDBINAJCB =
                         (pCVar10->fields).super.OHHDBINAJCB * (float)(__this->fields).DMJAJGGGHPF;
                    OPNFCOGALLI__PPPACEMNFGM(__this,method_08);
                    OPNFCOGALLI__OIHAEHJGCDA(__this,(__this->fields).NDBPNFLAKDL,pMVar12);
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03207e8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

